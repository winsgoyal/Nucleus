
/*
 * Copyright 2019-present, Infosys Limited.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/**************************************
 * 
 * This is an auto generated file.
 * Please do not edit this file.
 * All edits to be made through template source file
 * <TOP-DIR/scripts/SMCodeGen/templates/stateMachineTmpls/actionHandlers.h.tt>
 **************************************/
#ifndef ACTIONHANDLERS_H_
#define ACTIONHANDLERS_H_

#include "smTypes.h"

namespace mme
{
    class ActionHandlers
    {

        /***************************************
        * Constructor
        ****************************************/
        ActionHandlers()
        {
        }

        /***************************************
        * Destructor
        ****************************************/
        ~ActionHandlers()
        {
        }

        public:

        /**********************************************
        * Action handler : abort_attach
        ***********************************************/
        static SM::ActStatus abort_attach(SM::ControlBlock& cb);                

        /**********************************************
        * Action handler : abort_detach
        ***********************************************/
        static SM::ActStatus abort_detach(SM::ControlBlock& cb);                

        /**********************************************
        * Action handler : abort_erab_mod_indication
        ***********************************************/
        static SM::ActStatus abort_erab_mod_indication(SM::ControlBlock& cb);                

        /**********************************************
        * Action handler : abort_handover
        ***********************************************/
        static SM::ActStatus abort_handover(SM::ControlBlock& cb);                

        /**********************************************
        * Action handler : abort_s1_release
        ***********************************************/
        static SM::ActStatus abort_s1_release(SM::ControlBlock& cb);                

        /**********************************************
        * Action handler : abort_service_req_procedure
        ***********************************************/
        static SM::ActStatus abort_service_req_procedure(SM::ControlBlock& cb);                

        /**********************************************
        * Action handler : attach_done
        ***********************************************/
        static SM::ActStatus attach_done(SM::ControlBlock& cb);                

        /**********************************************
        * Action handler : auth_req_to_ue
        ***********************************************/
        static SM::ActStatus auth_req_to_ue(SM::ControlBlock& cb);                

        /**********************************************
        * Action handler : auth_response_validate
        ***********************************************/
        static SM::ActStatus auth_response_validate(SM::ControlBlock& cb);                

        /**********************************************
        * Action handler : check_and_send_emm_info
        ***********************************************/
        static SM::ActStatus check_and_send_emm_info(SM::ControlBlock& cb);                

        /**********************************************
        * Action handler : check_esm_info_req_required
        ***********************************************/
        static SM::ActStatus check_esm_info_req_required(SM::ControlBlock& cb);                

        /**********************************************
        * Action handler : cs_req_to_sgw
        ***********************************************/
        static SM::ActStatus cs_req_to_sgw(SM::ControlBlock& cb);                

        /**********************************************
        * Action handler : default_attach_req_handler
        ***********************************************/
        static SM::ActStatus default_attach_req_handler(SM::ControlBlock& cb);                

        /**********************************************
        * Action handler : default_cancel_loc_req_handler
        ***********************************************/
        static SM::ActStatus default_cancel_loc_req_handler(SM::ControlBlock& cb);                

        /**********************************************
        * Action handler : default_ddn_handler
        ***********************************************/
        static SM::ActStatus default_ddn_handler(SM::ControlBlock& cb);                

        /**********************************************
        * Action handler : default_detach_req_handler
        ***********************************************/
        static SM::ActStatus default_detach_req_handler(SM::ControlBlock& cb);                

        /**********************************************
        * Action handler : default_erab_mod_indication_handler
        ***********************************************/
        static SM::ActStatus default_erab_mod_indication_handler(SM::ControlBlock& cb);                

        /**********************************************
        * Action handler : default_s1_ho_handler
        ***********************************************/
        static SM::ActStatus default_s1_ho_handler(SM::ControlBlock& cb);                

        /**********************************************
        * Action handler : default_s1_release_req_handler
        ***********************************************/
        static SM::ActStatus default_s1_release_req_handler(SM::ControlBlock& cb);                

        /**********************************************
        * Action handler : default_service_req_handler
        ***********************************************/
        static SM::ActStatus default_service_req_handler(SM::ControlBlock& cb);                

