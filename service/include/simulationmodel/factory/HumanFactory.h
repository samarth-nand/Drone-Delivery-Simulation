#ifndef HUMANFACTORY_H
#define HUMANFACTORY_H

#include "IEntityFactory.h"
#include "Human.h"  

class HumanFactory : public IEntityFactory {
public:
    IEntity* CreateEntity(const JsonObject& data) override;
};

#endif
