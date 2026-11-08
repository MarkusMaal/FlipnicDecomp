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

// Function: entry_00108864
// Address: 0x108864 - 0x108890
void entry_00108864_0x108864(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108864_0x108864");
#endif

    switch (ctx->pc) {
        case 0x10886cu: goto label_10886c;
        default: break;
    }

    ctx->pc = 0x108864u;

    // 0x108864: 0xc0423bc  jal         func_108EF0
    ctx->pc = 0x108864u;
    SET_GPR_U32(ctx, 31, 0x10886Cu);
    ctx->pc = 0x108EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108EF0u, 0x108864u, 0x10886Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10886Cu;
label_10886c:
    // 0x10886c: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x10886cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x108870: 0x1420004c  bnez        $at, . + 4 + (0x4C << 2)
    ctx->pc = 0x108870u;
    {
        const bool branch_taken_0x108870 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x108870) {
            ctx->pc = 0x1089A4u;
            return;
        }
    }
    ctx->pc = 0x108878u;
    // 0x108878: 0x8e242cd0  lw          $a0, 0x2CD0($s1)
    ctx->pc = 0x108878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11472)));
    // 0x10887c: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10887Cu;
    {
        const bool branch_taken_0x10887c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x108880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10887Cu;
        // 0x108880: 0x41900  sll         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10887c) {
            ctx->pc = 0x108890u;
            return;
        }
    }
    ctx->pc = 0x108884u;
    // 0x108884: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x108884u;
    {
        const bool branch_taken_0x108884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108884u;
        // 0x108888: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108884) {
            ctx->pc = 0x1088A8u;
            return;
        }
    }
    ctx->pc = 0x10888Cu;
    // 0x10888c: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x10888cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    ctx->pc = 0x108890u;
}
