﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace APIGateway
{
namespace Model
{
  /**
   * <p>A snapshot of the documentation of an API.</p> <div
   * class="remarks"><p>Publishing API documentation involves creating a
   * documentation version associated with an API stage and exporting the versioned
   * documentation to an external (e.g., OpenAPI) file.</p></div> <div
   * class="seeAlso"> <a
   * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/api-gateway-documenting-api.html">Documenting
   * an API</a>, <a>DocumentationPart</a>, <a>DocumentationVersions</a>
   * </div><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/DocumentationVersion">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAY_API UpdateDocumentationVersionResult
  {
  public:
    UpdateDocumentationVersionResult();
    UpdateDocumentationVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateDocumentationVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The version identifier of the API documentation snapshot.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The version identifier of the API documentation snapshot.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_version = value; }

    /**
     * <p>The version identifier of the API documentation snapshot.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_version = std::move(value); }

    /**
     * <p>The version identifier of the API documentation snapshot.</p>
     */
    inline void SetVersion(const char* value) { m_version.assign(value); }

    /**
     * <p>The version identifier of the API documentation snapshot.</p>
     */
    inline UpdateDocumentationVersionResult& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The version identifier of the API documentation snapshot.</p>
     */
    inline UpdateDocumentationVersionResult& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The version identifier of the API documentation snapshot.</p>
     */
    inline UpdateDocumentationVersionResult& WithVersion(const char* value) { SetVersion(value); return *this;}


    /**
     * <p>The date when the API documentation snapshot is created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }

    /**
     * <p>The date when the API documentation snapshot is created.</p>
     */
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDate = value; }

    /**
     * <p>The date when the API documentation snapshot is created.</p>
     */
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDate = std::move(value); }

    /**
     * <p>The date when the API documentation snapshot is created.</p>
     */
    inline UpdateDocumentationVersionResult& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}

    /**
     * <p>The date when the API documentation snapshot is created.</p>
     */
    inline UpdateDocumentationVersionResult& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}


    /**
     * <p>The description of the API documentation snapshot.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the API documentation snapshot.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of the API documentation snapshot.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of the API documentation snapshot.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of the API documentation snapshot.</p>
     */
    inline UpdateDocumentationVersionResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the API documentation snapshot.</p>
     */
    inline UpdateDocumentationVersionResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the API documentation snapshot.</p>
     */
    inline UpdateDocumentationVersionResult& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_version;

    Aws::Utils::DateTime m_createdDate;

    Aws::String m_description;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
