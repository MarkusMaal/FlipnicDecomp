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

// Function: FUN_001c0310
// Address: 0x1c0310 - 0x1c06a0
void FUN_001c0310_0x1c0310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c0310_0x1c0310");
#endif

    switch (ctx->pc) {
        case 0x1c0324u: goto label_1c0324;
        case 0x1c0348u: goto label_1c0348;
        case 0x1c0354u: goto label_1c0354;
        case 0x1c0360u: goto label_1c0360;
        case 0x1c0374u: goto label_1c0374;
        case 0x1c0380u: goto label_1c0380;
        case 0x1c038cu: goto label_1c038c;
        case 0x1c03a0u: goto label_1c03a0;
        case 0x1c03acu: goto label_1c03ac;
        case 0x1c03b8u: goto label_1c03b8;
        case 0x1c03ccu: goto label_1c03cc;
        case 0x1c03d8u: goto label_1c03d8;
        case 0x1c03e4u: goto label_1c03e4;
        case 0x1c03f8u: goto label_1c03f8;
        case 0x1c0404u: goto label_1c0404;
        case 0x1c0410u: goto label_1c0410;
        case 0x1c0424u: goto label_1c0424;
        case 0x1c0430u: goto label_1c0430;
        case 0x1c043cu: goto label_1c043c;
        case 0x1c0450u: goto label_1c0450;
        case 0x1c045cu: goto label_1c045c;
        case 0x1c0468u: goto label_1c0468;
        case 0x1c047cu: goto label_1c047c;
        case 0x1c0488u: goto label_1c0488;
        case 0x1c0494u: goto label_1c0494;
        case 0x1c04a8u: goto label_1c04a8;
        case 0x1c04b4u: goto label_1c04b4;
        case 0x1c04c0u: goto label_1c04c0;
        case 0x1c04d4u: goto label_1c04d4;
        case 0x1c04e0u: goto label_1c04e0;
        case 0x1c04ecu: goto label_1c04ec;
        case 0x1c0500u: goto label_1c0500;
        case 0x1c050cu: goto label_1c050c;
        case 0x1c0518u: goto label_1c0518;
        case 0x1c052cu: goto label_1c052c;
        case 0x1c0538u: goto label_1c0538;
        case 0x1c0544u: goto label_1c0544;
        case 0x1c0558u: goto label_1c0558;
        case 0x1c0564u: goto label_1c0564;
        case 0x1c0570u: goto label_1c0570;
        case 0x1c0584u: goto label_1c0584;
        case 0x1c0590u: goto label_1c0590;
        case 0x1c059cu: goto label_1c059c;
        case 0x1c05b0u: goto label_1c05b0;
        case 0x1c05bcu: goto label_1c05bc;
        case 0x1c05c8u: goto label_1c05c8;
        case 0x1c05dcu: goto label_1c05dc;
        case 0x1c05e8u: goto label_1c05e8;
        case 0x1c05f4u: goto label_1c05f4;
        case 0x1c0608u: goto label_1c0608;
        case 0x1c0614u: goto label_1c0614;
        case 0x1c0620u: goto label_1c0620;
        case 0x1c0658u: goto label_1c0658;
        case 0x1c0674u: goto label_1c0674;
        default: break;
    }

    ctx->pc = 0x1c0310u;

    // 0x1c0310: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1c0310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1c0314: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c0314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c0318: 0xafa40014  sw          $a0, 0x14($sp)
    ctx->pc = 0x1c0318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
    // 0x1c031c: 0xc06dbf8  jal         func_1B6FE0
    ctx->pc = 0x1C031Cu;
    SET_GPR_U32(ctx, 31, 0x1C0324u);
    ctx->pc = 0x1C0320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C031Cu;
    // 0x1c0320: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FE0u, 0x1C031Cu, 0x1C0324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0324u;
