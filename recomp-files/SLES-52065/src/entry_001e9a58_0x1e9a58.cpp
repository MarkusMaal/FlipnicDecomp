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

// Function: entry_001e9a58
// Address: 0x1e9a58 - 0x1e9a8c
void entry_001e9a58_0x1e9a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e9a58_0x1e9a58");
#endif

    switch (ctx->pc) {
        case 0x1e9a60u: goto label_1e9a60;
        case 0x1e9a6cu: goto label_1e9a6c;
        case 0x1e9a7cu: goto label_1e9a7c;
        default: break;
    }

    ctx->pc = 0x1e9a58u;

    // 0x1e9a58: 0xc07a574  jal         func_1E95D0
    ctx->pc = 0x1E9A58u;
    SET_GPR_U32(ctx, 31, 0x1E9A60u);
    ctx->pc = 0x1E9A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9A58u;
    // 0x1e9a5c: 0x27a50394  addiu       $a1, $sp, 0x394 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 916));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E95D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E95D0u, 0x1E9A58u, 0x1E9A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9A60u;
label_1e9a60:
    // 0x1e9a60: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e9a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9a64: 0xc07a59c  jal         func_1E9670
    ctx->pc = 0x1E9A64u;
    SET_GPR_U32(ctx, 31, 0x1E9A6Cu);
    ctx->pc = 0x1E9A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9A64u;
    // 0x1e9a68: 0x27a50398  addiu       $a1, $sp, 0x398 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1E9A64u, 0x1E9A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9A6Cu;
label_1e9a6c:
    // 0x1e9a6c: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x1e9a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1e9a70: 0x8fa50390  lw          $a1, 0x390($sp)
    ctx->pc = 0x1e9a70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 912)));
    // 0x1e9a74: 0xc07a478  jal         func_1E91E0
    ctx->pc = 0x1E9A74u;
    SET_GPR_U32(ctx, 31, 0x1E9A7Cu);
    ctx->pc = 0x1E9A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9A74u;
    // 0x1e9a78: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E91E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E91E0u, 0x1E9A74u, 0x1E9A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9A7Cu;
label_1e9a7c:
    // 0x1e9a7c: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x1E9A7Cu;
    {
        const bool branch_taken_0x1e9a7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9A7Cu;
        // 0x1e9a80: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9a7c) {
            ctx->pc = 0x1E9BBCu;
            return;
        }
    }
    ctx->pc = 0x1E9A84u;
    // 0x1e9a84: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x1E9A84u;
    {
        const bool branch_taken_0x1e9a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9a84) {
            ctx->pc = 0x1E9BCCu;
            return;
        }
    }
    ctx->pc = 0x1E9A8Cu;
}
