#ifndef DRONEFACTORY_H
#define DRONEFACTORY_H

#include "IEntityFactory.h"
#include "Drone.h"  
#include "json.h"

class DroneFactory : public IEntityFactory {
public:
    IEntity* CreateEntity(const JsonObject& data) override;
};

#endif
