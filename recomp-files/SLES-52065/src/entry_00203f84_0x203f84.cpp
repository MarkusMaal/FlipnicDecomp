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

// Function: entry_00203f84
// Address: 0x203f84 - 0x203fa0
void entry_00203f84_0x203f84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203f84_0x203f84");
#endif

    ctx->pc = 0x203f84u;

    // 0x203f84: 0x8fa501dc  lw          $a1, 0x1DC($sp)
    ctx->pc = 0x203f84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x203f88: 0x28a2fffd  slti        $v0, $a1, -0x3
    ctx->pc = 0x203f88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294967293) ? 1 : 0);
    // 0x203f8c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x203F8Cu;
    {
        const bool branch_taken_0x203f8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x203F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203F8Cu;
        // 0x203f90: 0x3ae40067  xori        $a0, $s7, 0x67 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 23) ^ (uint64_t)(uint16_t)103);
        ctx->in_delay_slot = false;
        if (branch_taken_0x203f8c) {
            ctx->pc = 0x203FA0u;
            return;
        }
    }
    ctx->pc = 0x203F94u;
    // 0x203f94: 0x245102a  slt         $v0, $s2, $a1
    ctx->pc = 0x203f94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x203f98: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x203F98u;
    {
        const bool branch_taken_0x203f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x203f98) {
            ctx->pc = 0x203F9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203F98u;
            // 0x203f9c: 0x24170067  addiu       $s7, $zero, 0x67 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
            ctx->in_delay_slot = false;
            ctx->pc = 0x203FB0u;
            return;
        }
    }
    ctx->pc = 0x203FA0u;
}
