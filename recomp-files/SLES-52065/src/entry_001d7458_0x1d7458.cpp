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

// Function: entry_001d7458
// Address: 0x1d7458 - 0x1d746c
void entry_001d7458_0x1d7458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d7458_0x1d7458");
#endif

    switch (ctx->pc) {
        case 0x1d7468u: goto label_1d7468;
        default: break;
    }

    ctx->pc = 0x1d7458u;

    // 0x1d7458: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D7458u;
    {
        const bool branch_taken_0x1d7458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7458) {
            ctx->pc = 0x1D745Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D7458u;
            // 0x1d745c: 0x8ea30024  lw          $v1, 0x24($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D746Cu;
            return;
        }
    }
    ctx->pc = 0x1D7460u;
    // 0x1d7460: 0xc07753a  jal         func_1DD4E8
    ctx->pc = 0x1D7460u;
    SET_GPR_U32(ctx, 31, 0x1D7468u);
    ctx->pc = 0x1D7464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7460u;
    // 0x1d7464: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD4E8u, 0x1D7460u, 0x1D7468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7468u;
label_1d7468:
    // 0x1d7468: 0x8ea30024  lw          $v1, 0x24($s5)
    ctx->pc = 0x1d7468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    ctx->pc = 0x1d746cu;
}
