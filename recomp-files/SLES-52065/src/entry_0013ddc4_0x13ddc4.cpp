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

// Function: entry_0013ddc4
// Address: 0x13ddc4 - 0x13dde0
void entry_0013ddc4_0x13ddc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ddc4_0x13ddc4");
#endif

    ctx->pc = 0x13ddc4u;

    // 0x13ddc4: 0x8ea30194  lw          $v1, 0x194($s5)
    ctx->pc = 0x13ddc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 404)));
    // 0x13ddc8: 0x223082b  sltu        $at, $s1, $v1
    ctx->pc = 0x13ddc8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x13ddcc: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x13DDCCu;
    {
        const bool branch_taken_0x13ddcc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x13DDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DDCCu;
        // 0x13ddd0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ddcc) {
            ctx->pc = 0x13DDE0u;
            return;
        }
    }
    ctx->pc = 0x13DDD4u;
    // 0x13ddd4: 0x26a40190  addiu       $a0, $s5, 0x190
    ctx->pc = 0x13ddd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 400));
    // 0x13ddd8: 0xc0484a8  jal         func_1212A0
    ctx->pc = 0x13DDD8u;
    SET_GPR_U32(ctx, 31, 0x13DDE0u);
    ctx->pc = 0x13DDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DDD8u;
    // 0x13dddc: 0x27868098  addiu       $a2, $gp, -0x7F68 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1212A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1212A0u, 0x13DDD8u, 0x13DDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DDE0u;
}
