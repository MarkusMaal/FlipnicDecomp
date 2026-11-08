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

// Function: entry_0013241c
// Address: 0x13241c - 0x132434
void entry_0013241c_0x13241c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013241c_0x13241c");
#endif

    switch (ctx->pc) {
        case 0x132428u: goto label_132428;
        default: break;
    }

    ctx->pc = 0x13241cu;

    // 0x13241c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x13241cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x132420: 0xc0401a4  jal         func_100690
    ctx->pc = 0x132420u;
    SET_GPR_U32(ctx, 31, 0x132428u);
    ctx->pc = 0x132424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132420u;
    // 0x132424: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x132420u, 0x132428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132428u;
label_132428:
    // 0x132428: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x132428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x13242c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x13242cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x132430: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x132430u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x132434u;
}