label_1c0324:
    // 0x1c0324: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1c0324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c0328: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1c0328u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1c032c: 0x2463baa0  addiu       $v1, $v1, -0x4560
    ctx->pc = 0x1c032cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949536));
    // 0x1c0330: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c0330u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c0334: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x1c0334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1c0338: 0x24a515b0  addiu       $a1, $a1, 0x15B0
    ctx->pc = 0x1c0338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5552));
    // 0x1c033c: 0x27a60018  addiu       $a2, $sp, 0x18
    ctx->pc = 0x1c033cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x1c0340: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C0340u;
    SET_GPR_U32(ctx, 31, 0x1C0348u);
    ctx->pc = 0x1C0344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0340u;
    // 0x1c0344: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C0340u, 0x1C0348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0348u;
label_1c0348:
    // 0x1c0348: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1c0348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c034c: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C034Cu;
    SET_GPR_U32(ctx, 31, 0x1C0354u);
    ctx->pc = 0x1C0350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C034Cu;
    // 0x1c0350: 0x27a5001c  addiu       $a1, $sp, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C034Cu, 0x1C0354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0354u;
label_1c0354:
    // 0x1c0354: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x1c0354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1c0358: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C0358u;
    SET_GPR_U32(ctx, 31, 0x1C0360u);
    ctx->pc = 0x1C035Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0358u;
    // 0x1c035c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C0358u, 0x1C0360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0360u;
label_1c0360:
    // 0x1c0360: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c0360u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c0364: 0x27a40024  addiu       $a0, $sp, 0x24
    ctx->pc = 0x1c0364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x1c0368: 0x24a515d0  addiu       $a1, $a1, 0x15D0
    ctx->pc = 0x1c0368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5584));
    // 0x1c036c: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C036Cu;
    SET_GPR_U32(ctx, 31, 0x1C0374u);
    ctx->pc = 0x1C0370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C036Cu;
    // 0x1c0370: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C036Cu, 0x1C0374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0374u;
label_1c0374:
    // 0x1c0374: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1c0374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c0378: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C0378u;
    SET_GPR_U32(ctx, 31, 0x1C0380u);
    ctx->pc = 0x1C037Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0378u;
    // 0x1c037c: 0x27a50024  addiu       $a1, $sp, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C0378u, 0x1C0380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0380u;
label_1c0380:
    // 0x1c0380: 0x27a40024  addiu       $a0, $sp, 0x24
    ctx->pc = 0x1c0380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x1c0384: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C0384u;
    SET_GPR_U32(ctx, 31, 0x1C038Cu);
    ctx->pc = 0x1C0388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0384u;
    // 0x1c0388: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C0384u, 0x1C038Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C038Cu;
label_1c038c:
    // 0x1c038c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c038cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c0390: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x1c0390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1c0394: 0x24a515f0  addiu       $a1, $a1, 0x15F0
    ctx->pc = 0x1c0394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5616));
    // 0x1c0398: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C0398u;
    SET_GPR_U32(ctx, 31, 0x1C03A0u);
    ctx->pc = 0x1C039Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0398u;
    // 0x1c039c: 0x27a60028  addiu       $a2, $sp, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C0398u, 0x1C03A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C03A0u;
label_1c03a0:
    // 0x1c03a0: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1c03a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c03a4: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C03A4u;
    SET_GPR_U32(ctx, 31, 0x1C03ACu);
    ctx->pc = 0x1C03A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C03A4u;
    // 0x1c03a8: 0x27a5002c  addiu       $a1, $sp, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C03A4u, 0x1C03ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C03ACu;
label_1c03ac:
    // 0x1c03ac: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x1c03acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1c03b0: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C03B0u;
    SET_GPR_U32(ctx, 31, 0x1C03B8u);
    ctx->pc = 0x1C03B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C03B0u;
    // 0x1c03b4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C03B0u, 0x1C03B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C03B8u;
label_1c03b8:
    // 0x1c03b8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c03b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c03bc: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x1c03bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x1c03c0: 0x24a51610  addiu       $a1, $a1, 0x1610
    ctx->pc = 0x1c03c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5648));
    // 0x1c03c4: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C03C4u;
    SET_GPR_U32(ctx, 31, 0x1C03CCu);
    ctx->pc = 0x1C03C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C03C4u;
    // 0x1c03c8: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C03C4u, 0x1C03CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C03CCu;
