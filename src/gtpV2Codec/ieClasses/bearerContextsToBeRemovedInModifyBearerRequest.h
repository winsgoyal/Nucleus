/*
 * Copyright 2019-present, Infosys Limited.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */ 
 /******************************************************************************
 *
 * This is an auto generated file.
 * Please do not edit this file.
 * All edits to be made through template source file
 * <TOP-DIR/scripts/GtpV2StackCodeGen/tts/grpieinsttemplate.h.tt>
 ******************************************************************************/
#ifndef BEARERCONTEXTSTOBEREMOVEDINMODIFYBEARERREQUEST_H_
#define BEARERCONTEXTSTOBEREMOVEDINMODIFYBEARERREQUEST_H_

#include <set>
#include <sstream>
#include "manual/gtpV2GroupedIe.h"
#include <msgBuffer.h>
#include "gtpV2GrpIeDataTypes.h"
#include "../msgClasses/gtpV2MsgDataTypes.h"

class BearerContextsToBeRemovedInModifyBearerRequest:public GtpV2GroupedIe
{
public:
    BearerContextsToBeRemovedInModifyBearerRequest();
    virtual ~BearerContextsToBeRemovedInModifyBearerRequest();
    bool encodeBearerContextsToBeRemovedInModifyBearerRequest(MsgBuffer &buffer,
                             BearerContextsToBeRemovedInModifyBearerRequestData
                              const &data);

    bool decodeBearerContextsToBeRemovedInModifyBearerRequest (MsgBuffer &buffer,
                             BearerContextsToBeRemovedInModifyBearerRequestData 
                             & data, Uint16 length);

    void displayBearerContextsToBeRemovedInModifyBearerRequestData_v
    (BearerContextsToBeRemovedInModifyBearerRequestData const &data,
     Debug &stream);

private:
    set <Uint16> mandatoryIeSet;
};

#endif