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

// Function: entry_00171514
// Address: 0x171514 - 0x17152c
void entry_00171514_0x171514(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171514_0x171514");
#endif

    ctx->pc = 0x171514u;

    // 0x171514: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x171514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x171518: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x171518u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x17151c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17151Cu;
    {
        const bool branch_taken_0x17151c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x171520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17151Cu;
        // 0x171520: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17151c) {
            ctx->pc = 0x17152Cu;
            return;
        }
    }
    ctx->pc = 0x171524u;
    // 0x171524: 0xc0401a4  jal         func_100690
    ctx->pc = 0x171524u;
    SET_GPR_U32(ctx, 31, 0x17152Cu);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x171524u, 0x17152Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17152Cu;
}
