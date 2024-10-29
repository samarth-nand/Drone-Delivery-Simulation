#include "HumanFactory.h"
#include <iostream>

IEntity* HumanFactory::CreateEntity(const JsonObject& data) {
    std::string type = data["type"];
    if (type == "human") {
        std::cout << "Human created at position " << data["position"] << std::endl;
        return new Human(data); 
    }
    return nullptr;
}
