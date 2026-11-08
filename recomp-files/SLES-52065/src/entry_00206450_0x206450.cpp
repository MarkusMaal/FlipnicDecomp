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

// Function: entry_00206450
// Address: 0x206450 - 0x2064a8
void entry_00206450_0x206450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00206450_0x206450");
#endif

    ctx->pc = 0x206450u;

    // 0x206450: 0x160682d  daddu       $t5, $t3, $zero
    ctx->pc = 0x206450u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206454: 0x1012  mflo        $v0
    ctx->pc = 0x206454u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x206458: 0x1810  mfhi        $v1
    ctx->pc = 0x206458u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x20645c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x20645cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206460: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x206460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x206464: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x206464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x206468: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x206468u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x20646c: 0xeb3018  mult        $a2, $a3, $t3
    ctx->pc = 0x20646cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x206470: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x206470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x206474: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x206474u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x206478: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x206478u;
    {
        const bool branch_taken_0x206478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x206478) {
            ctx->pc = 0x20647Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206478u;
            // 0x20647c: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2064ACu;
            return;
        }
    }
    ctx->pc = 0x206480u;
    // 0x206480: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x206480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x206484: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x206484u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x206488: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x206488u;
    {
        const bool branch_taken_0x206488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20648Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206488u;
        // 0x20648c: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206488) {
            ctx->pc = 0x2064A8u;
            return;
        }
    }
    ctx->pc = 0x206490u;
    // 0x206490: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x206490u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x206494: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x206494u;
    {
        const bool branch_taken_0x206494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x206494) {
            ctx->pc = 0x206498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206494u;
            // 0x206498: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2064ACu;
            return;
        }
    }
    ctx->pc = 0x20649Cu;
    // 0x20649c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x20649cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2064a0: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2064a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2064a4: 0x0  nop
    ctx->pc = 0x2064a4u;
    // NOP
    ctx->pc = 0x2064a8u;
}
