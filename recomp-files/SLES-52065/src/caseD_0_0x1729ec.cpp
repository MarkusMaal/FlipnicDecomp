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
// Address: 0x1729ec - 0x172a00
void caseD_0_0x1729ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x1729ec");
#endif

    switch (ctx->pc) {
        case 0x1729f4u: goto label_1729f4;
        default: break;
    }

    ctx->pc = 0x1729ecu;

    // 0x1729ec: 0xc05c9f4  jal         func_1727D0
    ctx->pc = 0x1729ECu;
    SET_GPR_U32(ctx, 31, 0x1729F4u);
    ctx->pc = 0x1729F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1729ECu;
    // 0x1729f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1727D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1727D0u, 0x1729ECu, 0x1729F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1729F4u;
label_1729f4:
    // 0x1729f4: 0x8e226014  lw          $v0, 0x6014($s1)
    ctx->pc = 0x1729f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24596)));
    // 0x1729f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1729f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1729fc: 0xae226014  sw          $v0, 0x6014($s1)
    ctx->pc = 0x1729fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24596), GPR_U32(ctx, 2));
    ctx->pc = 0x172a00u;
}
