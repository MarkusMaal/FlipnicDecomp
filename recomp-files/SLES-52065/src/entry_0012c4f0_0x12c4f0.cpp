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

// Function: entry_0012c4f0
// Address: 0x12c4f0 - 0x12c520
void entry_0012c4f0_0x12c4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c4f0_0x12c4f0");
#endif

    switch (ctx->pc) {
        case 0x12c504u: goto label_12c504;
        default: break;
    }

    ctx->pc = 0x12c4f0u;

    // 0x12c4f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12c4f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c4f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12c4f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c4f8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x12c4f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12c4fc: 0xc07d94c  jal         func_1F6530
    ctx->pc = 0x12C4FCu;
    SET_GPR_U32(ctx, 31, 0x12C504u);
    ctx->pc = 0x12C500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C4FCu;
    // 0x12c500: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6530u, 0x12C4FCu, 0x12C504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C504u;
label_12c504:
    // 0x12c504: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12c504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12c508: 0x14430073  bne         $v0, $v1, . + 4 + (0x73 << 2)
    ctx->pc = 0x12C508u;
    {
        const bool branch_taken_0x12c508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x12c508) {
            ctx->pc = 0x12C6D8u;
            return;
        }
    }
    ctx->pc = 0x12C510u;
    // 0x12c510: 0x82420066  lb          $v0, 0x66($s2)
    ctx->pc = 0x12c510u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 102)));
    // 0x12c514: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12c514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12c518: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x12C518u;
    {
        const bool branch_taken_0x12c518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C518u;
        // 0x12c51c: 0xa2420066  sb          $v0, 0x66($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 102), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c518) {
            ctx->pc = 0x12C6D8u;
            return;
        }
    }
    ctx->pc = 0x12C520u;
}
