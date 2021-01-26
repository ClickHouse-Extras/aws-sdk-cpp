﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/RecommenderConfigurationResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

RecommenderConfigurationResponse::RecommenderConfigurationResponse() : 
    m_attributesHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_idHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_recommendationProviderIdTypeHasBeenSet(false),
    m_recommendationProviderRoleArnHasBeenSet(false),
    m_recommendationProviderUriHasBeenSet(false),
    m_recommendationTransformerUriHasBeenSet(false),
    m_recommendationsDisplayNameHasBeenSet(false),
    m_recommendationsPerMessage(0),
    m_recommendationsPerMessageHasBeenSet(false)
{
}

RecommenderConfigurationResponse::RecommenderConfigurationResponse(JsonView jsonValue) : 
    m_attributesHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_idHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_recommendationProviderIdTypeHasBeenSet(false),
    m_recommendationProviderRoleArnHasBeenSet(false),
    m_recommendationProviderUriHasBeenSet(false),
    m_recommendationTransformerUriHasBeenSet(false),
    m_recommendationsDisplayNameHasBeenSet(false),
    m_recommendationsPerMessage(0),
    m_recommendationsPerMessageHasBeenSet(false)
{
  *this = jsonValue;
}

RecommenderConfigurationResponse& RecommenderConfigurationResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Attributes"))
  {
    Aws::Map<Aws::String, JsonView> attributesJsonMap = jsonValue.GetObject("Attributes").GetAllObjects();
    for(auto& attributesItem : attributesJsonMap)
    {
      m_attributes[attributesItem.first] = attributesItem.second.AsString();
    }
    m_attributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationDate"))
  {
    m_creationDate = jsonValue.GetString("CreationDate");

    m_creationDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedDate"))
  {
    m_lastModifiedDate = jsonValue.GetString("LastModifiedDate");

    m_lastModifiedDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RecommendationProviderIdType"))
  {
    m_recommendationProviderIdType = jsonValue.GetString("RecommendationProviderIdType");

    m_recommendationProviderIdTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RecommendationProviderRoleArn"))
  {
    m_recommendationProviderRoleArn = jsonValue.GetString("RecommendationProviderRoleArn");

    m_recommendationProviderRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RecommendationProviderUri"))
  {
    m_recommendationProviderUri = jsonValue.GetString("RecommendationProviderUri");

    m_recommendationProviderUriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RecommendationTransformerUri"))
  {
    m_recommendationTransformerUri = jsonValue.GetString("RecommendationTransformerUri");

    m_recommendationTransformerUriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RecommendationsDisplayName"))
  {
    m_recommendationsDisplayName = jsonValue.GetString("RecommendationsDisplayName");

    m_recommendationsDisplayNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RecommendationsPerMessage"))
  {
    m_recommendationsPerMessage = jsonValue.GetInteger("RecommendationsPerMessage");

    m_recommendationsPerMessageHasBeenSet = true;
  }

  return *this;
}

JsonValue RecommenderConfigurationResponse::Jsonize() const
{
  JsonValue payload;

  if(m_attributesHasBeenSet)
  {
   JsonValue attributesJsonMap;
   for(auto& attributesItem : m_attributes)
   {
     attributesJsonMap.WithString(attributesItem.first, attributesItem.second);
   }
   payload.WithObject("Attributes", std::move(attributesJsonMap));

  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithString("CreationDate", m_creationDate);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_lastModifiedDateHasBeenSet)
  {
   payload.WithString("LastModifiedDate", m_lastModifiedDate);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_recommendationProviderIdTypeHasBeenSet)
  {
   payload.WithString("RecommendationProviderIdType", m_recommendationProviderIdType);

  }

  if(m_recommendationProviderRoleArnHasBeenSet)
  {
   payload.WithString("RecommendationProviderRoleArn", m_recommendationProviderRoleArn);

  }

  if(m_recommendationProviderUriHasBeenSet)
  {
   payload.WithString("RecommendationProviderUri", m_recommendationProviderUri);

  }

  if(m_recommendationTransformerUriHasBeenSet)
  {
   payload.WithString("RecommendationTransformerUri", m_recommendationTransformerUri);

  }

  if(m_recommendationsDisplayNameHasBeenSet)
  {
   payload.WithString("RecommendationsDisplayName", m_recommendationsDisplayName);

  }

  if(m_recommendationsPerMessageHasBeenSet)
  {
   payload.WithInteger("RecommendationsPerMessage", m_recommendationsPerMessage);

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
