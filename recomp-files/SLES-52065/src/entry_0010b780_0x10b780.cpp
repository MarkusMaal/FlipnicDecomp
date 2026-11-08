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

// Function: entry_0010b780
// Address: 0x10b780 - 0x10b7ac
void entry_0010b780_0x10b780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b780_0x10b780");
#endif

    switch (ctx->pc) {
        case 0x10b7a4u: goto label_10b7a4;
        default: break;
    }

    ctx->pc = 0x10b780u;

    // 0x10b780: 0x8e0543dc  lw          $a1, 0x43DC($s0)
    ctx->pc = 0x10b780u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17372)));
    // 0x10b784: 0x4a00009  bltz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x10B784u;
    {
        const bool branch_taken_0x10b784 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x10b784) {
            ctx->pc = 0x10B7ACu;
            return;
        }
    }
    ctx->pc = 0x10B78Cu;
    // 0x10b78c: 0x8e0343d4  lw          $v1, 0x43D4($s0)
    ctx->pc = 0x10b78cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17364)));
    // 0x10b790: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x10b790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
    // 0x10b794: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x10b794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x10b798: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x10b798u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x10b79c: 0xc046744  jal         func_119D10
    ctx->pc = 0x10B79Cu;
    SET_GPR_U32(ctx, 31, 0x10B7A4u);
    ctx->pc = 0x10B7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B79Cu;
    // 0x10b7a0: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119D10u, 0x10B79Cu, 0x10B7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B7A4u;
label_10b7a4:
    // 0x10b7a4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10b7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10b7a8: 0xae0243dc  sw          $v0, 0x43DC($s0)
    ctx->pc = 0x10b7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 17372), GPR_U32(ctx, 2));
    ctx->pc = 0x10b7acu;
}
