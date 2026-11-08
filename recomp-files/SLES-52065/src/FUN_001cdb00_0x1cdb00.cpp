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

// Function: FUN_001cdb00
// Address: 0x1cdb00 - 0x1cdd38
void FUN_001cdb00_0x1cdb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001cdb00_0x1cdb00");
#endif

    switch (ctx->pc) {
        case 0x1cdb18u: goto label_1cdb18;
        case 0x1cdb3cu: goto label_1cdb3c;
        case 0x1cdb48u: goto label_1cdb48;
        case 0x1cdb54u: goto label_1cdb54;
        case 0x1cdb68u: goto label_1cdb68;
        case 0x1cdb74u: goto label_1cdb74;
        case 0x1cdb80u: goto label_1cdb80;
        case 0x1cdb94u: goto label_1cdb94;
        case 0x1cdba0u: goto label_1cdba0;
        case 0x1cdbacu: goto label_1cdbac;
        case 0x1cdbc0u: goto label_1cdbc0;
        case 0x1cdbccu: goto label_1cdbcc;
        case 0x1cdbd8u: goto label_1cdbd8;
        case 0x1cdbecu: goto label_1cdbec;
        case 0x1cdbf8u: goto label_1cdbf8;
        case 0x1cdc04u: goto label_1cdc04;
        case 0x1cdc18u: goto label_1cdc18;
        case 0x1cdc24u: goto label_1cdc24;
        case 0x1cdc30u: goto label_1cdc30;
        case 0x1cdc44u: goto label_1cdc44;
        case 0x1cdc50u: goto label_1cdc50;
        case 0x1cdc5cu: goto label_1cdc5c;
        case 0x1cdc70u: goto label_1cdc70;
        case 0x1cdc7cu: goto label_1cdc7c;
        case 0x1cdc88u: goto label_1cdc88;
        case 0x1cdc98u: goto label_1cdc98;
        case 0x1cdca0u: goto label_1cdca0;
        case 0x1cdcb0u: goto label_1cdcb0;
        case 0x1cdcc8u: goto label_1cdcc8;
        case 0x1cdcd8u: goto label_1cdcd8;
        case 0x1cdd00u: goto label_1cdd00;
        case 0x1cdd1cu: goto label_1cdd1c;
        default: break;
    }

    ctx->pc = 0x1cdb00u;

    // 0x1cdb00: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1cdb00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1cdb04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cdb04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cdb08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cdb08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cdb0c: 0xafa4002c  sw          $a0, 0x2C($sp)
    ctx->pc = 0x1cdb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 4));
    // 0x1cdb10: 0xc06dbf8  jal         func_1B6FE0
    ctx->pc = 0x1CDB10u;
    SET_GPR_U32(ctx, 31, 0x1CDB18u);
    ctx->pc = 0x1CDB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDB10u;
    // 0x1cdb14: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FE0u, 0x1CDB10u, 0x1CDB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDB18u;
label_1cdb18:
    // 0x1cdb18: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1cdb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1cdb1c: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1cdb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1cdb20: 0x2463be30  addiu       $v1, $v1, -0x41D0
    ctx->pc = 0x1cdb20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950448));
    // 0x1cdb24: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cdb24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cdb28: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1cdb28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1cdb2c: 0x24a52dc0  addiu       $a1, $a1, 0x2DC0
    ctx->pc = 0x1cdb2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11712));
    // 0x1cdb30: 0x27a6003c  addiu       $a2, $sp, 0x3C
    ctx->pc = 0x1cdb30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x1cdb34: 0xc04889c  jal         func_122270
    ctx->pc = 0x1CDB34u;
    SET_GPR_U32(ctx, 31, 0x1CDB3Cu);
    ctx->pc = 0x1CDB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDB34u;
    // 0x1cdb38: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1CDB34u, 0x1CDB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDB3Cu;
label_1cdb3c:
    // 0x1cdb3c: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x1cdb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1cdb40: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1CDB40u;
    SET_GPR_U32(ctx, 31, 0x1CDB48u);
    ctx->pc = 0x1CDB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDB40u;
    // 0x1cdb44: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1CDB40u, 0x1CDB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDB48u;
label_1cdb48:
    // 0x1cdb48: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1cdb48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1cdb4c: 0xc04619c  jal         func_118670
    ctx->pc = 0x1CDB4Cu;
    SET_GPR_U32(ctx, 31, 0x1CDB54u);
    ctx->pc = 0x1CDB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDB4Cu;
    // 0x1cdb50: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1CDB4Cu, 0x1CDB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDB54u;
