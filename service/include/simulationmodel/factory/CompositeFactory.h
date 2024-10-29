#ifndef COMPOSITE_FACTORY_H_
#define COMPOSITE_FACTORY_H_

#include <vector>
#include "IEntityFactory.h"
#include "util/json.h"

/**
 * @class CompositeFactory
 * @brief A class that holds multiple IEntityFactory pointers and uses them to create entities.
 */

class CompositeFactory : public IEntityFactory {

public:
    /**
     * @brief Destructor for CompositeFactory.
     */
   ~CompositeFactory();

    /**
     * @brief Creates an entity using one of the composite factories.
     * 
     * Iterates through the vector of factories and calls the CreateEntity() method on each.
     * If a factory is able to create the entity, it returns that newly created entity.
     * Otherwise, returns nullptr if no factory could create the entity.
     * 
     * @param json The JSON object containing entity data.
     * @return IEntity* A pointer to the newly created entity or nullptr if no factory matched.
     */

    IEntity* CreateEntity(const JsonObject& json) override;

    /**
     * @brief Adds a new factory to the composite factory.
     * 
     * The factory is stored in the vector of IEntityFactory pointers.
     * 
     * @param factory A pointer to an IEntityFactory to be added.
     */

   void AddFactory(IEntityFactory* factory);

private:
    /// A vector of pointers to IEntityFactory objects.
    std::vector<IEntityFactory*> factories;
};

#endif  // COMPOSITE_FACTORY_H_
