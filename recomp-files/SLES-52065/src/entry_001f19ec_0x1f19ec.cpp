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

// Function: entry_001f19ec
// Address: 0x1f19ec - 0x1f19f4
void entry_001f19ec_0x1f19ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f19ec_0x1f19ec");
#endif

    ctx->pc = 0x1f19ecu;

    // 0x1f19ec: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F19ECu;
    {
        const bool branch_taken_0x1f19ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f19ec) {
            ctx->pc = 0x1F19F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F19ECu;
            // 0x1f19f0: 0xa2000413  sb          $zero, 0x413($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 1043), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F19F4u;
            return;
        }
    }
    ctx->pc = 0x1F19F4u;
}
