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

// Function: entry_001dc1d0
// Address: 0x1dc1d0 - 0x1dc1dc
void entry_001dc1d0_0x1dc1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dc1d0_0x1dc1d0");
#endif

    ctx->pc = 0x1dc1d0u;

    // 0x1dc1d0: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1dc1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1dc1d4: 0x54a0fff2  bnel        $a1, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x1DC1D4u;
    {
        const bool branch_taken_0x1dc1d4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dc1d4) {
            ctx->pc = 0x1DC1D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DC1D4u;
            // 0x1dc1d8: 0x8ce40000  lw          $a0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DC1A0u;
            return;
        }
    }
    ctx->pc = 0x1DC1DCu;
}
