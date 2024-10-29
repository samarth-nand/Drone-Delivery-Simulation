#include "PackageFactory.h"
#include <iostream>

IEntity* PackageFactory::CreateEntity(const JsonObject& data) {
    std::string type = data["type"];
    if (type == "package") {
        std::cout << "Package created at position " << data["position"] << std::endl;
        return new Package(data); 
    }
    return nullptr;
}

