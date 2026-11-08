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

// Function: FUN_001cac50
// Address: 0x1cac50 - 0x1cadb0
void FUN_001cac50_0x1cac50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001cac50_0x1cac50");
#endif

    switch (ctx->pc) {
        case 0x1cac64u: goto label_1cac64;
        case 0x1cac88u: goto label_1cac88;
        case 0x1cac94u: goto label_1cac94;
        case 0x1caca0u: goto label_1caca0;
        case 0x1cacb4u: goto label_1cacb4;
        case 0x1cacc0u: goto label_1cacc0;
        case 0x1cacccu: goto label_1caccc;
        case 0x1cace0u: goto label_1cace0;
        case 0x1cacecu: goto label_1cacec;
        case 0x1cacf8u: goto label_1cacf8;
        case 0x1cad0cu: goto label_1cad0c;
        case 0x1cad18u: goto label_1cad18;
        case 0x1cad24u: goto label_1cad24;
        case 0x1cad38u: goto label_1cad38;
        case 0x1cad44u: goto label_1cad44;
        case 0x1cad50u: goto label_1cad50;
        case 0x1cad64u: goto label_1cad64;
        case 0x1cad70u: goto label_1cad70;
        case 0x1cad7cu: goto label_1cad7c;
        default: break;
    }

    ctx->pc = 0x1cac50u;

    // 0x1cac50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1cac50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1cac54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cac54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cac58: 0xafa4001c  sw          $a0, 0x1C($sp)
    ctx->pc = 0x1cac58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
    // 0x1cac5c: 0xc06dbf8  jal         func_1B6FE0
    ctx->pc = 0x1CAC5Cu;
    SET_GPR_U32(ctx, 31, 0x1CAC64u);
    ctx->pc = 0x1CAC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAC5Cu;
    // 0x1cac60: 0x8fa4001c  lw          $a0, 0x1C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FE0u, 0x1CAC5Cu, 0x1CAC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAC64u;
label_1cac64:
    // 0x1cac64: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1cac64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1cac68: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1cac68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1cac6c: 0x2463bd40  addiu       $v1, $v1, -0x42C0
    ctx->pc = 0x1cac6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950208));
    // 0x1cac70: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cac70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cac74: 0x27a40024  addiu       $a0, $sp, 0x24
    ctx->pc = 0x1cac74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x1cac78: 0x24a52810  addiu       $a1, $a1, 0x2810
    ctx->pc = 0x1cac78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10256));
    // 0x1cac7c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1cac7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1cac80: 0xc04889c  jal         func_122270
    ctx->pc = 0x1CAC80u;
    SET_GPR_U32(ctx, 31, 0x1CAC88u);
    ctx->pc = 0x1CAC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAC80u;
    // 0x1cac84: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1CAC80u, 0x1CAC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAC88u;
label_1cac88:
    // 0x1cac88: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x1cac88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1cac8c: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1CAC8Cu;
    SET_GPR_U32(ctx, 31, 0x1CAC94u);
    ctx->pc = 0x1CAC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAC8Cu;
    // 0x1cac90: 0x27a50024  addiu       $a1, $sp, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1CAC8Cu, 0x1CAC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAC94u;
label_1cac94:
    // 0x1cac94: 0x27a40024  addiu       $a0, $sp, 0x24
    ctx->pc = 0x1cac94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x1cac98: 0xc04619c  jal         func_118670
    ctx->pc = 0x1CAC98u;
    SET_GPR_U32(ctx, 31, 0x1CACA0u);
    ctx->pc = 0x1CAC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAC98u;
    // 0x1cac9c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1CAC98u, 0x1CACA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CACA0u;
label_1caca0:
    // 0x1caca0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1caca0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1caca4: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x1caca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1caca8: 0x24a52830  addiu       $a1, $a1, 0x2830
    ctx->pc = 0x1caca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10288));
    // 0x1cacac: 0xc04889c  jal         func_122270
    ctx->pc = 0x1CACACu;
    SET_GPR_U32(ctx, 31, 0x1CACB4u);
    ctx->pc = 0x1CACB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CACACu;
    // 0x1cacb0: 0x27a60028  addiu       $a2, $sp, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1CACACu, 0x1CACB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CACB4u;
label_1cacb4:
    // 0x1cacb4: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x1cacb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1cacb8: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1CACB8u;
    SET_GPR_U32(ctx, 31, 0x1CACC0u);
    ctx->pc = 0x1CACBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CACB8u;
    // 0x1cacbc: 0x27a5002c  addiu       $a1, $sp, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1CACB8u, 0x1CACC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CACC0u;
label_1cacc0:
    // 0x1cacc0: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x1cacc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1cacc4: 0xc04619c  jal         func_118670
    ctx->pc = 0x1CACC4u;
    SET_GPR_U32(ctx, 31, 0x1CACCCu);
    ctx->pc = 0x1CACC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CACC4u;
    // 0x1cacc8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1CACC4u, 0x1CACCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CACCCu;
label_1caccc:
    // 0x1caccc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cacccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cacd0: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x1cacd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x1cacd4: 0x24a52850  addiu       $a1, $a1, 0x2850
    ctx->pc = 0x1cacd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10320));
    // 0x1cacd8: 0xc04889c  jal         func_122270
    ctx->pc = 0x1CACD8u;
    SET_GPR_U32(ctx, 31, 0x1CACE0u);
    ctx->pc = 0x1CACDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CACD8u;
    // 0x1cacdc: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1CACD8u, 0x1CACE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CACE0u;
