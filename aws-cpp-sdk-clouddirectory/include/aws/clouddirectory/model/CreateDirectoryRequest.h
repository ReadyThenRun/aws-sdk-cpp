﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/clouddirectory/CloudDirectoryRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudDirectory
{
namespace Model
{

  /**
   */
  class AWS_CLOUDDIRECTORY_API CreateDirectoryRequest : public CloudDirectoryRequest
  {
  public:
    CreateDirectoryRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDirectory"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the <a>Directory</a>. Should be unique per account, per
     * region.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the <a>Directory</a>. Should be unique per account, per
     * region.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the <a>Directory</a>. Should be unique per account, per
     * region.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the <a>Directory</a>. Should be unique per account, per
     * region.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the <a>Directory</a>. Should be unique per account, per
     * region.</p>
     */
    inline CreateDirectoryRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the <a>Directory</a>. Should be unique per account, per
     * region.</p>
     */
    inline CreateDirectoryRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the <a>Directory</a>. Should be unique per account, per
     * region.</p>
     */
    inline CreateDirectoryRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the published schema that will be copied
     * into the data <a>Directory</a>. For more information, see <a>arns</a>.</p>
     */
    inline const Aws::String& GetSchemaArn() const{ return m_schemaArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the published schema that will be copied
     * into the data <a>Directory</a>. For more information, see <a>arns</a>.</p>
     */
    inline void SetSchemaArn(const Aws::String& value) { m_schemaArnHasBeenSet = true; m_schemaArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the published schema that will be copied
     * into the data <a>Directory</a>. For more information, see <a>arns</a>.</p>
     */
    inline void SetSchemaArn(Aws::String&& value) { m_schemaArnHasBeenSet = true; m_schemaArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the published schema that will be copied
     * into the data <a>Directory</a>. For more information, see <a>arns</a>.</p>
     */
    inline void SetSchemaArn(const char* value) { m_schemaArnHasBeenSet = true; m_schemaArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the published schema that will be copied
     * into the data <a>Directory</a>. For more information, see <a>arns</a>.</p>
     */
    inline CreateDirectoryRequest& WithSchemaArn(const Aws::String& value) { SetSchemaArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the published schema that will be copied
     * into the data <a>Directory</a>. For more information, see <a>arns</a>.</p>
     */
    inline CreateDirectoryRequest& WithSchemaArn(Aws::String&& value) { SetSchemaArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the published schema that will be copied
     * into the data <a>Directory</a>. For more information, see <a>arns</a>.</p>
     */
    inline CreateDirectoryRequest& WithSchemaArn(const char* value) { SetSchemaArn(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_schemaArn;
    bool m_schemaArnHasBeenSet;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
