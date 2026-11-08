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

// Function: FUN_001c2da0
// Address: 0x1c2da0 - 0x1c2f30
void FUN_001c2da0_0x1c2da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c2da0_0x1c2da0");
#endif

    switch (ctx->pc) {
        case 0x1c2db4u: goto label_1c2db4;
        case 0x1c2dd0u: goto label_1c2dd0;
        case 0x1c2decu: goto label_1c2dec;
        case 0x1c2df8u: goto label_1c2df8;
        case 0x1c2e04u: goto label_1c2e04;
        case 0x1c2e18u: goto label_1c2e18;
        case 0x1c2e24u: goto label_1c2e24;
        case 0x1c2e30u: goto label_1c2e30;
        case 0x1c2e44u: goto label_1c2e44;
        case 0x1c2e50u: goto label_1c2e50;
        case 0x1c2e5cu: goto label_1c2e5c;
        case 0x1c2e70u: goto label_1c2e70;
        case 0x1c2e7cu: goto label_1c2e7c;
        case 0x1c2e88u: goto label_1c2e88;
        case 0x1c2e9cu: goto label_1c2e9c;
        case 0x1c2ea8u: goto label_1c2ea8;
        case 0x1c2eb4u: goto label_1c2eb4;
        case 0x1c2ec8u: goto label_1c2ec8;
        case 0x1c2ed4u: goto label_1c2ed4;
        case 0x1c2ee0u: goto label_1c2ee0;
        case 0x1c2ef4u: goto label_1c2ef4;
        case 0x1c2f00u: goto label_1c2f00;
        case 0x1c2f0cu: goto label_1c2f0c;
        default: break;
    }

    ctx->pc = 0x1c2da0u;

    // 0x1c2da0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c2da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1c2da4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c2da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c2da8: 0xafa40014  sw          $a0, 0x14($sp)
    ctx->pc = 0x1c2da8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
    // 0x1c2dac: 0xc06dbf8  jal         func_1B6FE0
    ctx->pc = 0x1C2DACu;
    SET_GPR_U32(ctx, 31, 0x1C2DB4u);
    ctx->pc = 0x1C2DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2DACu;
    // 0x1c2db0: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FE0u, 0x1C2DACu, 0x1C2DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2DB4u;
label_1c2db4:
    // 0x1c2db4: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1c2db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c2db8: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1c2db8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1c2dbc: 0x2463bb30  addiu       $v1, $v1, -0x44D0
    ctx->pc = 0x1c2dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949680));
    // 0x1c2dc0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1c2dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1c2dc4: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1c2dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c2dc8: 0xc0745e4  jal         func_1D1790
    ctx->pc = 0x1C2DC8u;
    SET_GPR_U32(ctx, 31, 0x1C2DD0u);
    ctx->pc = 0x1C2DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2DC8u;
    // 0x1c2dcc: 0x24440080  addiu       $a0, $v0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1790u, 0x1C2DC8u, 0x1C2DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2DD0u;
label_1c2dd0:
    // 0x1c2dd0: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1c2dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c2dd4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c2dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c2dd8: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x1c2dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1c2ddc: 0x24a51b50  addiu       $a1, $a1, 0x1B50
    ctx->pc = 0x1c2ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6992));
    // 0x1c2de0: 0x27a60018  addiu       $a2, $sp, 0x18
    ctx->pc = 0x1c2de0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x1c2de4: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C2DE4u;
    SET_GPR_U32(ctx, 31, 0x1C2DECu);
    ctx->pc = 0x1C2DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2DE4u;
    // 0x1c2de8: 0xa0400264  sb          $zero, 0x264($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 612), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C2DE4u, 0x1C2DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2DECu;
label_1c2dec:
    // 0x1c2dec: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1c2decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c2df0: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C2DF0u;
    SET_GPR_U32(ctx, 31, 0x1C2DF8u);
    ctx->pc = 0x1C2DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2DF0u;
    // 0x1c2df4: 0x27a5001c  addiu       $a1, $sp, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C2DF0u, 0x1C2DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2DF8u;
