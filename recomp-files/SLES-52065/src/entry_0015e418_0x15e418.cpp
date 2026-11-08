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

// Function: entry_0015e418
// Address: 0x15e418 - 0x15e450
void entry_0015e418_0x15e418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e418_0x15e418");
#endif

    switch (ctx->pc) {
        case 0x15e444u: goto label_15e444;
        default: break;
    }

    ctx->pc = 0x15e418u;

    // 0x15e418: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x15e418u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x15e41c: 0x2a22000a  slti        $v0, $s1, 0xA
    ctx->pc = 0x15e41cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x15e420: 0x1440ff7b  bnez        $v0, . + 4 + (-0x85 << 2)
    ctx->pc = 0x15E420u;
    {
        const bool branch_taken_0x15e420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15E424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E420u;
        // 0x15e424: 0x265203d0  addiu       $s2, $s2, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e420) {
            ctx->pc = 0x15E210u;
            return;
        }
    }
    ctx->pc = 0x15E428u;
    // 0x15e428: 0x1a00000d  blez        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x15E428u;
    {
        const bool branch_taken_0x15e428 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x15E42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E428u;
        // 0x15e42c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e428) {
            ctx->pc = 0x15E460u;
            return;
        }
    }
    ctx->pc = 0x15E430u;
    // 0x15e430: 0x8e620028  lw          $v0, 0x28($s3)
    ctx->pc = 0x15e430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x15e434: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15E434u;
    {
        const bool branch_taken_0x15e434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E434u;
        // 0x15e438: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e434) {
            ctx->pc = 0x15E450u;
            return;
        }
    }
    ctx->pc = 0x15E43Cu;
    // 0x15e43c: 0xc057f74  jal         func_15FDD0
    ctx->pc = 0x15E43Cu;
    SET_GPR_U32(ctx, 31, 0x15E444u);
    ctx->pc = 0x15FDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FDD0u, 0x15E43Cu, 0x15E444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E444u;
label_15e444:
    // 0x15e444: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x15e444u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x15e448: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x15E448u;
    {
        const bool branch_taken_0x15e448 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e448) {
            ctx->pc = 0x15E45Cu;
            return;
        }
    }
    ctx->pc = 0x15E450u;
}
