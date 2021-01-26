﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/GetApiCacheResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AppSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetApiCacheResult::GetApiCacheResult()
{
}

GetApiCacheResult::GetApiCacheResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetApiCacheResult& GetApiCacheResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("apiCache"))
  {
    m_apiCache = jsonValue.GetObject("apiCache");

  }



  return *this;
}
