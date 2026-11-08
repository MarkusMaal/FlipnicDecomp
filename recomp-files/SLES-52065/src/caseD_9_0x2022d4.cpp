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

// Function: caseD_9
// Address: 0x2022d4 - 0x2022dc
void caseD_9_0x2022d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_9_0x2022d4");
#endif

    ctx->pc = 0x2022d4u;

    // 0x2022d4: 0x1000ffec  b           . + 4 + (-0x14 << 2)
    ctx->pc = 0x2022D4u;
    {
        const bool branch_taken_0x2022d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2022D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2022D4u;
        // 0x2022d8: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2022d4) {
            ctx->pc = 0x202288u;
            return;
        }
    }
    ctx->pc = 0x2022DCu;
}
