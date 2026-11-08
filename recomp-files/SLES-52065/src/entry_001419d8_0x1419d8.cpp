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

// Function: entry_001419d8
// Address: 0x1419d8 - 0x1419f4
void entry_001419d8_0x1419d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001419d8_0x1419d8");
#endif

    ctx->pc = 0x1419d8u;

    // 0x1419d8: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x1419d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1419dc: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1419DCu;
    {
        const bool branch_taken_0x1419dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1419E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1419DCu;
        // 0x1419e0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1419dc) {
            ctx->pc = 0x1419F8u;
            return;
        }
    }
    ctx->pc = 0x1419E4u;
    // 0x1419e4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1419E4u;
    {
        const bool branch_taken_0x1419e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1419E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1419E4u;
        // 0x1419e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1419e4) {
            ctx->pc = 0x1419F4u;
            return;
        }
    }
    ctx->pc = 0x1419ECu;
    // 0x1419ec: 0xc04d95c  jal         func_136570
    ctx->pc = 0x1419ECu;
    SET_GPR_U32(ctx, 31, 0x1419F4u);
    ctx->pc = 0x136570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136570u, 0x1419ECu, 0x1419F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1419F4u;
}
