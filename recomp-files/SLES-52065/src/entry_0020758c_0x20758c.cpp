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

// Function: entry_0020758c
// Address: 0x20758c - 0x2075e0
void entry_0020758c_0x20758c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020758c_0x20758c");
#endif

    ctx->pc = 0x20758cu;

    // 0x20758c: 0x1012  mflo        $v0
    ctx->pc = 0x20758cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x207590: 0x1810  mfhi        $v1
    ctx->pc = 0x207590u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x207594: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x207594u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207598: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x207598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x20759c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x20759cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2075a0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2075a0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2075a4: 0x1453818  mult        $a3, $t2, $a1
    ctx->pc = 0x2075a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2075a8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2075a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2075ac: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x2075acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2075b0: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2075B0u;
    {
        const bool branch_taken_0x2075b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2075b0) {
            ctx->pc = 0x2075B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2075B0u;
            // 0x2075b4: 0x671823  subu        $v1, $v1, $a3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2075E4u;
            return;
        }
    }
    ctx->pc = 0x2075B8u;
    // 0x2075b8: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2075b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2075bc: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x2075bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2075c0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2075C0u;
    {
        const bool branch_taken_0x2075c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2075C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2075C0u;
        // 0x2075c4: 0x254affff  addiu       $t2, $t2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2075c0) {
            ctx->pc = 0x2075E0u;
            return;
        }
    }
    ctx->pc = 0x2075C8u;
    // 0x2075c8: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x2075c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2075cc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2075CCu;
    {
        const bool branch_taken_0x2075cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2075cc) {
            ctx->pc = 0x2075D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2075CCu;
            // 0x2075d0: 0x671823  subu        $v1, $v1, $a3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2075E4u;
            return;
        }
    }
    ctx->pc = 0x2075D4u;
    // 0x2075d4: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x2075d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x2075d8: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2075d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2075dc: 0x0  nop
    ctx->pc = 0x2075dcu;
    // NOP
    ctx->pc = 0x2075e0u;
}
