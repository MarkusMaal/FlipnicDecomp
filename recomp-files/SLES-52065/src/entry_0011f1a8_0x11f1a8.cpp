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

// Function: entry_0011f1a8
// Address: 0x11f1a8 - 0x11f1d8
void entry_0011f1a8_0x11f1a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f1a8_0x11f1a8");
#endif

    ctx->pc = 0x11f1a8u;

    // 0x11f1a8: 0x8e630094  lw          $v1, 0x94($s3)
    ctx->pc = 0x11f1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
    // 0x11f1ac: 0x282a023  subu        $s4, $s4, $v0
    ctx->pc = 0x11f1acu;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x11f1b0: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x11f1b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x11f1b4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x11f1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11f1b8: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x11F1B8u;
    {
        const bool branch_taken_0x11f1b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F1B8u;
        // 0x11f1bc: 0xae630094  sw          $v1, 0x94($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 148), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f1b8) {
            ctx->pc = 0x11F1DCu;
            return;
        }
    }
    ctx->pc = 0x11F1C0u;
    // 0x11f1c0: 0x2301821  addu        $v1, $s1, $s0
    ctx->pc = 0x11f1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x11f1c4: 0x243082b  sltu        $at, $s2, $v1
    ctx->pc = 0x11f1c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x11f1c8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x11F1C8u;
    {
        const bool branch_taken_0x11f1c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f1c8) {
            ctx->pc = 0x11F1D8u;
            return;
        }
    }
    ctx->pc = 0x11F1D0u;
    // 0x11f1d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11F1D0u;
    {
        const bool branch_taken_0x11f1d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f1d0) {
            ctx->pc = 0x11F1DCu;
            return;
        }
    }
    ctx->pc = 0x11F1D8u;
}
