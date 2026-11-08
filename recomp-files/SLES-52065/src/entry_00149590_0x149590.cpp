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

// Function: entry_00149590
// Address: 0x149590 - 0x1495a8
void entry_00149590_0x149590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149590_0x149590");
#endif

    switch (ctx->pc) {
        case 0x1495a4u: goto label_1495a4;
        default: break;
    }

    ctx->pc = 0x149590u;

    // 0x149590: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x149590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x149594: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x149594u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x149598: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x149598u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14959c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x14959Cu;
    SET_GPR_U32(ctx, 31, 0x1495A4u);
    ctx->pc = 0x1495A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14959Cu;
    // 0x1495a0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x14959Cu, 0x1495A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1495A4u;
label_1495a4:
    // 0x1495a4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1495a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x1495a8u;
}