label_1cdb54:
    // 0x1cdb54: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cdb54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cdb58: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x1cdb58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1cdb5c: 0x24a52de0  addiu       $a1, $a1, 0x2DE0
    ctx->pc = 0x1cdb5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11744));
    // 0x1cdb60: 0xc04889c  jal         func_122270
    ctx->pc = 0x1CDB60u;
    SET_GPR_U32(ctx, 31, 0x1CDB68u);
    ctx->pc = 0x1CDB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDB60u;
    // 0x1cdb64: 0x27a60044  addiu       $a2, $sp, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1CDB60u, 0x1CDB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDB68u;
label_1cdb68:
    // 0x1cdb68: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x1cdb68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1cdb6c: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1CDB6Cu;
    SET_GPR_U32(ctx, 31, 0x1CDB74u);
    ctx->pc = 0x1CDB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDB6Cu;
    // 0x1cdb70: 0x27a50048  addiu       $a1, $sp, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1CDB6Cu, 0x1CDB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDB74u;
label_1cdb74:
    // 0x1cdb74: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x1cdb74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1cdb78: 0xc04619c  jal         func_118670
    ctx->pc = 0x1CDB78u;
    SET_GPR_U32(ctx, 31, 0x1CDB80u);
    ctx->pc = 0x1CDB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDB78u;
    // 0x1cdb7c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1CDB78u, 0x1CDB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDB80u;
label_1cdb80:
    // 0x1cdb80: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cdb80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cdb84: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1cdb84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1cdb88: 0x24a52e00  addiu       $a1, $a1, 0x2E00
    ctx->pc = 0x1cdb88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11776));
    // 0x1cdb8c: 0xc04889c  jal         func_122270
    ctx->pc = 0x1CDB8Cu;
    SET_GPR_U32(ctx, 31, 0x1CDB94u);
    ctx->pc = 0x1CDB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDB8Cu;
    // 0x1cdb90: 0x27a6004c  addiu       $a2, $sp, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1CDB8Cu, 0x1CDB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDB94u;
label_1cdb94:
    // 0x1cdb94: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x1cdb94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1cdb98: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1CDB98u;
    SET_GPR_U32(ctx, 31, 0x1CDBA0u);
    ctx->pc = 0x1CDB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDB98u;
    // 0x1cdb9c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1CDB98u, 0x1CDBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDBA0u;
label_1cdba0:
    // 0x1cdba0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1cdba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1cdba4: 0xc04619c  jal         func_118670
    ctx->pc = 0x1CDBA4u;
    SET_GPR_U32(ctx, 31, 0x1CDBACu);
    ctx->pc = 0x1CDBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDBA4u;
    // 0x1cdba8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1CDBA4u, 0x1CDBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDBACu;
label_1cdbac:
    // 0x1cdbac: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cdbacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cdbb0: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x1cdbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x1cdbb4: 0x24a52e20  addiu       $a1, $a1, 0x2E20
    ctx->pc = 0x1cdbb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11808));
    // 0x1cdbb8: 0xc04889c  jal         func_122270
    ctx->pc = 0x1CDBB8u;
    SET_GPR_U32(ctx, 31, 0x1CDBC0u);
    ctx->pc = 0x1CDBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDBB8u;
    // 0x1cdbbc: 0x27a60054  addiu       $a2, $sp, 0x54 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1CDBB8u, 0x1CDBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDBC0u;
label_1cdbc0:
    // 0x1cdbc0: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x1cdbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1cdbc4: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1CDBC4u;
    SET_GPR_U32(ctx, 31, 0x1CDBCCu);
    ctx->pc = 0x1CDBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDBC4u;
    // 0x1cdbc8: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1CDBC4u, 0x1CDBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDBCCu;
label_1cdbcc:
    // 0x1cdbcc: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x1cdbccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x1cdbd0: 0xc04619c  jal         func_118670
    ctx->pc = 0x1CDBD0u;
    SET_GPR_U32(ctx, 31, 0x1CDBD8u);
    ctx->pc = 0x1CDBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDBD0u;
    // 0x1cdbd4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1CDBD0u, 0x1CDBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDBD8u;
label_1cdbd8:
    // 0x1cdbd8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cdbd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cdbdc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1cdbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1cdbe0: 0x24a52e40  addiu       $a1, $a1, 0x2E40
    ctx->pc = 0x1cdbe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11840));
    // 0x1cdbe4: 0xc04889c  jal         func_122270
    ctx->pc = 0x1CDBE4u;
    SET_GPR_U32(ctx, 31, 0x1CDBECu);
    ctx->pc = 0x1CDBE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDBE4u;
    // 0x1cdbe8: 0x27a6005c  addiu       $a2, $sp, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1CDBE4u, 0x1CDBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDBECu;
label_1cdbec:
    // 0x1cdbec: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x1cdbecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1cdbf0: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1CDBF0u;
    SET_GPR_U32(ctx, 31, 0x1CDBF8u);
    ctx->pc = 0x1CDBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDBF0u;
    // 0x1cdbf4: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1CDBF0u, 0x1CDBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDBF8u;
