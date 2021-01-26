﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ApiGatewayV2
{
namespace Model
{
  enum class ConnectionType
  {
    NOT_SET,
    INTERNET,
    VPC_LINK
  };

namespace ConnectionTypeMapper
{
AWS_APIGATEWAYV2_API ConnectionType GetConnectionTypeForName(const Aws::String& name);

AWS_APIGATEWAYV2_API Aws::String GetNameForConnectionType(ConnectionType value);
} // namespace ConnectionTypeMapper
} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
