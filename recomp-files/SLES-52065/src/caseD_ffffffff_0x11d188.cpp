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

// Function: caseD_ffffffff
// Address: 0x11d188 - 0x11d190
void caseD_ffffffff_0x11d188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_ffffffff_0x11d188");
#endif

    ctx->pc = 0x11d188u;

    // 0x11d188: 0x1000fd40  b           . + 4 + (-0x2C0 << 2)
    ctx->pc = 0x11D188u;
    {
        const bool branch_taken_0x11d188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D188u;
        // 0x11d18c: 0x8e310038  lw          $s1, 0x38($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d188) {
            ctx->pc = 0x11C68Cu;
            return;
        }
    }
    ctx->pc = 0x11D190u;
}
