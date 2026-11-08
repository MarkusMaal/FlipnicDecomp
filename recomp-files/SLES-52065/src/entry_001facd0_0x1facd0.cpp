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

// Function: entry_001facd0
// Address: 0x1facd0 - 0x1face0
void entry_001facd0_0x1facd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001facd0_0x1facd0");
#endif

    ctx->pc = 0x1facd0u;

    // 0x1facd0: 0x4c20027  bltzl       $a2, . + 4 + (0x27 << 2)
    ctx->pc = 0x1FACD0u;
    {
        const bool branch_taken_0x1facd0 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x1facd0) {
            ctx->pc = 0x1FACD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FACD0u;
            // 0x1facd4: 0x8fa30150  lw          $v1, 0x150($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FAD70u;
            return;
        }
    }
    ctx->pc = 0x1FACD8u;
    // 0x1facd8: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x1facd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1facdc: 0x0  nop
    ctx->pc = 0x1facdcu;
    // NOP
    ctx->pc = 0x1face0u;
}
