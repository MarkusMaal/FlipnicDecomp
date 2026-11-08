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

// Function: entry_002071f4
// Address: 0x2071f4 - 0x207240
void entry_002071f4_0x2071f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002071f4_0x2071f4");
#endif

    ctx->pc = 0x2071f4u;

    // 0x2071f4: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x2071f4u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2071f8: 0x3184ffff  andi        $a0, $t4, 0xFFFF
    ctx->pc = 0x2071f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65535);
    // 0x2071fc: 0x1012  mflo        $v0
    ctx->pc = 0x2071fcu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x207200: 0x1810  mfhi        $v1
    ctx->pc = 0x207200u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x207204: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x207204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207208: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x207208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x20720c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x20720cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x207210: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x207210u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x207214: 0xa83018  mult        $a2, $a1, $t0
    ctx->pc = 0x207214u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x207218: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x207218u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x20721c: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x20721cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x207220: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x207220u;
    {
        const bool branch_taken_0x207220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207220u;
        // 0x207224: 0x691821  addu        $v1, $v1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207220) {
            ctx->pc = 0x207240u;
            return;
        }
    }
    ctx->pc = 0x207228u;
    // 0x207228: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x207228u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x20722c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20722Cu;
    {
        const bool branch_taken_0x20722c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20722Cu;
        // 0x207230: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20722c) {
            ctx->pc = 0x207240u;
            return;
        }
    }
    ctx->pc = 0x207234u;
    // 0x207234: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x207234u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x207238: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x207238u;
    {
        const bool branch_taken_0x207238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x207238) {
            ctx->pc = 0x20723Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207238u;
            // 0x20723c: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x207240u;
            return;
        }
    }
    ctx->pc = 0x207240u;
}
