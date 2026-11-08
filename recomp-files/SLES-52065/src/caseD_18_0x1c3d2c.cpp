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

// Function: caseD_18
// Address: 0x1c3d2c - 0x1c3d6c
void caseD_18_0x1c3d2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_18_0x1c3d2c");
#endif

    switch (ctx->pc) {
        case 0x1c3d38u: goto label_1c3d38;
        case 0x1c3d44u: goto label_1c3d44;
        case 0x1c3d50u: goto label_1c3d50;
        default: break;
    }

    ctx->pc = 0x1c3d2cu;

    // 0x1c3d2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3d30: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3D30u;
    SET_GPR_U32(ctx, 31, 0x1C3D38u);
    ctx->pc = 0x1C3D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3D30u;
    // 0x1c3d34: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3D30u, 0x1C3D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3D38u;
label_1c3d38:
    // 0x1c3d38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3d3c: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3D3Cu;
    SET_GPR_U32(ctx, 31, 0x1C3D44u);
    ctx->pc = 0x1C3D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3D3Cu;
    // 0x1c3d40: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3D3Cu, 0x1C3D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3D44u;
label_1c3d44:
    // 0x1c3d44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3d48: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3D48u;
    SET_GPR_U32(ctx, 31, 0x1C3D50u);
    ctx->pc = 0x1C3D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3D48u;
    // 0x1c3d4c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3D48u, 0x1C3D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3D50u;
label_1c3d50:
    // 0x1c3d50: 0x8e020098  lw          $v0, 0x98($s0)
    ctx->pc = 0x1c3d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x1c3d54: 0x2841001d  slti        $at, $v0, 0x1D
    ctx->pc = 0x1c3d54u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x1c3d58: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C3D58u;
    {
        const bool branch_taken_0x1c3d58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3D58u;
        // 0x1c3d5c: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3d58) {
            ctx->pc = 0x1C3D6Cu;
            return;
        }
    }
    ctx->pc = 0x1C3D60u;
    // 0x1c3d60: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x1c3d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1c3d64: 0x100001a8  b           . + 4 + (0x1A8 << 2)
    ctx->pc = 0x1C3D64u;
    {
        const bool branch_taken_0x1c3d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3D64u;
        // 0x1c3d68: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3d64) {
            ctx->pc = 0x1C4408u;
            return;
        }
    }
    ctx->pc = 0x1C3D6Cu;
}
