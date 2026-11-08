#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_001e7810
// Address: 0x1e7810 - 0x1e7844
void entry_001e7810_0x1e7810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e7810_0x1e7810");
#endif

    ctx->pc = 0x1e7810u;

    // 0x1e7810: 0x97a3006a  lhu         $v1, 0x6A($sp)
    ctx->pc = 0x1e7810u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 106)));
    // 0x1e7814: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x1e7814u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1e7818: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x1E7818u;
    {
        const bool branch_taken_0x1e7818 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E781Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7818u;
        // 0x1e781c: 0x26030001  addiu       $v1, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7818) {
            ctx->pc = 0x1E7844u;
            return;
        }
    }
    ctx->pc = 0x1E7820u;
    // 0x1e7820: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x1e7820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1e7824: 0x328c0  sll         $a1, $v1, 3
    ctx->pc = 0x1e7824u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1e7828: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1e7828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e782c: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x1e782cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1e7830: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e7830u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e7834: 0x27a70068  addiu       $a3, $sp, 0x68
    ctx->pc = 0x1e7834u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x1e7838: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x1e7838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1e783c: 0xc07a034  jal         func_1E80D0
    ctx->pc = 0x1E783Cu;
    SET_GPR_U32(ctx, 31, 0x1E7844u);
    ctx->pc = 0x1E7840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E783Cu;
    // 0x1e7840: 0xa7a20068  sh          $v0, 0x68($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 104), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E80D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E80D0u, 0x1E783Cu, 0x1E7844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7844u;
}
