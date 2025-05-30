//-----------------------------------------------------------------------------
// Copyright (C) Proxmark3 contributors. See AUTHORS.md for details.
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// See LICENSE.txt for the text of the license.
//-----------------------------------------------------------------------------
// SEOS commands
//-----------------------------------------------------------------------------

#ifndef CMDHFSEOS_H__
#define CMDHFSEOS_H__

#include "common.h"

#define SEOS_ENCRYPTION_2K3DES      0x02
#define SEOS_ENCRYPTION_3K3DES      0x03
#define SEOS_ENCRYPTION_AES         0x09

#define SEOS_HASHING_SHA1           0x06
#define SEOS_HASHING_SHA256         0x07
int infoSeos(bool verbose);
int CmdHFSeos(const char *Cmd);
int seos_kdf(bool encryption, uint8_t *masterKey, uint8_t keyslot,
             uint8_t *adfOid, size_t adfoid_len, uint8_t *diversifier, uint8_t diversifier_len, uint8_t *out, int encryption_algorithm, int hash_algorithm);
#endif
