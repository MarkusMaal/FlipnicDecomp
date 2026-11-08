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

// Function: entry_001efb5c
// Address: 0x1efb5c - 0x1efb84
void entry_001efb5c_0x1efb5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001efb5c_0x1efb5c");
#endif

    switch (ctx->pc) {
        case 0x1efb6cu: goto label_1efb6c;
        case 0x1efb7cu: goto label_1efb7c;
        default: break;
    }

    ctx->pc = 0x1efb5cu;

    // 0x1efb5c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1efb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1efb60: 0x2621025  or          $v0, $s3, $v0
    ctx->pc = 0x1efb60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x1efb64: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1EFB64u;
    SET_GPR_U32(ctx, 31, 0x1EFB6Cu);
    ctx->pc = 0x1EFB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFB64u;
    // 0x1efb68: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1EFB64u, 0x1EFB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFB6Cu;
label_1efb6c:
    // 0x1efb6c: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EFB6Cu;
    {
        const bool branch_taken_0x1efb6c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1efb6c) {
            ctx->pc = 0x1EFB84u;
            return;
        }
    }
    ctx->pc = 0x1EFB74u;
    // 0x1efb74: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1EFB74u;
    SET_GPR_U32(ctx, 31, 0x1EFB7Cu);
    ctx->pc = 0x1EFB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFB74u;
    // 0x1efb78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1EFB74u, 0x1EFB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFB7Cu;
label_1efb7c:
    // 0x1efb7c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1EFB7Cu;
    {
        const bool branch_taken_0x1efb7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFB7Cu;
        // 0x1efb80: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efb7c) {
            ctx->pc = 0x1EFBA4u;
            return;
        }
    }
    ctx->pc = 0x1EFB84u;
}