label_1c03cc:
    // 0x1c03cc: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1c03ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c03d0: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C03D0u;
    SET_GPR_U32(ctx, 31, 0x1C03D8u);
    ctx->pc = 0x1C03D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C03D0u;
    // 0x1c03d4: 0x27a50034  addiu       $a1, $sp, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C03D0u, 0x1C03D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C03D8u;
label_1c03d8:
    // 0x1c03d8: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x1c03d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x1c03dc: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C03DCu;
    SET_GPR_U32(ctx, 31, 0x1C03E4u);
    ctx->pc = 0x1C03E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C03DCu;
    // 0x1c03e0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C03DCu, 0x1C03E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C03E4u;
label_1c03e4:
    // 0x1c03e4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c03e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c03e8: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x1c03e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x1c03ec: 0x24a51630  addiu       $a1, $a1, 0x1630
    ctx->pc = 0x1c03ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5680));
    // 0x1c03f0: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C03F0u;
    SET_GPR_U32(ctx, 31, 0x1C03F8u);
    ctx->pc = 0x1C03F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C03F0u;
    // 0x1c03f4: 0x27a60038  addiu       $a2, $sp, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C03F0u, 0x1C03F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C03F8u;
label_1c03f8:
    // 0x1c03f8: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1c03f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c03fc: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C03FCu;
    SET_GPR_U32(ctx, 31, 0x1C0404u);
    ctx->pc = 0x1C0400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C03FCu;
    // 0x1c0400: 0x27a5003c  addiu       $a1, $sp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C03FCu, 0x1C0404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0404u;
label_1c0404:
    // 0x1c0404: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x1c0404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x1c0408: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C0408u;
    SET_GPR_U32(ctx, 31, 0x1C0410u);
    ctx->pc = 0x1C040Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0408u;
    // 0x1c040c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C0408u, 0x1C0410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0410u;
label_1c0410:
    // 0x1c0410: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c0410u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c0414: 0x27a40044  addiu       $a0, $sp, 0x44
    ctx->pc = 0x1c0414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x1c0418: 0x24a51650  addiu       $a1, $a1, 0x1650
    ctx->pc = 0x1c0418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5712));
    // 0x1c041c: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C041Cu;
    SET_GPR_U32(ctx, 31, 0x1C0424u);
    ctx->pc = 0x1C0420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C041Cu;
    // 0x1c0420: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C041Cu, 0x1C0424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0424u;
label_1c0424:
    // 0x1c0424: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1c0424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c0428: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C0428u;
    SET_GPR_U32(ctx, 31, 0x1C0430u);
    ctx->pc = 0x1C042Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0428u;
    // 0x1c042c: 0x27a50044  addiu       $a1, $sp, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C0428u, 0x1C0430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0430u;
label_1c0430:
    // 0x1c0430: 0x27a40044  addiu       $a0, $sp, 0x44
    ctx->pc = 0x1c0430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x1c0434: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C0434u;
    SET_GPR_U32(ctx, 31, 0x1C043Cu);
    ctx->pc = 0x1C0438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0434u;
    // 0x1c0438: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C0434u, 0x1C043Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C043Cu;
label_1c043c:
    // 0x1c043c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c043cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c0440: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x1c0440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1c0444: 0x24a51670  addiu       $a1, $a1, 0x1670
    ctx->pc = 0x1c0444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5744));
    // 0x1c0448: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C0448u;
    SET_GPR_U32(ctx, 31, 0x1C0450u);
    ctx->pc = 0x1C044Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0448u;
    // 0x1c044c: 0x27a60048  addiu       $a2, $sp, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C0448u, 0x1C0450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0450u;
