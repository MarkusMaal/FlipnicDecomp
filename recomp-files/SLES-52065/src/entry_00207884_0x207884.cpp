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

// Function: entry_00207884
// Address: 0x207884 - 0x2078c8
void entry_00207884_0x207884(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00207884_0x207884");
#endif

    ctx->pc = 0x207884u;

    // 0x207884: 0x1012  mflo        $v0
    ctx->pc = 0x207884u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x207888: 0x1810  mfhi        $v1
    ctx->pc = 0x207888u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x20788c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x20788cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x207890: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x207890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x207894: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x207894u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x207898: 0x4b3018  mult        $a2, $v0, $t3
    ctx->pc = 0x207898u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x20789c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x20789cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2078a0: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2078a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2078a4: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2078A4u;
    {
        const bool branch_taken_0x2078a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2078a4) {
            ctx->pc = 0x2078A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2078A4u;
            // 0x2078a8: 0x665023  subu        $t2, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2078CCu;
            return;
        }
    }
    ctx->pc = 0x2078ACu;
    // 0x2078ac: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2078acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2078b0: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x2078b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2078b4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2078B4u;
    {
        const bool branch_taken_0x2078b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2078B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2078B4u;
        // 0x2078b8: 0x665023  subu        $t2, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2078b4) {
            ctx->pc = 0x2078CCu;
            return;
        }
    }
    ctx->pc = 0x2078BCu;
    // 0x2078bc: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2078bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2078c0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2078C0u;
    {
        const bool branch_taken_0x2078c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2078c0) {
            ctx->pc = 0x2078C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2078C0u;
            // 0x2078c4: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2078C8u;
            return;
        }
    }
    ctx->pc = 0x2078C8u;
}
