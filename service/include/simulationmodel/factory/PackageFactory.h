#ifndef PACKAGEFACTORY_H
#define PACKAGEFACTORY_H

#include "IEntityFactory.h"
#include "Package.h" 

class PackageFactory : public IEntityFactory {
public:
    IEntity* CreateEntity(const JsonObject& data) override;
};

#endif 