        /**********************************************
        * Action handler : default_tau_req_handler
        ***********************************************/
        static SM::ActStatus default_tau_req_handler(SM::ControlBlock& cb);                

        /**********************************************
        * Action handler : del_session_req
        ***********************************************/
        static SM::ActStatus del_session_req(SM::ControlBlock& cb);                

        /**********************************************
        * Action handler : detach_accept_to_ue
        ***********************************************/
        static SM::ActStatus detach_accept_to_ue(SM::ControlBlock& cb);                

        /**********************************************
        * Action handler : erab_mod_ind_complete
        ***********************************************/
        static SM::ActStatus erab_mod_ind_complete(SM::ControlBlock& cb);                

        /**********************************************
        * Action handler : handle_attach_request
        ***********************************************/
        static SM::ActStatus handle_attach_request(SM::ControlBlock& cb);                

        /**********************************************
        * Action handler : handle_state_guard_timeouts
        ***********************************************/
        static SM::ActStatus handle_state_guard_timeouts(SM::ControlBlock& cb);                

        /**********************************************
        * Action handler : handle_state_guard_timeouts_for_csreq_ind
        ***********************************************/
        static SM::ActStatus handle_state_guard_timeouts_for_csreq_ind(SM::ControlBlock& cb);                

        /**********************************************
        * Action handler : handle_state_guard_timeouts_for_erab_mod_ind
        ***********************************************/
        static SM::ActStatus handle_state_guard_timeouts_for_erab_mod_ind(SM::ControlBlock& cb);                

        /**********************************************
        * Action handler : ho_complete
        ***********************************************/
        static SM::ActStatus ho_complete(SM::ControlBlock& cb);                

        /**********************************************
        * Action handler : is_tau_required
        ***********************************************/
        static SM::ActStatus is_tau_required(SM::ControlBlock& cb);                

        /**********************************************
        * Action handler : ni_detach_req_to_ue
        ***********************************************/
        static SM::ActStatus ni_detach_req_to_ue(SM::ControlBlock& cb);                

        /**********************************************
        * Action handler : process_aia
        ***********************************************/
        static SM::ActStatus process_aia(SM::ControlBlock& cb);                

        /**********************************************
        * Action handler : process_attach_cmp_from_ue
        ***********************************************/
        static SM::ActStatus process_attach_cmp_from_ue(SM::ControlBlock& cb);                

        /**********************************************
        * Action handler : process_cs_resp
        ***********************************************/
        static SM::ActStatus process_cs_resp(SM::ControlBlock& cb);                

        /**********************************************
        * Action handler : process_del_session_resp
        ***********************************************/
        static SM::ActStatus process_del_session_resp(SM::ControlBlock& cb);                

        /**********************************************
        * Action handler : process_detach_accept_from_ue
        ***********************************************/
        static SM::ActStatus process_detach_accept_from_ue(SM::ControlBlock& cb);                

        /**********************************************
        * Action handler : process_esm_info_resp
        ***********************************************/
        static SM::ActStatus process_esm_info_resp(SM::ControlBlock& cb);                

        /**********************************************
        * Action handler : process_ho_cancel_req
        ***********************************************/
        static SM::ActStatus process_ho_cancel_req(SM::ControlBlock& cb);                

        /**********************************************
        * Action handler : process_ho_failure
        ***********************************************/
        static SM::ActStatus process_ho_failure(SM::ControlBlock& cb);                

        /**********************************************
        * Action handler : process_ho_notify
        ***********************************************/
        static SM::ActStatus process_ho_notify(SM::ControlBlock& cb);                

        /**********************************************
        * Action handler : process_ho_request_ack
        ***********************************************/
        static SM::ActStatus process_ho_request_ack(SM::ControlBlock& cb);                

        /**********************************************
        * Action handler : process_identity_response
        ***********************************************/
        static SM::ActStatus process_identity_response(SM::ControlBlock& cb);                

        /**********************************************
        * Action handler : process_init_ctxt_resp
        ***********************************************/
        static SM::ActStatus process_init_ctxt_resp(SM::ControlBlock& cb);                

