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

// Function: caseD_4
// Address: 0x19fdd4 - 0x19fddc
void caseD_4_0x19fdd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x19fdd4");
#endif

    ctx->pc = 0x19fdd4u;

    // 0x19fdd4: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x19FDD4u;
    {
        const bool branch_taken_0x19fdd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FDD4u;
        // 0x19fdd8: 0xac860690  sw          $a2, 0x690($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1680), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fdd4) {
            ctx->pc = 0x19FE6Cu;
            return;
        }
    }
    ctx->pc = 0x19FDDCu;
}
