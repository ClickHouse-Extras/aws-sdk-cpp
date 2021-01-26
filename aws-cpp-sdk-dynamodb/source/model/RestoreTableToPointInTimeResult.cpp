﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/RestoreTableToPointInTimeResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

RestoreTableToPointInTimeResult::RestoreTableToPointInTimeResult()
{
}

RestoreTableToPointInTimeResult::RestoreTableToPointInTimeResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

RestoreTableToPointInTimeResult& RestoreTableToPointInTimeResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("TableDescription"))
  {
    m_tableDescription = jsonValue.GetObject("TableDescription");

  }



  return *this;
}
