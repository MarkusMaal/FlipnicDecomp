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

// Function: entry_001fcccc
// Address: 0x1fcccc - 0x1fcce4
void entry_001fcccc_0x1fcccc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fcccc_0x1fcccc");
#endif

    ctx->pc = 0x1fccccu;

    // 0x1fcccc: 0x8fb40020  lw          $s4, 0x20($sp)
    ctx->pc = 0x1fccccu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fccd0: 0x6810005  bgez        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FCCD0u;
    {
        const bool branch_taken_0x1fccd0 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x1FCCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCCD0u;
        // 0x1fccd4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fccd0) {
            ctx->pc = 0x1FCCE8u;
            return;
        }
    }
    ctx->pc = 0x1FCCD8u;
    // 0x1fccd8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1fccd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fccdc: 0x748823  subu        $s1, $v1, $s4
    ctx->pc = 0x1fccdcu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x1fcce0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1fcce0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1fcce4u;
}
