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

// Function: entry_00207464
// Address: 0x207464 - 0x2074b0
void entry_00207464_0x207464(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00207464_0x207464");
#endif

    ctx->pc = 0x207464u;

    // 0x207464: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x207464u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x207468: 0x3184ffff  andi        $a0, $t4, 0xFFFF
    ctx->pc = 0x207468u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65535);
    // 0x20746c: 0x1012  mflo        $v0
    ctx->pc = 0x20746cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x207470: 0x1810  mfhi        $v1
    ctx->pc = 0x207470u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x207474: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x207474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207478: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x207478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x20747c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x20747cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x207480: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x207480u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x207484: 0xa83018  mult        $a2, $a1, $t0
    ctx->pc = 0x207484u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x207488: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x207488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x20748c: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x20748cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x207490: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x207490u;
    {
        const bool branch_taken_0x207490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207490u;
        // 0x207494: 0x691821  addu        $v1, $v1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207490) {
            ctx->pc = 0x2074B0u;
            return;
        }
    }
    ctx->pc = 0x207498u;
    // 0x207498: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x207498u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x20749c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20749Cu;
    {
        const bool branch_taken_0x20749c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2074A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20749Cu;
        // 0x2074a0: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20749c) {
            ctx->pc = 0x2074B0u;
            return;
        }
    }
    ctx->pc = 0x2074A4u;
    // 0x2074a4: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2074a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2074a8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2074A8u;
    {
        const bool branch_taken_0x2074a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2074a8) {
            ctx->pc = 0x2074ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2074A8u;
            // 0x2074ac: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2074B0u;
            return;
        }
    }
    ctx->pc = 0x2074B0u;
}
