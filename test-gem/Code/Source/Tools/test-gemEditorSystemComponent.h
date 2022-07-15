
#pragma once

#include <Clients/test-gemSystemComponent.h>

namespace test_gem
{
    /// System component for test_gem editor
    class test_gemEditorSystemComponent
        : public test_gemSystemComponent
    {
        using BaseSystemComponent = test_gemSystemComponent;
    public:
        AZ_COMPONENT(test_gemEditorSystemComponent, "{899E3CD1-0A5B-461C-AA92-186CCE5C1AB7}", BaseSystemComponent);
        static void Reflect(AZ::ReflectContext* context);

        test_gemEditorSystemComponent();
        ~test_gemEditorSystemComponent();

    private:
        static void GetProvidedServices(AZ::ComponentDescriptor::DependencyArrayType& provided);
        static void GetIncompatibleServices(AZ::ComponentDescriptor::DependencyArrayType& incompatible);
        static void GetRequiredServices(AZ::ComponentDescriptor::DependencyArrayType& required);
        static void GetDependentServices(AZ::ComponentDescriptor::DependencyArrayType& dependent);

        // AZ::Component
        void Activate() override;
        void Deactivate() override;
    };
} // namespace test_gem