label_1c0450:
    // 0x1c0450: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1c0450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c0454: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C0454u;
    SET_GPR_U32(ctx, 31, 0x1C045Cu);
    ctx->pc = 0x1C0458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0454u;
    // 0x1c0458: 0x27a5004c  addiu       $a1, $sp, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C0454u, 0x1C045Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C045Cu;
label_1c045c:
    // 0x1c045c: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x1c045cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1c0460: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C0460u;
    SET_GPR_U32(ctx, 31, 0x1C0468u);
    ctx->pc = 0x1C0464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0460u;
    // 0x1c0464: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C0460u, 0x1C0468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0468u;
label_1c0468:
    // 0x1c0468: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c0468u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c046c: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x1c046cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x1c0470: 0x24a51690  addiu       $a1, $a1, 0x1690
    ctx->pc = 0x1c0470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5776));
    // 0x1c0474: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C0474u;
    SET_GPR_U32(ctx, 31, 0x1C047Cu);
    ctx->pc = 0x1C0478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0474u;
    // 0x1c0478: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C0474u, 0x1C047Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C047Cu;
label_1c047c:
    // 0x1c047c: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1c047cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c0480: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C0480u;
    SET_GPR_U32(ctx, 31, 0x1C0488u);
    ctx->pc = 0x1C0484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0480u;
    // 0x1c0484: 0x27a50054  addiu       $a1, $sp, 0x54 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C0480u, 0x1C0488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0488u;
label_1c0488:
    // 0x1c0488: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x1c0488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x1c048c: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C048Cu;
    SET_GPR_U32(ctx, 31, 0x1C0494u);
    ctx->pc = 0x1C0490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C048Cu;
    // 0x1c0490: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C048Cu, 0x1C0494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0494u;
label_1c0494:
    // 0x1c0494: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c0494u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c0498: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x1c0498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x1c049c: 0x24a516b0  addiu       $a1, $a1, 0x16B0
    ctx->pc = 0x1c049cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5808));
    // 0x1c04a0: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C04A0u;
    SET_GPR_U32(ctx, 31, 0x1C04A8u);
    ctx->pc = 0x1C04A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C04A0u;
    // 0x1c04a4: 0x27a60058  addiu       $a2, $sp, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C04A0u, 0x1C04A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C04A8u;
label_1c04a8:
    // 0x1c04a8: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1c04a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c04ac: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C04ACu;
    SET_GPR_U32(ctx, 31, 0x1C04B4u);
    ctx->pc = 0x1C04B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C04ACu;
    // 0x1c04b0: 0x27a5005c  addiu       $a1, $sp, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C04ACu, 0x1C04B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C04B4u;
label_1c04b4:
    // 0x1c04b4: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x1c04b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x1c04b8: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C04B8u;
    SET_GPR_U32(ctx, 31, 0x1C04C0u);
    ctx->pc = 0x1C04BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C04B8u;
    // 0x1c04bc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C04B8u, 0x1C04C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C04C0u;
label_1c04c0:
    // 0x1c04c0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c04c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c04c4: 0x27a40064  addiu       $a0, $sp, 0x64
    ctx->pc = 0x1c04c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x1c04c8: 0x24a516d0  addiu       $a1, $a1, 0x16D0
    ctx->pc = 0x1c04c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5840));
    // 0x1c04cc: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C04CCu;
    SET_GPR_U32(ctx, 31, 0x1C04D4u);
    ctx->pc = 0x1C04D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C04CCu;
    // 0x1c04d0: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C04CCu, 0x1C04D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C04D4u;
label_1c04d4:
    // 0x1c04d4: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1c04d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c04d8: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C04D8u;
    SET_GPR_U32(ctx, 31, 0x1C04E0u);
    ctx->pc = 0x1C04DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C04D8u;
    // 0x1c04dc: 0x27a50064  addiu       $a1, $sp, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C04D8u, 0x1C04E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C04E0u;
label_1c04e0:
    // 0x1c04e0: 0x27a40064  addiu       $a0, $sp, 0x64
    ctx->pc = 0x1c04e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x1c04e4: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C04E4u;
    SET_GPR_U32(ctx, 31, 0x1C04ECu);
    ctx->pc = 0x1C04E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C04E4u;
    // 0x1c04e8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C04E4u, 0x1C04ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C04ECu;
