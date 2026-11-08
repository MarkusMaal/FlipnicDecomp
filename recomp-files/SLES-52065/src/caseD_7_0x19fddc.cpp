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

// Function: caseD_7
// Address: 0x19fddc - 0x19fde4
void caseD_7_0x19fddc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x19fddc");
#endif

    ctx->pc = 0x19fddcu;

    // 0x19fddc: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x19FDDCu;
    {
        const bool branch_taken_0x19fddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FDDCu;
        // 0x19fde0: 0xac860694  sw          $a2, 0x694($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1684), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fddc) {
            ctx->pc = 0x19FE6Cu;
            return;
        }
    }
    ctx->pc = 0x19FDE4u;
}
