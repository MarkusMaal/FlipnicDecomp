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

// Function: entry_0013bff4
// Address: 0x13bff4 - 0x13c008
void entry_0013bff4_0x13bff4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013bff4_0x13bff4");
#endif

    ctx->pc = 0x13bff4u;

    // 0x13bff4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x13bff4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x13bff8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13BFF8u;
    {
        const bool branch_taken_0x13bff8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x13BFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BFF8u;
        // 0x13bffc: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bff8) {
            ctx->pc = 0x13C00Cu;
            return;
        }
    }
    ctx->pc = 0x13C000u;
    // 0x13c000: 0xc0401a4  jal         func_100690
    ctx->pc = 0x13C000u;
    SET_GPR_U32(ctx, 31, 0x13C008u);
    ctx->pc = 0x13C004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C000u;
    // 0x13c004: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x13C000u, 0x13C008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C008u;
}
