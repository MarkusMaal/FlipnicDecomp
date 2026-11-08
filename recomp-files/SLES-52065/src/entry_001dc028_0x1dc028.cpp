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

// Function: entry_001dc028
// Address: 0x1dc028 - 0x1dc040
void entry_001dc028_0x1dc028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dc028_0x1dc028");
#endif

    switch (ctx->pc) {
        case 0x1dc03cu: goto label_1dc03c;
        default: break;
    }

    ctx->pc = 0x1dc028u;

    // 0x1dc028: 0x8fa50180  lw          $a1, 0x180($sp)
    ctx->pc = 0x1dc028u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1dc02c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DC02Cu;
    {
        const bool branch_taken_0x1dc02c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC02Cu;
        // 0x1dc030: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc02c) {
            ctx->pc = 0x1DC040u;
            return;
        }
    }
    ctx->pc = 0x1DC034u;
    // 0x1dc034: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x1DC034u;
    SET_GPR_U32(ctx, 31, 0x1DC03Cu);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x1DC034u, 0x1DC03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC03Cu;
label_1dc03c:
    // 0x1dc03c: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x1dc03cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1dc040u;
}
