
/*
 * Copyright 2020-present Infosys Limited
 *
 * SPDX-License-Identifier: Apache-2.0
 */
 
/**************************************
 * niDetachWfDetAccptDelSessResp.cpp
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

#include "mmeStates/niDetachWfDetAccptDelSessResp.h"	
#include "mmeStates/niDetachWfDelSessResp.h"	
#include "mmeStates/niDetachWfDetachAccept.h"

using namespace mme;
using namespace SM;

/******************************************************************************
* Constructor
******************************************************************************/
NiDetachWfDetAccptDelSessResp::NiDetachWfDetAccptDelSessResp():State(ni_detach_wf_det_accpt_del_sess_resp, defaultStateGuardTimerDuration_c)
{
        stateEntryAction = &MmeStatesUtils::on_state_entry;
        stateExitAction = &MmeStatesUtils::on_state_exit;
        eventValidator = &MmeStatesUtils::validate_event;
}

/******************************************************************************
* Destructor
******************************************************************************/
NiDetachWfDetAccptDelSessResp::~NiDetachWfDetAccptDelSessResp()
{
}

/******************************************************************************
* creates and returns static instance
******************************************************************************/
NiDetachWfDetAccptDelSessResp* NiDetachWfDetAccptDelSessResp::Instance()
{
        static NiDetachWfDetAccptDelSessResp state;
        return &state;
}

/******************************************************************************
* initializes eventToActionsMap
******************************************************************************/
void NiDetachWfDetAccptDelSessResp::initialize()
{
        {
                ActionTable actionTable;
                actionTable.addAction(&ActionHandlers::process_detach_accept_from_ue);
                actionTable.setNextState(NiDetachWfDelSessResp::Instance());
                eventToActionsMap.insert(pair<uint16_t, ActionTable>(DETACH_ACCEPT_FROM_UE, actionTable));
        }
        {
                ActionTable actionTable;
                actionTable.addAction(&ActionHandlers::process_del_session_resp);
                actionTable.setNextState(NiDetachWfDetachAccept::Instance());
                eventToActionsMap.insert(pair<uint16_t, ActionTable>(DEL_SESSION_RESP_FROM_SGW, actionTable));
        }
        {
                ActionTable actionTable;
                actionTable.addAction(&ActionHandlers::handle_state_guard_timeouts);
                eventToActionsMap.insert(pair<uint16_t, ActionTable>(STATE_GUARD_TIMEOUT, actionTable));
        }
        {
                ActionTable actionTable;
                actionTable.addAction(&ActionHandlers::send_s1_rel_cmd_to_ue);
                actionTable.addAction(&ActionHandlers::abort_detach);
                eventToActionsMap.insert(pair<uint16_t, ActionTable>(ABORT_EVENT, actionTable));
        }
}
