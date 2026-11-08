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

// Function: entry_001ed1b4
// Address: 0x1ed1b4 - 0x1ed1bc
void entry_001ed1b4_0x1ed1b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ed1b4_0x1ed1b4");
#endif

    ctx->pc = 0x1ed1b4u;

    // 0x1ed1b4: 0x1000ffcf  b           . + 4 + (-0x31 << 2)
    ctx->pc = 0x1ED1B4u;
    {
        const bool branch_taken_0x1ed1b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED1B4u;
        // 0x1ed1b8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed1b4) {
            ctx->pc = 0x1ED0F4u;
            return;
        }
    }
    ctx->pc = 0x1ED1BCu;
}
