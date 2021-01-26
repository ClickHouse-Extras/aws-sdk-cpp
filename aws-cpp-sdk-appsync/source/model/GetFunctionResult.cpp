﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/GetFunctionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AppSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetFunctionResult::GetFunctionResult()
{
}

GetFunctionResult::GetFunctionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetFunctionResult& GetFunctionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("functionConfiguration"))
  {
    m_functionConfiguration = jsonValue.GetObject("functionConfiguration");

  }



  return *this;
}
