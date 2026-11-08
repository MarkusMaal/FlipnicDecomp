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

// Function: entry_0019f334
// Address: 0x19f334 - 0x19f358
void entry_0019f334_0x19f334(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f334_0x19f334");
#endif

    switch (ctx->pc) {
        case 0x19f350u: goto label_19f350;
        default: break;
    }

    ctx->pc = 0x19f334u;

    // 0x19f334: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19F334u;
    {
        const bool branch_taken_0x19f334 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19f334) {
            ctx->pc = 0x19F358u;
            return;
        }
    }
    ctx->pc = 0x19F33Cu;
    // 0x19f33c: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19F33Cu;
    {
        const bool branch_taken_0x19f33c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f33c) {
            ctx->pc = 0x19F364u;
            return;
        }
    }
    ctx->pc = 0x19F344u;
    // 0x19f344: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x19f344u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x19f348: 0xc064a30  jal         func_1928C0
    ctx->pc = 0x19F348u;
    SET_GPR_U32(ctx, 31, 0x19F350u);
    ctx->pc = 0x19F34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F348u;
    // 0x19f34c: 0x24a502e0  addiu       $a1, $a1, 0x2E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1928C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1928C0u, 0x19F348u, 0x19F350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F350u;
label_19f350:
    // 0x19f350: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x19F350u;
    {
        const bool branch_taken_0x19f350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F350u;
        // 0x19f354: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f350) {
            ctx->pc = 0x19F368u;
            return;
        }
    }
    ctx->pc = 0x19F358u;
}
