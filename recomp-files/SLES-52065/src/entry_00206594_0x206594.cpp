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

// Function: entry_00206594
// Address: 0x206594 - 0x2065e0
void entry_00206594_0x206594(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00206594_0x206594");
#endif

    ctx->pc = 0x206594u;

    // 0x206594: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x206594u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x206598: 0x3184ffff  andi        $a0, $t4, 0xFFFF
    ctx->pc = 0x206598u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65535);
    // 0x20659c: 0x1012  mflo        $v0
    ctx->pc = 0x20659cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2065a0: 0x1810  mfhi        $v1
    ctx->pc = 0x2065a0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2065a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2065a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2065a8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2065a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2065ac: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2065acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2065b0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2065b0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2065b4: 0xa93018  mult        $a2, $a1, $t1
    ctx->pc = 0x2065b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2065b8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2065b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2065bc: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2065bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2065c0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2065C0u;
    {
        const bool branch_taken_0x2065c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2065C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2065C0u;
        // 0x2065c4: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2065c0) {
            ctx->pc = 0x2065E0u;
            return;
        }
    }
    ctx->pc = 0x2065C8u;
    // 0x2065c8: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x2065c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2065cc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2065CCu;
    {
        const bool branch_taken_0x2065cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2065D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2065CCu;
        // 0x2065d0: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2065cc) {
            ctx->pc = 0x2065E0u;
            return;
        }
    }
    ctx->pc = 0x2065D4u;
    // 0x2065d4: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2065d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2065d8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2065D8u;
    {
        const bool branch_taken_0x2065d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2065d8) {
            ctx->pc = 0x2065DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2065D8u;
            // 0x2065dc: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2065E0u;
            return;
        }
    }
    ctx->pc = 0x2065E0u;
}
