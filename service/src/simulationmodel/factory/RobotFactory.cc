#include "RobotFactory.h"
#include <iostream>

IEntity* RobotFactory::CreateEntity(const JsonObject& data) {
    std::string type = data["type"];
    if (type == "robot") {
        std::cout << "Robot created at position " << data["position"] << std::endl;
        return new Robot(data); 
    }
    return nullptr;
}
