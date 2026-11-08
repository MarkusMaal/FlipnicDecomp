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

// Function: entry_001db204
// Address: 0x1db204 - 0x1db21c
void entry_001db204_0x1db204(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001db204_0x1db204");
#endif

    switch (ctx->pc) {
        case 0x1db218u: goto label_1db218;
        default: break;
    }

    ctx->pc = 0x1db204u;

    // 0x1db204: 0x8fa90000  lw          $t1, 0x0($sp)
    ctx->pc = 0x1db204u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db208: 0x11200004  beqz        $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DB208u;
    {
        const bool branch_taken_0x1db208 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB208u;
        // 0x1db20c: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db208) {
            ctx->pc = 0x1DB21Cu;
            return;
        }
    }
    ctx->pc = 0x1DB210u;
    // 0x1db210: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x1DB210u;
    SET_GPR_U32(ctx, 31, 0x1DB218u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x1DB210u, 0x1DB218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB218u;
label_1db218:
    // 0x1db218: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x1db218u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1db21cu;
}
