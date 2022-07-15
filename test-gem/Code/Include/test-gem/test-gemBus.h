
#pragma once

#include <AzCore/EBus/EBus.h>
#include <AzCore/Interface/Interface.h>

namespace test_gem
{
    class test_gemRequests
    {
    public:
        AZ_RTTI(test_gemRequests, "{286B16FB-0C77-45CE-ACC0-96F89680FD27}");
        virtual ~test_gemRequests() = default;
        // Put your public methods here
    };
    
    class test_gemBusTraits
        : public AZ::EBusTraits
    {
    public:
        //////////////////////////////////////////////////////////////////////////
        // EBusTraits overrides
        static constexpr AZ::EBusHandlerPolicy HandlerPolicy = AZ::EBusHandlerPolicy::Single;
        static constexpr AZ::EBusAddressPolicy AddressPolicy = AZ::EBusAddressPolicy::Single;
        //////////////////////////////////////////////////////////////////////////
    };

    using test_gemRequestBus = AZ::EBus<test_gemRequests, test_gemBusTraits>;
    using test_gemInterface = AZ::Interface<test_gemRequests>;

} // namespace test_gem
