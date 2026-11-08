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

// Function: entry_0020671c
// Address: 0x20671c - 0x206774
void entry_0020671c_0x20671c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020671c_0x20671c");
#endif

    ctx->pc = 0x20671cu;

    // 0x20671c: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x20671cu;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x206720: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x206720u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x206724: 0x1012  mflo        $v0
    ctx->pc = 0x206724u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x206728: 0x1810  mfhi        $v1
    ctx->pc = 0x206728u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x20672c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x20672cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206730: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x206730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x206734: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x206734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x206738: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x206738u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x20673c: 0xcb3818  mult        $a3, $a2, $t3
    ctx->pc = 0x20673cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x206740: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x206740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x206744: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x206744u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x206748: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x206748u;
    {
        const bool branch_taken_0x206748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20674Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206748u;
        // 0x20674c: 0x9103c  dsll32      $v0, $t1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206748) {
            ctx->pc = 0x206778u;
            return;
        }
    }
    ctx->pc = 0x206750u;
    // 0x206750: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x206750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x206754: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x206754u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x206758: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x206758u;
    {
        const bool branch_taken_0x206758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20675Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206758u;
        // 0x20675c: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206758) {
            ctx->pc = 0x206774u;
            return;
        }
    }
    ctx->pc = 0x206760u;
    // 0x206760: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x206760u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x206764: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x206764u;
    {
        const bool branch_taken_0x206764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x206768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206764u;
        // 0x206768: 0x9103c  dsll32      $v0, $t1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206764) {
            ctx->pc = 0x206778u;
            return;
        }
    }
    ctx->pc = 0x20676Cu;
    // 0x20676c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x20676cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x206770: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x206770u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    ctx->pc = 0x206774u;
}