label_1c2df8:
    // 0x1c2df8: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x1c2df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1c2dfc: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C2DFCu;
    SET_GPR_U32(ctx, 31, 0x1C2E04u);
    ctx->pc = 0x1C2E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2DFCu;
    // 0x1c2e00: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C2DFCu, 0x1C2E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2E04u;
label_1c2e04:
    // 0x1c2e04: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c2e04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c2e08: 0x27a40024  addiu       $a0, $sp, 0x24
    ctx->pc = 0x1c2e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x1c2e0c: 0x24a51b70  addiu       $a1, $a1, 0x1B70
    ctx->pc = 0x1c2e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7024));
    // 0x1c2e10: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C2E10u;
    SET_GPR_U32(ctx, 31, 0x1C2E18u);
    ctx->pc = 0x1C2E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2E10u;
    // 0x1c2e14: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C2E10u, 0x1C2E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2E18u;
label_1c2e18:
    // 0x1c2e18: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1c2e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c2e1c: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C2E1Cu;
    SET_GPR_U32(ctx, 31, 0x1C2E24u);
    ctx->pc = 0x1C2E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2E1Cu;
    // 0x1c2e20: 0x27a50024  addiu       $a1, $sp, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C2E1Cu, 0x1C2E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2E24u;
label_1c2e24:
    // 0x1c2e24: 0x27a40024  addiu       $a0, $sp, 0x24
    ctx->pc = 0x1c2e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x1c2e28: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C2E28u;
    SET_GPR_U32(ctx, 31, 0x1C2E30u);
    ctx->pc = 0x1C2E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2E28u;
    // 0x1c2e2c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C2E28u, 0x1C2E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2E30u;
label_1c2e30:
    // 0x1c2e30: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c2e30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c2e34: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x1c2e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1c2e38: 0x24a51b90  addiu       $a1, $a1, 0x1B90
    ctx->pc = 0x1c2e38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7056));
    // 0x1c2e3c: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C2E3Cu;
    SET_GPR_U32(ctx, 31, 0x1C2E44u);
    ctx->pc = 0x1C2E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2E3Cu;
    // 0x1c2e40: 0x27a60028  addiu       $a2, $sp, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C2E3Cu, 0x1C2E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2E44u;
label_1c2e44:
    // 0x1c2e44: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1c2e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c2e48: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C2E48u;
    SET_GPR_U32(ctx, 31, 0x1C2E50u);
    ctx->pc = 0x1C2E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2E48u;
    // 0x1c2e4c: 0x27a5002c  addiu       $a1, $sp, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C2E48u, 0x1C2E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2E50u;
label_1c2e50:
    // 0x1c2e50: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x1c2e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1c2e54: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C2E54u;
    SET_GPR_U32(ctx, 31, 0x1C2E5Cu);
    ctx->pc = 0x1C2E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2E54u;
    // 0x1c2e58: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C2E54u, 0x1C2E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2E5Cu;
label_1c2e5c:
    // 0x1c2e5c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c2e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c2e60: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x1c2e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x1c2e64: 0x24a51bb0  addiu       $a1, $a1, 0x1BB0
    ctx->pc = 0x1c2e64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7088));
    // 0x1c2e68: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C2E68u;
    SET_GPR_U32(ctx, 31, 0x1C2E70u);
    ctx->pc = 0x1C2E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2E68u;
    // 0x1c2e6c: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C2E68u, 0x1C2E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2E70u;
label_1c2e70:
    // 0x1c2e70: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1c2e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c2e74: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C2E74u;
    SET_GPR_U32(ctx, 31, 0x1C2E7Cu);
    ctx->pc = 0x1C2E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2E74u;
    // 0x1c2e78: 0x27a50034  addiu       $a1, $sp, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C2E74u, 0x1C2E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2E7Cu;
label_1c2e7c:
    // 0x1c2e7c: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x1c2e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x1c2e80: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C2E80u;
    SET_GPR_U32(ctx, 31, 0x1C2E88u);
    ctx->pc = 0x1C2E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2E80u;
    // 0x1c2e84: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C2E80u, 0x1C2E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2E88u;
