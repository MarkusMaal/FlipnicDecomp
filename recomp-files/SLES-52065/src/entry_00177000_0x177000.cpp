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

// Function: entry_00177000
// Address: 0x177000 - 0x17701c
void entry_00177000_0x177000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177000_0x177000");
#endif

    ctx->pc = 0x177000u;

    // 0x177000: 0x28620008  slti        $v0, $v1, 0x8
    ctx->pc = 0x177000u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x177004: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x177004u;
    {
        const bool branch_taken_0x177004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x177008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177004u;
        // 0x177008: 0x31140  sll         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177004) {
            ctx->pc = 0x176FE4u;
            return;
        }
    }
    ctx->pc = 0x17700Cu;
    // 0x17700c: 0x26820130  addiu       $v0, $s4, 0x130
    ctx->pc = 0x17700cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 304));
    // 0x177010: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x177010u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x177014: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x177014u;
    {
        const bool branch_taken_0x177014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177014u;
        // 0x177018: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177014) {
            ctx->pc = 0x177198u;
            return;
        }
    }
    ctx->pc = 0x17701Cu;
}
