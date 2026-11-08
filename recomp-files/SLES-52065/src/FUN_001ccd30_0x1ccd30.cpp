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

// Function: FUN_001ccd30
// Address: 0x1ccd30 - 0x1ccfac
void FUN_001ccd30_0x1ccd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ccd30_0x1ccd30");
#endif

    switch (ctx->pc) {
        case 0x1ccd44u: goto label_1ccd44;
        case 0x1ccd68u: goto label_1ccd68;
        case 0x1ccd74u: goto label_1ccd74;
        case 0x1ccd80u: goto label_1ccd80;
        case 0x1ccd94u: goto label_1ccd94;
        case 0x1ccda0u: goto label_1ccda0;
        case 0x1ccdacu: goto label_1ccdac;
        case 0x1ccdc0u: goto label_1ccdc0;
        case 0x1ccdccu: goto label_1ccdcc;
        case 0x1ccdd8u: goto label_1ccdd8;
        case 0x1ccdecu: goto label_1ccdec;
        case 0x1ccdf8u: goto label_1ccdf8;
        case 0x1cce04u: goto label_1cce04;
        case 0x1cce18u: goto label_1cce18;
        case 0x1cce24u: goto label_1cce24;
        case 0x1cce30u: goto label_1cce30;
        case 0x1cce44u: goto label_1cce44;
        case 0x1cce50u: goto label_1cce50;
        case 0x1cce5cu: goto label_1cce5c;
        case 0x1cce70u: goto label_1cce70;
        case 0x1cce7cu: goto label_1cce7c;
        case 0x1cce88u: goto label_1cce88;
        case 0x1cce9cu: goto label_1cce9c;
        case 0x1ccea8u: goto label_1ccea8;
        case 0x1cceb4u: goto label_1cceb4;
        case 0x1ccec8u: goto label_1ccec8;
        case 0x1cced4u: goto label_1cced4;
        case 0x1ccee0u: goto label_1ccee0;
        case 0x1ccef4u: goto label_1ccef4;
        case 0x1ccf00u: goto label_1ccf00;
        case 0x1ccf0cu: goto label_1ccf0c;
        case 0x1ccf20u: goto label_1ccf20;
        case 0x1ccf2cu: goto label_1ccf2c;
        case 0x1ccf38u: goto label_1ccf38;
        case 0x1ccf4cu: goto label_1ccf4c;
        case 0x1ccf58u: goto label_1ccf58;
        case 0x1ccf64u: goto label_1ccf64;
        case 0x1ccf78u: goto label_1ccf78;
        case 0x1ccf84u: goto label_1ccf84;
        case 0x1ccf90u: goto label_1ccf90;
        default: break;
    }

    ctx->pc = 0x1ccd30u;

    // 0x1ccd30: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1ccd30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1ccd34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ccd34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ccd38: 0xafa40014  sw          $a0, 0x14($sp)
    ctx->pc = 0x1ccd38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
    // 0x1ccd3c: 0xc06dbf8  jal         func_1B6FE0
    ctx->pc = 0x1CCD3Cu;
    SET_GPR_U32(ctx, 31, 0x1CCD44u);
    ctx->pc = 0x1CCD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCD3Cu;
    // 0x1ccd40: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FE0u, 0x1CCD3Cu, 0x1CCD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCD44u;
label_1ccd44:
    // 0x1ccd44: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1ccd44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1ccd48: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1ccd48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1ccd4c: 0x2463be00  addiu       $v1, $v1, -0x4200
    ctx->pc = 0x1ccd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950400));
    // 0x1ccd50: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1ccd50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1ccd54: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x1ccd54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1ccd58: 0x24a52aa0  addiu       $a1, $a1, 0x2AA0
    ctx->pc = 0x1ccd58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10912));
    // 0x1ccd5c: 0x27a60018  addiu       $a2, $sp, 0x18
    ctx->pc = 0x1ccd5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x1ccd60: 0xc04889c  jal         func_122270
    ctx->pc = 0x1CCD60u;
    SET_GPR_U32(ctx, 31, 0x1CCD68u);
    ctx->pc = 0x1CCD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCD60u;
    // 0x1ccd64: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1CCD60u, 0x1CCD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCD68u;
label_1ccd68:
    // 0x1ccd68: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1ccd68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1ccd6c: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1CCD6Cu;
    SET_GPR_U32(ctx, 31, 0x1CCD74u);
    ctx->pc = 0x1CCD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCD6Cu;
    // 0x1ccd70: 0x27a5001c  addiu       $a1, $sp, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1CCD6Cu, 0x1CCD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCD74u;