label_1cace0:
    // 0x1cace0: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x1cace0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1cace4: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1CACE4u;
    SET_GPR_U32(ctx, 31, 0x1CACECu);
    ctx->pc = 0x1CACE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CACE4u;
    // 0x1cace8: 0x27a50034  addiu       $a1, $sp, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1CACE4u, 0x1CACECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CACECu;
label_1cacec:
    // 0x1cacec: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x1cacecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x1cacf0: 0xc04619c  jal         func_118670
    ctx->pc = 0x1CACF0u;
    SET_GPR_U32(ctx, 31, 0x1CACF8u);
    ctx->pc = 0x1CACF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CACF0u;
    // 0x1cacf4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1CACF0u, 0x1CACF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CACF8u;
label_1cacf8:
    // 0x1cacf8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cacf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cacfc: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x1cacfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x1cad00: 0x24a52870  addiu       $a1, $a1, 0x2870
    ctx->pc = 0x1cad00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10352));
    // 0x1cad04: 0xc04889c  jal         func_122270
    ctx->pc = 0x1CAD04u;
    SET_GPR_U32(ctx, 31, 0x1CAD0Cu);
    ctx->pc = 0x1CAD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAD04u;
    // 0x1cad08: 0x27a60038  addiu       $a2, $sp, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1CAD04u, 0x1CAD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAD0Cu;
label_1cad0c:
    // 0x1cad0c: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x1cad0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1cad10: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1CAD10u;
    SET_GPR_U32(ctx, 31, 0x1CAD18u);
    ctx->pc = 0x1CAD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAD10u;
    // 0x1cad14: 0x27a5003c  addiu       $a1, $sp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1CAD10u, 0x1CAD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAD18u;
label_1cad18:
    // 0x1cad18: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x1cad18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x1cad1c: 0xc04619c  jal         func_118670
    ctx->pc = 0x1CAD1Cu;
    SET_GPR_U32(ctx, 31, 0x1CAD24u);
    ctx->pc = 0x1CAD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAD1Cu;
    // 0x1cad20: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1CAD1Cu, 0x1CAD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAD24u;
label_1cad24:
    // 0x1cad24: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cad24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cad28: 0x27a40044  addiu       $a0, $sp, 0x44
    ctx->pc = 0x1cad28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x1cad2c: 0x24a52890  addiu       $a1, $a1, 0x2890
    ctx->pc = 0x1cad2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10384));
    // 0x1cad30: 0xc04889c  jal         func_122270
    ctx->pc = 0x1CAD30u;
    SET_GPR_U32(ctx, 31, 0x1CAD38u);
    ctx->pc = 0x1CAD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAD30u;
    // 0x1cad34: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1CAD30u, 0x1CAD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAD38u;
label_1cad38:
    // 0x1cad38: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x1cad38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1cad3c: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1CAD3Cu;
    SET_GPR_U32(ctx, 31, 0x1CAD44u);
    ctx->pc = 0x1CAD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAD3Cu;
    // 0x1cad40: 0x27a50044  addiu       $a1, $sp, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1CAD3Cu, 0x1CAD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAD44u;
label_1cad44:
    // 0x1cad44: 0x27a40044  addiu       $a0, $sp, 0x44
    ctx->pc = 0x1cad44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x1cad48: 0xc04619c  jal         func_118670
    ctx->pc = 0x1CAD48u;
    SET_GPR_U32(ctx, 31, 0x1CAD50u);
    ctx->pc = 0x1CAD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAD48u;
    // 0x1cad4c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1CAD48u, 0x1CAD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAD50u;
label_1cad50:
    // 0x1cad50: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cad50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cad54: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x1cad54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1cad58: 0x24a528b0  addiu       $a1, $a1, 0x28B0
    ctx->pc = 0x1cad58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10416));
    // 0x1cad5c: 0xc04889c  jal         func_122270
    ctx->pc = 0x1CAD5Cu;
    SET_GPR_U32(ctx, 31, 0x1CAD64u);
    ctx->pc = 0x1CAD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAD5Cu;
    // 0x1cad60: 0x27a60048  addiu       $a2, $sp, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1CAD5Cu, 0x1CAD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAD64u;
label_1cad64:
    // 0x1cad64: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x1cad64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1cad68: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1CAD68u;
    SET_GPR_U32(ctx, 31, 0x1CAD70u);
    ctx->pc = 0x1CAD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAD68u;
    // 0x1cad6c: 0x27a5004c  addiu       $a1, $sp, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1CAD68u, 0x1CAD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAD70u;
label_1cad70:
    // 0x1cad70: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x1cad70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1cad74: 0xc04619c  jal         func_118670
    ctx->pc = 0x1CAD74u;
    SET_GPR_U32(ctx, 31, 0x1CAD7Cu);
    ctx->pc = 0x1CAD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAD74u;
    // 0x1cad78: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1CAD74u, 0x1CAD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAD7Cu;
label_1cad7c:
    // 0x1cad7c: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1cad7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1cad80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cad80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cad84: 0xac430068  sw          $v1, 0x68($v0)
    ctx->pc = 0x1cad84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 3));
    // 0x1cad88: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1cad88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1cad8c: 0xac43007c  sw          $v1, 0x7C($v0)
    ctx->pc = 0x1cad8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 124), GPR_U32(ctx, 3));
    // 0x1cad90: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1cad90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1cad94: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1cad94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x1cad98: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1cad98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1cad9c: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x1cad9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x1cada0: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1cada0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1cada4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cada4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cada8: 0x3e00008  jr          $ra
    ctx->pc = 0x1CADA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CADACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CADA8u;
        // 0x1cadac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CADA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CADB0u;
}
