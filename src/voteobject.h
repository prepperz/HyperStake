// Copyright (c) 2017 The HyperStake Developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef HYPERSTAKE_VOTEOBJECT_H
#define HYPERSTAKE_VOTEOBJECT_H
#define HEADERMASK 0x0fffffff

#inclue "voteproposal.h"

class CVoteObject
{
private:
    int nCardinals;
    uint32_t nFormattedVote;
    bool fVoted;
    CVoteProposal voteProposal;
public:
    CVoteObject(CVoteProposal voteProposal, int nCardinals)
    {
        this->voteProposal = voteProposal;
        this->nCardinals = nCardinals;
    }
    bool FormatVote();
    bool AddVoteToHeader(uint32_t& nVersion);

};

#endif //HYPERSTAKE_VOTEOBJECT_H