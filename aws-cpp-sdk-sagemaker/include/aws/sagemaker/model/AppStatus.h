﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SageMaker
{
namespace Model
{
  enum class AppStatus
  {
    NOT_SET,
    Deleted,
    Deleting,
    Failed,
    InService,
    Pending
  };

namespace AppStatusMapper
{
AWS_SAGEMAKER_API AppStatus GetAppStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForAppStatus(AppStatus value);
} // namespace AppStatusMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
