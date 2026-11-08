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
// Address: 0x10a120 - 0x10a134
void caseD_9_0x10a120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_9_0x10a120");
#endif

    switch (ctx->pc) {
        case 0x10a12cu: goto label_10a12c;
        default: break;
    }

    ctx->pc = 0x10a120u;

    // 0x10a120: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x10a120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
    // 0x10a124: 0xc046400  jal         func_119000
    ctx->pc = 0x10A124u;
    SET_GPR_U32(ctx, 31, 0x10A12Cu);
    ctx->pc = 0x10A128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A124u;
    // 0x10a128: 0x86250002  lh          $a1, 0x2($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119000u, 0x10A124u, 0x10A12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A12Cu;
label_10a12c:
    // 0x10a12c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x10A12Cu;
    {
        const bool branch_taken_0x10a12c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a12c) {
            ctx->pc = 0x10A1F0u;
            return;
        }
    }
    ctx->pc = 0x10A134u;
}
