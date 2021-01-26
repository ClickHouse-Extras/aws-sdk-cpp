﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguru-reviewer/model/DescribeCodeReviewRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeGuruReviewer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeCodeReviewRequest::DescribeCodeReviewRequest() : 
    m_codeReviewArnHasBeenSet(false)
{
}

Aws::String DescribeCodeReviewRequest::SerializePayload() const
{
  return {};
}




