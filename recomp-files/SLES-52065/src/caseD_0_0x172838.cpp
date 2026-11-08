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
// Address: 0x172838 - 0x172844
void caseD_0_0x172838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x172838");
#endif

    ctx->pc = 0x172838u;

    // 0x172838: 0x260314d0  addiu       $v1, $s0, 0x14D0
    ctx->pc = 0x172838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 5328));
    // 0x17283c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x17283Cu;
    {
        const bool branch_taken_0x17283c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17283Cu;
        // 0x172840: 0xae034020  sw          $v1, 0x4020($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16416), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17283c) {
            ctx->pc = 0x1728ACu;
            return;
        }
    }
    ctx->pc = 0x172844u;
}
