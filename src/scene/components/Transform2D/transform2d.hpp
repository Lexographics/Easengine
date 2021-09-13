#ifndef __COMP_TRANSFORM_2D_HPP__
#define __COMP_TRANSFORM_2D_HPP__

#include <glm/vec2.hpp> // glm::vec2
#include <glm/vec3.hpp> // glm::vec3
#include <glm/vec4.hpp> // glm::vec4
#include <glm/mat4x4.hpp> // glm::mat4
#include <glm/ext/matrix_transform.hpp> // glm::translate, glm::rotate, glm::scale
#include <glm/ext/matrix_clip_space.hpp> // glm::perspective
#include <glm/ext/scalar_constants.hpp> // glm::pi

namespace Ease
{
   namespace Comp
   {
      typedef struct Transform2D {
         glm::vec2 position;
         float     rotation;
         int       zIndex;

         Transform2D();
         ~Transform2D();
      } Transform2D;
   }
}

#endif // __COMP_TRANSFORM_2D_HPP__