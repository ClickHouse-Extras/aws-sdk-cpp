﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr-public/model/GetAuthorizationTokenResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ECRPublic::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetAuthorizationTokenResult::GetAuthorizationTokenResult()
{
}

GetAuthorizationTokenResult::GetAuthorizationTokenResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetAuthorizationTokenResult& GetAuthorizationTokenResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("authorizationData"))
  {
    m_authorizationData = jsonValue.GetObject("authorizationData");

  }



  return *this;
}
