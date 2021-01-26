﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaConvert
{
namespace Model
{
  enum class RespondToAfd
  {
    NOT_SET,
    NONE,
    RESPOND,
    PASSTHROUGH
  };

namespace RespondToAfdMapper
{
AWS_MEDIACONVERT_API RespondToAfd GetRespondToAfdForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForRespondToAfd(RespondToAfd value);
} // namespace RespondToAfdMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
