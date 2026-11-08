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

// Function: entry_0013c2cc
// Address: 0x13c2cc - 0x13c2e0
void entry_0013c2cc_0x13c2cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c2cc_0x13c2cc");
#endif

    ctx->pc = 0x13c2ccu;

    // 0x13c2cc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x13c2ccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x13c2d0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13C2D0u;
    {
        const bool branch_taken_0x13c2d0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x13C2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C2D0u;
        // 0x13c2d4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c2d0) {
            ctx->pc = 0x13C2E4u;
            return;
        }
    }
    ctx->pc = 0x13C2D8u;
    // 0x13c2d8: 0xc0401a4  jal         func_100690
    ctx->pc = 0x13C2D8u;
    SET_GPR_U32(ctx, 31, 0x13C2E0u);
    ctx->pc = 0x13C2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C2D8u;
    // 0x13c2dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x13C2D8u, 0x13C2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C2E0u;
}
