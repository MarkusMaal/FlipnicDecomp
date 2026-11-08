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

// Function: entry_001b6f90
// Address: 0x1b6f90 - 0x1b6fb4
void entry_001b6f90_0x1b6f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6f90_0x1b6f90");
#endif

    switch (ctx->pc) {
        case 0x1b6fa8u: goto label_1b6fa8;
        default: break;
    }

    ctx->pc = 0x1b6f90u;

    // 0x1b6f90: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x1b6f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1b6f94: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b6f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b6f98: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x1b6f98u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x1b6f9c: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x1b6f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x1b6fa0: 0xc048dec  jal         func_1237B0
    ctx->pc = 0x1B6FA0u;
    SET_GPR_U32(ctx, 31, 0x1B6FA8u);
    ctx->pc = 0x1B6FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6FA0u;
    // 0x1b6fa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1237B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1237B0u, 0x1B6FA0u, 0x1B6FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6FA8u;
label_1b6fa8:
    // 0x1b6fa8: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B6FA8u;
    {
        const bool branch_taken_0x1b6fa8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6FA8u;
        // 0x1b6fac: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6fa8) {
            ctx->pc = 0x1B6FB4u;
            return;
        }
    }
    ctx->pc = 0x1B6FB0u;
    // 0x1b6fb0: 0xaeb0000c  sw          $s0, 0xC($s5)
    ctx->pc = 0x1b6fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 16));
    ctx->pc = 0x1b6fb4u;
}
