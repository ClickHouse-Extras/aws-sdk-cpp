﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/ConfigServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/ExternalEvaluation.h>
#include <utility>

namespace Aws
{
namespace ConfigService
{
namespace Model
{

  /**
   */
  class AWS_CONFIGSERVICE_API PutExternalEvaluationRequest : public ConfigServiceRequest
  {
  public:
    PutExternalEvaluationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutExternalEvaluation"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const Aws::String& GetConfigRuleName() const{ return m_configRuleName; }

    
    inline bool ConfigRuleNameHasBeenSet() const { return m_configRuleNameHasBeenSet; }

    
    inline void SetConfigRuleName(const Aws::String& value) { m_configRuleNameHasBeenSet = true; m_configRuleName = value; }

    
    inline void SetConfigRuleName(Aws::String&& value) { m_configRuleNameHasBeenSet = true; m_configRuleName = std::move(value); }

    
    inline void SetConfigRuleName(const char* value) { m_configRuleNameHasBeenSet = true; m_configRuleName.assign(value); }

    
    inline PutExternalEvaluationRequest& WithConfigRuleName(const Aws::String& value) { SetConfigRuleName(value); return *this;}

    
    inline PutExternalEvaluationRequest& WithConfigRuleName(Aws::String&& value) { SetConfigRuleName(std::move(value)); return *this;}

    
    inline PutExternalEvaluationRequest& WithConfigRuleName(const char* value) { SetConfigRuleName(value); return *this;}


    
    inline const ExternalEvaluation& GetExternalEvaluation() const{ return m_externalEvaluation; }

    
    inline bool ExternalEvaluationHasBeenSet() const { return m_externalEvaluationHasBeenSet; }

    
    inline void SetExternalEvaluation(const ExternalEvaluation& value) { m_externalEvaluationHasBeenSet = true; m_externalEvaluation = value; }

    
    inline void SetExternalEvaluation(ExternalEvaluation&& value) { m_externalEvaluationHasBeenSet = true; m_externalEvaluation = std::move(value); }

    
    inline PutExternalEvaluationRequest& WithExternalEvaluation(const ExternalEvaluation& value) { SetExternalEvaluation(value); return *this;}

    
    inline PutExternalEvaluationRequest& WithExternalEvaluation(ExternalEvaluation&& value) { SetExternalEvaluation(std::move(value)); return *this;}

  private:

    Aws::String m_configRuleName;
    bool m_configRuleNameHasBeenSet;

    ExternalEvaluation m_externalEvaluation;
    bool m_externalEvaluationHasBeenSet;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
