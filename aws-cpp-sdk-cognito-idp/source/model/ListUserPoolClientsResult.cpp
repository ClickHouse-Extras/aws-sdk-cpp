﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/ListUserPoolClientsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListUserPoolClientsResult::ListUserPoolClientsResult()
{
}

ListUserPoolClientsResult::ListUserPoolClientsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListUserPoolClientsResult& ListUserPoolClientsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("UserPoolClients"))
  {
    Array<JsonView> userPoolClientsJsonList = jsonValue.GetArray("UserPoolClients");
    for(unsigned userPoolClientsIndex = 0; userPoolClientsIndex < userPoolClientsJsonList.GetLength(); ++userPoolClientsIndex)
    {
      m_userPoolClients.push_back(userPoolClientsJsonList[userPoolClientsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
