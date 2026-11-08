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

// Function: entry_0010b1e0
// Address: 0x10b1e0 - 0x10b1f0
void entry_0010b1e0_0x10b1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b1e0_0x10b1e0");
#endif

    ctx->pc = 0x10b1e0u;

    // 0x10b1e0: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x10B1E0u;
    {
        const bool branch_taken_0x10b1e0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B1E0u;
        // 0x10b1e4: 0x3c01002b  lui         $at, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b1e0) {
            ctx->pc = 0x10B1F0u;
            return;
        }
    }
    ctx->pc = 0x10B1E8u;
    // 0x10b1e8: 0x90232eb5  lbu         $v1, 0x2EB5($at)
    ctx->pc = 0x10b1e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 11957)));
    // 0x10b1ec: 0x0  nop
    ctx->pc = 0x10b1ecu;
    // NOP
    ctx->pc = 0x10b1f0u;
}
