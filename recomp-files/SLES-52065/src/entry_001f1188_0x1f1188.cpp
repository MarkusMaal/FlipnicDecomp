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

// Function: entry_001f1188
// Address: 0x1f1188 - 0x1f11b0
void entry_001f1188_0x1f1188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f1188_0x1f1188");
#endif

    switch (ctx->pc) {
        case 0x1f1198u: goto label_1f1198;
        case 0x1f11a8u: goto label_1f11a8;
        default: break;
    }

    ctx->pc = 0x1f1188u;

    // 0x1f1188: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1f1188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1f118c: 0x2621025  or          $v0, $s3, $v0
    ctx->pc = 0x1f118cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x1f1190: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F1190u;
    SET_GPR_U32(ctx, 31, 0x1F1198u);
    ctx->pc = 0x1F1194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1190u;
    // 0x1f1194: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F1190u, 0x1F1198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1198u;
label_1f1198:
    // 0x1f1198: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F1198u;
    {
        const bool branch_taken_0x1f1198 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1198) {
            ctx->pc = 0x1F11B0u;
            return;
        }
    }
    ctx->pc = 0x1F11A0u;
    // 0x1f11a0: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F11A0u;
    SET_GPR_U32(ctx, 31, 0x1F11A8u);
    ctx->pc = 0x1F11A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F11A0u;
    // 0x1f11a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F11A0u, 0x1F11A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F11A8u;
label_1f11a8:
    // 0x1f11a8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1F11A8u;
    {
        const bool branch_taken_0x1f11a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F11ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F11A8u;
        // 0x1f11ac: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f11a8) {
            ctx->pc = 0x1F11D0u;
            return;
        }
    }
    ctx->pc = 0x1F11B0u;
}
