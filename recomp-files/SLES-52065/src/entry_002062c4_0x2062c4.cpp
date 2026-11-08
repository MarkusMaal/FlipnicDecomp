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

// Function: entry_002062c4
// Address: 0x2062c4 - 0x206318
void entry_002062c4_0x2062c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002062c4_0x2062c4");
#endif

    ctx->pc = 0x2062c4u;

    // 0x2062c4: 0x1012  mflo        $v0
    ctx->pc = 0x2062c4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2062c8: 0x1810  mfhi        $v1
    ctx->pc = 0x2062c8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2062cc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2062ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2062d0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2062d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2062d4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2062d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2062d8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2062d8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2062dc: 0xe93018  mult        $a2, $a3, $t1
    ctx->pc = 0x2062dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2062e0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2062e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2062e4: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2062e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2062e8: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2062E8u;
    {
        const bool branch_taken_0x2062e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2062e8) {
            ctx->pc = 0x2062ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2062E8u;
            // 0x2062ec: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20631Cu;
            return;
        }
    }
    ctx->pc = 0x2062F0u;
    // 0x2062f0: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2062f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2062f4: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x2062f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2062f8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2062F8u;
    {
        const bool branch_taken_0x2062f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2062FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2062F8u;
        // 0x2062fc: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2062f8) {
            ctx->pc = 0x206318u;
            return;
        }
    }
    ctx->pc = 0x206300u;
    // 0x206300: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x206300u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x206304: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x206304u;
    {
        const bool branch_taken_0x206304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x206304) {
            ctx->pc = 0x206308u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206304u;
            // 0x206308: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20631Cu;
            return;
        }
    }
    ctx->pc = 0x20630Cu;
    // 0x20630c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x20630cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x206310: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x206310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x206314: 0x0  nop
    ctx->pc = 0x206314u;
    // NOP
    ctx->pc = 0x206318u;
}
