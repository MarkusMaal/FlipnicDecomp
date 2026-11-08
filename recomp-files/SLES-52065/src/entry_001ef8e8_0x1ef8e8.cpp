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

// Function: entry_001ef8e8
// Address: 0x1ef8e8 - 0x1ef8f0
void entry_001ef8e8_0x1ef8e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ef8e8_0x1ef8e8");
#endif

    ctx->pc = 0x1ef8e8u;

    // 0x1ef8e8: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1EF8E8u;
    {
        const bool branch_taken_0x1ef8e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ef8e8) {
            ctx->pc = 0x1EF8ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EF8E8u;
            // 0x1ef8ec: 0xa2200413  sb          $zero, 0x413($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 1043), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EF8F0u;
            return;
        }
    }
    ctx->pc = 0x1EF8F0u;
}
