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

// Function: entry_0018cde0
// Address: 0x18cde0 - 0x18cde8
void entry_0018cde0_0x18cde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018cde0_0x18cde0");
#endif

    ctx->pc = 0x18cde0u;

    // 0x18cde0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x18CDE0u;
    {
        const bool branch_taken_0x18cde0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CDE0u;
        // 0x18cde4: 0x8e020474  lw          $v0, 0x474($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cde0) {
            ctx->pc = 0x18CE04u;
            return;
        }
    }
    ctx->pc = 0x18CDE8u;
}
