
/*
 * Copyright 2020-present Infosys Limited
 *
 * SPDX-License-Identifier: Apache-2.0
 */
 
/**************************************
 * attachWfInitCtxtResp.cpp
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

#include "mmeStates/attachWfInitCtxtResp.h"	
#include "mmeStates/attachWfMbResp.h"

using namespace mme;
using namespace SM;

/******************************************************************************
* Constructor
******************************************************************************/
AttachWfInitCtxtResp::AttachWfInitCtxtResp():State(attach_wf_init_ctxt_resp, defaultStateGuardTimerDuration_c)
{
        stateEntryAction = &MmeStatesUtils::on_state_entry;
        stateExitAction = &MmeStatesUtils::on_state_exit;
        eventValidator = &MmeStatesUtils::validate_event;
}

/******************************************************************************
* Destructor
******************************************************************************/
AttachWfInitCtxtResp::~AttachWfInitCtxtResp()
{
}

/******************************************************************************
* creates and returns static instance
******************************************************************************/
AttachWfInitCtxtResp* AttachWfInitCtxtResp::Instance()
{
        static AttachWfInitCtxtResp state;
        return &state;
}

/******************************************************************************
* initializes eventToActionsMap
******************************************************************************/
void AttachWfInitCtxtResp::initialize()
{
        {
                ActionTable actionTable;
                actionTable.addAction(&ActionHandlers::process_init_ctxt_resp);
                actionTable.addAction(&ActionHandlers::send_mb_req_to_sgw);
                actionTable.setNextState(AttachWfMbResp::Instance());
                eventToActionsMap.insert(pair<uint16_t, ActionTable>(INIT_CTXT_RESP_FROM_UE, actionTable));
        }
        {
                ActionTable actionTable;
                actionTable.addAction(&ActionHandlers::handle_state_guard_timeouts);
                eventToActionsMap.insert(pair<uint16_t, ActionTable>(STATE_GUARD_TIMEOUT, actionTable));
        }
        {
                ActionTable actionTable;
                actionTable.addAction(&ActionHandlers::del_session_req);
                actionTable.addAction(&ActionHandlers::send_attach_reject);
                actionTable.addAction(&ActionHandlers::send_s1_rel_cmd_to_ue);
                actionTable.addAction(&ActionHandlers::abort_attach);
                eventToActionsMap.insert(pair<uint16_t, ActionTable>(ABORT_EVENT, actionTable));
        }
}
