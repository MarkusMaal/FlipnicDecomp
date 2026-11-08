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

// Function: entry_001da6b0
// Address: 0x1da6b0 - 0x1da6c0
void entry_001da6b0_0x1da6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001da6b0_0x1da6b0");
#endif

    ctx->pc = 0x1da6b0u;

    // 0x1da6b0: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x1da6b0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x1da6b4: 0x1010  mfhi        $v0
    ctx->pc = 0x1da6b4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1da6b8: 0x100000b9  b           . + 4 + (0xB9 << 2)
    ctx->pc = 0x1DA6B8u;
    {
        const bool branch_taken_0x1da6b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA6B8u;
        // 0x1da6bc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da6b8) {
            ctx->pc = 0x1DA9A0u;
            return;
        }
    }
    ctx->pc = 0x1DA6C0u;
}
