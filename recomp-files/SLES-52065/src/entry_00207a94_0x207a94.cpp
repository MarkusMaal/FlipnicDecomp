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

// Function: entry_00207a94
// Address: 0x207a94 - 0x207ae8
void entry_00207a94_0x207a94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00207a94_0x207a94");
#endif

    ctx->pc = 0x207a94u;

    // 0x207a94: 0x1012  mflo        $v0
    ctx->pc = 0x207a94u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x207a98: 0x1810  mfhi        $v1
    ctx->pc = 0x207a98u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x207a9c: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x207a9cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207aa0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x207aa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x207aa4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x207aa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x207aa8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x207aa8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x207aac: 0x1653818  mult        $a3, $t3, $a1
    ctx->pc = 0x207aacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x207ab0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x207ab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x207ab4: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x207ab4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x207ab8: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x207AB8u;
    {
        const bool branch_taken_0x207ab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x207ab8) {
            ctx->pc = 0x207ABCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207AB8u;
            // 0x207abc: 0x671823  subu        $v1, $v1, $a3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x207AECu;
            return;
        }
    }
    ctx->pc = 0x207AC0u;
    // 0x207ac0: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x207ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x207ac4: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x207ac4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x207ac8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x207AC8u;
    {
        const bool branch_taken_0x207ac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207AC8u;
        // 0x207acc: 0x256bffff  addiu       $t3, $t3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207ac8) {
            ctx->pc = 0x207AE8u;
            return;
        }
    }
    ctx->pc = 0x207AD0u;
    // 0x207ad0: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x207ad0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x207ad4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x207AD4u;
    {
        const bool branch_taken_0x207ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x207ad4) {
            ctx->pc = 0x207AD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207AD4u;
            // 0x207ad8: 0x671823  subu        $v1, $v1, $a3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x207AECu;
            return;
        }
    }
    ctx->pc = 0x207ADCu;
    // 0x207adc: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x207adcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x207ae0: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x207ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x207ae4: 0x0  nop
    ctx->pc = 0x207ae4u;
    // NOP
    ctx->pc = 0x207ae8u;
}
