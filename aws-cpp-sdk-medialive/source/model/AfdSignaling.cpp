﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/AfdSignaling.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace AfdSignalingMapper
      {

        static const int AUTO_HASH = HashingUtils::HashString("AUTO");
        static const int FIXED_HASH = HashingUtils::HashString("FIXED");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        AfdSignaling GetAfdSignalingForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUTO_HASH)
          {
            return AfdSignaling::AUTO;
          }
          else if (hashCode == FIXED_HASH)
          {
            return AfdSignaling::FIXED;
          }
          else if (hashCode == NONE_HASH)
          {
            return AfdSignaling::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AfdSignaling>(hashCode);
          }

          return AfdSignaling::NOT_SET;
        }

        Aws::String GetNameForAfdSignaling(AfdSignaling enumValue)
        {
          switch(enumValue)
          {
          case AfdSignaling::AUTO:
            return "AUTO";
          case AfdSignaling::FIXED:
            return "FIXED";
          case AfdSignaling::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AfdSignalingMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
