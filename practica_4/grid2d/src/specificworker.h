/*
 *    Copyright (C) 2024 by YOUR NAME HERE
 *
 *    This file is part of RoboComp
 *
 *    RoboComp is free software: you can redistribute it and/or modify
 *    it under the terms of the GNU General Public License as published by
 *    the Free Software Foundation, either version 3 of the License, or
 *    (at your option) any later version.
 *
 *    RoboComp is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *    GNU General Public License for more details.
 *
 *    You should have received a copy of the GNU General Public License
 *    along with RoboComp.  If not, see <http://www.gnu.org/licenses/>.
 */

/**
	\brief
	@author Javier Cumbres Tena, Telmo Clemente Serrano, Diego Gozalo García
*/



#ifndef SPECIFICWORKER_H
#define SPECIFICWORKER_H

//#define HIBERNATION_ENABLED

#include <genericworker.h>
#include "abstract_graphic_viewer/abstract_graphic_viewer.h"
#include "Lidar3D.h"
#include <expected>
#include <random>
#include <doublebuffer_sync/doublebuffer_sync.h>
#include <locale>
#include <Eigen/Dense>
#include <timer/timer.h>
#include <qcustomplot/qcustomplot.h>

class SpecificWorker : public GenericWorker
{
Q_OBJECT
public:
	SpecificWorker(TuplePrx tprx, bool startup_check);
	~SpecificWorker();
	bool setParams(RoboCompCommonBehavior::ParameterList params);

public slots:
	void initialize();
	void compute();
	void new_mouse_coordinates();

void reset_grid();

void emergency();
	void restore();
	int startup_check();

private:
	bool startup_check_flag;

	struct Params
	{
		float ROBOT_WIDTH = 460;  // mm
		float DIMMENSION = 10000; // Dimmension(mm)
		float ROBOT_LENGTH = 480;  // mm
		float MAX_ADV_SPEED = 1900; // mm/s
		float MAX_ROT_SPEED = 2; // rad/s
		float TILE_SIZE = 100; // mm
		QRectF GRID_MAX_DIM{-5000, 2500, 10000, -5000};
	};
	Params params;
	enum class CELL_STATE { EMPTY, OCCUPIED, UNKNOWN };

	typedef struct TCell
	{
		CELL_STATE state = CELL_STATE::UNKNOWN;
		int x, y;
		QGraphicsRectItem *rect;

		// Operador == para comparar dos objetos TCell
		bool operator==(const TCell& other) const {
			return (x == other.x && y == other.y && state == other.state);
		}

		// Operador < para permitir que TCell sea usado en std::map
		bool operator<(const TCell& other) const {
			if (x == other.x)
				return y < other.y;
			return x < other.x;
		}

	} TCell;

	// lidar
	std::vector<Eigen::Vector2f> read_lidar_bpearl();

	// draw
	AbstractGraphicViewer *viewer;
	void draw_lidar(auto &filtered_points, QGraphicsScene *scene);
	QGraphicsPolygonItem *robot_draw;

    // grid
    static constexpr int GRID_SIZE = 100;
    std::array<std::array<TCell, GRID_SIZE>, GRID_SIZE> grid;
	void changeState(auto &filtered_points);

    // Coordinates
	void transformToGRID();

    // Transformations
    std::pair<float, float> getPosInWorld(float i, float j);

	std::pair<int, int> fromWorldToPos(float x, float y);

	//Dijkstra
	std::vector<TCell> get_neighbors(TCell& current, std::array<std::array<TCell, GRID_SIZE>, GRID_SIZE>& grid);
	std::vector<Eigen::Vector2f> dijkstra(TCell ini, TCell end, std::array<std::array<TCell, GRID_SIZE>, GRID_SIZE> grid);
};

#endif