label_1c2e88:
    // 0x1c2e88: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c2e88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c2e8c: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x1c2e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x1c2e90: 0x24a51bd0  addiu       $a1, $a1, 0x1BD0
    ctx->pc = 0x1c2e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7120));
    // 0x1c2e94: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C2E94u;
    SET_GPR_U32(ctx, 31, 0x1C2E9Cu);
    ctx->pc = 0x1C2E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2E94u;
    // 0x1c2e98: 0x27a60038  addiu       $a2, $sp, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C2E94u, 0x1C2E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2E9Cu;
label_1c2e9c:
    // 0x1c2e9c: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1c2e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c2ea0: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C2EA0u;
    SET_GPR_U32(ctx, 31, 0x1C2EA8u);
    ctx->pc = 0x1C2EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2EA0u;
    // 0x1c2ea4: 0x27a5003c  addiu       $a1, $sp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C2EA0u, 0x1C2EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2EA8u;
label_1c2ea8:
    // 0x1c2ea8: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x1c2ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x1c2eac: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C2EACu;
    SET_GPR_U32(ctx, 31, 0x1C2EB4u);
    ctx->pc = 0x1C2EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2EACu;
    // 0x1c2eb0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C2EACu, 0x1C2EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2EB4u;
label_1c2eb4:
    // 0x1c2eb4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c2eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c2eb8: 0x27a40044  addiu       $a0, $sp, 0x44
    ctx->pc = 0x1c2eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x1c2ebc: 0x24a51bf0  addiu       $a1, $a1, 0x1BF0
    ctx->pc = 0x1c2ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7152));
    // 0x1c2ec0: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C2EC0u;
    SET_GPR_U32(ctx, 31, 0x1C2EC8u);
    ctx->pc = 0x1C2EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2EC0u;
    // 0x1c2ec4: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C2EC0u, 0x1C2EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2EC8u;
label_1c2ec8:
    // 0x1c2ec8: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1c2ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c2ecc: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C2ECCu;
    SET_GPR_U32(ctx, 31, 0x1C2ED4u);
    ctx->pc = 0x1C2ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2ECCu;
    // 0x1c2ed0: 0x27a50044  addiu       $a1, $sp, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C2ECCu, 0x1C2ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2ED4u;
label_1c2ed4:
    // 0x1c2ed4: 0x27a40044  addiu       $a0, $sp, 0x44
    ctx->pc = 0x1c2ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x1c2ed8: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C2ED8u;
    SET_GPR_U32(ctx, 31, 0x1C2EE0u);
    ctx->pc = 0x1C2EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2ED8u;
    // 0x1c2edc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C2ED8u, 0x1C2EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2EE0u;
label_1c2ee0:
    // 0x1c2ee0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c2ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c2ee4: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x1c2ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1c2ee8: 0x24a51c10  addiu       $a1, $a1, 0x1C10
    ctx->pc = 0x1c2ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7184));
    // 0x1c2eec: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C2EECu;
    SET_GPR_U32(ctx, 31, 0x1C2EF4u);
    ctx->pc = 0x1C2EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2EECu;
    // 0x1c2ef0: 0x27a60048  addiu       $a2, $sp, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C2EECu, 0x1C2EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2EF4u;
label_1c2ef4:
    // 0x1c2ef4: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1c2ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c2ef8: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C2EF8u;
    SET_GPR_U32(ctx, 31, 0x1C2F00u);
    ctx->pc = 0x1C2EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2EF8u;
    // 0x1c2efc: 0x27a5004c  addiu       $a1, $sp, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C2EF8u, 0x1C2F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2F00u;
label_1c2f00:
    // 0x1c2f00: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x1c2f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1c2f04: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C2F04u;
    SET_GPR_U32(ctx, 31, 0x1C2F0Cu);
    ctx->pc = 0x1C2F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2F04u;
    // 0x1c2f08: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C2F04u, 0x1C2F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2F0Cu;
label_1c2f0c:
    // 0x1c2f0c: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1c2f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c2f10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c2f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2f14: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x1c2f14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x1c2f18: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1c2f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c2f1c: 0xa0400040  sb          $zero, 0x40($v0)
    ctx->pc = 0x1c2f1cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c2f20: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1c2f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c2f24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c2f24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2f28: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2F28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2F28u;
        // 0x1c2f2c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2F28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2F30u;
}
