// Copyright (c) 2020 The PIVX developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef PIVX_CONSENSUS_ZEROCOIN_VERIFY_H
#define PIVX_CONSENSUS_ZEROCOIN_VERIFY_H

#include "consensus/consensus.h"
#include "main.h"
#include "script/interpreter.h"
#include "zmxtchain.h"

// Public coin spend
bool RecalculateMXTSupply(int nHeightStart, bool fSkipZmxt = true);
bool UpdateZMXTSupply(const CBlock& block, CBlockIndex* pindex);

#endif //PIVX_CONSENSUS_ZEROCOIN_VERIFY_H
