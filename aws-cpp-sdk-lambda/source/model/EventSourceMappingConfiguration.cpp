﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lambda/model/EventSourceMappingConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lambda
{
namespace Model
{

EventSourceMappingConfiguration::EventSourceMappingConfiguration() : 
    m_uUIDHasBeenSet(false),
    m_startingPosition(EventSourcePosition::NOT_SET),
    m_startingPositionHasBeenSet(false),
    m_startingPositionTimestampHasBeenSet(false),
    m_batchSize(0),
    m_batchSizeHasBeenSet(false),
    m_maximumBatchingWindowInSeconds(0),
    m_maximumBatchingWindowInSecondsHasBeenSet(false),
    m_parallelizationFactor(0),
    m_parallelizationFactorHasBeenSet(false),
    m_eventSourceArnHasBeenSet(false),
    m_functionArnHasBeenSet(false),
    m_lastModifiedHasBeenSet(false),
    m_lastProcessingResultHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_stateTransitionReasonHasBeenSet(false),
    m_destinationConfigHasBeenSet(false),
    m_topicsHasBeenSet(false),
    m_queuesHasBeenSet(false),
    m_sourceAccessConfigurationsHasBeenSet(false),
    m_selfManagedEventSourceHasBeenSet(false),
    m_maximumRecordAgeInSeconds(0),
    m_maximumRecordAgeInSecondsHasBeenSet(false),
    m_bisectBatchOnFunctionError(false),
    m_bisectBatchOnFunctionErrorHasBeenSet(false),
    m_maximumRetryAttempts(0),
    m_maximumRetryAttemptsHasBeenSet(false),
    m_tumblingWindowInSeconds(0),
    m_tumblingWindowInSecondsHasBeenSet(false),
    m_functionResponseTypesHasBeenSet(false)
{
}

EventSourceMappingConfiguration::EventSourceMappingConfiguration(JsonView jsonValue) : 
    m_uUIDHasBeenSet(false),
    m_startingPosition(EventSourcePosition::NOT_SET),
    m_startingPositionHasBeenSet(false),
    m_startingPositionTimestampHasBeenSet(false),
    m_batchSize(0),
    m_batchSizeHasBeenSet(false),
    m_maximumBatchingWindowInSeconds(0),
    m_maximumBatchingWindowInSecondsHasBeenSet(false),
    m_parallelizationFactor(0),
    m_parallelizationFactorHasBeenSet(false),
    m_eventSourceArnHasBeenSet(false),
    m_functionArnHasBeenSet(false),
    m_lastModifiedHasBeenSet(false),
    m_lastProcessingResultHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_stateTransitionReasonHasBeenSet(false),
    m_destinationConfigHasBeenSet(false),
    m_topicsHasBeenSet(false),
    m_queuesHasBeenSet(false),
    m_sourceAccessConfigurationsHasBeenSet(false),
    m_selfManagedEventSourceHasBeenSet(false),
    m_maximumRecordAgeInSeconds(0),
    m_maximumRecordAgeInSecondsHasBeenSet(false),
    m_bisectBatchOnFunctionError(false),
    m_bisectBatchOnFunctionErrorHasBeenSet(false),
    m_maximumRetryAttempts(0),
    m_maximumRetryAttemptsHasBeenSet(false),
    m_tumblingWindowInSeconds(0),
    m_tumblingWindowInSecondsHasBeenSet(false),
    m_functionResponseTypesHasBeenSet(false)
{
  *this = jsonValue;
}

EventSourceMappingConfiguration& EventSourceMappingConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("UUID"))
  {
    m_uUID = jsonValue.GetString("UUID");

    m_uUIDHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartingPosition"))
  {
    m_startingPosition = EventSourcePositionMapper::GetEventSourcePositionForName(jsonValue.GetString("StartingPosition"));

    m_startingPositionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartingPositionTimestamp"))
  {
    m_startingPositionTimestamp = jsonValue.GetDouble("StartingPositionTimestamp");

    m_startingPositionTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BatchSize"))
  {
    m_batchSize = jsonValue.GetInteger("BatchSize");

    m_batchSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaximumBatchingWindowInSeconds"))
  {
    m_maximumBatchingWindowInSeconds = jsonValue.GetInteger("MaximumBatchingWindowInSeconds");

    m_maximumBatchingWindowInSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ParallelizationFactor"))
  {
    m_parallelizationFactor = jsonValue.GetInteger("ParallelizationFactor");

    m_parallelizationFactorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EventSourceArn"))
  {
    m_eventSourceArn = jsonValue.GetString("EventSourceArn");

    m_eventSourceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FunctionArn"))
  {
    m_functionArn = jsonValue.GetString("FunctionArn");

    m_functionArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModified"))
  {
    m_lastModified = jsonValue.GetDouble("LastModified");

    m_lastModifiedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastProcessingResult"))
  {
    m_lastProcessingResult = jsonValue.GetString("LastProcessingResult");

    m_lastProcessingResultHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = jsonValue.GetString("State");

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StateTransitionReason"))
  {
    m_stateTransitionReason = jsonValue.GetString("StateTransitionReason");

    m_stateTransitionReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DestinationConfig"))
  {
    m_destinationConfig = jsonValue.GetObject("DestinationConfig");

    m_destinationConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Topics"))
  {
    Array<JsonView> topicsJsonList = jsonValue.GetArray("Topics");
    for(unsigned topicsIndex = 0; topicsIndex < topicsJsonList.GetLength(); ++topicsIndex)
    {
      m_topics.push_back(topicsJsonList[topicsIndex].AsString());
    }
    m_topicsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Queues"))
  {
    Array<JsonView> queuesJsonList = jsonValue.GetArray("Queues");
    for(unsigned queuesIndex = 0; queuesIndex < queuesJsonList.GetLength(); ++queuesIndex)
    {
      m_queues.push_back(queuesJsonList[queuesIndex].AsString());
    }
    m_queuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceAccessConfigurations"))
  {
    Array<JsonView> sourceAccessConfigurationsJsonList = jsonValue.GetArray("SourceAccessConfigurations");
    for(unsigned sourceAccessConfigurationsIndex = 0; sourceAccessConfigurationsIndex < sourceAccessConfigurationsJsonList.GetLength(); ++sourceAccessConfigurationsIndex)
    {
      m_sourceAccessConfigurations.push_back(sourceAccessConfigurationsJsonList[sourceAccessConfigurationsIndex].AsObject());
    }
    m_sourceAccessConfigurationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SelfManagedEventSource"))
  {
    m_selfManagedEventSource = jsonValue.GetObject("SelfManagedEventSource");

    m_selfManagedEventSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaximumRecordAgeInSeconds"))
  {
    m_maximumRecordAgeInSeconds = jsonValue.GetInteger("MaximumRecordAgeInSeconds");

    m_maximumRecordAgeInSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BisectBatchOnFunctionError"))
  {
    m_bisectBatchOnFunctionError = jsonValue.GetBool("BisectBatchOnFunctionError");

    m_bisectBatchOnFunctionErrorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaximumRetryAttempts"))
  {
    m_maximumRetryAttempts = jsonValue.GetInteger("MaximumRetryAttempts");

    m_maximumRetryAttemptsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TumblingWindowInSeconds"))
  {
    m_tumblingWindowInSeconds = jsonValue.GetInteger("TumblingWindowInSeconds");

    m_tumblingWindowInSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FunctionResponseTypes"))
  {
    Array<JsonView> functionResponseTypesJsonList = jsonValue.GetArray("FunctionResponseTypes");
    for(unsigned functionResponseTypesIndex = 0; functionResponseTypesIndex < functionResponseTypesJsonList.GetLength(); ++functionResponseTypesIndex)
    {
      m_functionResponseTypes.push_back(FunctionResponseTypeMapper::GetFunctionResponseTypeForName(functionResponseTypesJsonList[functionResponseTypesIndex].AsString()));
    }
    m_functionResponseTypesHasBeenSet = true;
  }

  return *this;
}

JsonValue EventSourceMappingConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_uUIDHasBeenSet)
  {
   payload.WithString("UUID", m_uUID);

  }

  if(m_startingPositionHasBeenSet)
  {
   payload.WithString("StartingPosition", EventSourcePositionMapper::GetNameForEventSourcePosition(m_startingPosition));
  }

  if(m_startingPositionTimestampHasBeenSet)
  {
   payload.WithDouble("StartingPositionTimestamp", m_startingPositionTimestamp.SecondsWithMSPrecision());
  }

  if(m_batchSizeHasBeenSet)
  {
   payload.WithInteger("BatchSize", m_batchSize);

  }

  if(m_maximumBatchingWindowInSecondsHasBeenSet)
  {
   payload.WithInteger("MaximumBatchingWindowInSeconds", m_maximumBatchingWindowInSeconds);

  }

  if(m_parallelizationFactorHasBeenSet)
  {
   payload.WithInteger("ParallelizationFactor", m_parallelizationFactor);

  }

  if(m_eventSourceArnHasBeenSet)
  {
   payload.WithString("EventSourceArn", m_eventSourceArn);

  }

  if(m_functionArnHasBeenSet)
  {
   payload.WithString("FunctionArn", m_functionArn);

  }

  if(m_lastModifiedHasBeenSet)
  {
   payload.WithDouble("LastModified", m_lastModified.SecondsWithMSPrecision());
  }

  if(m_lastProcessingResultHasBeenSet)
  {
   payload.WithString("LastProcessingResult", m_lastProcessingResult);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", m_state);

  }

  if(m_stateTransitionReasonHasBeenSet)
  {
   payload.WithString("StateTransitionReason", m_stateTransitionReason);

  }

  if(m_destinationConfigHasBeenSet)
  {
   payload.WithObject("DestinationConfig", m_destinationConfig.Jsonize());

  }

  if(m_topicsHasBeenSet)
  {
   Array<JsonValue> topicsJsonList(m_topics.size());
   for(unsigned topicsIndex = 0; topicsIndex < topicsJsonList.GetLength(); ++topicsIndex)
   {
     topicsJsonList[topicsIndex].AsString(m_topics[topicsIndex]);
   }
   payload.WithArray("Topics", std::move(topicsJsonList));

  }

  if(m_queuesHasBeenSet)
  {
   Array<JsonValue> queuesJsonList(m_queues.size());
   for(unsigned queuesIndex = 0; queuesIndex < queuesJsonList.GetLength(); ++queuesIndex)
   {
     queuesJsonList[queuesIndex].AsString(m_queues[queuesIndex]);
   }
   payload.WithArray("Queues", std::move(queuesJsonList));

  }

  if(m_sourceAccessConfigurationsHasBeenSet)
  {
   Array<JsonValue> sourceAccessConfigurationsJsonList(m_sourceAccessConfigurations.size());
   for(unsigned sourceAccessConfigurationsIndex = 0; sourceAccessConfigurationsIndex < sourceAccessConfigurationsJsonList.GetLength(); ++sourceAccessConfigurationsIndex)
   {
     sourceAccessConfigurationsJsonList[sourceAccessConfigurationsIndex].AsObject(m_sourceAccessConfigurations[sourceAccessConfigurationsIndex].Jsonize());
   }
   payload.WithArray("SourceAccessConfigurations", std::move(sourceAccessConfigurationsJsonList));

  }

  if(m_selfManagedEventSourceHasBeenSet)
  {
   payload.WithObject("SelfManagedEventSource", m_selfManagedEventSource.Jsonize());

  }

  if(m_maximumRecordAgeInSecondsHasBeenSet)
  {
   payload.WithInteger("MaximumRecordAgeInSeconds", m_maximumRecordAgeInSeconds);

  }

  if(m_bisectBatchOnFunctionErrorHasBeenSet)
  {
   payload.WithBool("BisectBatchOnFunctionError", m_bisectBatchOnFunctionError);

  }

  if(m_maximumRetryAttemptsHasBeenSet)
  {
   payload.WithInteger("MaximumRetryAttempts", m_maximumRetryAttempts);

  }

  if(m_tumblingWindowInSecondsHasBeenSet)
  {
   payload.WithInteger("TumblingWindowInSeconds", m_tumblingWindowInSeconds);

  }

  if(m_functionResponseTypesHasBeenSet)
  {
   Array<JsonValue> functionResponseTypesJsonList(m_functionResponseTypes.size());
   for(unsigned functionResponseTypesIndex = 0; functionResponseTypesIndex < functionResponseTypesJsonList.GetLength(); ++functionResponseTypesIndex)
   {
     functionResponseTypesJsonList[functionResponseTypesIndex].AsString(FunctionResponseTypeMapper::GetNameForFunctionResponseType(m_functionResponseTypes[functionResponseTypesIndex]));
   }
   payload.WithArray("FunctionResponseTypes", std::move(functionResponseTypesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Lambda
} // namespace Aws
