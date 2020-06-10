
/*
 * Copyright 2020-present Infosys Limited
 *
 * SPDX-License-Identifier: Apache-2.0
 */
 
/**************************************
 * intraS1HoStart.cpp
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

#include "mmeStates/intraS1HoStart.h"	
#include "mmeStates/s1HoWfHoRequestAck.h"

using namespace mme;
using namespace SM;

/******************************************************************************
* Constructor
******************************************************************************/
IntraS1HoStart::IntraS1HoStart():State(intra_s1_ho_start)
{
        stateEntryAction = &MmeStatesUtils::on_state_entry;
        stateExitAction = &MmeStatesUtils::on_state_exit;
        eventValidator = &MmeStatesUtils::validate_event;
}

/******************************************************************************
* Destructor
******************************************************************************/
IntraS1HoStart::~IntraS1HoStart()
{
}

/******************************************************************************
* creates and returns static instance
******************************************************************************/
IntraS1HoStart* IntraS1HoStart::Instance()
{
        static IntraS1HoStart state;
        return &state;
}

/******************************************************************************
* initializes eventToActionsMap
******************************************************************************/
void IntraS1HoStart::initialize()
{
        {
                ActionTable actionTable;
                actionTable.addAction(&ActionHandlers::send_ho_request_to_target_enb);
                actionTable.setNextState(S1HoWfHoRequestAck::Instance());
                eventToActionsMap.insert(pair<uint16_t, ActionTable>(INTRA_S1HO_START, actionTable));
        }
}