label_1c04ec:
    // 0x1c04ec: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c04ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c04f0: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x1c04f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x1c04f4: 0x24a516f0  addiu       $a1, $a1, 0x16F0
    ctx->pc = 0x1c04f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5872));
    // 0x1c04f8: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C04F8u;
    SET_GPR_U32(ctx, 31, 0x1C0500u);
    ctx->pc = 0x1C04FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C04F8u;
    // 0x1c04fc: 0x27a60068  addiu       $a2, $sp, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C04F8u, 0x1C0500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0500u;
label_1c0500:
    // 0x1c0500: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1c0500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c0504: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C0504u;
    SET_GPR_U32(ctx, 31, 0x1C050Cu);
    ctx->pc = 0x1C0508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0504u;
    // 0x1c0508: 0x27a5006c  addiu       $a1, $sp, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C0504u, 0x1C050Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C050Cu;
label_1c050c:
    // 0x1c050c: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x1c050cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x1c0510: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C0510u;
    SET_GPR_U32(ctx, 31, 0x1C0518u);
    ctx->pc = 0x1C0514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0510u;
    // 0x1c0514: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C0510u, 0x1C0518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0518u;
label_1c0518:
    // 0x1c0518: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c0518u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c051c: 0x27a40074  addiu       $a0, $sp, 0x74
    ctx->pc = 0x1c051cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x1c0520: 0x24a51710  addiu       $a1, $a1, 0x1710
    ctx->pc = 0x1c0520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5904));
    // 0x1c0524: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C0524u;
    SET_GPR_U32(ctx, 31, 0x1C052Cu);
    ctx->pc = 0x1C0528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0524u;
    // 0x1c0528: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C0524u, 0x1C052Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C052Cu;
label_1c052c:
    // 0x1c052c: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1c052cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c0530: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C0530u;
    SET_GPR_U32(ctx, 31, 0x1C0538u);
    ctx->pc = 0x1C0534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0530u;
    // 0x1c0534: 0x27a50074  addiu       $a1, $sp, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C0530u, 0x1C0538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0538u;
label_1c0538:
    // 0x1c0538: 0x27a40074  addiu       $a0, $sp, 0x74
    ctx->pc = 0x1c0538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x1c053c: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C053Cu;
    SET_GPR_U32(ctx, 31, 0x1C0544u);
    ctx->pc = 0x1C0540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C053Cu;
    // 0x1c0540: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C053Cu, 0x1C0544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0544u;
label_1c0544:
    // 0x1c0544: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c0544u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c0548: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x1c0548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x1c054c: 0x24a51730  addiu       $a1, $a1, 0x1730
    ctx->pc = 0x1c054cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5936));
    // 0x1c0550: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C0550u;
    SET_GPR_U32(ctx, 31, 0x1C0558u);
    ctx->pc = 0x1C0554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0550u;
    // 0x1c0554: 0x27a60078  addiu       $a2, $sp, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C0550u, 0x1C0558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0558u;
label_1c0558:
    // 0x1c0558: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1c0558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c055c: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C055Cu;
    SET_GPR_U32(ctx, 31, 0x1C0564u);
    ctx->pc = 0x1C0560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C055Cu;
    // 0x1c0560: 0x27a5007c  addiu       $a1, $sp, 0x7C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C055Cu, 0x1C0564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0564u;
label_1c0564:
    // 0x1c0564: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x1c0564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x1c0568: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C0568u;
    SET_GPR_U32(ctx, 31, 0x1C0570u);
    ctx->pc = 0x1C056Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0568u;
    // 0x1c056c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C0568u, 0x1C0570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0570u;
