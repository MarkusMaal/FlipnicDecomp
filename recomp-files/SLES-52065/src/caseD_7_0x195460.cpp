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

// Function: caseD_7
// Address: 0x195460 - 0x195480
void caseD_7_0x195460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x195460");
#endif

    switch (ctx->pc) {
        case 0x195478u: goto label_195478;
        default: break;
    }

    ctx->pc = 0x195460u;

    // 0x195460: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x195460u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x195464: 0x8e06002c  lw          $a2, 0x2C($s0)
    ctx->pc = 0x195464u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x195468: 0x8e070030  lw          $a3, 0x30($s0)
    ctx->pc = 0x195468u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x19546c: 0x8e080034  lw          $t0, 0x34($s0)
    ctx->pc = 0x19546cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x195470: 0xc064f00  jal         func_193C00
    ctx->pc = 0x195470u;
    SET_GPR_U32(ctx, 31, 0x195478u);
    ctx->pc = 0x195474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195470u;
    // 0x195474: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193C00u, 0x195470u, 0x195478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195478u;
label_195478:
    // 0x195478: 0x1000023a  b           . + 4 + (0x23A << 2)
    ctx->pc = 0x195478u;
    {
        const bool branch_taken_0x195478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195478) {
            ctx->pc = 0x195D64u;
            return;
        }
    }
    ctx->pc = 0x195480u;
}