        /**********************************************
        * Action handler : process_init_ctxt_resp_svc_req
        ***********************************************/
        static SM::ActStatus process_init_ctxt_resp_svc_req(SM::ControlBlock& cb);                

        /**********************************************
        * Action handler : process_mb_resp
        ***********************************************/
        static SM::ActStatus process_mb_resp(SM::ControlBlock& cb);                

        /**********************************************
        * Action handler : process_mb_resp_for_ho
        ***********************************************/
        static SM::ActStatus process_mb_resp_for_ho(SM::ControlBlock& cb);                

        /**********************************************
        * Action handler : process_mb_resp_svc_req
        ***********************************************/
        static SM::ActStatus process_mb_resp_svc_req(SM::ControlBlock& cb);                

        /**********************************************
        * Action handler : process_pur_resp
        ***********************************************/
        static SM::ActStatus process_pur_resp(SM::ControlBlock& cb);                

        /**********************************************
        * Action handler : process_rel_ab_resp_from_sgw
        ***********************************************/
        static SM::ActStatus process_rel_ab_resp_from_sgw(SM::ControlBlock& cb);                

        /**********************************************
        * Action handler : process_sec_mode_resp
        ***********************************************/
        static SM::ActStatus process_sec_mode_resp(SM::ControlBlock& cb);                

        /**********************************************
        * Action handler : process_service_request
        ***********************************************/
        static SM::ActStatus process_service_request(SM::ControlBlock& cb);                

        /**********************************************
        * Action handler : process_tau_request
        ***********************************************/
        static SM::ActStatus process_tau_request(SM::ControlBlock& cb);                

        /**********************************************
        * Action handler : process_ue_ctxt_rel_comp
        ***********************************************/
        static SM::ActStatus process_ue_ctxt_rel_comp(SM::ControlBlock& cb);                

        /**********************************************
        * Action handler : process_ue_ctxt_rel_comp_for_detach
        ***********************************************/
        static SM::ActStatus process_ue_ctxt_rel_comp_for_detach(SM::ControlBlock& cb);                

        /**********************************************
        * Action handler : process_ula
        ***********************************************/
        static SM::ActStatus process_ula(SM::ControlBlock& cb);                

        /**********************************************
        * Action handler : purge_req
        ***********************************************/
        static SM::ActStatus purge_req(SM::ControlBlock& cb);                

        /**********************************************
        * Action handler : sec_mode_cmd_to_ue
        ***********************************************/
        static SM::ActStatus sec_mode_cmd_to_ue(SM::ControlBlock& cb);                

        /**********************************************
        * Action handler : send_air_to_hss
        ***********************************************/
        static SM::ActStatus send_air_to_hss(SM::ControlBlock& cb);                

        /**********************************************
        * Action handler : send_attach_reject
        ***********************************************/
        static SM::ActStatus send_attach_reject(SM::ControlBlock& cb);                

        /**********************************************
        * Action handler : send_auth_reject
        ***********************************************/
        static SM::ActStatus send_auth_reject(SM::ControlBlock& cb);                

        /**********************************************
        * Action handler : send_ddn_ack_to_sgw
        ***********************************************/
        static SM::ActStatus send_ddn_ack_to_sgw(SM::ControlBlock& cb);                

        /**********************************************
        * Action handler : send_erab_mod_conf_to_enb
        ***********************************************/
        static SM::ActStatus send_erab_mod_conf_to_enb(SM::ControlBlock& cb);                

        /**********************************************
        * Action handler : send_esm_info_req_to_ue
        ***********************************************/
        static SM::ActStatus send_esm_info_req_to_ue(SM::ControlBlock& cb);                

        /**********************************************
        * Action handler : send_ho_cancel_ack_to_src_enb
        ***********************************************/
        static SM::ActStatus send_ho_cancel_ack_to_src_enb(SM::ControlBlock& cb);                

        /**********************************************
        * Action handler : send_ho_command_to_src_enb
        ***********************************************/
        static SM::ActStatus send_ho_command_to_src_enb(SM::ControlBlock& cb);                

