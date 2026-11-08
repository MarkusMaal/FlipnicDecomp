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

// Function: entry_00207b50
// Address: 0x207b50 - 0x207b90
void entry_00207b50_0x207b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00207b50_0x207b50");
#endif

    ctx->pc = 0x207b50u;

    // 0x207b50: 0xa72823  subu        $a1, $a1, $a3
    ctx->pc = 0x207b50u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x207b54: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x207b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x207b58: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x207b58u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x207b5c: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x207b5cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207b60: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x207b60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x207b64: 0x480019  multu       $v0, $t0
    ctx->pc = 0x207b64u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x207b68: 0x3810  mfhi        $a3
    ctx->pc = 0x207b68u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x207b6c: 0x3012  mflo        $a2
    ctx->pc = 0x207b6cu;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x207b70: 0x147182b  sltu        $v1, $t2, $a3
    ctx->pc = 0x207b70u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x207b74: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x207B74u;
    {
        const bool branch_taken_0x207b74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x207B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207B74u;
        // 0x207b78: 0xc82023  subu        $a0, $a2, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207b74) {
            ctx->pc = 0x207B90u;
            return;
        }
    }
    ctx->pc = 0x207B7Cu;
    // 0x207b7c: 0x14ea0008  bne         $a3, $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x207B7Cu;
    {
        const bool branch_taken_0x207b7c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 10));
        ctx->pc = 0x207B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207B7Cu;
        // 0x207b80: 0x186102b  sltu        $v0, $t4, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x207b7c) {
            ctx->pc = 0x207BA0u;
            return;
        }
    }
    ctx->pc = 0x207B84u;
    // 0x207b84: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x207B84u;
    {
        const bool branch_taken_0x207b84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x207b84) {
            ctx->pc = 0x207BA0u;
            return;
        }
    }
    ctx->pc = 0x207B8Cu;
    // 0x207b8c: 0x0  nop
    ctx->pc = 0x207b8cu;
    // NOP
    ctx->pc = 0x207b90u;
}
