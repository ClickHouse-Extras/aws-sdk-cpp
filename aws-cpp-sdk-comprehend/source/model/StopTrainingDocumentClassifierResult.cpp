﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/StopTrainingDocumentClassifierResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Comprehend::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

StopTrainingDocumentClassifierResult::StopTrainingDocumentClassifierResult()
{
}

StopTrainingDocumentClassifierResult::StopTrainingDocumentClassifierResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

StopTrainingDocumentClassifierResult& StopTrainingDocumentClassifierResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  AWS_UNREFERENCED_PARAM(result);


  return *this;
}
