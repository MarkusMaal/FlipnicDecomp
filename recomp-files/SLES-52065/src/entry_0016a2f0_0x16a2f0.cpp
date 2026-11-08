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

// Function: entry_0016a2f0
// Address: 0x16a2f0 - 0x16a2fc
void entry_0016a2f0_0x16a2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a2f0_0x16a2f0");
#endif

    ctx->pc = 0x16a2f0u;

    // 0x16a2f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16a2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16a2f4: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x16A2F4u;
    {
        const bool branch_taken_0x16a2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A2F4u;
        // 0x16a2f8: 0xae300224  sw          $s0, 0x224($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 548), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a2f4) {
            ctx->pc = 0x16A35Cu;
            return;
        }
    }
    ctx->pc = 0x16A2FCu;
}
