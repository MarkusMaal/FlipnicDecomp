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

// Function: entry_001f849c
// Address: 0x1f849c - 0x1f84a8
void entry_001f849c_0x1f849c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f849c_0x1f849c");
#endif

    switch (ctx->pc) {
        case 0x1f84a4u: goto label_1f84a4;
        default: break;
    }

    ctx->pc = 0x1f849cu;

    // 0x1f849c: 0xc07ad90  jal         func_1EB640
    ctx->pc = 0x1F849Cu;
    SET_GPR_U32(ctx, 31, 0x1F84A4u);
    ctx->pc = 0x1F84A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F849Cu;
    // 0x1f84a0: 0x8e24d6bc  lw          $a0, -0x2944($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294956732)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB640u, 0x1F849Cu, 0x1F84A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F84A4u;
label_1f84a4:
    // 0x1f84a4: 0x8e622bc0  lw          $v0, 0x2BC0($s3)
    ctx->pc = 0x1f84a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11200)));
    ctx->pc = 0x1f84a8u;
}
