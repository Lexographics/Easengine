#ifndef SCENE_H
#define SCENE_H

#pragma once

#include "ECS/Entity/Entity.h"
#include "entt/entt.hpp"
#include <filesystem>
#include <vector>

namespace Ease
{
    class Scene
    {
    public:
        Scene();
        ~Scene();
        

        Entity Create(const std::string& name, uint32_t id = 0);
        void Destroy(Ease::Entity& entity);

        entt::registry m_Registry;

        bool Save();
        bool SaveToFile(const char* file);
        bool LoadFromFile(const char* file);
        std::filesystem::path path;

        // Returns first entity that is in given group
        Ease::Entity GetEntityInGroup(const std::string& group);
        std::vector<Ease::Entity> GetEntitiesInGroup(const std::string& group);
        
        void StartScene();

        
        void CopyEntity(Ease::Entity entity);
        void AddCopiedEntity(Ease::Entity entity);
        void ClearCopiedEntities();
        Ease::Entity PasteCopiedEntity();
        std::vector<Ease::Entity> PasteCopiedEntities();
        uint32_t GetCopiedEntityCount();
    private:
        /**
         * @brief Registry that holds copied entities
         */
        entt::registry m_CopyRegistry;
    };
} // namespace Ease

#endif