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

// Function: entry_0010b8f0
// Address: 0x10b8f0 - 0x10b904
void entry_0010b8f0_0x10b8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b8f0_0x10b8f0");
#endif

    ctx->pc = 0x10b8f0u;

    // 0x10b8f0: 0x8e4303d0  lw          $v1, 0x3D0($s2)
    ctx->pc = 0x10b8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 976)));
    // 0x10b8f4: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x10B8F4u;
    {
        const bool branch_taken_0x10b8f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B8F4u;
        // 0x10b8f8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b8f4) {
            ctx->pc = 0x10B9ACu;
            return;
        }
    }
    ctx->pc = 0x10B8FCu;
    // 0x10b8fc: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x10B8FCu;
    {
        const bool branch_taken_0x10b8fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10b8fc) {
            ctx->pc = 0x10B99Cu;
            return;
        }
    }
    ctx->pc = 0x10B904u;
}
