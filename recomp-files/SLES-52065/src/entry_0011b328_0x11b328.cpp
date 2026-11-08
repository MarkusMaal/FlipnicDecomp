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

// Function: entry_0011b328
// Address: 0x11b328 - 0x11b330
void entry_0011b328_0x11b328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b328_0x11b328");
#endif

    ctx->pc = 0x11b328u;

    // 0x11b328: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x11B328u;
    {
        const bool branch_taken_0x11b328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B328u;
        // 0x11b32c: 0x8e100038  lw          $s0, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b328) {
            ctx->pc = 0x11B300u;
            return;
        }
    }
    ctx->pc = 0x11B330u;
}
