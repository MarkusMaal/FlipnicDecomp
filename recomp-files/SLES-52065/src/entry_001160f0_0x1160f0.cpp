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

// Function: entry_001160f0
// Address: 0x1160f0 - 0x116190
void entry_001160f0_0x1160f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001160f0_0x1160f0");
#endif

    switch (ctx->pc) {
        case 0x1160f8u: goto label_1160f8;
        case 0x116104u: goto label_116104;
        case 0x11610cu: goto label_11610c;
        case 0x116118u: goto label_116118;
        case 0x116120u: goto label_116120;
        case 0x116128u: goto label_116128;
        case 0x116130u: goto label_116130;
        case 0x116158u: goto label_116158;
        case 0x11617cu: goto label_11617c;
        case 0x11618cu: goto label_11618c;
        default: break;
    }

    ctx->pc = 0x1160f0u;

    // 0x1160f0: 0xc062d50  jal         func_18B540
    ctx->pc = 0x1160F0u;
    SET_GPR_U32(ctx, 31, 0x1160F8u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1160F0u, 0x1160F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1160F8u;
label_1160f8:
    // 0x1160f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1160f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1160fc: 0xc062948  jal         func_18A520
    ctx->pc = 0x1160FCu;
    SET_GPR_U32(ctx, 31, 0x116104u);
    ctx->pc = 0x116100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1160FCu;
    // 0x116100: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A520u, 0x1160FCu, 0x116104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116104u;
label_116104:
    // 0x116104: 0xc062d50  jal         func_18B540
    ctx->pc = 0x116104u;
    SET_GPR_U32(ctx, 31, 0x11610Cu);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x116104u, 0x11610Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11610Cu;
label_11610c:
    // 0x11610c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11610cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116110: 0xc062994  jal         func_18A650
    ctx->pc = 0x116110u;
    SET_GPR_U32(ctx, 31, 0x116118u);
    ctx->pc = 0x116114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116110u;
    // 0x116114: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A650u, 0x116110u, 0x116118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116118u;
label_116118:
    // 0x116118: 0xc0618fc  jal         func_1863F0
    ctx->pc = 0x116118u;
    SET_GPR_U32(ctx, 31, 0x116120u);
    ctx->pc = 0x11611Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116118u;
    // 0x11611c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1863F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1863F0u, 0x116118u, 0x116120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116120u;
label_116120:
    // 0x116120: 0xc0618fc  jal         func_1863F0
    ctx->pc = 0x116120u;
    SET_GPR_U32(ctx, 31, 0x116128u);
    ctx->pc = 0x116124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116120u;
    // 0x116124: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1863F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1863F0u, 0x116120u, 0x116128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116128u;
label_116128:
    // 0x116128: 0xc045c98  jal         func_117260
    ctx->pc = 0x116128u;
    SET_GPR_U32(ctx, 31, 0x116130u);
    ctx->pc = 0x11612Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116128u;
    // 0x11612c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117260u, 0x116128u, 0x116130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116130u;
label_116130:
    // 0x116130: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x116130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x116134: 0x27b0004c  addiu       $s0, $sp, 0x4C
    ctx->pc = 0x116134u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x116138: 0x24428650  addiu       $v0, $v0, -0x79B0
    ctx->pc = 0x116138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936144));
    // 0x11613c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x11613cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x116140: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x116140u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x116144: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x116144u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116148: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x116148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x11614c: 0x244287d0  addiu       $v0, $v0, -0x7830
    ctx->pc = 0x11614cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936528));
    // 0x116150: 0xc054660  jal         func_151980
    ctx->pc = 0x116150u;
    SET_GPR_U32(ctx, 31, 0x116158u);
    ctx->pc = 0x116154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116150u;
    // 0x116154: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151980u, 0x116150u, 0x116158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116158u;
label_116158:
    // 0x116158: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x116158u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x11615c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x11615cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x116160: 0x246387d0  addiu       $v1, $v1, -0x7830
    ctx->pc = 0x116160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936528));
    // 0x116164: 0x24428650  addiu       $v0, $v0, -0x79B0
    ctx->pc = 0x116164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936144));
    // 0x116168: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x116168u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x11616c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x11616cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x116170: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x116170u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x116174: 0xc045cb8  jal         func_1172E0
    ctx->pc = 0x116174u;
    SET_GPR_U32(ctx, 31, 0x11617Cu);
    ctx->pc = 0x116178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116174u;
    // 0x116178: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1172E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1172E0u, 0x116174u, 0x11617Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11617Cu;
label_11617c:
    // 0x11617c: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x11617Cu;
    {
        const bool branch_taken_0x11617c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x116180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11617Cu;
        // 0x116180: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11617c) {
            ctx->pc = 0x116190u;
            return;
        }
    }
    ctx->pc = 0x116184u;
    // 0x116184: 0xc06d2bc  jal         func_1B4AF0
    ctx->pc = 0x116184u;
    SET_GPR_U32(ctx, 31, 0x11618Cu);
    ctx->pc = 0x116188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116184u;
    // 0x116188: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4AF0u, 0x116184u, 0x11618Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11618Cu;
label_11618c:
    // 0x11618c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11618cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x116190u;
}
