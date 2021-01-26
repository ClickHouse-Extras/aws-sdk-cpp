﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/UpdateServicePrimaryTaskSetResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ECS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateServicePrimaryTaskSetResult::UpdateServicePrimaryTaskSetResult()
{
}

UpdateServicePrimaryTaskSetResult::UpdateServicePrimaryTaskSetResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

UpdateServicePrimaryTaskSetResult& UpdateServicePrimaryTaskSetResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("taskSet"))
  {
    m_taskSet = jsonValue.GetObject("taskSet");

  }



  return *this;
}
