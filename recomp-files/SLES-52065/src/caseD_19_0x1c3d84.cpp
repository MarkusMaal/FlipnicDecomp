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

// Function: caseD_19
// Address: 0x1c3d84 - 0x1c3dbc
void caseD_19_0x1c3d84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_19_0x1c3d84");
#endif

    switch (ctx->pc) {
        case 0x1c3d90u: goto label_1c3d90;
        case 0x1c3d9cu: goto label_1c3d9c;
        case 0x1c3da8u: goto label_1c3da8;
        default: break;
    }

    ctx->pc = 0x1c3d84u;

    // 0x1c3d84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3d88: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3D88u;
    SET_GPR_U32(ctx, 31, 0x1C3D90u);
    ctx->pc = 0x1C3D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3D88u;
    // 0x1c3d8c: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3D88u, 0x1C3D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3D90u;
label_1c3d90:
    // 0x1c3d90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3d94: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3D94u;
    SET_GPR_U32(ctx, 31, 0x1C3D9Cu);
    ctx->pc = 0x1C3D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3D94u;
    // 0x1c3d98: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3D94u, 0x1C3D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3D9Cu;
label_1c3d9c:
    // 0x1c3d9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3da0: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3DA0u;
    SET_GPR_U32(ctx, 31, 0x1C3DA8u);
    ctx->pc = 0x1C3DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3DA0u;
    // 0x1c3da4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3DA0u, 0x1C3DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3DA8u;
label_1c3da8:
    // 0x1c3da8: 0x8e030210  lw          $v1, 0x210($s0)
    ctx->pc = 0x1c3da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
    // 0x1c3dac: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c3dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c3db0: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C3DB0u;
    {
        const bool branch_taken_0x1c3db0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C3DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3DB0u;
        // 0x1c3db4: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3db0) {
            ctx->pc = 0x1C3DBCu;
            return;
        }
    }
    ctx->pc = 0x1C3DB8u;
    // 0x1c3db8: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x1c3db8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
    ctx->pc = 0x1c3dbcu;
}
