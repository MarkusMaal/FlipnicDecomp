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

// Function: entry_0010a894
// Address: 0x10a894 - 0x10a8c4
void entry_0010a894_0x10a894(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010a894_0x10a894");
#endif

    switch (ctx->pc) {
        case 0x10a8b8u: goto label_10a8b8;
        default: break;
    }

    ctx->pc = 0x10a894u;

    // 0x10a894: 0x8e45001c  lw          $a1, 0x1C($s2)
    ctx->pc = 0x10a894u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x10a898: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x10A898u;
    {
        const bool branch_taken_0x10a898 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x10A89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A898u;
        // 0x10a89c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a898) {
            ctx->pc = 0x10A8C4u;
            return;
        }
    }
    ctx->pc = 0x10A8A0u;
    // 0x10a8a0: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x10a8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x10a8a4: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x10a8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
    // 0x10a8a8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x10a8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x10a8ac: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x10a8acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x10a8b0: 0xc046744  jal         func_119D10
    ctx->pc = 0x10A8B0u;
    SET_GPR_U32(ctx, 31, 0x10A8B8u);
    ctx->pc = 0x10A8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A8B0u;
    // 0x10a8b4: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119D10u, 0x10A8B0u, 0x10A8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A8B8u;
label_10a8b8:
    // 0x10a8b8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10a8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10a8bc: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x10a8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
    // 0x10a8c0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10a8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x10a8c4u;
}
