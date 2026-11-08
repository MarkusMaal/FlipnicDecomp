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

// Function: entry_00174a14
// Address: 0x174a14 - 0x174a34
void entry_00174a14_0x174a14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174a14_0x174a14");
#endif

    switch (ctx->pc) {
        case 0x174a30u: goto label_174a30;
        default: break;
    }

    ctx->pc = 0x174a14u;

    // 0x174a14: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x174a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x174a18: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x174A18u;
    {
        const bool branch_taken_0x174a18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x174A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174A18u;
        // 0x174a1c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174a18) {
            ctx->pc = 0x174A34u;
            return;
        }
    }
    ctx->pc = 0x174A20u;
    // 0x174a20: 0xae020098  sw          $v0, 0x98($s0)
    ctx->pc = 0x174a20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 2));
    // 0x174a24: 0x8e020098  lw          $v0, 0x98($s0)
    ctx->pc = 0x174a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x174a28: 0xc040168  jal         func_1005A0
    ctx->pc = 0x174A28u;
    SET_GPR_U32(ctx, 31, 0x174A30u);
    ctx->pc = 0x174A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174A28u;
    // 0x174a2c: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x174A28u, 0x174A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174A30u;
label_174a30:
    // 0x174a30: 0xae02009c  sw          $v0, 0x9C($s0)
    ctx->pc = 0x174a30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 2));
    ctx->pc = 0x174a34u;
}
