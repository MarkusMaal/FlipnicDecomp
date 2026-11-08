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

// Function: entry_001171ec
// Address: 0x1171ec - 0x1171f8
void entry_001171ec_0x1171ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001171ec_0x1171ec");
#endif

    ctx->pc = 0x1171ecu;

    // 0x1171ec: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1171ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1171f0: 0x4a1ffe6  bgez        $a1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x1171F0u;
    {
        const bool branch_taken_0x1171f0 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x1171F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1171F0u;
        // 0x1171f4: 0x24e7fff4  addiu       $a3, $a3, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1171f0) {
            ctx->pc = 0x11718Cu;
            return;
        }
    }
    ctx->pc = 0x1171F8u;
}
