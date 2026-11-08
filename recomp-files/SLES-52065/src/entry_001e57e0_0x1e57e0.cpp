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

// Function: entry_001e57e0
// Address: 0x1e57e0 - 0x1e5808
void entry_001e57e0_0x1e57e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e57e0_0x1e57e0");
#endif

    switch (ctx->pc) {
        case 0x1e57f4u: goto label_1e57f4;
        default: break;
    }

    ctx->pc = 0x1e57e0u;

    // 0x1e57e0: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1E57E0u;
    {
        const bool branch_taken_0x1e57e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E57E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E57E0u;
        // 0x1e57e4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e57e0) {
            ctx->pc = 0x1E580Cu;
            return;
        }
    }
    ctx->pc = 0x1E57E8u;
    // 0x1e57e8: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x1e57e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1e57ec: 0xc080dea  jal         func_2037A8
    ctx->pc = 0x1E57ECu;
    SET_GPR_U32(ctx, 31, 0x1E57F4u);
    ctx->pc = 0x1E57F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E57ECu;
    // 0x1e57f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2037A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2037A8u, 0x1E57ECu, 0x1E57F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E57F4u;
label_1e57f4:
    // 0x1e57f4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e57f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e57f8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E57F8u;
    {
        const bool branch_taken_0x1e57f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e57f8) {
            ctx->pc = 0x1E5808u;
            return;
        }
    }
    ctx->pc = 0x1E5800u;
    // 0x1e5800: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E5800u;
    {
        const bool branch_taken_0x1e5800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5800u;
        // 0x1e5804: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5800) {
            ctx->pc = 0x1E580Cu;
            return;
        }
    }
    ctx->pc = 0x1E5808u;
}
