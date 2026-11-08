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

// Function: entry_001a39c8
// Address: 0x1a39c8 - 0x1a39e4
void entry_001a39c8_0x1a39c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a39c8_0x1a39c8");
#endif

    ctx->pc = 0x1a39c8u;

    // 0x1a39c8: 0x8e230678  lw          $v1, 0x678($s1)
    ctx->pc = 0x1a39c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1656)));
    // 0x1a39cc: 0x28610005  slti        $at, $v1, 0x5
    ctx->pc = 0x1a39ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1a39d0: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A39D0u;
    {
        const bool branch_taken_0x1a39d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a39d0) {
            ctx->pc = 0x1A39E4u;
            return;
        }
    }
    ctx->pc = 0x1A39D8u;
    // 0x1a39d8: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x1a39d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x1a39dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A39DCu;
    {
        const bool branch_taken_0x1a39dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A39E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A39DCu;
        // 0x1a39e0: 0x439818  mult        $s3, $v0, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a39dc) {
            ctx->pc = 0x1A39F0u;
            return;
        }
    }
    ctx->pc = 0x1A39E4u;
}
