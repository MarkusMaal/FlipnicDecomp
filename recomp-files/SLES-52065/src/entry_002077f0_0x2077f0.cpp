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

// Function: entry_002077f0
// Address: 0x2077f0 - 0x207824
void entry_002077f0_0x2077f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002077f0_0x2077f0");
#endif

    ctx->pc = 0x2077f0u;

    // 0x2077f0: 0x1aa1804  sllv        $v1, $t2, $t5
    ctx->pc = 0x2077f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 13) & 0x1F));
    // 0x2077f4: 0x1cc1006  srlv        $v0, $t4, $t6
    ctx->pc = 0x2077f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 14) & 0x1F));
    // 0x2077f8: 0x1ca3806  srlv        $a3, $t2, $t6
    ctx->pc = 0x2077f8u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 14) & 0x1F));
    // 0x2077fc: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x2077fcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x207800: 0x1a84004  sllv        $t0, $t0, $t5
    ctx->pc = 0x207800u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 13) & 0x1F));
    // 0x207804: 0x1ac6004  sllv        $t4, $t4, $t5
    ctx->pc = 0x207804u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 13) & 0x1F));
    // 0x207808: 0x82c02  srl         $a1, $t0, 16
    ctx->pc = 0x207808u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x20780c: 0xe5001b  divu        $zero, $a3, $a1
    ctx->pc = 0x20780cu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x207810: 0x3109ffff  andi        $t1, $t0, 0xFFFF
    ctx->pc = 0x207810u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x207814: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x207814u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207818: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x207818u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x20781c: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x20781Cu;
    {
        const bool branch_taken_0x20781c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x20781c) {
            ctx->pc = 0x207820u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20781Cu;
            // 0x207820: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x207824u;
            return;
        }
    }
    ctx->pc = 0x207824u;
}
