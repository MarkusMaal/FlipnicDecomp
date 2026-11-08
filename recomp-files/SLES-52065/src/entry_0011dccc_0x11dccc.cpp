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

// Function: entry_0011dccc
// Address: 0x11dccc - 0x11dcec
void entry_0011dccc_0x11dccc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011dccc_0x11dccc");
#endif

    switch (ctx->pc) {
        case 0x11dcdcu: goto label_11dcdc;
        default: break;
    }

    ctx->pc = 0x11dcccu;

    // 0x11dccc: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11DCCCu;
    {
        const bool branch_taken_0x11dccc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DCCCu;
        // 0x11dcd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dccc) {
            ctx->pc = 0x11DCF4u;
            return;
        }
    }
    ctx->pc = 0x11DCD4u;
    // 0x11dcd4: 0xc0806b0  jal         func_201AC0
    ctx->pc = 0x11DCD4u;
    SET_GPR_U32(ctx, 31, 0x11DCDCu);
    ctx->pc = 0x11DCD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DCD4u;
    // 0x11dcd8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201AC0u, 0x11DCD4u, 0x11DCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DCDCu;
label_11dcdc:
    // 0x11dcdc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11DCDCu;
    {
        const bool branch_taken_0x11dcdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11dcdc) {
            ctx->pc = 0x11DCECu;
            return;
        }
    }
    ctx->pc = 0x11DCE4u;
    // 0x11dce4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11DCE4u;
    {
        const bool branch_taken_0x11dce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DCE4u;
        // 0x11dce8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dce4) {
            ctx->pc = 0x11DCFCu;
            return;
        }
    }
    ctx->pc = 0x11DCECu;
}
