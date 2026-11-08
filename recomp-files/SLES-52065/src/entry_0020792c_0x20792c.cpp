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

// Function: entry_0020792c
// Address: 0x20792c - 0x20793c
void entry_0020792c_0x20792c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020792c_0x20792c");
#endif

    ctx->pc = 0x20792cu;

    // 0x20792c: 0x3184ffff  andi        $a0, $t4, 0xFFFF
    ctx->pc = 0x20792cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65535);
    // 0x207930: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x207930u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x207934: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x207934u;
    {
        const bool branch_taken_0x207934 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x207934) {
            ctx->pc = 0x207938u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x207934u;
            // 0x207938: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20793Cu;
            return;
        }
    }
    ctx->pc = 0x20793Cu;
}
