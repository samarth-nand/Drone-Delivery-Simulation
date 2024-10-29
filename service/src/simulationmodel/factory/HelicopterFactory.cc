#include "HelicopterFactory.h"
#include <iostream>

IEntity* HelicopterFactory::CreateEntity(const JsonObject& data) {

    std:: string type = data["type"];
    if (type == "helicopter") {
        //return message if created
    std::cout << "Helicopter created at position " << data["position"] << std::endl;
    //return message if moving
    std::cout << "Helicopter is moving at speed " << data["speed"] << std::endl;
        return new Helicopter(data); 
    }

    return nullptr;
}