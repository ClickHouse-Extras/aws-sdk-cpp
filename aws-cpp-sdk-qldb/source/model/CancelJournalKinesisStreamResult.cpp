﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qldb/model/CancelJournalKinesisStreamResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::QLDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CancelJournalKinesisStreamResult::CancelJournalKinesisStreamResult()
{
}

CancelJournalKinesisStreamResult::CancelJournalKinesisStreamResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CancelJournalKinesisStreamResult& CancelJournalKinesisStreamResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("StreamId"))
  {
    m_streamId = jsonValue.GetString("StreamId");

  }



  return *this;
}
