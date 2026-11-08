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

// Function: caseD_58
// Address: 0x2041a0 - 0x2041ac
void caseD_58_0x2041a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_58_0x2041a0");
#endif

    ctx->pc = 0x2041a0u;

    // 0x2041a0: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x2041a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x2041a4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2041A4u;
    {
        const bool branch_taken_0x2041a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2041A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2041A4u;
        // 0x2041a8: 0x244251d0  addiu       $v0, $v0, 0x51D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20944));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2041a4) {
            ctx->pc = 0x2041B4u;
            return;
        }
    }
    ctx->pc = 0x2041ACu;
}
