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

// Function: entry_00174a54
// Address: 0x174a54 - 0x174a74
void entry_00174a54_0x174a54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174a54_0x174a54");
#endif

    switch (ctx->pc) {
        case 0x174a70u: goto label_174a70;
        default: break;
    }

    ctx->pc = 0x174a54u;

    // 0x174a54: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x174a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x174a58: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x174A58u;
    {
        const bool branch_taken_0x174a58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x174A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174A58u;
        // 0x174a5c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174a58) {
            ctx->pc = 0x174A74u;
            return;
        }
    }
    ctx->pc = 0x174A60u;
    // 0x174a60: 0xae0200b8  sw          $v0, 0xB8($s0)
    ctx->pc = 0x174a60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 2));
    // 0x174a64: 0x8e0200b8  lw          $v0, 0xB8($s0)
    ctx->pc = 0x174a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x174a68: 0xc040168  jal         func_1005A0
    ctx->pc = 0x174A68u;
    SET_GPR_U32(ctx, 31, 0x174A70u);
    ctx->pc = 0x174A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174A68u;
    // 0x174a6c: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x174A68u, 0x174A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174A70u;
label_174a70:
    // 0x174a70: 0xae0200bc  sw          $v0, 0xBC($s0)
    ctx->pc = 0x174a70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 2));
    ctx->pc = 0x174a74u;
}
