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

// Function: entry_001b109c
// Address: 0x1b109c - 0x1b113c
void entry_001b109c_0x1b109c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b109c_0x1b109c");
#endif

    switch (ctx->pc) {
        case 0x1b10ccu: goto label_1b10cc;
        case 0x1b10e0u: goto label_1b10e0;
        case 0x1b1120u: goto label_1b1120;
        case 0x1b1134u: goto label_1b1134;
        default: break;
    }

    ctx->pc = 0x1b109cu;

label_1b109c:
    // 0x1b109c: 0x26840128  addiu       $a0, $s4, 0x128
    ctx->pc = 0x1b109cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 296));
label_1b10a0:
    // 0x1b10a0: 0x27a50210  addiu       $a1, $sp, 0x210
    ctx->pc = 0x1b10a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_1b10a4:
    // 0x1b10a4: 0x27868334  addiu       $a2, $gp, -0x7CCC
    ctx->pc = 0x1b10a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935348));
label_1b10a8:
    // 0x1b10a8: 0x34078200  ori         $a3, $zero, 0x8200
    ctx->pc = 0x1b10a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33280);
label_1b10ac:
    // 0x1b10ac: 0x24087340  addiu       $t0, $zero, 0x7340
    ctx->pc = 0x1b10acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 29504));
label_1b10b0:
    // 0x1b10b0: 0x240900a0  addiu       $t1, $zero, 0xA0
    ctx->pc = 0x1b10b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_1b10b4:
    // 0x1b10b4: 0x240a0100  addiu       $t2, $zero, 0x100
    ctx->pc = 0x1b10b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1b10b8:
    // 0x1b10b8: 0x280582d  daddu       $t3, $s4, $zero
    ctx->pc = 0x1b10b8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1b10bc:
    // 0x1b10bc: 0xafa20210  sw          $v0, 0x210($sp)
    ctx->pc = 0x1b10bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 2));
label_1b10c0:
    // 0x1b10c0: 0x8e82011c  lw          $v0, 0x11C($s4)
    ctx->pc = 0x1b10c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 284)));
label_1b10c4:
    // 0x1b10c4: 0xc06c598  jal         func_1B1660
label_1b10c8:
    if (ctx->pc == 0x1B10C8u) {
        ctx->pc = 0x1B10C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B10C4u;
        // 0x1b10c8: 0xafa20214  sw          $v0, 0x214($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B10CCu;
        goto label_1b10cc;
    }
    ctx->pc = 0x1B10C4u;
    SET_GPR_U32(ctx, 31, 0x1B10CCu);
    ctx->pc = 0x1B10C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B10C4u;
    // 0x1b10c8: 0xafa20214  sw          $v0, 0x214($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1660u, 0x1B10C4u, 0x1B10CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B10CCu;
label_1b10cc:
    // 0x1b10cc: 0x8e840110  lw          $a0, 0x110($s4)
    ctx->pc = 0x1b10ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 272)));
label_1b10d0:
    // 0x1b10d0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1b10d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b10d4:
    // 0x1b10d4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1b10d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1b10d8:
    // 0x1b10d8: 0x320f809  jalr        $t9
label_1b10dc:
    if (ctx->pc == 0x1B10DCu) {
        ctx->pc = 0x1B10DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B10D8u;
        // 0x1b10dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B10E0u;
        goto label_1b10e0;
    }
    ctx->pc = 0x1B10D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B10E0u);
        ctx->pc = 0x1B10DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B10D8u;
        // 0x1b10dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B10D8u, 0x1B10E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B10E0u;
label_1b10e0:
    // 0x1b10e0: 0x928202ef  lbu         $v0, 0x2EF($s4)
    ctx->pc = 0x1b10e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 751)));
label_1b10e4:
    // 0x1b10e4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_1b10e8:
    if (ctx->pc == 0x1B10E8u) {
        ctx->pc = 0x1B10ECu;
        goto label_1b10ec;
    }
    ctx->pc = 0x1B10E4u;
    {
        const bool branch_taken_0x1b10e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b10e4) {
            ctx->pc = 0x1B113Cu;
            return;
        }
    }
    ctx->pc = 0x1B10ECu;