label_1c0570:
    // 0x1c0570: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c0570u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c0574: 0x27a40084  addiu       $a0, $sp, 0x84
    ctx->pc = 0x1c0574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x1c0578: 0x24a51750  addiu       $a1, $a1, 0x1750
    ctx->pc = 0x1c0578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5968));
    // 0x1c057c: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C057Cu;
    SET_GPR_U32(ctx, 31, 0x1C0584u);
    ctx->pc = 0x1C0580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C057Cu;
    // 0x1c0580: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C057Cu, 0x1C0584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0584u;
label_1c0584:
    // 0x1c0584: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1c0584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c0588: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C0588u;
    SET_GPR_U32(ctx, 31, 0x1C0590u);
    ctx->pc = 0x1C058Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0588u;
    // 0x1c058c: 0x27a50084  addiu       $a1, $sp, 0x84 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C0588u, 0x1C0590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0590u;
label_1c0590:
    // 0x1c0590: 0x27a40084  addiu       $a0, $sp, 0x84
    ctx->pc = 0x1c0590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x1c0594: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C0594u;
    SET_GPR_U32(ctx, 31, 0x1C059Cu);
    ctx->pc = 0x1C0598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0594u;
    // 0x1c0598: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C0594u, 0x1C059Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C059Cu;
label_1c059c:
    // 0x1c059c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c059cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c05a0: 0x27a4008c  addiu       $a0, $sp, 0x8C
    ctx->pc = 0x1c05a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x1c05a4: 0x24a51770  addiu       $a1, $a1, 0x1770
    ctx->pc = 0x1c05a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6000));
    // 0x1c05a8: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C05A8u;
    SET_GPR_U32(ctx, 31, 0x1C05B0u);
    ctx->pc = 0x1C05ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C05A8u;
    // 0x1c05ac: 0x27a60088  addiu       $a2, $sp, 0x88 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C05A8u, 0x1C05B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C05B0u;
label_1c05b0:
    // 0x1c05b0: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1c05b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c05b4: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C05B4u;
    SET_GPR_U32(ctx, 31, 0x1C05BCu);
    ctx->pc = 0x1C05B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C05B4u;
    // 0x1c05b8: 0x27a5008c  addiu       $a1, $sp, 0x8C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C05B4u, 0x1C05BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C05BCu;
label_1c05bc:
    // 0x1c05bc: 0x27a4008c  addiu       $a0, $sp, 0x8C
    ctx->pc = 0x1c05bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x1c05c0: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C05C0u;
    SET_GPR_U32(ctx, 31, 0x1C05C8u);
    ctx->pc = 0x1C05C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C05C0u;
    // 0x1c05c4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C05C0u, 0x1C05C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C05C8u;
label_1c05c8:
    // 0x1c05c8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c05c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c05cc: 0x27a40094  addiu       $a0, $sp, 0x94
    ctx->pc = 0x1c05ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x1c05d0: 0x24a51790  addiu       $a1, $a1, 0x1790
    ctx->pc = 0x1c05d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6032));
    // 0x1c05d4: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C05D4u;
    SET_GPR_U32(ctx, 31, 0x1C05DCu);
    ctx->pc = 0x1C05D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C05D4u;
    // 0x1c05d8: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C05D4u, 0x1C05DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C05DCu;
label_1c05dc:
    // 0x1c05dc: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1c05dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c05e0: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C05E0u;
    SET_GPR_U32(ctx, 31, 0x1C05E8u);
    ctx->pc = 0x1C05E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C05E0u;
    // 0x1c05e4: 0x27a50094  addiu       $a1, $sp, 0x94 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C05E0u, 0x1C05E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C05E8u;
label_1c05e8:
    // 0x1c05e8: 0x27a40094  addiu       $a0, $sp, 0x94
    ctx->pc = 0x1c05e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x1c05ec: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C05ECu;
    SET_GPR_U32(ctx, 31, 0x1C05F4u);
    ctx->pc = 0x1C05F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C05ECu;
    // 0x1c05f0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C05ECu, 0x1C05F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C05F4u;
