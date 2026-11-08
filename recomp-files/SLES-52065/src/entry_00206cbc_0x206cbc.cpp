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

// Function: entry_00206cbc
// Address: 0x206cbc - 0x206d00
void entry_00206cbc_0x206cbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00206cbc_0x206cbc");
#endif

    ctx->pc = 0x206cbcu;

    // 0x206cbc: 0x1012  mflo        $v0
    ctx->pc = 0x206cbcu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x206cc0: 0x1810  mfhi        $v1
    ctx->pc = 0x206cc0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x206cc4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x206cc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x206cc8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x206cc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x206ccc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x206cccu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x206cd0: 0x4b3018  mult        $a2, $v0, $t3
    ctx->pc = 0x206cd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x206cd4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x206cd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x206cd8: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x206cd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x206cdc: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x206CDCu;
    {
        const bool branch_taken_0x206cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x206cdc) {
            ctx->pc = 0x206CE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206CDCu;
            // 0x206ce0: 0x665023  subu        $t2, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206D04u;
            return;
        }
    }
    ctx->pc = 0x206CE4u;
    // 0x206ce4: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x206ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x206ce8: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x206ce8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x206cec: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x206CECu;
    {
        const bool branch_taken_0x206cec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x206CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206CECu;
        // 0x206cf0: 0x665023  subu        $t2, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206cec) {
            ctx->pc = 0x206D04u;
            return;
        }
    }
    ctx->pc = 0x206CF4u;
    // 0x206cf4: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x206cf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x206cf8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x206CF8u;
    {
        const bool branch_taken_0x206cf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x206cf8) {
            ctx->pc = 0x206CFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206CF8u;
            // 0x206cfc: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206D00u;
            return;
        }
    }
    ctx->pc = 0x206D00u;
}
