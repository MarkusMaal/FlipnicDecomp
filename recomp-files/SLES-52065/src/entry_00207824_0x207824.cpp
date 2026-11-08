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

// Function: entry_00207824
// Address: 0x207824 - 0x207870
void entry_00207824_0x207824(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00207824_0x207824");
#endif

    ctx->pc = 0x207824u;

    // 0x207824: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x207824u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207828: 0x1012  mflo        $v0
    ctx->pc = 0x207828u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x20782c: 0x1810  mfhi        $v1
    ctx->pc = 0x20782cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x207830: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x207830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x207834: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x207834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x207838: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x207838u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x20783c: 0x493018  mult        $a2, $v0, $t1
    ctx->pc = 0x20783cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x207840: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x207840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x207844: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x207844u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x207848: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x207848u;
    {
        const bool branch_taken_0x207848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x207848) {
            ctx->pc = 0x20784Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207848u;
            // 0x20784c: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x207874u;
            return;
        }
    }
    ctx->pc = 0x207850u;
    // 0x207850: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x207850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x207854: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x207854u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x207858: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x207858u;
    {
        const bool branch_taken_0x207858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x207858) {
            ctx->pc = 0x20785Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207858u;
            // 0x20785c: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x207874u;
            return;
        }
    }
    ctx->pc = 0x207860u;
    // 0x207860: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x207860u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x207864: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x207864u;
    {
        const bool branch_taken_0x207864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x207864) {
            ctx->pc = 0x207868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207864u;
            // 0x207868: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x207870u;
            return;
        }
    }
    ctx->pc = 0x20786Cu;
    // 0x20786c: 0x0  nop
    ctx->pc = 0x20786cu;
    // NOP
    ctx->pc = 0x207870u;
}
