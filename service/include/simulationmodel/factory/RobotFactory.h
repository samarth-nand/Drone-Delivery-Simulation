#ifndef ROBOTFACTORY_H
#define ROBOTFACTORY_H

#include "IEntityFactory.h"
#include "Robot.h"  

class RobotFactory : public IEntityFactory {
public:
    IEntity* CreateEntity(const JsonObject& data) override;
};

#endif
