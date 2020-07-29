
/*
 * Copyright 2020-present Infosys Limited
 *
 * SPDX-License-Identifier: Apache-2.0
 */
 
/**************************************
 * attachWfAuthResp.cpp
 * This is an auto generated file.
 * Please do not edit this file.
 * All edits to be made through template source file
 * <TOP-DIR/scripts/SMCodeGen/templates/stateMachineTmpls/state.cpp.tt>
 **************************************/


#include "actionTable.h"
#include "actionHandlers/actionHandlers.h"
#include "mmeSmDefs.h"
#include "utils/mmeStatesUtils.h"
#include "utils/mmeTimerTypes.h"

#include "mmeStates/attachWfAuthResp.h"	
#include "mmeStates/attachWfAuthRespValidate.h"

using namespace mme;
using namespace SM;

/******************************************************************************
* Constructor
******************************************************************************/
AttachWfAuthResp::AttachWfAuthResp():State(attach_wf_auth_resp, defaultStateGuardTimerDuration_c)
{
        stateEntryAction = &MmeStatesUtils::on_state_entry;
        stateExitAction = &MmeStatesUtils::on_state_exit;
        eventValidator = &MmeStatesUtils::validate_event;
}

/******************************************************************************
* Destructor
******************************************************************************/
AttachWfAuthResp::~AttachWfAuthResp()
{
}

/******************************************************************************
* creates and returns static instance
******************************************************************************/
AttachWfAuthResp* AttachWfAuthResp::Instance()
{
        static AttachWfAuthResp state;
        return &state;
}

/******************************************************************************
* initializes eventToActionsMap
******************************************************************************/
void AttachWfAuthResp::initialize()
{
        {
                ActionTable actionTable;
                actionTable.addAction(&ActionHandlers::auth_response_validate);
                actionTable.setNextState(AttachWfAuthRespValidate::Instance());
                eventToActionsMap.insert(pair<uint16_t, ActionTable>(AUTH_RESP_FROM_UE, actionTable));
        }
        {
                ActionTable actionTable;
                actionTable.addAction(&ActionHandlers::handle_state_guard_timeouts);
                eventToActionsMap.insert(pair<uint16_t, ActionTable>(STATE_GUARD_TIMEOUT, actionTable));
        }
        {
                ActionTable actionTable;
                actionTable.addAction(&ActionHandlers::send_attach_reject);
                actionTable.addAction(&ActionHandlers::send_s1_rel_cmd_to_ue);
                actionTable.addAction(&ActionHandlers::abort_attach);
                eventToActionsMap.insert(pair<uint16_t, ActionTable>(ABORT_EVENT, actionTable));
        }
}
