/*
 * Copyright (C) 2007-2018 Siemens AG
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published
 * by the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

/*******************************************************************
 *
 * @author Daniel.Peintner.EXT@siemens.com
 * @version 0.9.4 
 * @contact Richard.Kuntschke@siemens.com
 *
 * <p>Code generated by EXIdizer</p>
 * <p>Schema: xmldsig-core-schema.xsd</p>
 *
 *
 ********************************************************************/



/**
 * \file 	EXIDatatypesEncoder.h
 * \brief 	Encoder for datatype definitions
 *
 */

#ifndef EXI_xmldsig_DATATYPES_ENCODER_H
#define EXI_xmldsig_DATATYPES_ENCODER_H

#ifdef __cplusplus
extern "C" {
#endif

#include "xmldsigEXIDatatypes.h"

#if DEPLOY_XMLDSIG_CODEC == SUPPORT_YES

#include <stdint.h>

#include "EXITypes.h"

int encode_xmldsigExiDocument(bitstream_t* stream, struct xmldsigEXIDocument* exiDoc);

#if DEPLOY_XMLDSIG_CODEC_FRAGMENT == SUPPORT_YES
int encode_xmldsigExiFragment(bitstream_t* stream, struct xmldsigEXIFragment* exiFrag);
#endif /* DEPLOY_XMLDSIG_CODEC_FRAGMENT */


#endif /* DEPLOY_XMLDSIG_CODEC */

#ifdef __cplusplus
}
#endif

#endif
