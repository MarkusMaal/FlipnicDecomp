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

// Function: entry_002073f0
// Address: 0x2073f0 - 0x207408
void entry_002073f0_0x2073f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002073f0_0x2073f0");
#endif

    ctx->pc = 0x2073f0u;

    // 0x2073f0: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x2073f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2073f4: 0xc2402  srl         $a0, $t4, 16
    ctx->pc = 0x2073f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), 16));
    // 0x2073f8: 0x165001b  divu        $zero, $t3, $a1
    ctx->pc = 0x2073f8u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 11) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 11) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,11); } }
    // 0x2073fc: 0x140402d  daddu       $t0, $t2, $zero
    ctx->pc = 0x2073fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207400: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x207400u;
    {
        const bool branch_taken_0x207400 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x207400) {
            ctx->pc = 0x207404u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207400u;
            // 0x207404: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x207408u;
            return;
        }
    }
    ctx->pc = 0x207408u;
}
