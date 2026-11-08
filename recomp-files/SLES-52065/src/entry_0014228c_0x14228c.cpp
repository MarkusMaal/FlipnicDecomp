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

// Function: entry_0014228c
// Address: 0x14228c - 0x1422bc
void entry_0014228c_0x14228c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014228c_0x14228c");
#endif

    ctx->pc = 0x14228cu;

    // 0x14228c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x14228cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x142290: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x142290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x142294: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x142294u;
    {
        const bool branch_taken_0x142294 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x142294) {
            ctx->pc = 0x142304u;
            return;
        }
    }
    ctx->pc = 0x14229Cu;
    // 0x14229c: 0x8c970028  lw          $s7, 0x28($a0)
    ctx->pc = 0x14229cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x1422a0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1422a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1422a4: 0x8e550014  lw          $s5, 0x14($s2)
    ctx->pc = 0x1422a4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1422a8: 0x2feb018  mult        $s6, $s7, $fp
    ctx->pc = 0x1422a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 22, (int32_t)result); }
    // 0x1422ac: 0x17082b  sltu        $at, $zero, $s7
    ctx->pc = 0x1422acu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x1422b0: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x1422B0u;
    {
        const bool branch_taken_0x1422b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1422B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1422B0u;
        // 0x1422b4: 0x72f38818  mult1       $s1, $s7, $s3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 19); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1422b0) {
            ctx->pc = 0x142304u;
            return;
        }
    }
    ctx->pc = 0x1422B8u;
    // 0x1422b8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1422b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1422bcu;
}
