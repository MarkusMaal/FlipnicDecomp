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

// Function: entry_0012c4ac
// Address: 0x12c4ac - 0x12c4b4
void entry_0012c4ac_0x12c4ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c4ac_0x12c4ac");
#endif

    ctx->pc = 0x12c4acu;

    // 0x12c4ac: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x12C4ACu;
    {
        const bool branch_taken_0x12c4ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C4ACu;
        // 0x12c4b0: 0xa2420066  sb          $v0, 0x66($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 102), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c4ac) {
            ctx->pc = 0x12C6D8u;
            return;
        }
    }
    ctx->pc = 0x12C4B4u;
}