label_1ccd74:
    // 0x1ccd74: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x1ccd74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1ccd78: 0xc04619c  jal         func_118670
    ctx->pc = 0x1CCD78u;
    SET_GPR_U32(ctx, 31, 0x1CCD80u);
    ctx->pc = 0x1CCD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCD78u;
    // 0x1ccd7c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1CCD78u, 0x1CCD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCD80u;
label_1ccd80:
    // 0x1ccd80: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1ccd80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1ccd84: 0x27a40024  addiu       $a0, $sp, 0x24
    ctx->pc = 0x1ccd84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x1ccd88: 0x24a52ac0  addiu       $a1, $a1, 0x2AC0
    ctx->pc = 0x1ccd88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10944));
    // 0x1ccd8c: 0xc04889c  jal         func_122270
    ctx->pc = 0x1CCD8Cu;
    SET_GPR_U32(ctx, 31, 0x1CCD94u);
    ctx->pc = 0x1CCD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCD8Cu;
    // 0x1ccd90: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1CCD8Cu, 0x1CCD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCD94u;
label_1ccd94:
    // 0x1ccd94: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1ccd94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1ccd98: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1CCD98u;
    SET_GPR_U32(ctx, 31, 0x1CCDA0u);
    ctx->pc = 0x1CCD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCD98u;
    // 0x1ccd9c: 0x27a50024  addiu       $a1, $sp, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1CCD98u, 0x1CCDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCDA0u;
label_1ccda0:
    // 0x1ccda0: 0x27a40024  addiu       $a0, $sp, 0x24
    ctx->pc = 0x1ccda0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x1ccda4: 0xc04619c  jal         func_118670
    ctx->pc = 0x1CCDA4u;
    SET_GPR_U32(ctx, 31, 0x1CCDACu);
    ctx->pc = 0x1CCDA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCDA4u;
    // 0x1ccda8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1CCDA4u, 0x1CCDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCDACu;
label_1ccdac:
    // 0x1ccdac: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1ccdacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1ccdb0: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x1ccdb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1ccdb4: 0x24a52ae0  addiu       $a1, $a1, 0x2AE0
    ctx->pc = 0x1ccdb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10976));
    // 0x1ccdb8: 0xc04889c  jal         func_122270
    ctx->pc = 0x1CCDB8u;
    SET_GPR_U32(ctx, 31, 0x1CCDC0u);
    ctx->pc = 0x1CCDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCDB8u;
    // 0x1ccdbc: 0x27a60028  addiu       $a2, $sp, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1CCDB8u, 0x1CCDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCDC0u;
label_1ccdc0:
    // 0x1ccdc0: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1ccdc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1ccdc4: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1CCDC4u;
    SET_GPR_U32(ctx, 31, 0x1CCDCCu);
    ctx->pc = 0x1CCDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCDC4u;
    // 0x1ccdc8: 0x27a5002c  addiu       $a1, $sp, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1CCDC4u, 0x1CCDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCDCCu;
label_1ccdcc:
    // 0x1ccdcc: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x1ccdccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1ccdd0: 0xc04619c  jal         func_118670
    ctx->pc = 0x1CCDD0u;
    SET_GPR_U32(ctx, 31, 0x1CCDD8u);
    ctx->pc = 0x1CCDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCDD0u;
    // 0x1ccdd4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1CCDD0u, 0x1CCDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCDD8u;
label_1ccdd8:
    // 0x1ccdd8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1ccdd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1ccddc: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x1ccddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x1ccde0: 0x24a52b00  addiu       $a1, $a1, 0x2B00
    ctx->pc = 0x1ccde0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11008));
    // 0x1ccde4: 0xc04889c  jal         func_122270
    ctx->pc = 0x1CCDE4u;
    SET_GPR_U32(ctx, 31, 0x1CCDECu);
    ctx->pc = 0x1CCDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCDE4u;
    // 0x1ccde8: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1CCDE4u, 0x1CCDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCDECu;
label_1ccdec:
    // 0x1ccdec: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1ccdecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1ccdf0: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1CCDF0u;
    SET_GPR_U32(ctx, 31, 0x1CCDF8u);
    ctx->pc = 0x1CCDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCDF0u;
    // 0x1ccdf4: 0x27a50034  addiu       $a1, $sp, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1CCDF0u, 0x1CCDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCDF8u;
