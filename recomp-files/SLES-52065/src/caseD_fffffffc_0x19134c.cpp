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

// Function: caseD_fffffffc
// Address: 0x19134c - 0x191354
void caseD_fffffffc_0x19134c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_fffffffc_0x19134c");
#endif

    ctx->pc = 0x19134cu;

    // 0x19134c: 0x100000d3  b           . + 4 + (0xD3 << 2)
    ctx->pc = 0x19134Cu;
    {
        const bool branch_taken_0x19134c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19134Cu;
        // 0x191350: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19134c) {
            ctx->pc = 0x19169Cu;
            return;
        }
    }
    ctx->pc = 0x191354u;
}
