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

// Function: entry_00142c9c
// Address: 0x142c9c - 0x142cbc
void entry_00142c9c_0x142c9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142c9c_0x142c9c");
#endif

    switch (ctx->pc) {
        case 0x142ca4u: goto label_142ca4;
        case 0x142cb0u: goto label_142cb0;
        default: break;
    }

    ctx->pc = 0x142c9cu;

    // 0x142c9c: 0xc05077c  jal         func_141DF0
    ctx->pc = 0x142C9Cu;
    SET_GPR_U32(ctx, 31, 0x142CA4u);
    ctx->pc = 0x142CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142C9Cu;
    // 0x142ca0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141DF0u, 0x142C9Cu, 0x142CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142CA4u;
label_142ca4:
    // 0x142ca4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x142ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142ca8: 0xc050778  jal         func_141DE0
    ctx->pc = 0x142CA8u;
    SET_GPR_U32(ctx, 31, 0x142CB0u);
    ctx->pc = 0x142CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142CA8u;
    // 0x142cac: 0xafa200e0  sw          $v0, 0xE0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141DE0u, 0x142CA8u, 0x142CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142CB0u;
label_142cb0:
    // 0x142cb0: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x142cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x142cb4: 0x106200a3  beq         $v1, $v0, . + 4 + (0xA3 << 2)
    ctx->pc = 0x142CB4u;
    {
        const bool branch_taken_0x142cb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x142CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142CB4u;
        // 0x142cb8: 0xafa200dc  sw          $v0, 0xDC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142cb4) {
            ctx->pc = 0x142F44u;
            return;
        }
    }
    ctx->pc = 0x142CBCu;
}
