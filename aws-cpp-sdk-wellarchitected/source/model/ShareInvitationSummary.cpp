﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/ShareInvitationSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WellArchitected
{
namespace Model
{

ShareInvitationSummary::ShareInvitationSummary() : 
    m_shareInvitationIdHasBeenSet(false),
    m_sharedByHasBeenSet(false),
    m_sharedWithHasBeenSet(false),
    m_permissionType(PermissionType::NOT_SET),
    m_permissionTypeHasBeenSet(false),
    m_workloadNameHasBeenSet(false),
    m_workloadIdHasBeenSet(false)
{
}

ShareInvitationSummary::ShareInvitationSummary(JsonView jsonValue) : 
    m_shareInvitationIdHasBeenSet(false),
    m_sharedByHasBeenSet(false),
    m_sharedWithHasBeenSet(false),
    m_permissionType(PermissionType::NOT_SET),
    m_permissionTypeHasBeenSet(false),
    m_workloadNameHasBeenSet(false),
    m_workloadIdHasBeenSet(false)
{
  *this = jsonValue;
}

ShareInvitationSummary& ShareInvitationSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ShareInvitationId"))
  {
    m_shareInvitationId = jsonValue.GetString("ShareInvitationId");

    m_shareInvitationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SharedBy"))
  {
    m_sharedBy = jsonValue.GetString("SharedBy");

    m_sharedByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SharedWith"))
  {
    m_sharedWith = jsonValue.GetString("SharedWith");

    m_sharedWithHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PermissionType"))
  {
    m_permissionType = PermissionTypeMapper::GetPermissionTypeForName(jsonValue.GetString("PermissionType"));

    m_permissionTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WorkloadName"))
  {
    m_workloadName = jsonValue.GetString("WorkloadName");

    m_workloadNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WorkloadId"))
  {
    m_workloadId = jsonValue.GetString("WorkloadId");

    m_workloadIdHasBeenSet = true;
  }

  return *this;
}

JsonValue ShareInvitationSummary::Jsonize() const
{
  JsonValue payload;

  if(m_shareInvitationIdHasBeenSet)
  {
   payload.WithString("ShareInvitationId", m_shareInvitationId);

  }

  if(m_sharedByHasBeenSet)
  {
   payload.WithString("SharedBy", m_sharedBy);

  }

  if(m_sharedWithHasBeenSet)
  {
   payload.WithString("SharedWith", m_sharedWith);

  }

  if(m_permissionTypeHasBeenSet)
  {
   payload.WithString("PermissionType", PermissionTypeMapper::GetNameForPermissionType(m_permissionType));
  }

  if(m_workloadNameHasBeenSet)
  {
   payload.WithString("WorkloadName", m_workloadName);

  }

  if(m_workloadIdHasBeenSet)
  {
   payload.WithString("WorkloadId", m_workloadId);

  }

  return payload;
}

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
