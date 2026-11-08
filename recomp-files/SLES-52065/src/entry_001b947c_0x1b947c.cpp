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

// Function: entry_001b947c
// Address: 0x1b947c - 0x1b94a0
void entry_001b947c_0x1b947c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b947c_0x1b947c");
#endif

    switch (ctx->pc) {
        case 0x1b9494u: goto label_1b9494;
        default: break;
    }

    ctx->pc = 0x1b947cu;

    // 0x1b947c: 0x920200c1  lbu         $v0, 0xC1($s0)
    ctx->pc = 0x1b947cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 193)));
    // 0x1b9480: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B9480u;
    {
        const bool branch_taken_0x1b9480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B9484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9480u;
        // 0x1b9484: 0x260400b0  addiu       $a0, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9480) {
            ctx->pc = 0x1B94A0u;
            return;
        }
    }
    ctx->pc = 0x1B9488u;
    // 0x1b9488: 0x260400b0  addiu       $a0, $s0, 0xB0
    ctx->pc = 0x1b9488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x1b948c: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x1B948Cu;
    SET_GPR_U32(ctx, 31, 0x1B9494u);
    ctx->pc = 0x1B9490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B948Cu;
    // 0x1b9490: 0x260500d0  addiu       $a1, $s0, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x1B948Cu, 0x1B9494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9494u;
label_1b9494:
    // 0x1b9494: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x1B9494u;
    {
        const bool branch_taken_0x1b9494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9494) {
            ctx->pc = 0x1B95D4u;
            return;
        }
    }
    ctx->pc = 0x1B949Cu;
    // 0x1b949c: 0x260400b0  addiu       $a0, $s0, 0xB0
    ctx->pc = 0x1b949cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    ctx->pc = 0x1b94a0u;
}