label_1cdbf8:
    // 0x1cdbf8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1cdbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1cdbfc: 0xc04619c  jal         func_118670
    ctx->pc = 0x1CDBFCu;
    SET_GPR_U32(ctx, 31, 0x1CDC04u);
    ctx->pc = 0x1CDC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDBFCu;
    // 0x1cdc00: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1CDBFCu, 0x1CDC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDC04u;
label_1cdc04:
    // 0x1cdc04: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cdc04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cdc08: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x1cdc08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x1cdc0c: 0x24a52e60  addiu       $a1, $a1, 0x2E60
    ctx->pc = 0x1cdc0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11872));
    // 0x1cdc10: 0xc04889c  jal         func_122270
    ctx->pc = 0x1CDC10u;
    SET_GPR_U32(ctx, 31, 0x1CDC18u);
    ctx->pc = 0x1CDC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDC10u;
    // 0x1cdc14: 0x27a60064  addiu       $a2, $sp, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1CDC10u, 0x1CDC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDC18u;
label_1cdc18:
    // 0x1cdc18: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x1cdc18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1cdc1c: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1CDC1Cu;
    SET_GPR_U32(ctx, 31, 0x1CDC24u);
    ctx->pc = 0x1CDC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDC1Cu;
    // 0x1cdc20: 0x27a50068  addiu       $a1, $sp, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1CDC1Cu, 0x1CDC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDC24u;
label_1cdc24:
    // 0x1cdc24: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x1cdc24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x1cdc28: 0xc04619c  jal         func_118670
    ctx->pc = 0x1CDC28u;
    SET_GPR_U32(ctx, 31, 0x1CDC30u);
    ctx->pc = 0x1CDC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDC28u;
    // 0x1cdc2c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1CDC28u, 0x1CDC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDC30u;
label_1cdc30:
    // 0x1cdc30: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cdc30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cdc34: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1cdc34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1cdc38: 0x24a52e80  addiu       $a1, $a1, 0x2E80
    ctx->pc = 0x1cdc38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11904));
    // 0x1cdc3c: 0xc04889c  jal         func_122270
    ctx->pc = 0x1CDC3Cu;
    SET_GPR_U32(ctx, 31, 0x1CDC44u);
    ctx->pc = 0x1CDC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDC3Cu;
    // 0x1cdc40: 0x27a6006c  addiu       $a2, $sp, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1CDC3Cu, 0x1CDC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDC44u;
label_1cdc44:
    // 0x1cdc44: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x1cdc44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1cdc48: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1CDC48u;
    SET_GPR_U32(ctx, 31, 0x1CDC50u);
    ctx->pc = 0x1CDC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDC48u;
    // 0x1cdc4c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1CDC48u, 0x1CDC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDC50u;
label_1cdc50:
    // 0x1cdc50: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1cdc50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1cdc54: 0xc04619c  jal         func_118670
    ctx->pc = 0x1CDC54u;
    SET_GPR_U32(ctx, 31, 0x1CDC5Cu);
    ctx->pc = 0x1CDC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDC54u;
    // 0x1cdc58: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1CDC54u, 0x1CDC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDC5Cu;
label_1cdc5c:
    // 0x1cdc5c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cdc5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cdc60: 0x27a40078  addiu       $a0, $sp, 0x78
    ctx->pc = 0x1cdc60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x1cdc64: 0x24a52ea0  addiu       $a1, $a1, 0x2EA0
    ctx->pc = 0x1cdc64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11936));
    // 0x1cdc68: 0xc04889c  jal         func_122270
    ctx->pc = 0x1CDC68u;
    SET_GPR_U32(ctx, 31, 0x1CDC70u);
    ctx->pc = 0x1CDC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDC68u;
    // 0x1cdc6c: 0x27a60074  addiu       $a2, $sp, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1CDC68u, 0x1CDC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDC70u;
label_1cdc70:
    // 0x1cdc70: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x1cdc70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1cdc74: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1CDC74u;
    SET_GPR_U32(ctx, 31, 0x1CDC7Cu);
    ctx->pc = 0x1CDC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDC74u;
    // 0x1cdc78: 0x27a50078  addiu       $a1, $sp, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1CDC74u, 0x1CDC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDC7Cu;
label_1cdc7c:
    // 0x1cdc7c: 0x27a40078  addiu       $a0, $sp, 0x78
    ctx->pc = 0x1cdc7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x1cdc80: 0xc04619c  jal         func_118670
    ctx->pc = 0x1CDC80u;
    SET_GPR_U32(ctx, 31, 0x1CDC88u);
    ctx->pc = 0x1CDC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDC80u;
    // 0x1cdc84: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1CDC80u, 0x1CDC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDC88u;
