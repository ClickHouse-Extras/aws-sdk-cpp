﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Appflow
{
namespace Model
{
  enum class ServiceNowConnectorOperator
  {
    NOT_SET,
    PROJECTION,
    CONTAINS,
    LESS_THAN,
    GREATER_THAN,
    BETWEEN,
    LESS_THAN_OR_EQUAL_TO,
    GREATER_THAN_OR_EQUAL_TO,
    EQUAL_TO,
    NOT_EQUAL_TO,
    ADDITION,
    MULTIPLICATION,
    DIVISION,
    SUBTRACTION,
    MASK_ALL,
    MASK_FIRST_N,
    MASK_LAST_N,
    VALIDATE_NON_NULL,
    VALIDATE_NON_ZERO,
    VALIDATE_NON_NEGATIVE,
    VALIDATE_NUMERIC,
    NO_OP
  };

namespace ServiceNowConnectorOperatorMapper
{
AWS_APPFLOW_API ServiceNowConnectorOperator GetServiceNowConnectorOperatorForName(const Aws::String& name);

AWS_APPFLOW_API Aws::String GetNameForServiceNowConnectorOperator(ServiceNowConnectorOperator value);
} // namespace ServiceNowConnectorOperatorMapper
} // namespace Model
} // namespace Appflow
} // namespace Aws
