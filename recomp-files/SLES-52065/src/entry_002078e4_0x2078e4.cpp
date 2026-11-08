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

// Function: entry_002078e4
// Address: 0x2078e4 - 0x207928
void entry_002078e4_0x2078e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002078e4_0x2078e4");
#endif

    ctx->pc = 0x2078e4u;

    // 0x2078e4: 0x1012  mflo        $v0
    ctx->pc = 0x2078e4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2078e8: 0x1810  mfhi        $v1
    ctx->pc = 0x2078e8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2078ec: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2078ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2078f0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2078f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2078f4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2078f4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2078f8: 0x473018  mult        $a2, $v0, $a3
    ctx->pc = 0x2078f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2078fc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2078fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x207900: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x207900u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x207904: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x207904u;
    {
        const bool branch_taken_0x207904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x207904) {
            ctx->pc = 0x207908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207904u;
            // 0x207908: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20792Cu;
            return;
        }
    }
    ctx->pc = 0x20790Cu;
    // 0x20790c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x20790cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x207910: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x207910u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x207914: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x207914u;
    {
        const bool branch_taken_0x207914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x207914) {
            ctx->pc = 0x207918u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207914u;
            // 0x207918: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20792Cu;
            return;
        }
    }
    ctx->pc = 0x20791Cu;
    // 0x20791c: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x20791cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x207920: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x207920u;
    {
        const bool branch_taken_0x207920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x207920) {
            ctx->pc = 0x207924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207920u;
            // 0x207924: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x207928u;
            return;
        }
    }
    ctx->pc = 0x207928u;
}
