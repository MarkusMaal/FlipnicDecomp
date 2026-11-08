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

// Function: entry_002064b4
// Address: 0x2064b4 - 0x20650c
void entry_002064b4_0x2064b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002064b4_0x2064b4");
#endif

    ctx->pc = 0x2064b4u;

    // 0x2064b4: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x2064b4u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2064b8: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x2064b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x2064bc: 0x1012  mflo        $v0
    ctx->pc = 0x2064bcu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2064c0: 0x1810  mfhi        $v1
    ctx->pc = 0x2064c0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2064c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2064c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2064c8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2064c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2064cc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2064ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2064d0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2064d0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2064d4: 0xad3018  mult        $a2, $a1, $t5
    ctx->pc = 0x2064d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2064d8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2064d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2064dc: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2064dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2064e0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2064E0u;
    {
        const bool branch_taken_0x2064e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2064E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2064E0u;
        // 0x2064e4: 0x7103c  dsll32      $v0, $a3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2064e0) {
            ctx->pc = 0x206510u;
            return;
        }
    }
    ctx->pc = 0x2064E8u;
    // 0x2064e8: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2064e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2064ec: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x2064ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2064f0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2064F0u;
    {
        const bool branch_taken_0x2064f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2064F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2064F0u;
        // 0x2064f4: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2064f0) {
            ctx->pc = 0x20650Cu;
            return;
        }
    }
    ctx->pc = 0x2064F8u;
    // 0x2064f8: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2064f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2064fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2064FCu;
    {
        const bool branch_taken_0x2064fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x206500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2064FCu;
        // 0x206500: 0x7103c  dsll32      $v0, $a3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2064fc) {
            ctx->pc = 0x206510u;
            return;
        }
    }
    ctx->pc = 0x206504u;
    // 0x206504: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x206504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x206508: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x206508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    ctx->pc = 0x20650cu;
}
