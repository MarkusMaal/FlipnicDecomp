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

// Function: entry_001dc4b0
// Address: 0x1dc4b0 - 0x1dc4c8
void entry_001dc4b0_0x1dc4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dc4b0_0x1dc4b0");
#endif

    switch (ctx->pc) {
        case 0x1dc4c4u: goto label_1dc4c4;
        default: break;
    }

    ctx->pc = 0x1dc4b0u;

    // 0x1dc4b0: 0x8fab00c0  lw          $t3, 0xC0($sp)
    ctx->pc = 0x1dc4b0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1dc4b4: 0x11600004  beqz        $t3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DC4B4u;
    {
        const bool branch_taken_0x1dc4b4 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC4B4u;
        // 0x1dc4b8: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc4b4) {
            ctx->pc = 0x1DC4C8u;
            return;
        }
    }
    ctx->pc = 0x1DC4BCu;
    // 0x1dc4bc: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x1DC4BCu;
    SET_GPR_U32(ctx, 31, 0x1DC4C4u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x1DC4BCu, 0x1DC4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC4C4u;
label_1dc4c4:
    // 0x1dc4c4: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x1dc4c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1dc4c8u;
}
