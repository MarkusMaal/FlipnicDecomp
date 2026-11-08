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

// Function: entry_0015095c
// Address: 0x15095c - 0x150974
void entry_0015095c_0x15095c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015095c_0x15095c");
#endif

    switch (ctx->pc) {
        case 0x150968u: goto label_150968;
        default: break;
    }

    ctx->pc = 0x15095cu;

    // 0x15095c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x15095cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x150960: 0xc0401a4  jal         func_100690
    ctx->pc = 0x150960u;
    SET_GPR_U32(ctx, 31, 0x150968u);
    ctx->pc = 0x150964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150960u;
    // 0x150964: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x150960u, 0x150968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150968u;
label_150968:
    // 0x150968: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x150968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x15096c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x15096cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x150970: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x150970u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x150974u;
}
