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

// Function: entry_001d1738
// Address: 0x1d1738 - 0x1d1758
void entry_001d1738_0x1d1738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1738_0x1d1738");
#endif

    switch (ctx->pc) {
        case 0x1d1740u: goto label_1d1740;
        case 0x1d1750u: goto label_1d1750;
        default: break;
    }

    ctx->pc = 0x1d1738u;

    // 0x1d1738: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1D1738u;
    SET_GPR_U32(ctx, 31, 0x1D1740u);
    ctx->pc = 0x1D173Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1738u;
    // 0x1d173c: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1D1738u, 0x1D1740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1740u;
label_1d1740:
    // 0x1d1740: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D1740u;
    {
        const bool branch_taken_0x1d1740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1740u;
        // 0x1d1744: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1740) {
            ctx->pc = 0x1D1758u;
            return;
        }
    }
    ctx->pc = 0x1D1748u;
    // 0x1d1748: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1D1748u;
    SET_GPR_U32(ctx, 31, 0x1D1750u);
    ctx->pc = 0x1D174Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1748u;
    // 0x1d174c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1D1748u, 0x1D1750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1750u;
label_1d1750:
    // 0x1d1750: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D1750u;
    {
        const bool branch_taken_0x1d1750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1750) {
            ctx->pc = 0x1D1774u;
            return;
        }
    }
    ctx->pc = 0x1D1758u;
}
