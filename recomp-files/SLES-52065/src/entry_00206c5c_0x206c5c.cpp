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

// Function: entry_00206c5c
// Address: 0x206c5c - 0x206ca8
void entry_00206c5c_0x206c5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00206c5c_0x206c5c");
#endif

    ctx->pc = 0x206c5cu;

    // 0x206c5c: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x206c5cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206c60: 0x1012  mflo        $v0
    ctx->pc = 0x206c60u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x206c64: 0x1810  mfhi        $v1
    ctx->pc = 0x206c64u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x206c68: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x206c68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x206c6c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x206c6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x206c70: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x206c70u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x206c74: 0x493018  mult        $a2, $v0, $t1
    ctx->pc = 0x206c74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x206c78: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x206c78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x206c7c: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x206c7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x206c80: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x206C80u;
    {
        const bool branch_taken_0x206c80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x206c80) {
            ctx->pc = 0x206C84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206C80u;
            // 0x206c84: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206CACu;
            return;
        }
    }
    ctx->pc = 0x206C88u;
    // 0x206c88: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x206c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x206c8c: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x206c8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x206c90: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x206C90u;
    {
        const bool branch_taken_0x206c90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x206c90) {
            ctx->pc = 0x206C94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206C90u;
            // 0x206c94: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206CACu;
            return;
        }
    }
    ctx->pc = 0x206C98u;
    // 0x206c98: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x206c98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x206c9c: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x206C9Cu;
    {
        const bool branch_taken_0x206c9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x206c9c) {
            ctx->pc = 0x206CA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206C9Cu;
            // 0x206ca0: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206CA8u;
            return;
        }
    }
    ctx->pc = 0x206CA4u;
    // 0x206ca4: 0x0  nop
    ctx->pc = 0x206ca4u;
    // NOP
    ctx->pc = 0x206ca8u;
}
