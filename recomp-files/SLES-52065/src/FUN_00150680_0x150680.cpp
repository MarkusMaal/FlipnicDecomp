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

// Function: FUN_00150680
// Address: 0x150680 - 0x150774
void FUN_00150680_0x150680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00150680_0x150680");
#endif

    switch (ctx->pc) {
        case 0x150694u: goto label_150694;
        case 0x1506b0u: goto label_1506b0;
        case 0x1506c0u: goto label_1506c0;
        case 0x1506c8u: goto label_1506c8;
        case 0x1506e4u: goto label_1506e4;
        case 0x15071cu: goto label_15071c;
        case 0x15072cu: goto label_15072c;
        case 0x150748u: goto label_150748;
        case 0x150764u: goto label_150764;
        default: break;
    }

    ctx->pc = 0x150680u;

    // 0x150680: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x150680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x150684: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x150684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x150688: 0xafa4001c  sw          $a0, 0x1C($sp)
    ctx->pc = 0x150688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
    // 0x15068c: 0xc053cd8  jal         func_14F360
    ctx->pc = 0x15068Cu;
    SET_GPR_U32(ctx, 31, 0x150694u);
    ctx->pc = 0x150690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15068Cu;
    // 0x150690: 0x8fa4001c  lw          $a0, 0x1C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F360u, 0x15068Cu, 0x150694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150694u;
label_150694:
    // 0x150694: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x150694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x150698: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x150698u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x15069c: 0x24639470  addiu       $v1, $v1, -0x6B90
    ctx->pc = 0x15069cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939760));
    // 0x1506a0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1506a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1506a4: 0x27a50044  addiu       $a1, $sp, 0x44
    ctx->pc = 0x1506a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x1506a8: 0xc054374  jal         func_150DD0
    ctx->pc = 0x1506A8u;
    SET_GPR_U32(ctx, 31, 0x1506B0u);
    ctx->pc = 0x1506ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1506A8u;
    // 0x1506ac: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150DD0u, 0x1506A8u, 0x1506B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1506B0u;
label_1506b0:
    // 0x1506b0: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1506b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1506b4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1506b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1506b8: 0xc0542d8  jal         func_150B60
    ctx->pc = 0x1506B8u;
    SET_GPR_U32(ctx, 31, 0x1506C0u);
    ctx->pc = 0x1506BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1506B8u;
    // 0x1506bc: 0x244401b8  addiu       $a0, $v0, 0x1B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150B60u, 0x1506B8u, 0x1506C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1506C0u;
label_1506c0:
    // 0x1506c0: 0xc05426c  jal         func_1509B0
    ctx->pc = 0x1506C0u;
    SET_GPR_U32(ctx, 31, 0x1506C8u);
    ctx->pc = 0x1506C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1506C0u;
    // 0x1506c4: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1509B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1509B0u, 0x1506C0u, 0x1506C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1506C8u;
label_1506c8:
    // 0x1506c8: 0x27a40024  addiu       $a0, $sp, 0x24
    ctx->pc = 0x1506c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x1506cc: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1506CCu;
    {
        const bool branch_taken_0x1506cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1506cc) {
            ctx->pc = 0x1506E4u;
            goto label_1506e4;
        }
    }
    ctx->pc = 0x1506D4u;
    // 0x1506d4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1506D4u;
    {
        const bool branch_taken_0x1506d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1506d4) {
            ctx->pc = 0x1506E4u;
            goto label_1506e4;
        }
    }
    ctx->pc = 0x1506DCu;
    // 0x1506dc: 0xc04f090  jal         func_13C240
    ctx->pc = 0x1506DCu;
    SET_GPR_U32(ctx, 31, 0x1506E4u);
    ctx->pc = 0x13C240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C240u, 0x1506DCu, 0x1506E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1506E4u;
label_1506e4:
    // 0x1506e4: 0x8fa7001c  lw          $a3, 0x1C($sp)
    ctx->pc = 0x1506e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1506e8: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x1506e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x1506ec: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1506ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1506f0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1506f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1506f4: 0x3444e200  ori         $a0, $v0, 0xE200
    ctx->pc = 0x1506f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57856);
    // 0x1506f8: 0x24a50f40  addiu       $a1, $a1, 0xF40
    ctx->pc = 0x1506f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3904));
    // 0x1506fc: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x1506fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x150700: 0xaf8785e4  sw          $a3, -0x7A1C($gp)
    ctx->pc = 0x150700u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936036), GPR_U32(ctx, 7));
    // 0x150704: 0xace601b0  sw          $a2, 0x1B0($a3)
    ctx->pc = 0x150704u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 432), GPR_U32(ctx, 6));
    // 0x150708: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x150708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x15070c: 0xac450114  sw          $a1, 0x114($v0)
    ctx->pc = 0x15070cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 276), GPR_U32(ctx, 5));
    // 0x150710: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x150710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x150714: 0xc040168  jal         func_1005A0
    ctx->pc = 0x150714u;
    SET_GPR_U32(ctx, 31, 0x15071Cu);
    ctx->pc = 0x150718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150714u;
    // 0x150718: 0xac430118  sw          $v1, 0x118($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 280), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x150714u, 0x15071Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15071Cu;
label_15071c:
    // 0x15071c: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x15071cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x150720: 0xac62011c  sw          $v0, 0x11C($v1)
    ctx->pc = 0x150720u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 284), GPR_U32(ctx, 2));
    // 0x150724: 0xc053ed4  jal         func_14FB50
    ctx->pc = 0x150724u;
    SET_GPR_U32(ctx, 31, 0x15072Cu);
    ctx->pc = 0x150728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150724u;
    // 0x150728: 0x8fa4001c  lw          $a0, 0x1C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FB50u, 0x150724u, 0x15072Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15072Cu;
label_15072c:
    // 0x15072c: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x15072cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x150730: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x150730u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x150734: 0x24847434  addiu       $a0, $a0, 0x7434
    ctx->pc = 0x150734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29748));
    // 0x150738: 0xac4001b4  sw          $zero, 0x1B4($v0)
    ctx->pc = 0x150738u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 436), GPR_U32(ctx, 0));
    // 0x15073c: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x15073cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x150740: 0xc04c4e8  jal         func_1313A0
    ctx->pc = 0x150740u;
    SET_GPR_U32(ctx, 31, 0x150748u);
    ctx->pc = 0x150744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150740u;
    // 0x150744: 0xac4001d4  sw          $zero, 0x1D4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 468), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1313A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1313A0u, 0x150740u, 0x150748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150748u;
label_150748:
    // 0x150748: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x150748u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x15074c: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x15074cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x150750: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x150750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x150754: 0x24a57430  addiu       $a1, $a1, 0x7430
    ctx->pc = 0x150754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29744));
    // 0x150758: 0x27a60048  addiu       $a2, $sp, 0x48
    ctx->pc = 0x150758u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x15075c: 0xc04c93c  jal         func_1324F0
    ctx->pc = 0x15075Cu;
    SET_GPR_U32(ctx, 31, 0x150764u);
    ctx->pc = 0x150760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15075Cu;
    // 0x150760: 0x27a7001c  addiu       $a3, $sp, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1324F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1324F0u, 0x15075Cu, 0x150764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150764u;
label_150764:
    // 0x150764: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x150764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x150768: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x150768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15076c: 0x3e00008  jr          $ra
    ctx->pc = 0x15076Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15076Cu;
        // 0x150770: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15076Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150774u;
}
