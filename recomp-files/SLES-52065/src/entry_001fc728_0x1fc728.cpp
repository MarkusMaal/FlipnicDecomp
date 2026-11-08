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

// Function: entry_001fc728
// Address: 0x1fc728 - 0x1fc738
void entry_001fc728_0x1fc728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fc728_0x1fc728");
#endif

    ctx->pc = 0x1fc728u;

    // 0x1fc728: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x1FC728u;
    {
        const bool branch_taken_0x1fc728 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC728u;
        // 0x1fc72c: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc728) {
            ctx->pc = 0x1FC760u;
            return;
        }
    }
    ctx->pc = 0x1FC730u;
    // 0x1fc730: 0x24515060  addiu       $s1, $v0, 0x5060
    ctx->pc = 0x1fc730u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 20576));
    // 0x1fc734: 0x0  nop
    ctx->pc = 0x1fc734u;
    // NOP
    ctx->pc = 0x1fc738u;
}
