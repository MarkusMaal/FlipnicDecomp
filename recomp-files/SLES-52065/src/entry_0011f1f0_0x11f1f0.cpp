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

// Function: entry_0011f1f0
// Address: 0x11f1f0 - 0x11f1f8
void entry_0011f1f0_0x11f1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f1f0_0x11f1f0");
#endif

    ctx->pc = 0x11f1f0u;

    // 0x11f1f0: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x11F1F0u;
    {
        const bool branch_taken_0x11f1f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F1F0u;
        // 0x11f1f4: 0x2f41023  subu        $v0, $s7, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f1f0) {
            ctx->pc = 0x11F25Cu;
            return;
        }
    }
    ctx->pc = 0x11F1F8u;
}
