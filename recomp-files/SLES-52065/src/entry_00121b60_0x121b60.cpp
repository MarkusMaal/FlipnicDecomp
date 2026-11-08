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

// Function: entry_00121b60
// Address: 0x121b60 - 0x121be8
void entry_00121b60_0x121b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121b60_0x121b60");
#endif

    switch (ctx->pc) {
        case 0x121b6cu: goto label_121b6c;
        case 0x121b78u: goto label_121b78;
        case 0x121b88u: goto label_121b88;
        case 0x121b98u: goto label_121b98;
        case 0x121ba8u: goto label_121ba8;
        case 0x121bc0u: goto label_121bc0;
        case 0x121bccu: goto label_121bcc;
        case 0x121bd4u: goto label_121bd4;
        case 0x121be0u: goto label_121be0;
        default: break;
    }

    ctx->pc = 0x121b60u;

    // 0x121b60: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x121b60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x121b64: 0xc049500  jal         func_125400
    ctx->pc = 0x121B64u;
    SET_GPR_U32(ctx, 31, 0x121B6Cu);
    ctx->pc = 0x121B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121B64u;
    // 0x121b68: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125400u, 0x121B64u, 0x121B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121B6Cu;
label_121b6c:
    // 0x121b6c: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x121b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x121b70: 0xc048920  jal         func_122480
    ctx->pc = 0x121B70u;
    SET_GPR_U32(ctx, 31, 0x121B78u);
    ctx->pc = 0x121B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121B70u;
    // 0x121b74: 0x27a501c8  addiu       $a1, $sp, 0x1C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122480u, 0x121B70u, 0x121B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121B78u;
label_121b78:
    // 0x121b78: 0x27b10164  addiu       $s1, $sp, 0x164
    ctx->pc = 0x121b78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 356));
    // 0x121b7c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x121b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x121b80: 0xc080748  jal         func_201D20
    ctx->pc = 0x121B80u;
    SET_GPR_U32(ctx, 31, 0x121B88u);
    ctx->pc = 0x121B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121B80u;
    // 0x121b84: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D20u, 0x121B80u, 0x121B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121B88u;
label_121b88:
    // 0x121b88: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x121b88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121b8c: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x121b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x121b90: 0xc048884  jal         func_122210
    ctx->pc = 0x121B90u;
    SET_GPR_U32(ctx, 31, 0x121B98u);
    ctx->pc = 0x121B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121B90u;
    // 0x121b94: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122210u, 0x121B90u, 0x121B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121B98u;
label_121b98:
    // 0x121b98: 0x27a40198  addiu       $a0, $sp, 0x198
    ctx->pc = 0x121b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
    // 0x121b9c: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x121b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x121ba0: 0xc0488c8  jal         func_122320
    ctx->pc = 0x121BA0u;
    SET_GPR_U32(ctx, 31, 0x121BA8u);
    ctx->pc = 0x121BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121BA0u;
    // 0x121ba4: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122320u, 0x121BA0u, 0x121BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121BA8u;
label_121ba8:
    // 0x121ba8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x121ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x121bac: 0x26650004  addiu       $a1, $s3, 0x4
    ctx->pc = 0x121bacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x121bb0: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x121bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x121bb4: 0x27a60198  addiu       $a2, $sp, 0x198
    ctx->pc = 0x121bb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
    // 0x121bb8: 0xc048a5c  jal         func_122970
    ctx->pc = 0x121BB8u;
    SET_GPR_U32(ctx, 31, 0x121BC0u);
    ctx->pc = 0x121BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121BB8u;
    // 0x121bbc: 0xafa2019c  sw          $v0, 0x19C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122970u, 0x121BB8u, 0x121BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121BC0u;
label_121bc0:
    // 0x121bc0: 0x27a40198  addiu       $a0, $sp, 0x198
    ctx->pc = 0x121bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
    // 0x121bc4: 0xc04619c  jal         func_118670
    ctx->pc = 0x121BC4u;
    SET_GPR_U32(ctx, 31, 0x121BCCu);
    ctx->pc = 0x121BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121BC4u;
    // 0x121bc8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x121BC4u, 0x121BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121BCCu;
label_121bcc:
    // 0x121bcc: 0xc049270  jal         func_1249C0
    ctx->pc = 0x121BCCu;
    SET_GPR_U32(ctx, 31, 0x121BD4u);
    ctx->pc = 0x121BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121BCCu;
    // 0x121bd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1249C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1249C0u, 0x121BCCu, 0x121BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121BD4u;
label_121bd4:
    // 0x121bd4: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x121bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x121bd8: 0xc04619c  jal         func_118670
    ctx->pc = 0x121BD8u;
    SET_GPR_U32(ctx, 31, 0x121BE0u);
    ctx->pc = 0x121BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121BD8u;
    // 0x121bdc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x121BD8u, 0x121BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121BE0u;
label_121be0:
    // 0x121be0: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x121BE0u;
    {
        const bool branch_taken_0x121be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121BE0u;
        // 0x121be4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121be0) {
            ctx->pc = 0x121C90u;
            return;
        }
    }
    ctx->pc = 0x121BE8u;
}
