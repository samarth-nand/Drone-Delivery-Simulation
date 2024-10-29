# Drone-Delivery-Simulation

This project simulates a drone delivery system, built in C++ and utilizing modern software engineering design principles such as SOLID and the Factory design pattern. The simulation is controlled through a Makefile, allowing for easy compilation and execution.

## Table of Contents

- [Overview](#overview)
- [Features](#features)
- [Design Principles](#design-principles)
- [Installation](#installation)
- [Usage](#usage)
- [Project Structure](#project-structure)
- [Contributing](#contributing)
- [License](#license)

## Overview

The **Drone Delivery Simulation** project models a realistic drone delivery system. Drones are dispatched to deliver packages to specified locations, navigating obstacles and following assigned routes. The simulation leverages object-oriented programming principles to create a modular, extensible, and maintainable codebase.

## Features

- Simulates multiple drones delivering packages to various locations.
- Implements SOLID design principles for clean, maintainable code.
- Uses the Factory design pattern to create and manage drone and package instances.
- Simple Makefile setup for compiling and running the simulation.

## Design Principles

The project is designed following the **SOLID principles**:

- **S**ingle Responsibility Principle: Each class has a single responsibility, making it easier to maintain.
- **O**pen/Closed Principle: The code is open for extension but closed for modification, allowing for flexible feature additions.
- **L**iskov Substitution Principle: Subtypes can be substituted for their base types without altering the program's correctness.
- **I**nterface Segregation Principle: Interfaces are tailored to specific client needs rather than creating a single monolithic interface.
- **D**ependency Inversion Principle: High-level modules depend on abstractions rather than concrete implementations.

Additionally, the **Factory Design Pattern** is used to manage the creation of drone and package objects, ensuring a clean separation between object creation and business logic.

## Installation

1. **Clone the Repository**
   ```bash
   git clone https://github.com/yourusername/Drone-Delivery-Simulation.git
   cd Drone-Delivery-Simulation

2. **Compile the Code Use the Makefile to compile the code**
   ```bash
   make -j
   make run

3. **Usage**
-The simulation starts automatically on localhost on port 8081 after running make run.
-Add drones and packages and desitnations which the drones will follow using search algorithms BFS,DFS and DjA.
-To modify the simulation, you can edit the scenario configuration files or tweak the drone and package creation parameters within the codebase.

4. **Project Structure**
Drone-Delivery-Simulation/
├── .venv/                  # Virtual environment for Python dependencies (if applicable)
├── .vscode/                # VS Code configuration files
├── build/                  # Compiled binary files
├── dependencies/           # External dependencies required by the project
├── docs/                   # Documentation files for the project
├── pics/                   # Images or visual assets for documentation
├── ProjectAssets/          # Additional project assets
│   ├── assets/             # General assets
│   └── images/             # Images used in the project
├── service/                # Backend service logic
├── web/                    # Frontend or web interface for the simulation (if applicable)
├── .gitignore              # Git ignore file
├── Makefile                # Makefile to build and run the project
└── README.md               # Project README file

5. **License**
   This project is licensed under the MIT License. See LICENSE for more information


