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

// Function: entry_001daa04
// Address: 0x1daa04 - 0x1daa1c
void entry_001daa04_0x1daa04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001daa04_0x1daa04");
#endif

    switch (ctx->pc) {
        case 0x1daa18u: goto label_1daa18;
        default: break;
    }

    ctx->pc = 0x1daa04u;

    // 0x1daa04: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1daa04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1daa08: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DAA08u;
    {
        const bool branch_taken_0x1daa08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1daa08) {
            ctx->pc = 0x1DAA0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DAA08u;
            // 0x1daa0c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DAA1Cu;
            return;
        }
    }
    ctx->pc = 0x1DAA10u;
    // 0x1daa10: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x1DAA10u;
    SET_GPR_U32(ctx, 31, 0x1DAA18u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x1DAA10u, 0x1DAA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAA18u;
label_1daa18:
    // 0x1daa18: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1daa18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1daa1cu;
}
