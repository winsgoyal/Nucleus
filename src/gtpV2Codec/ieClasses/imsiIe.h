/*
 * Copyright (c) 2020, Infosys Ltd.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
 /******************************************************************************
 *
 * This is an auto generated file.
 * Please do not edit this file.
 * All edits to be made through template source file
 * <TOP-DIR/scripts/GtpV2StackCodeGen/tts/ietemplate.h.tt>
 ******************************************************************************/
#ifndef IMSIIE_H_
#define IMSIIE_H_

#include "manual/gtpV2Ie.h"



class ImsiIe: public GtpV2Ie {
public:
    ImsiIe();
    virtual ~ImsiIe();

    bool encodeImsiIe(MsgBuffer &buffer,
                 ImsiIeData const &data);
    bool decodeImsiIe(MsgBuffer &buffer,
                 ImsiIeData &data, Uint16 length);
    void displayImsiIe_v(ImsiIeData const &data,
                 Debug &stream);
};

#endif /* IMSIIE_H_ */
