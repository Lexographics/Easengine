#include "Systems.hpp"
#include "ECS/Scene/Scene.hpp"

namespace Ease::Systems
{
   void ProcessAll(Ease::Scene* pScene, SystemsFlags flags)
   {
      if(flags & SystemsFlags::SpriteRenderer2D)
         Systems::System_SpriteRenderer2D(pScene);

      if(flags & SystemsFlags::AnimatedSprite2D)
         Systems::System_AnimatedSprite2D(pScene);
         
      if(flags & SystemsFlags::TextRenderer2D)
         Systems::System_TextRenderer2D(pScene);
      
      if(flags & SystemsFlags::PhysicsBody2D)
         Systems::System_PhysicsBody2D(pScene);
      
      if(flags & SystemsFlags::Physics2DDebugDraw)
         Systems::System_Physics2DDebugDraw(pScene);
   }
} // namespace Ease::Systems
