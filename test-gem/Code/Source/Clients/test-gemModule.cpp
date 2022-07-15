

#include <test-gemModuleInterface.h>
#include "test-gemSystemComponent.h"

namespace test_gem
{
    class test_gemModule
        : public test_gemModuleInterface
    {
    public:
        AZ_RTTI(test_gemModule, "{ED4C27E4-3C92-4094-884F-9E55EC398446}", test_gemModuleInterface);
        AZ_CLASS_ALLOCATOR(test_gemModule, AZ::SystemAllocator, 0);
    };
}// namespace test_gem

AZ_DECLARE_MODULE_CLASS(Gem_test_gem, test_gem::test_gemModule)
