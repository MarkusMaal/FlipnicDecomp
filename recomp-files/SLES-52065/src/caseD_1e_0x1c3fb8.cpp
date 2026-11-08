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

// Function: caseD_1e
// Address: 0x1c3fb8 - 0x1c3ff0
void caseD_1e_0x1c3fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1e_0x1c3fb8");
#endif

    switch (ctx->pc) {
        case 0x1c3fc4u: goto label_1c3fc4;
        case 0x1c3fd0u: goto label_1c3fd0;
        case 0x1c3fdcu: goto label_1c3fdc;
        default: break;
    }

    ctx->pc = 0x1c3fb8u;

    // 0x1c3fb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3fbc: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3FBCu;
    SET_GPR_U32(ctx, 31, 0x1C3FC4u);
    ctx->pc = 0x1C3FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3FBCu;
    // 0x1c3fc0: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3FBCu, 0x1C3FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3FC4u;
label_1c3fc4:
    // 0x1c3fc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3fc8: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3FC8u;
    SET_GPR_U32(ctx, 31, 0x1C3FD0u);
    ctx->pc = 0x1C3FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3FC8u;
    // 0x1c3fcc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3FC8u, 0x1C3FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3FD0u;
label_1c3fd0:
    // 0x1c3fd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3fd4: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3FD4u;
    SET_GPR_U32(ctx, 31, 0x1C3FDCu);
    ctx->pc = 0x1C3FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3FD4u;
    // 0x1c3fd8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3FD4u, 0x1C3FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3FDCu;
label_1c3fdc:
    // 0x1c3fdc: 0x8e030240  lw          $v1, 0x240($s0)
    ctx->pc = 0x1c3fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 576)));
    // 0x1c3fe0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c3fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c3fe4: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C3FE4u;
    {
        const bool branch_taken_0x1c3fe4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C3FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3FE4u;
        // 0x1c3fe8: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3fe4) {
            ctx->pc = 0x1C3FF0u;
            return;
        }
    }
    ctx->pc = 0x1C3FECu;
    // 0x1c3fec: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x1c3fecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
    ctx->pc = 0x1c3ff0u;
}
