﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/frauddetector/model/DescribeDetectorResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::FraudDetector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeDetectorResult::DescribeDetectorResult()
{
}

DescribeDetectorResult::DescribeDetectorResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeDetectorResult& DescribeDetectorResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("detectorId"))
  {
    m_detectorId = jsonValue.GetString("detectorId");

  }

  if(jsonValue.ValueExists("detectorVersionSummaries"))
  {
    Array<JsonView> detectorVersionSummariesJsonList = jsonValue.GetArray("detectorVersionSummaries");
    for(unsigned detectorVersionSummariesIndex = 0; detectorVersionSummariesIndex < detectorVersionSummariesJsonList.GetLength(); ++detectorVersionSummariesIndex)
    {
      m_detectorVersionSummaries.push_back(detectorVersionSummariesJsonList[detectorVersionSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
