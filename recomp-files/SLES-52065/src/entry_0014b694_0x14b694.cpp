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

// Function: entry_0014b694
// Address: 0x14b694 - 0x14b6b0
void entry_0014b694_0x14b694(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014b694_0x14b694");
#endif

    ctx->pc = 0x14b694u;

    // 0x14b694: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x14b694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x14b698: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x14b698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x14b69c: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x14b69cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x14b6a0: 0x561023  subu        $v0, $v0, $s6
    ctx->pc = 0x14b6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x14b6a4: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x14b6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x14b6a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14B6A8u;
    {
        const bool branch_taken_0x14b6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B6A8u;
        // 0x14b6ac: 0xaea20014  sw          $v0, 0x14($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b6a8) {
            ctx->pc = 0x14B6B8u;
            return;
        }
    }
    ctx->pc = 0x14B6B0u;
}
