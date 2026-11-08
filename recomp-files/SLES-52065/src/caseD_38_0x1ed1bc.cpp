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

// Function: caseD_38
// Address: 0x1ed1bc - 0x1ed1c4
void caseD_38_0x1ed1bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_38_0x1ed1bc");
#endif

    ctx->pc = 0x1ed1bcu;

    // 0x1ed1bc: 0x1000fffd  b           . + 4 + (-0x3 << 2)
    ctx->pc = 0x1ED1BCu;
    {
        const bool branch_taken_0x1ed1bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED1BCu;
        // 0x1ed1c0: 0x24070068  addiu       $a3, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed1bc) {
            ctx->pc = 0x1ED1B4u;
            return;
        }
    }
    ctx->pc = 0x1ED1C4u;
}