label_1ccdf8:
    // 0x1ccdf8: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x1ccdf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x1ccdfc: 0xc04619c  jal         func_118670
    ctx->pc = 0x1CCDFCu;
    SET_GPR_U32(ctx, 31, 0x1CCE04u);
    ctx->pc = 0x1CCE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCDFCu;
    // 0x1cce00: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1CCDFCu, 0x1CCE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE04u;
label_1cce04:
    // 0x1cce04: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cce04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cce08: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x1cce08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x1cce0c: 0x24a52b20  addiu       $a1, $a1, 0x2B20
    ctx->pc = 0x1cce0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11040));
    // 0x1cce10: 0xc04889c  jal         func_122270
    ctx->pc = 0x1CCE10u;
    SET_GPR_U32(ctx, 31, 0x1CCE18u);
    ctx->pc = 0x1CCE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCE10u;
    // 0x1cce14: 0x27a60038  addiu       $a2, $sp, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1CCE10u, 0x1CCE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE18u;
label_1cce18:
    // 0x1cce18: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1cce18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1cce1c: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1CCE1Cu;
    SET_GPR_U32(ctx, 31, 0x1CCE24u);
    ctx->pc = 0x1CCE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCE1Cu;
    // 0x1cce20: 0x27a5003c  addiu       $a1, $sp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1CCE1Cu, 0x1CCE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE24u;
label_1cce24:
    // 0x1cce24: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x1cce24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x1cce28: 0xc04619c  jal         func_118670
    ctx->pc = 0x1CCE28u;
    SET_GPR_U32(ctx, 31, 0x1CCE30u);
    ctx->pc = 0x1CCE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCE28u;
    // 0x1cce2c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1CCE28u, 0x1CCE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE30u;
label_1cce30:
    // 0x1cce30: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cce30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cce34: 0x27a40044  addiu       $a0, $sp, 0x44
    ctx->pc = 0x1cce34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x1cce38: 0x24a52b40  addiu       $a1, $a1, 0x2B40
    ctx->pc = 0x1cce38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11072));
    // 0x1cce3c: 0xc04889c  jal         func_122270
    ctx->pc = 0x1CCE3Cu;
    SET_GPR_U32(ctx, 31, 0x1CCE44u);
    ctx->pc = 0x1CCE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCE3Cu;
    // 0x1cce40: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1CCE3Cu, 0x1CCE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE44u;
label_1cce44:
    // 0x1cce44: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1cce44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1cce48: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1CCE48u;
    SET_GPR_U32(ctx, 31, 0x1CCE50u);
    ctx->pc = 0x1CCE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCE48u;
    // 0x1cce4c: 0x27a50044  addiu       $a1, $sp, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1CCE48u, 0x1CCE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE50u;
label_1cce50:
    // 0x1cce50: 0x27a40044  addiu       $a0, $sp, 0x44
    ctx->pc = 0x1cce50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x1cce54: 0xc04619c  jal         func_118670
    ctx->pc = 0x1CCE54u;
    SET_GPR_U32(ctx, 31, 0x1CCE5Cu);
    ctx->pc = 0x1CCE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCE54u;
    // 0x1cce58: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1CCE54u, 0x1CCE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE5Cu;
label_1cce5c:
    // 0x1cce5c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cce5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cce60: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x1cce60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1cce64: 0x24a52b60  addiu       $a1, $a1, 0x2B60
    ctx->pc = 0x1cce64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11104));
    // 0x1cce68: 0xc04889c  jal         func_122270
    ctx->pc = 0x1CCE68u;
    SET_GPR_U32(ctx, 31, 0x1CCE70u);
    ctx->pc = 0x1CCE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCE68u;
    // 0x1cce6c: 0x27a60048  addiu       $a2, $sp, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1CCE68u, 0x1CCE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE70u;
label_1cce70:
    // 0x1cce70: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1cce70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1cce74: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1CCE74u;
    SET_GPR_U32(ctx, 31, 0x1CCE7Cu);
    ctx->pc = 0x1CCE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCE74u;
    // 0x1cce78: 0x27a5004c  addiu       $a1, $sp, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1CCE74u, 0x1CCE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE7Cu;
label_1cce7c:
    // 0x1cce7c: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x1cce7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1cce80: 0xc04619c  jal         func_118670
    ctx->pc = 0x1CCE80u;
    SET_GPR_U32(ctx, 31, 0x1CCE88u);
    ctx->pc = 0x1CCE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCE80u;
    // 0x1cce84: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1CCE80u, 0x1CCE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE88u;
