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

// Function: entry_00161878
// Address: 0x161878 - 0x161898
void entry_00161878_0x161878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161878_0x161878");
#endif

    ctx->pc = 0x161878u;

    // 0x161878: 0x73102a  slt         $v0, $v1, $s3
    ctx->pc = 0x161878u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x16187c: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x16187Cu;
    {
        const bool branch_taken_0x16187c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16187c) {
            ctx->pc = 0x161844u;
            return;
        }
    }
    ctx->pc = 0x161884u;
    // 0x161884: 0x860401f4  lh          $a0, 0x1F4($s0)
    ctx->pc = 0x161884u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 500)));
    // 0x161888: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x161888u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16188c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x16188Cu;
    {
        const bool branch_taken_0x16188c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16188Cu;
        // 0x161890: 0x260501e0  addiu       $a1, $s0, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16188c) {
            ctx->pc = 0x1618DCu;
            return;
        }
    }
    ctx->pc = 0x161894u;
    // 0x161894: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x161894u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    ctx->pc = 0x161898u;
}
