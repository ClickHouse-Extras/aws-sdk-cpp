﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/polly/model/StartSpeechSynthesisTaskResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Polly::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

StartSpeechSynthesisTaskResult::StartSpeechSynthesisTaskResult()
{
}

StartSpeechSynthesisTaskResult::StartSpeechSynthesisTaskResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

StartSpeechSynthesisTaskResult& StartSpeechSynthesisTaskResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("SynthesisTask"))
  {
    m_synthesisTask = jsonValue.GetObject("SynthesisTask");

  }



  return *this;
}
