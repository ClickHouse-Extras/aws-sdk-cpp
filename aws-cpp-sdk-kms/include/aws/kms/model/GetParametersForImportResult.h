﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
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
namespace KMS
{
namespace Model
{
  class AWS_KMS_API GetParametersForImportResult
  {
  public:
    GetParametersForImportResult();
    GetParametersForImportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetParametersForImportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key
     * ARN</a>) of the CMK to use in a subsequent <a>ImportKeyMaterial</a> request.
     * This is the same CMK specified in the <code>GetParametersForImport</code>
     * request.</p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key
     * ARN</a>) of the CMK to use in a subsequent <a>ImportKeyMaterial</a> request.
     * This is the same CMK specified in the <code>GetParametersForImport</code>
     * request.</p>
     */
    inline void SetKeyId(const Aws::String& value) { m_keyId = value; }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key
     * ARN</a>) of the CMK to use in a subsequent <a>ImportKeyMaterial</a> request.
     * This is the same CMK specified in the <code>GetParametersForImport</code>
     * request.</p>
     */
    inline void SetKeyId(Aws::String&& value) { m_keyId = std::move(value); }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key
     * ARN</a>) of the CMK to use in a subsequent <a>ImportKeyMaterial</a> request.
     * This is the same CMK specified in the <code>GetParametersForImport</code>
     * request.</p>
     */
    inline void SetKeyId(const char* value) { m_keyId.assign(value); }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key
     * ARN</a>) of the CMK to use in a subsequent <a>ImportKeyMaterial</a> request.
     * This is the same CMK specified in the <code>GetParametersForImport</code>
     * request.</p>
     */
    inline GetParametersForImportResult& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key
     * ARN</a>) of the CMK to use in a subsequent <a>ImportKeyMaterial</a> request.
     * This is the same CMK specified in the <code>GetParametersForImport</code>
     * request.</p>
     */
    inline GetParametersForImportResult& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key
     * ARN</a>) of the CMK to use in a subsequent <a>ImportKeyMaterial</a> request.
     * This is the same CMK specified in the <code>GetParametersForImport</code>
     * request.</p>
     */
    inline GetParametersForImportResult& WithKeyId(const char* value) { SetKeyId(value); return *this;}


    /**
     * <p>The import token to send in a subsequent <a>ImportKeyMaterial</a>
     * request.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetImportToken() const{ return m_importToken; }

    /**
     * <p>The import token to send in a subsequent <a>ImportKeyMaterial</a>
     * request.</p>
     */
    inline void SetImportToken(const Aws::Utils::ByteBuffer& value) { m_importToken = value; }

    /**
     * <p>The import token to send in a subsequent <a>ImportKeyMaterial</a>
     * request.</p>
     */
    inline void SetImportToken(Aws::Utils::ByteBuffer&& value) { m_importToken = std::move(value); }

    /**
     * <p>The import token to send in a subsequent <a>ImportKeyMaterial</a>
     * request.</p>
     */
    inline GetParametersForImportResult& WithImportToken(const Aws::Utils::ByteBuffer& value) { SetImportToken(value); return *this;}

    /**
     * <p>The import token to send in a subsequent <a>ImportKeyMaterial</a>
     * request.</p>
     */
    inline GetParametersForImportResult& WithImportToken(Aws::Utils::ByteBuffer&& value) { SetImportToken(std::move(value)); return *this;}


    /**
     * <p>The public key to use to encrypt the key material before importing it with
     * <a>ImportKeyMaterial</a>.</p>
     */
    inline const Aws::Utils::CryptoBuffer& GetPublicKey() const{ return m_publicKey; }

    /**
     * <p>The public key to use to encrypt the key material before importing it with
     * <a>ImportKeyMaterial</a>.</p>
     */
    inline void SetPublicKey(const Aws::Utils::CryptoBuffer& value) { m_publicKey = value; }

    /**
     * <p>The public key to use to encrypt the key material before importing it with
     * <a>ImportKeyMaterial</a>.</p>
     */
    inline void SetPublicKey(Aws::Utils::CryptoBuffer&& value) { m_publicKey = std::move(value); }

    /**
     * <p>The public key to use to encrypt the key material before importing it with
     * <a>ImportKeyMaterial</a>.</p>
     */
    inline GetParametersForImportResult& WithPublicKey(const Aws::Utils::CryptoBuffer& value) { SetPublicKey(value); return *this;}

    /**
     * <p>The public key to use to encrypt the key material before importing it with
     * <a>ImportKeyMaterial</a>.</p>
     */
    inline GetParametersForImportResult& WithPublicKey(Aws::Utils::CryptoBuffer&& value) { SetPublicKey(std::move(value)); return *this;}


    /**
     * <p>The time at which the import token and public key are no longer valid. After
     * this time, you cannot use them to make an <a>ImportKeyMaterial</a> request and
     * you must send another <code>GetParametersForImport</code> request to get new
     * ones.</p>
     */
    inline const Aws::Utils::DateTime& GetParametersValidTo() const{ return m_parametersValidTo; }

    /**
     * <p>The time at which the import token and public key are no longer valid. After
     * this time, you cannot use them to make an <a>ImportKeyMaterial</a> request and
     * you must send another <code>GetParametersForImport</code> request to get new
     * ones.</p>
     */
    inline void SetParametersValidTo(const Aws::Utils::DateTime& value) { m_parametersValidTo = value; }

    /**
     * <p>The time at which the import token and public key are no longer valid. After
     * this time, you cannot use them to make an <a>ImportKeyMaterial</a> request and
     * you must send another <code>GetParametersForImport</code> request to get new
     * ones.</p>
     */
    inline void SetParametersValidTo(Aws::Utils::DateTime&& value) { m_parametersValidTo = std::move(value); }

    /**
     * <p>The time at which the import token and public key are no longer valid. After
     * this time, you cannot use them to make an <a>ImportKeyMaterial</a> request and
     * you must send another <code>GetParametersForImport</code> request to get new
     * ones.</p>
     */
    inline GetParametersForImportResult& WithParametersValidTo(const Aws::Utils::DateTime& value) { SetParametersValidTo(value); return *this;}

    /**
     * <p>The time at which the import token and public key are no longer valid. After
     * this time, you cannot use them to make an <a>ImportKeyMaterial</a> request and
     * you must send another <code>GetParametersForImport</code> request to get new
     * ones.</p>
     */
    inline GetParametersForImportResult& WithParametersValidTo(Aws::Utils::DateTime&& value) { SetParametersValidTo(std::move(value)); return *this;}

  private:

    Aws::String m_keyId;

    Aws::Utils::ByteBuffer m_importToken;

    Aws::Utils::CryptoBuffer m_publicKey;

    Aws::Utils::DateTime m_parametersValidTo;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
