#include "DroneFactory.h"
#include <iostream>

using namespace std;
IEntity* DroneFactory::CreateEntity(const JsonObject& data) {
    //comparing json value and const char value type mismatch using == operator
    std::string type = data["type"];
    if (type == "drone") {
        std::cout << "Drone created at position " << data["position"] << std::endl;
        return new Drone(data); 
    }
    return nullptr;
}