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

// Function: entry_00207384
// Address: 0x207384 - 0x2073dc
void entry_00207384_0x207384(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00207384_0x207384");
#endif

    ctx->pc = 0x207384u;

    // 0x207384: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x207384u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x207388: 0x3164ffff  andi        $a0, $t3, 0xFFFF
    ctx->pc = 0x207388u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
    // 0x20738c: 0x1012  mflo        $v0
    ctx->pc = 0x20738cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x207390: 0x1810  mfhi        $v1
    ctx->pc = 0x207390u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x207394: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x207394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207398: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x207398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x20739c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x20739cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2073a0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2073a0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2073a4: 0xad3018  mult        $a2, $a1, $t5
    ctx->pc = 0x2073a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2073a8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2073a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2073ac: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2073acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2073b0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2073B0u;
    {
        const bool branch_taken_0x2073b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2073B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2073B0u;
        // 0x2073b4: 0x7103c  dsll32      $v0, $a3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2073b0) {
            ctx->pc = 0x2073E0u;
            return;
        }
    }
    ctx->pc = 0x2073B8u;
    // 0x2073b8: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x2073b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2073bc: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x2073bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2073c0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2073C0u;
    {
        const bool branch_taken_0x2073c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2073C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2073C0u;
        // 0x2073c4: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2073c0) {
            ctx->pc = 0x2073DCu;
            return;
        }
    }
    ctx->pc = 0x2073C8u;
    // 0x2073c8: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2073c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2073cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2073CCu;
    {
        const bool branch_taken_0x2073cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2073D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2073CCu;
        // 0x2073d0: 0x7103c  dsll32      $v0, $a3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2073cc) {
            ctx->pc = 0x2073E0u;
            return;
        }
    }
    ctx->pc = 0x2073D4u;
    // 0x2073d4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2073d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2073d8: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x2073d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    ctx->pc = 0x2073dcu;
}
