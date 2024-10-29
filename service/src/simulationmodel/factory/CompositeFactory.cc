#include "CompositeFactory.h"

CompositeFactory::~CompositeFactory() {}

IEntity* CompositeFactory::CreateEntity(const JsonObject& json) {
    for (auto& factory : factories) {
        IEntity* entity = factory->CreateEntity(json);
        if (entity != nullptr) {
            return entity;
        }
    }
    return nullptr;
}

void CompositeFactory::AddFactory(IEntityFactory* factory) {
    factories.push_back(factory);
}