        /**********************************************
        * Action handler : send_ho_prep_failure_to_src_enb
        ***********************************************/
        static SM::ActStatus send_ho_prep_failure_to_src_enb(SM::ControlBlock& cb);                

        /**********************************************
        * Action handler : send_ho_request_to_target_enb
        ***********************************************/
        static SM::ActStatus send_ho_request_to_target_enb(SM::ControlBlock& cb);                

        /**********************************************
        * Action handler : send_identity_request_to_ue
        ***********************************************/
        static SM::ActStatus send_identity_request_to_ue(SM::ControlBlock& cb);                

        /**********************************************
        * Action handler : send_init_ctxt_req_to_ue
        ***********************************************/
        static SM::ActStatus send_init_ctxt_req_to_ue(SM::ControlBlock& cb);                

        /**********************************************
        * Action handler : send_init_ctxt_req_to_ue_svc_req
        ***********************************************/
        static SM::ActStatus send_init_ctxt_req_to_ue_svc_req(SM::ControlBlock& cb);                

        /**********************************************
        * Action handler : send_mb_req_to_sgw
        ***********************************************/
        static SM::ActStatus send_mb_req_to_sgw(SM::ControlBlock& cb);                

        /**********************************************
        * Action handler : send_mb_req_to_sgw_for_ho
        ***********************************************/
        static SM::ActStatus send_mb_req_to_sgw_for_ho(SM::ControlBlock& cb);                

        /**********************************************
        * Action handler : send_mb_req_to_sgw_svc_req
        ***********************************************/
        static SM::ActStatus send_mb_req_to_sgw_svc_req(SM::ControlBlock& cb);                

        /**********************************************
        * Action handler : send_mme_status_tranfer_to_target_enb
        ***********************************************/
        static SM::ActStatus send_mme_status_tranfer_to_target_enb(SM::ControlBlock& cb);                

        /**********************************************
        * Action handler : send_paging_req_to_ue
        ***********************************************/
        static SM::ActStatus send_paging_req_to_ue(SM::ControlBlock& cb);                

        /**********************************************
        * Action handler : send_rel_ab_req_to_sgw
        ***********************************************/
        static SM::ActStatus send_rel_ab_req_to_sgw(SM::ControlBlock& cb);                

        /**********************************************
        * Action handler : send_s1_rel_cmd_to_src_enb_for_ho
        ***********************************************/
        static SM::ActStatus send_s1_rel_cmd_to_src_enb_for_ho(SM::ControlBlock& cb);                

        /**********************************************
        * Action handler : send_s1_rel_cmd_to_target_enb
        ***********************************************/
        static SM::ActStatus send_s1_rel_cmd_to_target_enb(SM::ControlBlock& cb);                

        /**********************************************
        * Action handler : send_s1_rel_cmd_to_ue
        ***********************************************/
        static SM::ActStatus send_s1_rel_cmd_to_ue(SM::ControlBlock& cb);                

        /**********************************************
        * Action handler : send_s1_rel_cmd_to_ue_for_detach
        ***********************************************/
        static SM::ActStatus send_s1_rel_cmd_to_ue_for_detach(SM::ControlBlock& cb);                

        /**********************************************
        * Action handler : send_service_reject
        ***********************************************/
        static SM::ActStatus send_service_reject(SM::ControlBlock& cb);                

        /**********************************************
        * Action handler : send_tau_response_to_ue
        ***********************************************/
        static SM::ActStatus send_tau_response_to_ue(SM::ControlBlock& cb);                

        /**********************************************
        * Action handler : send_ulr_to_hss
        ***********************************************/
        static SM::ActStatus send_ulr_to_hss(SM::ControlBlock& cb);                

        /**********************************************
        * Action handler : service_request_complete
        ***********************************************/
        static SM::ActStatus service_request_complete(SM::ControlBlock& cb);                

        /**********************************************
        * Action handler : validate_imsi_in_ue_context
        ***********************************************/
        static SM::ActStatus validate_imsi_in_ue_context(SM::ControlBlock& cb);                
    };//ActionHandlers
};//mme

#endif /* ACTIONHANDLERS_H_ */