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

// Function: entry_0020717c
// Address: 0x20717c - 0x207194
void entry_0020717c_0x20717c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020717c_0x20717c");
#endif

    ctx->pc = 0x20717cu;

    // 0x20717c: 0x92c02  srl         $a1, $t1, 16
    ctx->pc = 0x20717cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x207180: 0x3128ffff  andi        $t0, $t1, 0xFFFF
    ctx->pc = 0x207180u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x207184: 0x165001b  divu        $zero, $t3, $a1
    ctx->pc = 0x207184u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 11) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 11) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,11); } }
    // 0x207188: 0xc2402  srl         $a0, $t4, 16
    ctx->pc = 0x207188u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), 16));
    // 0x20718c: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x20718Cu;
    {
        const bool branch_taken_0x20718c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x20718c) {
            ctx->pc = 0x207190u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20718Cu;
            // 0x207190: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x207194u;
            return;
        }
    }
    ctx->pc = 0x207194u;
}
