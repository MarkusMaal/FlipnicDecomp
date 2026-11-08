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

// Function: entry_00121014
// Address: 0x121014 - 0x121028
void entry_00121014_0x121014(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121014_0x121014");
#endif

    ctx->pc = 0x121014u;

    // 0x121014: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x121014u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x121018: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x121018u;
    {
        const bool branch_taken_0x121018 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x12101Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121018u;
        // 0x12101c: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121018) {
            ctx->pc = 0x12102Cu;
            return;
        }
    }
    ctx->pc = 0x121020u;
    // 0x121020: 0xc0401a4  jal         func_100690
    ctx->pc = 0x121020u;
    SET_GPR_U32(ctx, 31, 0x121028u);
    ctx->pc = 0x121024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121020u;
    // 0x121024: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x121020u, 0x121028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121028u;
}
