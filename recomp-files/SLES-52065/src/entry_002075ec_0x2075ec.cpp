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

// Function: entry_002075ec
// Address: 0x2075ec - 0x207644
void entry_002075ec_0x2075ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002075ec_0x2075ec");
#endif

    ctx->pc = 0x2075ecu;

    // 0x2075ec: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x2075ecu;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2075f0: 0x3164ffff  andi        $a0, $t3, 0xFFFF
    ctx->pc = 0x2075f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
    // 0x2075f4: 0x1012  mflo        $v0
    ctx->pc = 0x2075f4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2075f8: 0x1810  mfhi        $v1
    ctx->pc = 0x2075f8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2075fc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2075fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207600: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x207600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x207604: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x207604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x207608: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x207608u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x20760c: 0xc53818  mult        $a3, $a2, $a1
    ctx->pc = 0x20760cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x207610: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x207610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x207614: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x207614u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x207618: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x207618u;
    {
        const bool branch_taken_0x207618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20761Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207618u;
        // 0x20761c: 0xa103c  dsll32      $v0, $t2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207618) {
            ctx->pc = 0x207648u;
            return;
        }
    }
    ctx->pc = 0x207620u;
    // 0x207620: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x207620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x207624: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x207624u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x207628: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x207628u;
    {
        const bool branch_taken_0x207628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20762Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207628u;
        // 0x20762c: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207628) {
            ctx->pc = 0x207644u;
            return;
        }
    }
    ctx->pc = 0x207630u;
    // 0x207630: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x207630u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x207634: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x207634u;
    {
        const bool branch_taken_0x207634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207634u;
        // 0x207638: 0xa103c  dsll32      $v0, $t2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207634) {
            ctx->pc = 0x207648u;
            return;
        }
    }
    ctx->pc = 0x20763Cu;
    // 0x20763c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x20763cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x207640: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x207640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    ctx->pc = 0x207644u;
}
