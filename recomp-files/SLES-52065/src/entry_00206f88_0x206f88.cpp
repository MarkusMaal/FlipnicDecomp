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

// Function: entry_00206f88
// Address: 0x206f88 - 0x206fc8
void entry_00206f88_0x206f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00206f88_0x206f88");
#endif

    ctx->pc = 0x206f88u;

    // 0x206f88: 0xa72823  subu        $a1, $a1, $a3
    ctx->pc = 0x206f88u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x206f8c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x206f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x206f90: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x206f90u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x206f94: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x206f94u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206f98: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x206f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x206f9c: 0x480019  multu       $v0, $t0
    ctx->pc = 0x206f9cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x206fa0: 0x3810  mfhi        $a3
    ctx->pc = 0x206fa0u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x206fa4: 0x3012  mflo        $a2
    ctx->pc = 0x206fa4u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x206fa8: 0x147182b  sltu        $v1, $t2, $a3
    ctx->pc = 0x206fa8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x206fac: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x206FACu;
    {
        const bool branch_taken_0x206fac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x206FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206FACu;
        // 0x206fb0: 0xc82023  subu        $a0, $a2, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206fac) {
            ctx->pc = 0x206FC8u;
            return;
        }
    }
    ctx->pc = 0x206FB4u;
    // 0x206fb4: 0x14ea0008  bne         $a3, $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x206FB4u;
    {
        const bool branch_taken_0x206fb4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 10));
        if (branch_taken_0x206fb4) {
            ctx->pc = 0x206FD8u;
            return;
        }
    }
    ctx->pc = 0x206FBCu;
    // 0x206fbc: 0x186102b  sltu        $v0, $t4, $a2
    ctx->pc = 0x206fbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x206fc0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x206FC0u;
    {
        const bool branch_taken_0x206fc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x206fc0) {
            ctx->pc = 0x206FD8u;
            return;
        }
    }
    ctx->pc = 0x206FC8u;
}
