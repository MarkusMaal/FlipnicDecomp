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

// Function: entry_00174a74
// Address: 0x174a74 - 0x174a94
void entry_00174a74_0x174a74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174a74_0x174a74");
#endif

    switch (ctx->pc) {
        case 0x174a90u: goto label_174a90;
        default: break;
    }

    ctx->pc = 0x174a74u;

    // 0x174a74: 0x8e0200cc  lw          $v0, 0xCC($s0)
    ctx->pc = 0x174a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x174a78: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x174A78u;
    {
        const bool branch_taken_0x174a78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x174A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174A78u;
        // 0x174a7c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174a78) {
            ctx->pc = 0x174A94u;
            return;
        }
    }
    ctx->pc = 0x174A80u;
    // 0x174a80: 0xae0200c8  sw          $v0, 0xC8($s0)
    ctx->pc = 0x174a80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 2));
    // 0x174a84: 0x8e0200c8  lw          $v0, 0xC8($s0)
    ctx->pc = 0x174a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x174a88: 0xc040168  jal         func_1005A0
    ctx->pc = 0x174A88u;
    SET_GPR_U32(ctx, 31, 0x174A90u);
    ctx->pc = 0x174A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174A88u;
    // 0x174a8c: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x174A88u, 0x174A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174A90u;
label_174a90:
    // 0x174a90: 0xae0200cc  sw          $v0, 0xCC($s0)
    ctx->pc = 0x174a90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 2));
    ctx->pc = 0x174a94u;
}
