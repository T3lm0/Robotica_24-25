# 🤖 Robotics Project – Visually-Guided Autonomous Navigation

This project involves the design, implementation, and testing of an autonomous mobile robot using simulation tools such as **Webots** and **PyRep**, along with AI techniques including **YOLO** for object detection. The robot is programmed to navigate complex environments, detect doors, avoid obstacles, and reach defined goals using purposeful control strategies.

---

## 🛠️ Task 1: Basic Robot Setup in Webots

### Objectives

- Understand the structure and components of a robot in Webots.
- Design robot geometry and define sensor/actuator interfaces.
- Implement basic movement strategies using a `compute()` method pattern.

### Implemented Behaviors

- 🚶 **FORWARD** – Continuous forward motion.
- 🔄 **TURN** – Rotation to a given orientation.
- 🧱 **FOLLOW_WALL** – Wall-following using distance sensors.
- 🎮 **Movement Control** – Encapsulation of motor commands and reactive behavior logic.

---

## 🚪 Task 2: Door Detection and Room Exploration

- 🧭 **Door Detector** – Logic to identify and validate doorways using sensor data.
- 🔁 **Finite State Machine** – Manages behavior transitions based on environmental states.
- 🗺️ **Exploration Strategy** – Room visiting via systematic search.
- ⚙️ **Optimization** – Enhanced reliability and detection accuracy.

---

## 👁️ Task 3: Visually-Guided Navigation (I & II)

### Technologies Used

- 🧠 **YOLO** – Object detection with both tiny and full models.
- 🕹️ **Joystick Interface** – Manual input for testing.
- 🌐 **PyRep + CoppeliaSim** – Simulated environment with visual elements.

### Highlights

- Build spatial understanding from object locations.
- Autonomous navigation using visual inputs and learned spatial layout.
- Component-based architecture for flexible integration.

---

## 🧭 Task 4: Purposeful Control and Obstacle Avoidance

- 🐞 **Bug Algorithm** – For path planning and obstacle bypass.
- 📐 **Geometric Computation** – Uses line equations and polygons (`QPolygonF`) to reason about space.
- 🎯 **Goal Navigation** – Move between room entrances using visual landmarks and geometry-based path planning.

---

## 💻 Technologies

- `Webots`, `CoppeliaSim`, `PyRep`
- `Python`, `YOLO`, `Qt` for geometry
- `Git` for version control and collaboration

---

## 📚 References
  
- [RoboComp GitHub](https://github.com/robocomp)

---

## 👥 Authors

- [@T3lm0](https://github.com/T3lm0) – **Telmo Clemente Serrano**  
- [@jcumbres](https://github.com/jcumbres) – **jcumbres**  
- [@diegoggarcia13](https://github.com/diegoggarcia13) – **Diego Gozalo**
