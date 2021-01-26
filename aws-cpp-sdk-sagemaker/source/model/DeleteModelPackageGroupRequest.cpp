﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DeleteModelPackageGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteModelPackageGroupRequest::DeleteModelPackageGroupRequest() : 
    m_modelPackageGroupNameHasBeenSet(false)
{
}

Aws::String DeleteModelPackageGroupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_modelPackageGroupNameHasBeenSet)
  {
   payload.WithString("ModelPackageGroupName", m_modelPackageGroupName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteModelPackageGroupRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.DeleteModelPackageGroup"));
  return headers;

}




