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

// Function: entry_001b7304
// Address: 0x1b7304 - 0x1b7318
void entry_001b7304_0x1b7304(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7304_0x1b7304");
#endif

    ctx->pc = 0x1b7304u;

    // 0x1b7304: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x1b7304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1b7308: 0x84630004  lh          $v1, 0x4($v1)
    ctx->pc = 0x1b7308u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1b730c: 0x14640002  bne         $v1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B730Cu;
    {
        const bool branch_taken_0x1b730c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1B7310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B730Cu;
        // 0x1b7310: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b730c) {
            ctx->pc = 0x1B7318u;
            return;
        }
    }
    ctx->pc = 0x1B7314u;
    // 0x1b7314: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1b7314u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1b7318u;
}
