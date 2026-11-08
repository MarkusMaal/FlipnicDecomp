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

// Function: entry_00100f88
// Address: 0x100f88 - 0x100fa8
void entry_00100f88_0x100f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100f88_0x100f88");
#endif

    ctx->pc = 0x100f88u;

    // 0x100f88: 0x18400033  blez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x100F88u;
    {
        const bool branch_taken_0x100f88 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x100f88) {
            ctx->pc = 0x101058u;
            return;
        }
    }
    ctx->pc = 0x100F90u;
    // 0x100f90: 0x18800031  blez        $a0, . + 4 + (0x31 << 2)
    ctx->pc = 0x100F90u;
    {
        const bool branch_taken_0x100f90 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x100F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100F90u;
        // 0x100f94: 0x4082a  slt         $at, $zero, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x100f90) {
            ctx->pc = 0x101058u;
            return;
        }
    }
    ctx->pc = 0x100F98u;
    // 0x100f98: 0x10200025  beqz        $at, . + 4 + (0x25 << 2)
    ctx->pc = 0x100F98u;
    {
        const bool branch_taken_0x100f98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x100F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100F98u;
        // 0x100f9c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100f98) {
            ctx->pc = 0x101030u;
            return;
        }
    }
    ctx->pc = 0x100FA0u;
    // 0x100fa0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x100fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x100fa4: 0x23900  sll         $a3, $v0, 4
    ctx->pc = 0x100fa4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    ctx->pc = 0x100fa8u;
}
