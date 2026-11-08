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

// Function: entry_001eeb48
// Address: 0x1eeb48 - 0x1eeb60
void entry_001eeb48_0x1eeb48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eeb48_0x1eeb48");
#endif

    ctx->pc = 0x1eeb48u;

    // 0x1eeb48: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x1EEB48u;
    {
        const bool branch_taken_0x1eeb48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eeb48) {
            ctx->pc = 0x1EEB80u;
            return;
        }
    }
    ctx->pc = 0x1EEB50u;
    // 0x1eeb50: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x1eeb50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x1eeb54: 0x50710009  beql        $v1, $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1EEB54u;
    {
        const bool branch_taken_0x1eeb54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        if (branch_taken_0x1eeb54) {
            ctx->pc = 0x1EEB58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EEB54u;
            // 0x1eeb58: 0x8e220038  lw          $v0, 0x38($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EEB7Cu;
            return;
        }
    }
    ctx->pc = 0x1EEB5Cu;
    // 0x1eeb5c: 0x0  nop
    ctx->pc = 0x1eeb5cu;
    // NOP
    ctx->pc = 0x1eeb60u;
}
