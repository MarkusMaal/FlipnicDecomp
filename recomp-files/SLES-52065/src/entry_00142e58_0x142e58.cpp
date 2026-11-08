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

// Function: entry_00142e58
// Address: 0x142e58 - 0x142ec4
void entry_00142e58_0x142e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142e58_0x142e58");
#endif

    switch (ctx->pc) {
        case 0x142e6cu: goto label_142e6c;
        case 0x142e80u: goto label_142e80;
        case 0x142e98u: goto label_142e98;
        case 0x142eb8u: goto label_142eb8;
        default: break;
    }

    ctx->pc = 0x142e58u;

    // 0x142e58: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x142e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x142e5c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x142e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x142e60: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x142e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x142e64: 0xc04c6dc  jal         func_131B70
    ctx->pc = 0x142E64u;
    SET_GPR_U32(ctx, 31, 0x142E6Cu);
    ctx->pc = 0x142E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142E64u;
    // 0x142e68: 0x27a50290  addiu       $a1, $sp, 0x290 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131B70u, 0x142E64u, 0x142E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142E6Cu;
label_142e6c:
    // 0x142e6c: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x142e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x142e70: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x142e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x142e74: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x142e74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x142e78: 0xc07d392  jal         func_1F4E48
    ctx->pc = 0x142E78u;
    SET_GPR_U32(ctx, 31, 0x142E80u);
    ctx->pc = 0x142E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142E78u;
    // 0x142e7c: 0x27a40210  addiu       $a0, $sp, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E48u, 0x142E78u, 0x142E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142E80u;
label_142e80:
    // 0x142e80: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x142e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x142e84: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x142e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x142e88: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x142e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x142e8c: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x142e8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x142e90: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x142E90u;
    SET_GPR_U32(ctx, 31, 0x142E98u);
    ctx->pc = 0x142E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142E90u;
    // 0x142e94: 0x27a50290  addiu       $a1, $sp, 0x290 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4BB8u, 0x142E90u, 0x142E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142E98u;
label_142e98:
    // 0x142e98: 0x8f838594  lw          $v1, -0x7A6C($gp)
    ctx->pc = 0x142e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935956)));
    // 0x142e9c: 0x27a50250  addiu       $a1, $sp, 0x250
    ctx->pc = 0x142e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x142ea0: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x142ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x142ea4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x142ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x142ea8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x142ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x142eac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x142eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x142eb0: 0xc07d392  jal         func_1F4E48
    ctx->pc = 0x142EB0u;
    SET_GPR_U32(ctx, 31, 0x142EB8u);
    ctx->pc = 0x142EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142EB0u;
    // 0x142eb4: 0x542021  addu        $a0, $v0, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E48u, 0x142EB0u, 0x142EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142EB8u;
label_142eb8:
    // 0x142eb8: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x142eb8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x142ebc: 0x26940040  addiu       $s4, $s4, 0x40
    ctx->pc = 0x142ebcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    // 0x142ec0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x142ec0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x142ec4u;
}