label_1c05f4:
    // 0x1c05f4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c05f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c05f8: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x1c05f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x1c05fc: 0x24a517b0  addiu       $a1, $a1, 0x17B0
    ctx->pc = 0x1c05fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6064));
    // 0x1c0600: 0xc04889c  jal         func_122270
    ctx->pc = 0x1C0600u;
    SET_GPR_U32(ctx, 31, 0x1C0608u);
    ctx->pc = 0x1C0604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0600u;
    // 0x1c0604: 0x27a60098  addiu       $a2, $sp, 0x98 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1C0600u, 0x1C0608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0608u;
label_1c0608:
    // 0x1c0608: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1c0608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c060c: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1C060Cu;
    SET_GPR_U32(ctx, 31, 0x1C0614u);
    ctx->pc = 0x1C0610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C060Cu;
    // 0x1c0610: 0x27a5009c  addiu       $a1, $sp, 0x9C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1C060Cu, 0x1C0614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0614u;
label_1c0614:
    // 0x1c0614: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x1c0614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x1c0618: 0xc04619c  jal         func_118670
    ctx->pc = 0x1C0618u;
    SET_GPR_U32(ctx, 31, 0x1C0620u);
    ctx->pc = 0x1C061Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0618u;
    // 0x1c061c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1C0618u, 0x1C0620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0620u;
label_1c0620:
    // 0x1c0620: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1c0620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c0624: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1c0624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c0628: 0x240400a0  addiu       $a0, $zero, 0xA0
    ctx->pc = 0x1c0628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x1c062c: 0xac430074  sw          $v1, 0x74($v0)
    ctx->pc = 0x1c062cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 116), GPR_U32(ctx, 3));
    // 0x1c0630: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1c0630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c0634: 0xac400060  sw          $zero, 0x60($v0)
    ctx->pc = 0x1c0634u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 0));
    // 0x1c0638: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x1c0638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c063c: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x1c063cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x1c0640: 0xac620064  sw          $v0, 0x64($v1)
    ctx->pc = 0x1c0640u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 2));
    // 0x1c0644: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1c0644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c0648: 0xac400068  sw          $zero, 0x68($v0)
    ctx->pc = 0x1c0648u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 0));
    // 0x1c064c: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1c064cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c0650: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1C0650u;
    SET_GPR_U32(ctx, 31, 0x1C0658u);
    ctx->pc = 0x1C0654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0650u;
    // 0x1c0654: 0xac40006c  sw          $zero, 0x6C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1C0650u, 0x1C0658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0658u;
label_1c0658:
    // 0x1c0658: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C0658u;
    {
        const bool branch_taken_0x1c0658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C065Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0658u;
        // 0x1c065c: 0x3c050023  lui         $a1, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0658) {
            ctx->pc = 0x1C0674u;
            goto label_1c0674;
        }
    }
    ctx->pc = 0x1C0660u;
    // 0x1c0660: 0x3c060023  lui         $a2, 0x23
    ctx->pc = 0x1c0660u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)35 << 16));
    // 0x1c0664: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c0664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0668: 0x24a5c6a4  addiu       $a1, $a1, -0x395C
    ctx->pc = 0x1c0668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952612));
    // 0x1c066c: 0xc0621c0  jal         func_188700
    ctx->pc = 0x1C066Cu;
    SET_GPR_U32(ctx, 31, 0x1C0674u);
    ctx->pc = 0x1C0670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C066Cu;
    // 0x1c0670: 0x24c6c6c0  addiu       $a2, $a2, -0x3940 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188700u, 0x1C066Cu, 0x1C0674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0674u;
label_1c0674:
    // 0x1c0674: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1c0674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c0678: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1c0678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1c067c: 0xac820078  sw          $v0, 0x78($a0)
    ctx->pc = 0x1c067cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 2));
    // 0x1c0680: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1c0680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c0684: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x1c0684u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x1c0688: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1c0688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c068c: 0xa040000c  sb          $zero, 0xC($v0)
    ctx->pc = 0x1c068cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c0690: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1c0690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c0694: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c0694u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c0698: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C069Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0698u;
        // 0x1c069c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C06A0u;
}
