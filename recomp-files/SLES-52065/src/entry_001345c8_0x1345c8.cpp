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

// Function: entry_001345c8
// Address: 0x1345c8 - 0x1345f0
void entry_001345c8_0x1345c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001345c8_0x1345c8");
#endif

    switch (ctx->pc) {
        case 0x1345d8u: goto label_1345d8;
        default: break;
    }

    ctx->pc = 0x1345c8u;

    // 0x1345c8: 0x8e440050  lw          $a0, 0x50($s2)
    ctx->pc = 0x1345c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x1345cc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1345ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1345d0: 0xc080874  jal         func_2021D0
    ctx->pc = 0x1345D0u;
    SET_GPR_U32(ctx, 31, 0x1345D8u);
    ctx->pc = 0x1345D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1345D0u;
    // 0x1345d4: 0x24a5ee88  addiu       $a1, $a1, -0x1178 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2021D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2021D0u, 0x1345D0u, 0x1345D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1345D8u;
label_1345d8:
    // 0x1345d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1345D8u;
    {
        const bool branch_taken_0x1345d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1345d8) {
            ctx->pc = 0x1345F0u;
            return;
        }
    }
    ctx->pc = 0x1345E0u;
    // 0x1345e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1345e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1345e4: 0xa2420091  sb          $v0, 0x91($s2)
    ctx->pc = 0x1345e4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 145), (uint8_t)GPR_U32(ctx, 2));
    // 0x1345e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1345E8u;
    {
        const bool branch_taken_0x1345e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1345ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1345E8u;
        // 0x1345ec: 0xa2420090  sb          $v0, 0x90($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 144), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1345e8) {
            ctx->pc = 0x1345F4u;
            return;
        }
    }
    ctx->pc = 0x1345F0u;
}
