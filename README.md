# Robotics Project – Visually-Guided Autonomous Navigation

This project involves the design, implementation, and testing of an autonomous mobile robot using simulation tools such as **Webots** and **PyRep**, along with AI techniques including **YOLO** for object detection. The robot is programmed to navigate complex environments, detect doors, avoid obstacles, and reach defined goals using purposeful control strategies.

---

## Task 1: Basic Robot Setup in Webots

### Objectives

- Understand the structure and components of a robot in Webots.
- Design robot geometry and define sensor/actuator interfaces.
- Implement basic movement strategies using a `compute()` method pattern.

### Implemented Behaviors

- **FORWARD** – Continuous forward motion.
- **TURN** – Rotation to a given orientation.
- **FOLLOW_WALL** – Wall-following using distance sensors.
- **Movement Control** – Encapsulation of motor commands and reactive behavior logic.

---

## Task 2: Door Detection and Room Exploration

### Highlights

- **Door Detector** – Logic to identify and validate doorways using sensor data.
- **Finite State Machine** – Manages robot behavior transitions based on environment status.
- **Room Visiting Strategy** – Exploration algorithm to enter and analyze different rooms.
- **Performance Improvements** – Optimized thresholds and detection consistency.

---

## Task 3: Visually-Guided Navigation (I & II)

### Tools and Technologies

- **YOLO (You Only Look Once)** – Integrated for object detection.
  - Both `YOLO-tiny` and full YOLO models supported.
- **PyRep + CoppeliaSim** – Used for environment simulation and visual perception.
- **Joystick Interface** – For manual control and debugging.

### Navigation Logic

- Visually-driven control based on detected objects and spatial reasoning.
- Spatial memory representation built from object locations.
- Components built to interpret vision results and guide the robot accordingly.

---

## Task 4A & 4B: Purposeful and Reactive Control

### Obstacle Avoidance

- Implemented the **Bug Algorithm** to bypass obstacles while maintaining a target trajectory.
- Used **polygon geometry (QPolygonF)** to determine safe and unsafe zones.
- Decision-making integrates line equations and field of view checks to maintain efficient navigation.

### Goal-Oriented Movement

- Designed path planning logic between detected doors.
- Used visual confirmation and sensor feedback to adapt trajectory dynamically.

---

## Technologies Used

- **Webots** – Robot simulation environment
- **PyRep** + **CoppeliaSim** – Advanced visual simulation
- **Python / C++** – Core logic and algorithms
- **YOLO** – Object detection
- **Qt** – For polygon and geometric calculations

---

