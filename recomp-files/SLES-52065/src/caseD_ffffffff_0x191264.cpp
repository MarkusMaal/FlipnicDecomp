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

// Function: caseD_ffffffff
// Address: 0x191264 - 0x19126c
void caseD_ffffffff_0x191264(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_ffffffff_0x191264");
#endif

    ctx->pc = 0x191264u;

    // 0x191264: 0x1000010d  b           . + 4 + (0x10D << 2)
    ctx->pc = 0x191264u;
    {
        const bool branch_taken_0x191264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191264u;
        // 0x191268: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191264) {
            ctx->pc = 0x19169Cu;
            return;
        }
    }
    ctx->pc = 0x19126Cu;
}
