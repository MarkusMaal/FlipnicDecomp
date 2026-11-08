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

// Function: entry_00142ba0
// Address: 0x142ba0 - 0x142c0c
void entry_00142ba0_0x142ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142ba0_0x142ba0");
#endif

    switch (ctx->pc) {
        case 0x142bb4u: goto label_142bb4;
        case 0x142bc8u: goto label_142bc8;
        case 0x142be0u: goto label_142be0;
        case 0x142c00u: goto label_142c00;
        default: break;
    }

    ctx->pc = 0x142ba0u;

    // 0x142ba0: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x142ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x142ba4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x142ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x142ba8: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x142ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x142bac: 0xc04c6dc  jal         func_131B70
    ctx->pc = 0x142BACu;
    SET_GPR_U32(ctx, 31, 0x142BB4u);
    ctx->pc = 0x142BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142BACu;
    // 0x142bb0: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131B70u, 0x142BACu, 0x142BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142BB4u;
label_142bb4:
    // 0x142bb4: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x142bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x142bb8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x142bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x142bbc: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x142bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x142bc0: 0xc07d392  jal         func_1F4E48
    ctx->pc = 0x142BC0u;
    SET_GPR_U32(ctx, 31, 0x142BC8u);
    ctx->pc = 0x142BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142BC0u;
    // 0x142bc4: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E48u, 0x142BC0u, 0x142BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142BC8u;
label_142bc8:
    // 0x142bc8: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x142bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x142bcc: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x142bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x142bd0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x142bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x142bd4: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x142bd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x142bd8: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x142BD8u;
    SET_GPR_U32(ctx, 31, 0x142BE0u);
    ctx->pc = 0x142BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142BD8u;
    // 0x142bdc: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4BB8u, 0x142BD8u, 0x142BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142BE0u;
label_142be0:
    // 0x142be0: 0x8f838594  lw          $v1, -0x7A6C($gp)
    ctx->pc = 0x142be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935956)));
    // 0x142be4: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x142be4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x142be8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x142be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x142bec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x142becu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x142bf0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x142bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x142bf4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x142bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x142bf8: 0xc07d392  jal         func_1F4E48
    ctx->pc = 0x142BF8u;
    SET_GPR_U32(ctx, 31, 0x142C00u);
    ctx->pc = 0x142BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142BF8u;
    // 0x142bfc: 0x542021  addu        $a0, $v0, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E48u, 0x142BF8u, 0x142C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142C00u;
label_142c00:
    // 0x142c00: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x142c00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x142c04: 0x26940040  addiu       $s4, $s4, 0x40
    ctx->pc = 0x142c04u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    // 0x142c08: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x142c08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x142c0cu;
}
