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

// Function: FUN_001cf7a0
// Address: 0x1cf7a0 - 0x1cf894
void FUN_001cf7a0_0x1cf7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001cf7a0_0x1cf7a0");
#endif

    switch (ctx->pc) {
        case 0x1cf7b8u: goto label_1cf7b8;
        case 0x1cf7dcu: goto label_1cf7dc;
        case 0x1cf7e8u: goto label_1cf7e8;
        case 0x1cf7f4u: goto label_1cf7f4;
        case 0x1cf808u: goto label_1cf808;
        case 0x1cf814u: goto label_1cf814;
        case 0x1cf820u: goto label_1cf820;
        case 0x1cf824u: goto label_1cf824;
        case 0x1cf838u: goto label_1cf838;
        case 0x1cf848u: goto label_1cf848;
        case 0x1cf854u: goto label_1cf854;
        case 0x1cf860u: goto label_1cf860;
        default: break;
    }

    ctx->pc = 0x1cf7a0u;

    // 0x1cf7a0: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x1cf7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x1cf7a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cf7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cf7a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cf7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cf7ac: 0xafa4002c  sw          $a0, 0x2C($sp)
    ctx->pc = 0x1cf7acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 4));
    // 0x1cf7b0: 0xc06dbf8  jal         func_1B6FE0
    ctx->pc = 0x1CF7B0u;
    SET_GPR_U32(ctx, 31, 0x1CF7B8u);
    ctx->pc = 0x1CF7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF7B0u;
    // 0x1cf7b4: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FE0u, 0x1CF7B0u, 0x1CF7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF7B8u;
label_1cf7b8:
    // 0x1cf7b8: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1cf7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1cf7bc: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1cf7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1cf7c0: 0x2463bef0  addiu       $v1, $v1, -0x4110
    ctx->pc = 0x1cf7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950640));
    // 0x1cf7c4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cf7c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cf7c8: 0x27a4013c  addiu       $a0, $sp, 0x13C
    ctx->pc = 0x1cf7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
    // 0x1cf7cc: 0x24a53180  addiu       $a1, $a1, 0x3180
    ctx->pc = 0x1cf7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12672));
    // 0x1cf7d0: 0x27a60138  addiu       $a2, $sp, 0x138
    ctx->pc = 0x1cf7d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
    // 0x1cf7d4: 0xc04889c  jal         func_122270
    ctx->pc = 0x1CF7D4u;
    SET_GPR_U32(ctx, 31, 0x1CF7DCu);
    ctx->pc = 0x1CF7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF7D4u;
    // 0x1cf7d8: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1CF7D4u, 0x1CF7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF7DCu;
label_1cf7dc:
    // 0x1cf7dc: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x1cf7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1cf7e0: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1CF7E0u;
    SET_GPR_U32(ctx, 31, 0x1CF7E8u);
    ctx->pc = 0x1CF7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF7E0u;
    // 0x1cf7e4: 0x27a5013c  addiu       $a1, $sp, 0x13C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1CF7E0u, 0x1CF7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF7E8u;
label_1cf7e8:
    // 0x1cf7e8: 0x27a4013c  addiu       $a0, $sp, 0x13C
    ctx->pc = 0x1cf7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
    // 0x1cf7ec: 0xc04619c  jal         func_118670
    ctx->pc = 0x1CF7ECu;
    SET_GPR_U32(ctx, 31, 0x1CF7F4u);
    ctx->pc = 0x1CF7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF7ECu;
    // 0x1cf7f0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1CF7ECu, 0x1CF7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF7F4u;
label_1cf7f4:
    // 0x1cf7f4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cf7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cf7f8: 0x27a40144  addiu       $a0, $sp, 0x144
    ctx->pc = 0x1cf7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 324));
    // 0x1cf7fc: 0x24a531a0  addiu       $a1, $a1, 0x31A0
    ctx->pc = 0x1cf7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12704));
    // 0x1cf800: 0xc04889c  jal         func_122270
    ctx->pc = 0x1CF800u;
    SET_GPR_U32(ctx, 31, 0x1CF808u);
    ctx->pc = 0x1CF804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF800u;
    // 0x1cf804: 0x27a60140  addiu       $a2, $sp, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1CF800u, 0x1CF808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF808u;
