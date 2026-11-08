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

// Function: entry_001a3828
// Address: 0x1a3828 - 0x1a389c
void entry_001a3828_0x1a3828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3828_0x1a3828");
#endif

    switch (ctx->pc) {
        case 0x1a3894u: goto label_1a3894;
        default: break;
    }

    ctx->pc = 0x1a3828u;

    // 0x1a3828: 0x8e230674  lw          $v1, 0x674($s1)
    ctx->pc = 0x1a3828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1652)));
    // 0x1a382c: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x1a382cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a3830: 0x10200047  beqz        $at, . + 4 + (0x47 << 2)
    ctx->pc = 0x1A3830u;
    {
        const bool branch_taken_0x1a3830 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3830) {
            ctx->pc = 0x1A3950u;
            return;
        }
    }
    ctx->pc = 0x1A3838u;
    // 0x1a3838: 0x8e240678  lw          $a0, 0x678($s1)
    ctx->pc = 0x1a3838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1656)));
    // 0x1a383c: 0x8e230794  lw          $v1, 0x794($s1)
    ctx->pc = 0x1a383cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1940)));
    // 0x1a3840: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x1a3840u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1a3844: 0x1420001a  bnez        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x1A3844u;
    {
        const bool branch_taken_0x1a3844 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a3844) {
            ctx->pc = 0x1A38B0u;
            return;
        }
    }
    ctx->pc = 0x1A384Cu;
    // 0x1a384c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1a384cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a3850: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1a3850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1a3854: 0x8c650798  lw          $a1, 0x798($v1)
    ctx->pc = 0x1a3854u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1944)));
    // 0x1a3858: 0x10a0002a  beqz        $a1, . + 4 + (0x2A << 2)
    ctx->pc = 0x1A3858u;
    {
        const bool branch_taken_0x1a3858 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3858) {
            ctx->pc = 0x1A3904u;
            return;
        }
    }
    ctx->pc = 0x1A3860u;
    // 0x1a3860: 0x8e230790  lw          $v1, 0x790($s1)
    ctx->pc = 0x1a3860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1936)));
    // 0x1a3864: 0x14600027  bnez        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x1A3864u;
    {
        const bool branch_taken_0x1a3864 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a3864) {
            ctx->pc = 0x1A3904u;
            return;
        }
    }
    ctx->pc = 0x1A386Cu;
    // 0x1a386c: 0x8f8386fc  lw          $v1, -0x7904($gp)
    ctx->pc = 0x1a386cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936316)));
    // 0x1a3870: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1A3870u;
    {
        const bool branch_taken_0x1a3870 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3870) {
            ctx->pc = 0x1A389Cu;
            return;
        }
    }
    ctx->pc = 0x1A3878u;
    // 0x1a3878: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x1a3878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x1a387c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1a387cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a3880: 0x14830020  bne         $a0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x1A3880u;
    {
        const bool branch_taken_0x1a3880 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a3880) {
            ctx->pc = 0x1A3904u;
            return;
        }
    }
    ctx->pc = 0x1A3888u;
    // 0x1a3888: 0x8ca50024  lw          $a1, 0x24($a1)
    ctx->pc = 0x1a3888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x1a388c: 0xc064fb8  jal         func_193EE0
    ctx->pc = 0x1A388Cu;
    SET_GPR_U32(ctx, 31, 0x1A3894u);
    ctx->pc = 0x1A3890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A388Cu;
    // 0x1a3890: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193EE0u, 0x1A388Cu, 0x1A3894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3894u;
label_1a3894:
    // 0x1a3894: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1A3894u;
    {
        const bool branch_taken_0x1a3894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3894u;
        // 0x1a3898: 0x8e230678  lw          $v1, 0x678($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1656)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3894) {
            ctx->pc = 0x1A3908u;
            return;
        }
    }
    ctx->pc = 0x1A389Cu;
}
