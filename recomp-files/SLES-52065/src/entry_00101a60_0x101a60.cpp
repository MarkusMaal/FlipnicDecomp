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

// Function: entry_00101a60
// Address: 0x101a60 - 0x101a80
void entry_00101a60_0x101a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101a60_0x101a60");
#endif

    switch (ctx->pc) {
        case 0x101a70u: goto label_101a70;
        default: break;
    }

    ctx->pc = 0x101a60u;

    // 0x101a60: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x101a60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x101a64: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x101a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101a68: 0xc06cf0c  jal         func_1B3C30
    ctx->pc = 0x101A68u;
    SET_GPR_U32(ctx, 31, 0x101A70u);
    ctx->pc = 0x101A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101A68u;
    // 0x101a6c: 0x24a5dff8  addiu       $a1, $a1, -0x2008 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x101A68u, 0x101A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101A70u;
label_101a70:
    // 0x101a70: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x101A70u;
    {
        const bool branch_taken_0x101a70 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x101A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101A70u;
        // 0x101a74: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101a70) {
            ctx->pc = 0x101A80u;
            return;
        }
    }
    ctx->pc = 0x101A78u;
    // 0x101a78: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x101A78u;
    {
        const bool branch_taken_0x101a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x101a78) {
            ctx->pc = 0x101A98u;
            return;
        }
    }
    ctx->pc = 0x101A80u;
}
