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

// Function: entry_001a1ec4
// Address: 0x1a1ec4 - 0x1a1ecc
void entry_001a1ec4_0x1a1ec4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1ec4_0x1a1ec4");
#endif

    ctx->pc = 0x1a1ec4u;

    // 0x1a1ec4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A1EC4u;
    {
        const bool branch_taken_0x1a1ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1EC4u;
        // 0x1a1ec8: 0x2610000a  addiu       $s0, $s0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1ec4) {
            ctx->pc = 0x1A1ED0u;
            return;
        }
    }
    ctx->pc = 0x1A1ECCu;
}
