#ifndef HELICOPTERFACTORY_H
#define HELICOPTERFACTORY_H

#include "IEntityFactory.h"
#include "Helicopter.h"  

class HelicopterFactory : public IEntityFactory {
public:
    IEntity* CreateEntity(const JsonObject& data) override;
};

#endif