label_1cf808:
    // 0x1cf808: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x1cf808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1cf80c: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1CF80Cu;
    SET_GPR_U32(ctx, 31, 0x1CF814u);
    ctx->pc = 0x1CF810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF80Cu;
    // 0x1cf810: 0x27a50144  addiu       $a1, $sp, 0x144 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 324));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1CF80Cu, 0x1CF814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF814u;
label_1cf814:
    // 0x1cf814: 0x27a40144  addiu       $a0, $sp, 0x144
    ctx->pc = 0x1cf814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 324));
    // 0x1cf818: 0xc04619c  jal         func_118670
    ctx->pc = 0x1CF818u;
    SET_GPR_U32(ctx, 31, 0x1CF820u);
    ctx->pc = 0x1CF81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF818u;
    // 0x1cf81c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1CF818u, 0x1CF820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF820u;
label_1cf820:
    // 0x1cf820: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1cf820u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cf824:
    // 0x1cf824: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cf824u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cf828: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1cf828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1cf82c: 0x24a531b8  addiu       $a1, $a1, 0x31B8
    ctx->pc = 0x1cf82cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12728));
    // 0x1cf830: 0xc0805c8  jal         func_201720
    ctx->pc = 0x1CF830u;
    SET_GPR_U32(ctx, 31, 0x1CF838u);
    ctx->pc = 0x1CF834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF830u;
    // 0x1cf834: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x1CF830u, 0x1CF838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF838u;
label_1cf838:
    // 0x1cf838: 0x27a4014c  addiu       $a0, $sp, 0x14C
    ctx->pc = 0x1cf838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
    // 0x1cf83c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1cf83cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1cf840: 0xc04889c  jal         func_122270
    ctx->pc = 0x1CF840u;
    SET_GPR_U32(ctx, 31, 0x1CF848u);
    ctx->pc = 0x1CF844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF840u;
    // 0x1cf844: 0x27a60148  addiu       $a2, $sp, 0x148 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1CF840u, 0x1CF848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF848u;
label_1cf848:
    // 0x1cf848: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x1cf848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1cf84c: 0xc06dc38  jal         func_1B70E0
    ctx->pc = 0x1CF84Cu;
    SET_GPR_U32(ctx, 31, 0x1CF854u);
    ctx->pc = 0x1CF850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF84Cu;
    // 0x1cf850: 0x27a5014c  addiu       $a1, $sp, 0x14C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70E0u, 0x1CF84Cu, 0x1CF854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF854u;
label_1cf854:
    // 0x1cf854: 0x27a4014c  addiu       $a0, $sp, 0x14C
    ctx->pc = 0x1cf854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
    // 0x1cf858: 0xc04619c  jal         func_118670
    ctx->pc = 0x1CF858u;
    SET_GPR_U32(ctx, 31, 0x1CF860u);
    ctx->pc = 0x1CF85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF858u;
    // 0x1cf85c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1CF858u, 0x1CF860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF860u;
label_1cf860:
    // 0x1cf860: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1cf860u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1cf864: 0x2a02001e  slti        $v0, $s0, 0x1E
    ctx->pc = 0x1cf864u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x1cf868: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1CF868u;
    {
        const bool branch_taken_0x1cf868 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cf868) {
            ctx->pc = 0x1CF824u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cf824;
        }
    }
    ctx->pc = 0x1CF870u;
    // 0x1cf870: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1cf870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1cf874: 0xac400060  sw          $zero, 0x60($v0)
    ctx->pc = 0x1cf874u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 0));
    // 0x1cf878: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1cf878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1cf87c: 0xac400064  sw          $zero, 0x64($v0)
    ctx->pc = 0x1cf87cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 0));
    // 0x1cf880: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1cf880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1cf884: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cf884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cf888: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cf888u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf88c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF88Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF88Cu;
        // 0x1cf890: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF88Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF894u;
}
