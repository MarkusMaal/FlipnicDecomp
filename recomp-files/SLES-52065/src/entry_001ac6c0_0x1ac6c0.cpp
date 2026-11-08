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

// Function: entry_001ac6c0
// Address: 0x1ac6c0 - 0x1ac6f8
void entry_001ac6c0_0x1ac6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ac6c0_0x1ac6c0");
#endif

    switch (ctx->pc) {
        case 0x1ac6c8u: goto label_1ac6c8;
        case 0x1ac6f0u: goto label_1ac6f0;
        default: break;
    }

    ctx->pc = 0x1ac6c0u;

    // 0x1ac6c0: 0xc055c40  jal         func_157100
    ctx->pc = 0x1AC6C0u;
    SET_GPR_U32(ctx, 31, 0x1AC6C8u);
    ctx->pc = 0x157100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157100u, 0x1AC6C0u, 0x1AC6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC6C8u;
label_1ac6c8:
    // 0x1ac6c8: 0x8e2306e0  lw          $v1, 0x6E0($s1)
    ctx->pc = 0x1ac6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1760)));
    // 0x1ac6cc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1ac6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1ac6d0: 0x1c600070  bgtz        $v1, . + 4 + (0x70 << 2)
    ctx->pc = 0x1AC6D0u;
    {
        const bool branch_taken_0x1ac6d0 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1AC6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC6D0u;
        // 0x1ac6d4: 0xae2306e0  sw          $v1, 0x6E0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1760), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac6d0) {
            ctx->pc = 0x1AC894u;
            return;
        }
    }
    ctx->pc = 0x1AC6D8u;
    // 0x1ac6d8: 0x8e2206c8  lw          $v0, 0x6C8($s1)
    ctx->pc = 0x1ac6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1736)));
    // 0x1ac6dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ac6dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac6e0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1ac6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ac6e4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1ac6e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1ac6e8: 0xc063e08  jal         func_18F820
    ctx->pc = 0x1AC6E8u;
    SET_GPR_U32(ctx, 31, 0x1AC6F0u);
    ctx->pc = 0x1AC6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC6E8u;
    // 0x1ac6ec: 0xae2206cc  sw          $v0, 0x6CC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1740), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1AC6E8u, 0x1AC6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC6F0u;
label_1ac6f0:
    // 0x1ac6f0: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x1AC6F0u;
    {
        const bool branch_taken_0x1ac6f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac6f0) {
            ctx->pc = 0x1AC894u;
            return;
        }
    }
    ctx->pc = 0x1AC6F8u;
}