label_1cdc88:
    // 0x1cdc88: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1cdc88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1cdc8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cdc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdc90: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1cdc90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdc94: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x1cdc94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
label_1cdc98:
    // 0x1cdc98: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1CDC98u;
    SET_GPR_U32(ctx, 31, 0x1CDCA0u);
    ctx->pc = 0x1CDC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDC98u;
    // 0x1cdc9c: 0x24040140  addiu       $a0, $zero, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1CDC98u, 0x1CDCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDCA0u;
label_1cdca0:
    // 0x1cdca0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CDCA0u;
    {
        const bool branch_taken_0x1cdca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDCA0u;
        // 0x1cdca4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdca0) {
            ctx->pc = 0x1CDCB0u;
            goto label_1cdcb0;
        }
    }
    ctx->pc = 0x1CDCA8u;
    // 0x1cdca8: 0xc06e244  jal         func_1B8910
    ctx->pc = 0x1CDCA8u;
    SET_GPR_U32(ctx, 31, 0x1CDCB0u);
    ctx->pc = 0x1B8910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8910u, 0x1CDCA8u, 0x1CDCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDCB0u;
label_1cdcb0:
    // 0x1cdcb0: 0xa0400008  sb          $zero, 0x8($v0)
    ctx->pc = 0x1cdcb0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cdcb4: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x1cdcb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1cdcb8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1cdcb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1cdcbc: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x1cdcbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x1cdcc0: 0xc06ddd0  jal         func_1B7740
    ctx->pc = 0x1CDCC0u;
    SET_GPR_U32(ctx, 31, 0x1CDCC8u);
    ctx->pc = 0x1CDCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDCC0u;
    // 0x1cdcc4: 0xafb00030  sw          $s0, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7740u, 0x1CDCC0u, 0x1CDCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDCC8u;
label_1cdcc8:
    // 0x1cdcc8: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x1cdcc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1cdccc: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x1cdcccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x1cdcd0: 0xc06ed14  jal         func_1BB450
    ctx->pc = 0x1CDCD0u;
    SET_GPR_U32(ctx, 31, 0x1CDCD8u);
    ctx->pc = 0x1CDCD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDCD0u;
    // 0x1cdcd4: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB450u, 0x1CDCD0u, 0x1CDCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDCD8u;
label_1cdcd8:
    // 0x1cdcd8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1cdcd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1cdcdc: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x1cdcdcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1cdce0: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1CDCE0u;
    {
        const bool branch_taken_0x1cdce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cdce0) {
            ctx->pc = 0x1CDC98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdc98;
        }
    }
    ctx->pc = 0x1CDCE8u;
    // 0x1cdce8: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1cdce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1cdcec: 0x240400a0  addiu       $a0, $zero, 0xA0
    ctx->pc = 0x1cdcecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x1cdcf0: 0xac400064  sw          $zero, 0x64($v0)
    ctx->pc = 0x1cdcf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 0));
    // 0x1cdcf4: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1cdcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1cdcf8: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1CDCF8u;
    SET_GPR_U32(ctx, 31, 0x1CDD00u);
    ctx->pc = 0x1CDCFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDCF8u;
    // 0x1cdcfc: 0xac400068  sw          $zero, 0x68($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1CDCF8u, 0x1CDD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDD00u;
label_1cdd00:
    // 0x1cdd00: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CDD00u;
    {
        const bool branch_taken_0x1cdd00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD00u;
        // 0x1cdd04: 0x3c050023  lui         $a1, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdd00) {
            ctx->pc = 0x1CDD1Cu;
            goto label_1cdd1c;
        }
    }
    ctx->pc = 0x1CDD08u;
    // 0x1cdd08: 0x3c060023  lui         $a2, 0x23
    ctx->pc = 0x1cdd08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)35 << 16));
    // 0x1cdd0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cdd0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdd10: 0x24a5c6a4  addiu       $a1, $a1, -0x395C
    ctx->pc = 0x1cdd10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952612));
    // 0x1cdd14: 0xc0621c0  jal         func_188700
    ctx->pc = 0x1CDD14u;
    SET_GPR_U32(ctx, 31, 0x1CDD1Cu);
    ctx->pc = 0x1CDD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDD14u;
    // 0x1cdd18: 0x24c6c6c0  addiu       $a2, $a2, -0x3940 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188700u, 0x1CDD14u, 0x1CDD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDD1Cu;
label_1cdd1c:
    // 0x1cdd1c: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1cdd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1cdd20: 0xac620060  sw          $v0, 0x60($v1)
    ctx->pc = 0x1cdd20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 2));
    // 0x1cdd24: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1cdd24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1cdd28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cdd28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cdd2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cdd2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdd30: 0x3e00008  jr          $ra
    ctx->pc = 0x1CDD30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD30u;
        // 0x1cdd34: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDD30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CDD38u;
}
