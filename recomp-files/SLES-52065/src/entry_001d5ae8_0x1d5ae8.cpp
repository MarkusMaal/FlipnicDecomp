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

// Function: entry_001d5ae8
// Address: 0x1d5ae8 - 0x1d5af8
void entry_001d5ae8_0x1d5ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5ae8_0x1d5ae8");
#endif

    ctx->pc = 0x1d5ae8u;

    // 0x1d5ae8: 0x120200a5  beq         $s0, $v0, . + 4 + (0xA5 << 2)
    ctx->pc = 0x1D5AE8u;
    {
        const bool branch_taken_0x1d5ae8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D5AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5AE8u;
        // 0x1d5aec: 0x2521818  mult        $v1, $s2, $s2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5ae8) {
            ctx->pc = 0x1D5D80u;
            return;
        }
    }
    ctx->pc = 0x1D5AF0u;
    // 0x1d5af0: 0x10000199  b           . + 4 + (0x199 << 2)
    ctx->pc = 0x1D5AF0u;
    {
        const bool branch_taken_0x1d5af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5af0) {
            ctx->pc = 0x1D6158u;
            return;
        }
    }
    ctx->pc = 0x1D5AF8u;
}
