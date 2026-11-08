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

// Function: entry_00207194
// Address: 0x207194 - 0x2071e8
void entry_00207194_0x207194(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00207194_0x207194");
#endif

    ctx->pc = 0x207194u;

    // 0x207194: 0x1012  mflo        $v0
    ctx->pc = 0x207194u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x207198: 0x1810  mfhi        $v1
    ctx->pc = 0x207198u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x20719c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x20719cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2071a0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2071a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2071a4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2071a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2071a8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2071a8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2071ac: 0xe83018  mult        $a2, $a3, $t0
    ctx->pc = 0x2071acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2071b0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2071b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2071b4: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2071b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2071b8: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2071B8u;
    {
        const bool branch_taken_0x2071b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2071b8) {
            ctx->pc = 0x2071BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2071B8u;
            // 0x2071bc: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2071ECu;
            return;
        }
    }
    ctx->pc = 0x2071C0u;
    // 0x2071c0: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x2071c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2071c4: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x2071c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2071c8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2071C8u;
    {
        const bool branch_taken_0x2071c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2071CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2071C8u;
        // 0x2071cc: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2071c8) {
            ctx->pc = 0x2071E8u;
            return;
        }
    }
    ctx->pc = 0x2071D0u;
    // 0x2071d0: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2071d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2071d4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2071D4u;
    {
        const bool branch_taken_0x2071d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2071d4) {
            ctx->pc = 0x2071D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2071D4u;
            // 0x2071d8: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2071ECu;
            return;
        }
    }
    ctx->pc = 0x2071DCu;
    // 0x2071dc: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2071dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2071e0: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x2071e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2071e4: 0x0  nop
    ctx->pc = 0x2071e4u;
    // NOP
    ctx->pc = 0x2071e8u;
}
