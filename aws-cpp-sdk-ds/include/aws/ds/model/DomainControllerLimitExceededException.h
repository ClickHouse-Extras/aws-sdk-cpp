﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace DirectoryService
{
namespace Model
{

  /**
   * <p>The maximum allowed number of domain controllers per directory was exceeded.
   * The default limit per directory is 20 domain controllers.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DomainControllerLimitExceededException">AWS
   * API Reference</a></p>
   */
  class AWS_DIRECTORYSERVICE_API DomainControllerLimitExceededException
  {
  public:
    DomainControllerLimitExceededException();
    DomainControllerLimitExceededException(Aws::Utils::Json::JsonView jsonValue);
    DomainControllerLimitExceededException& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline DomainControllerLimitExceededException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline DomainControllerLimitExceededException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline DomainControllerLimitExceededException& WithMessage(const char* value) { SetMessage(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }

    
    inline DomainControllerLimitExceededException& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DomainControllerLimitExceededException& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DomainControllerLimitExceededException& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
