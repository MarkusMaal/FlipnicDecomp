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

// Function: entry_00201420
// Address: 0x201420 - 0x201444
void entry_00201420_0x201420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00201420_0x201420");
#endif

    switch (ctx->pc) {
        case 0x201434u: goto label_201434;
        default: break;
    }

    ctx->pc = 0x201420u;

    // 0x201420: 0x8e0401d4  lw          $a0, 0x1D4($s0)
    ctx->pc = 0x201420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
    // 0x201424: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x201424u;
    {
        const bool branch_taken_0x201424 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x201428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201424u;
        // 0x201428: 0x112880  sll         $a1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201424) {
            ctx->pc = 0x201444u;
            return;
        }
    }
    ctx->pc = 0x20142Cu;
    // 0x20142c: 0xc0804ba  jal         func_2012E8
    ctx->pc = 0x20142Cu;
    SET_GPR_U32(ctx, 31, 0x201434u);
    ctx->pc = 0x201430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20142Cu;
    // 0x201430: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2012E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2012E8u, 0x20142Cu, 0x201434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201434u;
label_201434:
    // 0x201434: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x201434u;
    {
        const bool branch_taken_0x201434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x201438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201434u;
        // 0x201438: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201434) {
            ctx->pc = 0x2014C0u;
            return;
        }
    }
    ctx->pc = 0x20143Cu;
    // 0x20143c: 0x8e0401d4  lw          $a0, 0x1D4($s0)
    ctx->pc = 0x20143cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
    // 0x201440: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x201440u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    ctx->pc = 0x201444u;
}
