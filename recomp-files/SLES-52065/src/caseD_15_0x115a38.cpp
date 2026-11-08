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

// Function: caseD_15
// Address: 0x115a38 - 0x115a9c
void caseD_15_0x115a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_15_0x115a38");
#endif

    switch (ctx->pc) {
        case 0x115a38u: goto label_115a38;
        case 0x115a3cu: goto label_115a3c;
        case 0x115a40u: goto label_115a40;
        case 0x115a44u: goto label_115a44;
        case 0x115a48u: goto label_115a48;
        case 0x115a4cu: goto label_115a4c;
        case 0x115a50u: goto label_115a50;
        case 0x115a54u: goto label_115a54;
        case 0x115a58u: goto label_115a58;
        case 0x115a5cu: goto label_115a5c;
        case 0x115a60u: goto label_115a60;
        case 0x115a64u: goto label_115a64;
        case 0x115a68u: goto label_115a68;
        case 0x115a6cu: goto label_115a6c;
        case 0x115a70u: goto label_115a70;
        case 0x115a74u: goto label_115a74;
        case 0x115a78u: goto label_115a78;
        case 0x115a7cu: goto label_115a7c;
        case 0x115a80u: goto label_115a80;
        case 0x115a84u: goto label_115a84;
        case 0x115a88u: goto label_115a88;
        case 0x115a8cu: goto label_115a8c;
        case 0x115a90u: goto label_115a90;
        case 0x115a94u: goto label_115a94;
        case 0x115a98u: goto label_115a98;
        default: break;
    }

    ctx->pc = 0x115a38u;

label_115a38:
    // 0x115a38: 0x93828310  lbu         $v0, -0x7CF0($gp)
    ctx->pc = 0x115a38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935312)));
label_115a3c:
    // 0x115a3c: 0x27a3019c  addiu       $v1, $sp, 0x19C
    ctx->pc = 0x115a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 412));
label_115a40:
    // 0x115a40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x115a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_115a44:
    // 0x115a44: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x115a44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_115a48:
    // 0x115a48: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x115a48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_115a4c:
    // 0x115a4c: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x115a4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_115a50:
    // 0x115a50: 0x320f809  jalr        $t9
label_115a54:
    if (ctx->pc == 0x115A54u) {
        ctx->pc = 0x115A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115A50u;
        // 0x115a54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115A58u;
        goto label_115a58;
    }
    ctx->pc = 0x115A50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x115A58u);
        ctx->pc = 0x115A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115A50u;
        // 0x115a54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115A50u, 0x115A58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x115A58u;
label_115a58:
    // 0x115a58: 0x8e420254  lw          $v0, 0x254($s2)
    ctx->pc = 0x115a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 596)));
label_115a5c:
    // 0x115a5c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x115a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_115a60:
    // 0x115a60: 0x213be  dsrl32      $v0, $v0, 14
    ctx->pc = 0x115a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 14));
label_115a64:
    // 0x115a64: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_115a68:
    if (ctx->pc == 0x115A68u) {
        ctx->pc = 0x115A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115A64u;
        // 0x115a68: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115A6Cu;
        goto label_115a6c;
    }
    ctx->pc = 0x115A64u;
    {
        const bool branch_taken_0x115a64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x115A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115A64u;
        // 0x115a68: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115a64) {
            ctx->pc = 0x115A9Cu;
            return;
        }
    }
    ctx->pc = 0x115A6Cu;
label_115a6c:
    // 0x115a6c: 0xc07d392  jal         func_1F4E48
label_115a70:
    if (ctx->pc == 0x115A70u) {
        ctx->pc = 0x115A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115A6Cu;
        // 0x115a70: 0x26450030  addiu       $a1, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115A74u;
        goto label_115a74;
    }
    ctx->pc = 0x115A6Cu;
    SET_GPR_U32(ctx, 31, 0x115A74u);
    ctx->pc = 0x115A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115A6Cu;
    // 0x115a70: 0x26450030  addiu       $a1, $s2, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E48u, 0x115A6Cu, 0x115A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115A74u;
label_115a74:
    // 0x115a74: 0x8e43022c  lw          $v1, 0x22C($s2)
    ctx->pc = 0x115a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 556)));
label_115a78:
    // 0x115a78: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x115a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_115a7c:
    // 0x115a7c: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x115a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_115a80:
    // 0x115a80: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x115a80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_115a84:
    // 0x115a84: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x115a84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_115a88:
    // 0x115a88: 0xc0465f0  jal         func_1197C0
label_115a8c:
    if (ctx->pc == 0x115A8Cu) {
        ctx->pc = 0x115A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115A88u;
        // 0x115a8c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115A90u;
        goto label_115a90;
    }
    ctx->pc = 0x115A88u;
    SET_GPR_U32(ctx, 31, 0x115A90u);
    ctx->pc = 0x115A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115A88u;
    // 0x115a8c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1197C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1197C0u, 0x115A88u, 0x115A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115A90u;
label_115a90:
    // 0x115a90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x115a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_115a94:
    // 0x115a94: 0xc042118  jal         func_108460
label_115a98:
    if (ctx->pc == 0x115A98u) {
        ctx->pc = 0x115A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115A94u;
        // 0x115a98: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115A9Cu;
        goto label_fallthrough_0x115a94;
    }
    ctx->pc = 0x115A94u;
    SET_GPR_U32(ctx, 31, 0x115A9Cu);
    ctx->pc = 0x115A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115A94u;
    // 0x115a98: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x115A94u, 0x115A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_fallthrough_0x115a94:
    ctx->pc = 0x115A9Cu;
}
