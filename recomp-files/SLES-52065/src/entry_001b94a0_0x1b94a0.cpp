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

// Function: entry_001b94a0
// Address: 0x1b94a0 - 0x1b94bc
void entry_001b94a0_0x1b94a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b94a0_0x1b94a0");
#endif

    switch (ctx->pc) {
        case 0x1b94a8u: goto label_1b94a8;
        default: break;
    }

    ctx->pc = 0x1b94a0u;

    // 0x1b94a0: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x1B94A0u;
    SET_GPR_U32(ctx, 31, 0x1B94A8u);
    ctx->pc = 0x1B94A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B94A0u;
    // 0x1b94a4: 0x260500d0  addiu       $a1, $s0, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x1B94A0u, 0x1B94A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B94A8u;
label_1b94a8:
    // 0x1b94a8: 0x8e0500e0  lw          $a1, 0xE0($s0)
    ctx->pc = 0x1b94a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x1b94ac: 0x28a2001e  slti        $v0, $a1, 0x1E
    ctx->pc = 0x1b94acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x1b94b0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B94B0u;
    {
        const bool branch_taken_0x1b94b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B94B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B94B0u;
        // 0x1b94b4: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b94b0) {
            ctx->pc = 0x1B94BCu;
            return;
        }
    }
    ctx->pc = 0x1B94B8u;
    // 0x1b94b8: 0x24a3ffe2  addiu       $v1, $a1, -0x1E
    ctx->pc = 0x1b94b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967266));
    ctx->pc = 0x1b94bcu;
}
