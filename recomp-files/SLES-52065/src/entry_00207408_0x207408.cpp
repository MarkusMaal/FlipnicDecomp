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

// Function: entry_00207408
// Address: 0x207408 - 0x207458
void entry_00207408_0x207408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00207408_0x207408");
#endif

    ctx->pc = 0x207408u;

    // 0x207408: 0x1012  mflo        $v0
    ctx->pc = 0x207408u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x20740c: 0x1810  mfhi        $v1
    ctx->pc = 0x20740cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x207410: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x207410u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207414: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x207414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x207418: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x207418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x20741c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x20741cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x207420: 0xe83018  mult        $a2, $a3, $t0
    ctx->pc = 0x207420u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x207424: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x207424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x207428: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x207428u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x20742c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x20742Cu;
    {
        const bool branch_taken_0x20742c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20742c) {
            ctx->pc = 0x207430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20742Cu;
            // 0x207430: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20745Cu;
            return;
        }
    }
    ctx->pc = 0x207434u;
    // 0x207434: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x207434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x207438: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x207438u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x20743c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20743Cu;
    {
        const bool branch_taken_0x20743c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20743Cu;
        // 0x207440: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20743c) {
            ctx->pc = 0x207458u;
            return;
        }
    }
    ctx->pc = 0x207444u;
    // 0x207444: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x207444u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x207448: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x207448u;
    {
        const bool branch_taken_0x207448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x207448) {
            ctx->pc = 0x20744Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207448u;
            // 0x20744c: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20745Cu;
            return;
        }
    }
    ctx->pc = 0x207450u;
    // 0x207450: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x207450u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x207454: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x207454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    ctx->pc = 0x207458u;
}
