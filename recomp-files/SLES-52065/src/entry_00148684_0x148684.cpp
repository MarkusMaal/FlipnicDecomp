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

// Function: entry_00148684
// Address: 0x148684 - 0x14868c
void entry_00148684_0x148684(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00148684_0x148684");
#endif

    ctx->pc = 0x148684u;

    // 0x148684: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x148684u;
    {
        const bool branch_taken_0x148684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148684u;
        // 0x148688: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148684) {
            ctx->pc = 0x1486A8u;
            return;
        }
    }
    ctx->pc = 0x14868Cu;
}