label_1b10ec:
    // 0x1b10ec: 0x8e820118  lw          $v0, 0x118($s4)
    ctx->pc = 0x1b10ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 280)));
label_1b10f0:
    // 0x1b10f0: 0x26840200  addiu       $a0, $s4, 0x200
    ctx->pc = 0x1b10f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 512));
label_1b10f4:
    // 0x1b10f4: 0x27a50218  addiu       $a1, $sp, 0x218
    ctx->pc = 0x1b10f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 536));
label_1b10f8:
    // 0x1b10f8: 0x27868334  addiu       $a2, $gp, -0x7CCC
    ctx->pc = 0x1b10f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935348));
label_1b10fc:
    // 0x1b10fc: 0x34078b10  ori         $a3, $zero, 0x8B10
    ctx->pc = 0x1b10fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)35600);
label_1b1100:
    // 0x1b1100: 0x24087440  addiu       $t0, $zero, 0x7440
    ctx->pc = 0x1b1100u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 29760));
label_1b1104:
    // 0x1b1104: 0x240900a0  addiu       $t1, $zero, 0xA0
    ctx->pc = 0x1b1104u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_1b1108:
    // 0x1b1108: 0x240a0100  addiu       $t2, $zero, 0x100
    ctx->pc = 0x1b1108u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1b110c:
    // 0x1b110c: 0x280582d  daddu       $t3, $s4, $zero
    ctx->pc = 0x1b110cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1b1110:
    // 0x1b1110: 0xafa20218  sw          $v0, 0x218($sp)
    ctx->pc = 0x1b1110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 536), GPR_U32(ctx, 2));
label_1b1114:
    // 0x1b1114: 0x8e82011c  lw          $v0, 0x11C($s4)
    ctx->pc = 0x1b1114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 284)));
label_1b1118:
    // 0x1b1118: 0xc06c598  jal         func_1B1660
label_1b111c:
    if (ctx->pc == 0x1B111Cu) {
        ctx->pc = 0x1B111Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1118u;
        // 0x1b111c: 0xafa2021c  sw          $v0, 0x21C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 540), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1120u;
        goto label_1b1120;
    }
    ctx->pc = 0x1B1118u;
    SET_GPR_U32(ctx, 31, 0x1B1120u);
    ctx->pc = 0x1B111Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1118u;
    // 0x1b111c: 0xafa2021c  sw          $v0, 0x21C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 540), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1660u, 0x1B1118u, 0x1B1120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1120u;
label_1b1120:
    // 0x1b1120: 0x8e840114  lw          $a0, 0x114($s4)
    ctx->pc = 0x1b1120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 276)));
label_1b1124:
    // 0x1b1124: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1b1124u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b1128:
    // 0x1b1128: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1b1128u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1b112c:
    // 0x1b112c: 0x320f809  jalr        $t9
label_1b1130:
    if (ctx->pc == 0x1B1130u) {
        ctx->pc = 0x1B1130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B112Cu;
        // 0x1b1130: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1134u;
        goto label_1b1134;
    }
    ctx->pc = 0x1B112Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B1134u);
        ctx->pc = 0x1B1130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B112Cu;
        // 0x1b1130: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B112Cu, 0x1B1134u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B1134u;
label_1b1134:
    // 0x1b1134: 0x10000013  b           . + 4 + (0x13 << 2)
label_1b1138:
    if (ctx->pc == 0x1B1138u) {
        ctx->pc = 0x1B113Cu;
        goto label_fallthrough_0x1b1134;
    }
    ctx->pc = 0x1B1134u;
    {
        const bool branch_taken_0x1b1134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1134) {
            ctx->pc = 0x1B1184u;
            return;
        }
    }
label_fallthrough_0x1b1134:
    ctx->pc = 0x1B113Cu;
}
