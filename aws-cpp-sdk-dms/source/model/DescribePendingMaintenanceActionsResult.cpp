﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/DescribePendingMaintenanceActionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DatabaseMigrationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribePendingMaintenanceActionsResult::DescribePendingMaintenanceActionsResult()
{
}

DescribePendingMaintenanceActionsResult::DescribePendingMaintenanceActionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribePendingMaintenanceActionsResult& DescribePendingMaintenanceActionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("PendingMaintenanceActions"))
  {
    Array<JsonView> pendingMaintenanceActionsJsonList = jsonValue.GetArray("PendingMaintenanceActions");
    for(unsigned pendingMaintenanceActionsIndex = 0; pendingMaintenanceActionsIndex < pendingMaintenanceActionsJsonList.GetLength(); ++pendingMaintenanceActionsIndex)
    {
      m_pendingMaintenanceActions.push_back(pendingMaintenanceActionsJsonList[pendingMaintenanceActionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("Marker"))
  {
    m_marker = jsonValue.GetString("Marker");

  }



  return *this;
}
