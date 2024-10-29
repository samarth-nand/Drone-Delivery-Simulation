#ifndef IENTITYFACTORY_H
#define IENTITYFACTORY_H

// #include "json/json.h"
#include "IEntity.h"

class IEntityFactory { 
    public: 
        virtual ~IEntityFactory() {}
        virtual IEntity* CreateEntity(const JsonObject& data) = 0;
};

#endif