label_1cce88:
    // 0x1cce88: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cce88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cce8c: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x1cce8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x1cce90: 0x24a52b80  addiu       $a1, $a1, 0x2B80
    ctx->pc = 0x1cce90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11136));
    // 0x1cce94: 0xc04889c  jal         func_122270
    ctx->pc = 0x1CCE94u;
    SET_GPR_U32(ctx, 31, 0x1CCE9Cu);
    ctx->pc = 0x1CCE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCE94u;
    // 0x1cce98: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1CCE94u, 0x1CCE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE9Cu;
label_1cce9c:
    // 0x1cce9c: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1cce9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1ccea0: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1CCEA0u;
    SET_GPR_U32(ctx, 31, 0x1CCEA8u);
    ctx->pc = 0x1CCEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCEA0u;
    // 0x1ccea4: 0x27a50054  addiu       $a1, $sp, 0x54 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1CCEA0u, 0x1CCEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCEA8u;
label_1ccea8:
    // 0x1ccea8: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x1ccea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x1cceac: 0xc04619c  jal         func_118670
    ctx->pc = 0x1CCEACu;
    SET_GPR_U32(ctx, 31, 0x1CCEB4u);
    ctx->pc = 0x1CCEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCEACu;
    // 0x1cceb0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1CCEACu, 0x1CCEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCEB4u;
label_1cceb4:
    // 0x1cceb4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cceb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cceb8: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x1cceb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x1ccebc: 0x24a52ba0  addiu       $a1, $a1, 0x2BA0
    ctx->pc = 0x1ccebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11168));
    // 0x1ccec0: 0xc04889c  jal         func_122270
    ctx->pc = 0x1CCEC0u;
    SET_GPR_U32(ctx, 31, 0x1CCEC8u);
    ctx->pc = 0x1CCEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCEC0u;
    // 0x1ccec4: 0x27a60058  addiu       $a2, $sp, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1CCEC0u, 0x1CCEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCEC8u;
label_1ccec8:
    // 0x1ccec8: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1ccec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1ccecc: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1CCECCu;
    SET_GPR_U32(ctx, 31, 0x1CCED4u);
    ctx->pc = 0x1CCED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCECCu;
    // 0x1cced0: 0x27a5005c  addiu       $a1, $sp, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1CCECCu, 0x1CCED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCED4u;
label_1cced4:
    // 0x1cced4: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x1cced4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x1cced8: 0xc04619c  jal         func_118670
    ctx->pc = 0x1CCED8u;
    SET_GPR_U32(ctx, 31, 0x1CCEE0u);
    ctx->pc = 0x1CCEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCED8u;
    // 0x1ccedc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1CCED8u, 0x1CCEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCEE0u;
label_1ccee0:
    // 0x1ccee0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1ccee0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1ccee4: 0x27a40064  addiu       $a0, $sp, 0x64
    ctx->pc = 0x1ccee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x1ccee8: 0x24a52bc0  addiu       $a1, $a1, 0x2BC0
    ctx->pc = 0x1ccee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11200));
    // 0x1cceec: 0xc04889c  jal         func_122270
    ctx->pc = 0x1CCEECu;
    SET_GPR_U32(ctx, 31, 0x1CCEF4u);
    ctx->pc = 0x1CCEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCEECu;
    // 0x1ccef0: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1CCEECu, 0x1CCEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCEF4u;
label_1ccef4:
    // 0x1ccef4: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1ccef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1ccef8: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1CCEF8u;
    SET_GPR_U32(ctx, 31, 0x1CCF00u);
    ctx->pc = 0x1CCEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCEF8u;
    // 0x1ccefc: 0x27a50064  addiu       $a1, $sp, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1CCEF8u, 0x1CCF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF00u;
label_1ccf00:
    // 0x1ccf00: 0x27a40064  addiu       $a0, $sp, 0x64
    ctx->pc = 0x1ccf00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x1ccf04: 0xc04619c  jal         func_118670
    ctx->pc = 0x1CCF04u;
    SET_GPR_U32(ctx, 31, 0x1CCF0Cu);
    ctx->pc = 0x1CCF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF04u;
    // 0x1ccf08: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1CCF04u, 0x1CCF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF0Cu;
