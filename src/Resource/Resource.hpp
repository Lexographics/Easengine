#ifndef _E_RESOURCE_HPP__
#define _E_RESOURCE_HPP__

#pragma once

#include <stdint.h>

typedef uint32_t ResourceID;

namespace Ease
{
   
   class BaseResource
   {
      public:
         ResourceID GetResourceID() { return m_ResourceID; }
         void SetResourceID(ResourceID id) { m_ResourceID = id; }
         
         BaseResource() = default;
         ~BaseResource() = default;
      protected:
         ResourceID m_ResourceID;
   };

} // namespace Ease


#endif