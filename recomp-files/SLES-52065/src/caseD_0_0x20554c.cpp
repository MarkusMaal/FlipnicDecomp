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

// Function: caseD_0
// Address: 0x20554c - 0x205554
void caseD_0_0x20554c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x20554c");
#endif

    ctx->pc = 0x20554cu;

    // 0x20554c: 0x100001f6  b           . + 4 + (0x1F6 << 2)
    ctx->pc = 0x20554Cu;
    {
        const bool branch_taken_0x20554c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20554Cu;
        // 0x205550: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20554c) {
            ctx->pc = 0x205D28u;
            return;
        }
    }
    ctx->pc = 0x205554u;
}
