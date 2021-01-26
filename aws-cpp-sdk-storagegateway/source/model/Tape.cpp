﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/Tape.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

Tape::Tape() : 
    m_tapeARNHasBeenSet(false),
    m_tapeBarcodeHasBeenSet(false),
    m_tapeCreatedDateHasBeenSet(false),
    m_tapeSizeInBytes(0),
    m_tapeSizeInBytesHasBeenSet(false),
    m_tapeStatusHasBeenSet(false),
    m_vTLDeviceHasBeenSet(false),
    m_progress(0.0),
    m_progressHasBeenSet(false),
    m_tapeUsedInBytes(0),
    m_tapeUsedInBytesHasBeenSet(false),
    m_kMSKeyHasBeenSet(false),
    m_poolIdHasBeenSet(false),
    m_worm(false),
    m_wormHasBeenSet(false),
    m_retentionStartDateHasBeenSet(false),
    m_poolEntryDateHasBeenSet(false)
{
}

Tape::Tape(JsonView jsonValue) : 
    m_tapeARNHasBeenSet(false),
    m_tapeBarcodeHasBeenSet(false),
    m_tapeCreatedDateHasBeenSet(false),
    m_tapeSizeInBytes(0),
    m_tapeSizeInBytesHasBeenSet(false),
    m_tapeStatusHasBeenSet(false),
    m_vTLDeviceHasBeenSet(false),
    m_progress(0.0),
    m_progressHasBeenSet(false),
    m_tapeUsedInBytes(0),
    m_tapeUsedInBytesHasBeenSet(false),
    m_kMSKeyHasBeenSet(false),
    m_poolIdHasBeenSet(false),
    m_worm(false),
    m_wormHasBeenSet(false),
    m_retentionStartDateHasBeenSet(false),
    m_poolEntryDateHasBeenSet(false)
{
  *this = jsonValue;
}

Tape& Tape::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TapeARN"))
  {
    m_tapeARN = jsonValue.GetString("TapeARN");

    m_tapeARNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TapeBarcode"))
  {
    m_tapeBarcode = jsonValue.GetString("TapeBarcode");

    m_tapeBarcodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TapeCreatedDate"))
  {
    m_tapeCreatedDate = jsonValue.GetDouble("TapeCreatedDate");

    m_tapeCreatedDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TapeSizeInBytes"))
  {
    m_tapeSizeInBytes = jsonValue.GetInt64("TapeSizeInBytes");

    m_tapeSizeInBytesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TapeStatus"))
  {
    m_tapeStatus = jsonValue.GetString("TapeStatus");

    m_tapeStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VTLDevice"))
  {
    m_vTLDevice = jsonValue.GetString("VTLDevice");

    m_vTLDeviceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Progress"))
  {
    m_progress = jsonValue.GetDouble("Progress");

    m_progressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TapeUsedInBytes"))
  {
    m_tapeUsedInBytes = jsonValue.GetInt64("TapeUsedInBytes");

    m_tapeUsedInBytesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KMSKey"))
  {
    m_kMSKey = jsonValue.GetString("KMSKey");

    m_kMSKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PoolId"))
  {
    m_poolId = jsonValue.GetString("PoolId");

    m_poolIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Worm"))
  {
    m_worm = jsonValue.GetBool("Worm");

    m_wormHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RetentionStartDate"))
  {
    m_retentionStartDate = jsonValue.GetDouble("RetentionStartDate");

    m_retentionStartDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PoolEntryDate"))
  {
    m_poolEntryDate = jsonValue.GetDouble("PoolEntryDate");

    m_poolEntryDateHasBeenSet = true;
  }

  return *this;
}

JsonValue Tape::Jsonize() const
{
  JsonValue payload;

  if(m_tapeARNHasBeenSet)
  {
   payload.WithString("TapeARN", m_tapeARN);

  }

  if(m_tapeBarcodeHasBeenSet)
  {
   payload.WithString("TapeBarcode", m_tapeBarcode);

  }

  if(m_tapeCreatedDateHasBeenSet)
  {
   payload.WithDouble("TapeCreatedDate", m_tapeCreatedDate.SecondsWithMSPrecision());
  }

  if(m_tapeSizeInBytesHasBeenSet)
  {
   payload.WithInt64("TapeSizeInBytes", m_tapeSizeInBytes);

  }

  if(m_tapeStatusHasBeenSet)
  {
   payload.WithString("TapeStatus", m_tapeStatus);

  }

  if(m_vTLDeviceHasBeenSet)
  {
   payload.WithString("VTLDevice", m_vTLDevice);

  }

  if(m_progressHasBeenSet)
  {
   payload.WithDouble("Progress", m_progress);

  }

  if(m_tapeUsedInBytesHasBeenSet)
  {
   payload.WithInt64("TapeUsedInBytes", m_tapeUsedInBytes);

  }

  if(m_kMSKeyHasBeenSet)
  {
   payload.WithString("KMSKey", m_kMSKey);

  }

  if(m_poolIdHasBeenSet)
  {
   payload.WithString("PoolId", m_poolId);

  }

  if(m_wormHasBeenSet)
  {
   payload.WithBool("Worm", m_worm);

  }

  if(m_retentionStartDateHasBeenSet)
  {
   payload.WithDouble("RetentionStartDate", m_retentionStartDate.SecondsWithMSPrecision());
  }

  if(m_poolEntryDateHasBeenSet)
  {
   payload.WithDouble("PoolEntryDate", m_poolEntryDate.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
