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

// Function: entry_001e1cfc
// Address: 0x1e1cfc - 0x1e1d10
void entry_001e1cfc_0x1e1cfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e1cfc_0x1e1cfc");
#endif

    ctx->pc = 0x1e1cfcu;

    // 0x1e1cfc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e1cfcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1e1d00: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E1D00u;
    {
        const bool branch_taken_0x1e1d00 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1E1D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1D00u;
        // 0x1e1d04: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1d00) {
            ctx->pc = 0x1E1D14u;
            return;
        }
    }
    ctx->pc = 0x1E1D08u;
    // 0x1e1d08: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1E1D08u;
    SET_GPR_U32(ctx, 31, 0x1E1D10u);
    ctx->pc = 0x1E1D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1D08u;
    // 0x1e1d0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1E1D08u, 0x1E1D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1D10u;
}
