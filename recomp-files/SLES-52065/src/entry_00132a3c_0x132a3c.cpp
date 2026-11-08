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

// Function: entry_00132a3c
// Address: 0x132a3c - 0x132a94
void entry_00132a3c_0x132a3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00132a3c_0x132a3c");
#endif

    switch (ctx->pc) {
        case 0x132a48u: goto label_132a48;
        case 0x132a54u: goto label_132a54;
        case 0x132a70u: goto label_132a70;
        case 0x132a8cu: goto label_132a8c;
        default: break;
    }

    ctx->pc = 0x132a3cu;

    // 0x132a3c: 0x3c040023  lui         $a0, 0x23
    ctx->pc = 0x132a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)35 << 16));
    // 0x132a40: 0xc04c554  jal         func_131550
    ctx->pc = 0x132A40u;
    SET_GPR_U32(ctx, 31, 0x132A48u);
    ctx->pc = 0x132A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132A40u;
    // 0x132a44: 0x2484ccc8  addiu       $a0, $a0, -0x3338 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131550u, 0x132A40u, 0x132A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132A48u;
label_132a48:
    // 0x132a48: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x132a48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x132a4c: 0xc04c54c  jal         func_131530
    ctx->pc = 0x132A4Cu;
    SET_GPR_U32(ctx, 31, 0x132A54u);
    ctx->pc = 0x132A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132A4Cu;
    // 0x132a50: 0x27a40074  addiu       $a0, $sp, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131530u, 0x132A4Cu, 0x132A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132A54u;
label_132a54:
    // 0x132a54: 0x8fa30074  lw          $v1, 0x74($sp)
    ctx->pc = 0x132a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x132a58: 0x83828210  lb          $v0, -0x7DF0($gp)
    ctx->pc = 0x132a58u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935056)));
    // 0x132a5c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x132A5Cu;
    {
        const bool branch_taken_0x132a5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x132A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132A5Cu;
        // 0x132a60: 0xafa3005c  sw          $v1, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132a5c) {
            ctx->pc = 0x132A94u;
            return;
        }
    }
    ctx->pc = 0x132A64u;
    // 0x132a64: 0x3c040023  lui         $a0, 0x23
    ctx->pc = 0x132a64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)35 << 16));
    // 0x132a68: 0xc04ca54  jal         func_132950
    ctx->pc = 0x132A68u;
    SET_GPR_U32(ctx, 31, 0x132A70u);
    ctx->pc = 0x132A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132A68u;
    // 0x132a6c: 0x2484ccc8  addiu       $a0, $a0, -0x3338 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132950u, 0x132A68u, 0x132A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132A70u;
label_132a70:
    // 0x132a70: 0x3c040023  lui         $a0, 0x23
    ctx->pc = 0x132a70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)35 << 16));
    // 0x132a74: 0x3c050013  lui         $a1, 0x13
    ctx->pc = 0x132a74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
    // 0x132a78: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x132a78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x132a7c: 0x2484ccc8  addiu       $a0, $a0, -0x3338
    ctx->pc = 0x132a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954184));
    // 0x132a80: 0x24a528c0  addiu       $a1, $a1, 0x28C0
    ctx->pc = 0x132a80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10432));
    // 0x132a84: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x132A84u;
    SET_GPR_U32(ctx, 31, 0x132A8Cu);
    ctx->pc = 0x132A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132A84u;
    // 0x132a88: 0x24c662a0  addiu       $a2, $a2, 0x62A0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x132A84u, 0x132A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132A8Cu;
label_132a8c:
    // 0x132a8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x132a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x132a90: 0xa3828210  sb          $v0, -0x7DF0($gp)
    ctx->pc = 0x132a90u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935056), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x132a94u;
}
