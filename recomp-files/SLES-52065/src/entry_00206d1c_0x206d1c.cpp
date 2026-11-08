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

// Function: entry_00206d1c
// Address: 0x206d1c - 0x206d60
void entry_00206d1c_0x206d1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00206d1c_0x206d1c");
#endif

    ctx->pc = 0x206d1cu;

    // 0x206d1c: 0x1012  mflo        $v0
    ctx->pc = 0x206d1cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x206d20: 0x1810  mfhi        $v1
    ctx->pc = 0x206d20u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x206d24: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x206d24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x206d28: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x206d28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x206d2c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x206d2cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x206d30: 0x473018  mult        $a2, $v0, $a3
    ctx->pc = 0x206d30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x206d34: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x206d34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x206d38: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x206d38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x206d3c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x206D3Cu;
    {
        const bool branch_taken_0x206d3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x206d3c) {
            ctx->pc = 0x206D40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206D3Cu;
            // 0x206d40: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206D64u;
            return;
        }
    }
    ctx->pc = 0x206D44u;
    // 0x206d44: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x206d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x206d48: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x206d48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x206d4c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x206D4Cu;
    {
        const bool branch_taken_0x206d4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x206d4c) {
            ctx->pc = 0x206D50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206D4Cu;
            // 0x206d50: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206D64u;
            return;
        }
    }
    ctx->pc = 0x206D54u;
    // 0x206d54: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x206d54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x206d58: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x206D58u;
    {
        const bool branch_taken_0x206d58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x206d58) {
            ctx->pc = 0x206D5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206D58u;
            // 0x206d5c: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206D60u;
            return;
        }
    }
    ctx->pc = 0x206D60u;
}
