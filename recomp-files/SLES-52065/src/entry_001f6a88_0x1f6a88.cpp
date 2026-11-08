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

// Function: entry_001f6a88
// Address: 0x1f6a88 - 0x1f6aac
void entry_001f6a88_0x1f6a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f6a88_0x1f6a88");
#endif

    switch (ctx->pc) {
        case 0x1f6aa4u: goto label_1f6aa4;
        default: break;
    }

    ctx->pc = 0x1f6a88u;

    // 0x1f6a88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f6a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f6a8c: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F6A8Cu;
    {
        const bool branch_taken_0x1f6a8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F6A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6A8Cu;
        // 0x1f6a90: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6a8c) {
            ctx->pc = 0x1F6AACu;
            return;
        }
    }
    ctx->pc = 0x1F6A94u;
    // 0x1f6a94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f6a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6a98: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f6a98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6a9c: 0xc07d832  jal         func_1F60C8
    ctx->pc = 0x1F6A9Cu;
    SET_GPR_U32(ctx, 31, 0x1F6AA4u);
    ctx->pc = 0x1F6AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6A9Cu;
    // 0x1f6aa0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F60C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F60C8u, 0x1F6A9Cu, 0x1F6AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6AA4u;
label_1f6aa4:
    // 0x1f6aa4: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1f6aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1f6aa8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1f6aa8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1f6aacu;
}
