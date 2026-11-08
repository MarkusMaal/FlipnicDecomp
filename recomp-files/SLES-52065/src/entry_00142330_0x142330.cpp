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

// Function: entry_00142330
// Address: 0x142330 - 0x14239c
void entry_00142330_0x142330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142330_0x142330");
#endif

    switch (ctx->pc) {
        case 0x142344u: goto label_142344;
        case 0x142358u: goto label_142358;
        case 0x142370u: goto label_142370;
        case 0x142390u: goto label_142390;
        default: break;
    }

    ctx->pc = 0x142330u;

    // 0x142330: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x142330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x142334: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x142334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x142338: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x142338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x14233c: 0xc04c6dc  jal         func_131B70
    ctx->pc = 0x14233Cu;
    SET_GPR_U32(ctx, 31, 0x142344u);
    ctx->pc = 0x142340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14233Cu;
    // 0x142340: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131B70u, 0x14233Cu, 0x142344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142344u;
label_142344:
    // 0x142344: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x142344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x142348: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x142348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x14234c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x14234cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x142350: 0xc07d392  jal         func_1F4E48
    ctx->pc = 0x142350u;
    SET_GPR_U32(ctx, 31, 0x142358u);
    ctx->pc = 0x142354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142350u;
    // 0x142354: 0x27a40180  addiu       $a0, $sp, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E48u, 0x142350u, 0x142358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142358u;
label_142358:
    // 0x142358: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x142358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x14235c: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x14235cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x142360: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x142360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x142364: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x142364u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x142368: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x142368u;
    SET_GPR_U32(ctx, 31, 0x142370u);
    ctx->pc = 0x14236Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142368u;
    // 0x14236c: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4BB8u, 0x142368u, 0x142370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142370u;
label_142370:
    // 0x142370: 0x8f838594  lw          $v1, -0x7A6C($gp)
    ctx->pc = 0x142370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935956)));
    // 0x142374: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x142374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x142378: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x142378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x14237c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14237cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x142380: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x142380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x142384: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x142384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x142388: 0xc07d392  jal         func_1F4E48
    ctx->pc = 0x142388u;
    SET_GPR_U32(ctx, 31, 0x142390u);
    ctx->pc = 0x14238Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142388u;
    // 0x14238c: 0x532021  addu        $a0, $v0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E48u, 0x142388u, 0x142390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142390u;
label_142390:
    // 0x142390: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x142390u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x142394: 0x26730040  addiu       $s3, $s3, 0x40
    ctx->pc = 0x142394u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x142398: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x142398u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x14239cu;
}
