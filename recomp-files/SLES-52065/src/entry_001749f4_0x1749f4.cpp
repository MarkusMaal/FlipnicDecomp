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

// Function: entry_001749f4
// Address: 0x1749f4 - 0x174a14
void entry_001749f4_0x1749f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001749f4_0x1749f4");
#endif

    switch (ctx->pc) {
        case 0x174a10u: goto label_174a10;
        default: break;
    }

    ctx->pc = 0x1749f4u;

    // 0x1749f4: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x1749f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x1749f8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1749F8u;
    {
        const bool branch_taken_0x1749f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1749FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1749F8u;
        // 0x1749fc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1749f8) {
            ctx->pc = 0x174A14u;
            return;
        }
    }
    ctx->pc = 0x174A00u;
    // 0x174a00: 0xae020088  sw          $v0, 0x88($s0)
    ctx->pc = 0x174a00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 2));
    // 0x174a04: 0x8e020088  lw          $v0, 0x88($s0)
    ctx->pc = 0x174a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x174a08: 0xc040168  jal         func_1005A0
    ctx->pc = 0x174A08u;
    SET_GPR_U32(ctx, 31, 0x174A10u);
    ctx->pc = 0x174A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174A08u;
    // 0x174a0c: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x174A08u, 0x174A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174A10u;
label_174a10:
    // 0x174a10: 0xae02008c  sw          $v0, 0x8C($s0)
    ctx->pc = 0x174a10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
    ctx->pc = 0x174a14u;
}
