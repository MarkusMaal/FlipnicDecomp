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

// Function: entry_002062ac
// Address: 0x2062ac - 0x2062c4
void entry_002062ac_0x2062ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002062ac_0x2062ac");
#endif

    ctx->pc = 0x2062acu;

    // 0x2062ac: 0x82c02  srl         $a1, $t0, 16
    ctx->pc = 0x2062acu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x2062b0: 0x3109ffff  andi        $t1, $t0, 0xFFFF
    ctx->pc = 0x2062b0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x2062b4: 0x145001b  divu        $zero, $t2, $a1
    ctx->pc = 0x2062b4u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
    // 0x2062b8: 0xc2402  srl         $a0, $t4, 16
    ctx->pc = 0x2062b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), 16));
    // 0x2062bc: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2062BCu;
    {
        const bool branch_taken_0x2062bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2062bc) {
            ctx->pc = 0x2062C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2062BCu;
            // 0x2062c0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2062C4u;
            return;
        }
    }
    ctx->pc = 0x2062C4u;
}
