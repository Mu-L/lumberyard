/*
* All or portions of this file Copyright (c) Amazon.com, Inc. or its affiliates or
* its licensors.
*
* For complete copyright and license terms please see the LICENSE at the root of this
* distribution (the "License"). All use of this software is governed by the License,
* or, if provided, by the license below or the license accompanying this file. Do not
* remove or modify any license notices. This file is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
*
*/

#pragma once

#include <AzCore/Component/Component.h>

namespace ScriptCanvasEditor
{
    /*!
    System Component for managing the class reflections of Editor introduced types
    */
    class ReflectComponent
        : public AZ::Component
    {
    public:
        AZ_COMPONENT(ReflectComponent, "{5F1D37D8-A72A-4C38-B7E7-6BBC90272F92}");

        ReflectComponent() = default;

        static void Reflect(AZ::ReflectContext* context);

        static void GetProvidedServices(AZ::ComponentDescriptor::DependencyArrayType& provided);
        static void GetIncompatibleServices(AZ::ComponentDescriptor::DependencyArrayType& incompatible);
        static void GetRequiredServices(AZ::ComponentDescriptor::DependencyArrayType& required);

        //// AZ::Component
        void Activate();
        void Deactivate();
        ////
    };
}