label_1ccf0c:
    // 0x1ccf0c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1ccf0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1ccf10: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x1ccf10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x1ccf14: 0x24a52be0  addiu       $a1, $a1, 0x2BE0
    ctx->pc = 0x1ccf14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11232));
    // 0x1ccf18: 0xc04889c  jal         func_122270
    ctx->pc = 0x1CCF18u;
    SET_GPR_U32(ctx, 31, 0x1CCF20u);
    ctx->pc = 0x1CCF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF18u;
    // 0x1ccf1c: 0x27a60068  addiu       $a2, $sp, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1CCF18u, 0x1CCF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF20u;
label_1ccf20:
    // 0x1ccf20: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1ccf20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1ccf24: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1CCF24u;
    SET_GPR_U32(ctx, 31, 0x1CCF2Cu);
    ctx->pc = 0x1CCF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF24u;
    // 0x1ccf28: 0x27a5006c  addiu       $a1, $sp, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1CCF24u, 0x1CCF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF2Cu;
label_1ccf2c:
    // 0x1ccf2c: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x1ccf2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x1ccf30: 0xc04619c  jal         func_118670
    ctx->pc = 0x1CCF30u;
    SET_GPR_U32(ctx, 31, 0x1CCF38u);
    ctx->pc = 0x1CCF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF30u;
    // 0x1ccf34: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1CCF30u, 0x1CCF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF38u;
label_1ccf38:
    // 0x1ccf38: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1ccf38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1ccf3c: 0x27a40074  addiu       $a0, $sp, 0x74
    ctx->pc = 0x1ccf3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x1ccf40: 0x24a52c00  addiu       $a1, $a1, 0x2C00
    ctx->pc = 0x1ccf40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11264));
    // 0x1ccf44: 0xc04889c  jal         func_122270
    ctx->pc = 0x1CCF44u;
    SET_GPR_U32(ctx, 31, 0x1CCF4Cu);
    ctx->pc = 0x1CCF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF44u;
    // 0x1ccf48: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1CCF44u, 0x1CCF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF4Cu;
label_1ccf4c:
    // 0x1ccf4c: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1ccf4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1ccf50: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1CCF50u;
    SET_GPR_U32(ctx, 31, 0x1CCF58u);
    ctx->pc = 0x1CCF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF50u;
    // 0x1ccf54: 0x27a50074  addiu       $a1, $sp, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1CCF50u, 0x1CCF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF58u;
label_1ccf58:
    // 0x1ccf58: 0x27a40074  addiu       $a0, $sp, 0x74
    ctx->pc = 0x1ccf58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x1ccf5c: 0xc04619c  jal         func_118670
    ctx->pc = 0x1CCF5Cu;
    SET_GPR_U32(ctx, 31, 0x1CCF64u);
    ctx->pc = 0x1CCF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF5Cu;
    // 0x1ccf60: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1CCF5Cu, 0x1CCF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF64u;
label_1ccf64:
    // 0x1ccf64: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1ccf64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1ccf68: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x1ccf68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x1ccf6c: 0x24a52c20  addiu       $a1, $a1, 0x2C20
    ctx->pc = 0x1ccf6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11296));
    // 0x1ccf70: 0xc04889c  jal         func_122270
    ctx->pc = 0x1CCF70u;
    SET_GPR_U32(ctx, 31, 0x1CCF78u);
    ctx->pc = 0x1CCF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF70u;
    // 0x1ccf74: 0x27a60078  addiu       $a2, $sp, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1CCF70u, 0x1CCF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF78u;
label_1ccf78:
    // 0x1ccf78: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1ccf78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1ccf7c: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1CCF7Cu;
    SET_GPR_U32(ctx, 31, 0x1CCF84u);
    ctx->pc = 0x1CCF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF7Cu;
    // 0x1ccf80: 0x27a5007c  addiu       $a1, $sp, 0x7C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1CCF7Cu, 0x1CCF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF84u;
label_1ccf84:
    // 0x1ccf84: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x1ccf84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x1ccf88: 0xc04619c  jal         func_118670
    ctx->pc = 0x1CCF88u;
    SET_GPR_U32(ctx, 31, 0x1CCF90u);
    ctx->pc = 0x1CCF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF88u;
    // 0x1ccf8c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1CCF88u, 0x1CCF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF90u;
label_1ccf90:
    // 0x1ccf90: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1ccf90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1ccf94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ccf94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ccf98: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x1ccf98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x1ccf9c: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1ccf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1ccfa0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ccfa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ccfa4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CCFA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCFA4u;
        // 0x1ccfa8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCFA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CCFACu;
}
