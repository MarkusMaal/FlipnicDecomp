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

// Function: entry_00114b58
// Address: 0x114b58 - 0x114c34
void entry_00114b58_0x114b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114b58_0x114b58");
#endif

    switch (ctx->pc) {
        case 0x114b74u: goto label_114b74;
        case 0x114ba8u: goto label_114ba8;
        case 0x114bd4u: goto label_114bd4;
        case 0x114becu: goto label_114bec;
        case 0x114c00u: goto label_114c00;
        case 0x114c18u: goto label_114c18;
        default: break;
    }

    ctx->pc = 0x114b58u;

label_114b58:
    // 0x114b58: 0x93828274  lbu         $v0, -0x7D8C($gp)
    ctx->pc = 0x114b58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935156)));
label_114b5c:
    // 0x114b5c: 0x27a30100  addiu       $v1, $sp, 0x100
    ctx->pc = 0x114b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_114b60:
    // 0x114b60: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x114b60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_114b64:
    // 0x114b64: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x114b64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_114b68:
    // 0x114b68: 0x8f39007c  lw          $t9, 0x7C($t9)
    ctx->pc = 0x114b68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 124)));
label_114b6c:
    // 0x114b6c: 0x320f809  jalr        $t9
label_114b70:
    if (ctx->pc == 0x114B70u) {
        ctx->pc = 0x114B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114B6Cu;
        // 0x114b70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114B74u;
        goto label_114b74;
    }
    ctx->pc = 0x114B6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x114B74u);
        ctx->pc = 0x114B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114B6Cu;
        // 0x114b70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114B6Cu, 0x114B74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x114B74u;
label_114b74:
    // 0x114b74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x114b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_114b78:
    // 0x114b78: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x114b78u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_114b7c:
    // 0x114b7c: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x114b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_114b80:
    // 0x114b80: 0x104003ff  beqz        $v0, . + 4 + (0x3FF << 2)
label_114b84:
    if (ctx->pc == 0x114B84u) {
        ctx->pc = 0x114B88u;
        goto label_114b88;
    }
    ctx->pc = 0x114B80u;
    {
        const bool branch_taken_0x114b80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x114b80) {
            ctx->pc = 0x115B80u;
            return;
        }
    }
    ctx->pc = 0x114B88u;
label_114b88:
    // 0x114b88: 0x93828278  lbu         $v0, -0x7D88($gp)
    ctx->pc = 0x114b88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935160)));
label_114b8c:
    // 0x114b8c: 0x27a30104  addiu       $v1, $sp, 0x104
    ctx->pc = 0x114b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
label_114b90:
    // 0x114b90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x114b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_114b94:
    // 0x114b94: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x114b94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_114b98:
    // 0x114b98: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x114b98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_114b9c:
    // 0x114b9c: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x114b9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_114ba0:
    // 0x114ba0: 0x320f809  jalr        $t9
label_114ba4:
    if (ctx->pc == 0x114BA4u) {
        ctx->pc = 0x114BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114BA0u;
        // 0x114ba4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114BA8u;
        goto label_114ba8;
    }
    ctx->pc = 0x114BA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x114BA8u);
        ctx->pc = 0x114BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114BA0u;
        // 0x114ba4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114BA0u, 0x114BA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x114BA8u;
label_114ba8:
    // 0x114ba8: 0x92420255  lbu         $v0, 0x255($s2)
    ctx->pc = 0x114ba8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 597)));
label_114bac:
    // 0x114bac: 0x2177c  dsll32      $v0, $v0, 29
    ctx->pc = 0x114bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 29));
label_114bb0:
    // 0x114bb0: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x114bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
label_114bb4:
    // 0x114bb4: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_114bb8:
    if (ctx->pc == 0x114BB8u) {
        ctx->pc = 0x114BBCu;
        goto label_114bbc;
    }
    ctx->pc = 0x114BB4u;
    {
        const bool branch_taken_0x114bb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x114bb4) {
            ctx->pc = 0x114C34u;
            return;
        }
    }
    ctx->pc = 0x114BBCu;
label_114bbc:
    // 0x114bbc: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x114bbcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_114bc0:
    // 0x114bc0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x114bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_114bc4:
    // 0x114bc4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x114bc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_114bc8:
    // 0x114bc8: 0x8f3900d8  lw          $t9, 0xD8($t9)
    ctx->pc = 0x114bc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 216)));
label_114bcc:
    // 0x114bcc: 0x320f809  jalr        $t9
label_114bd0:
    if (ctx->pc == 0x114BD0u) {
        ctx->pc = 0x114BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114BCCu;
        // 0x114bd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114BD4u;
        goto label_114bd4;
    }
    ctx->pc = 0x114BCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x114BD4u);
        ctx->pc = 0x114BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114BCCu;
        // 0x114bd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114BCCu, 0x114BD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x114BD4u;
label_114bd4:
    // 0x114bd4: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x114bd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_114bd8:
    // 0x114bd8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x114bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_114bdc:
    // 0x114bdc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x114bdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_114be0:
    // 0x114be0: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x114be0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_114be4:
    // 0x114be4: 0x320f809  jalr        $t9
label_114be8:
    if (ctx->pc == 0x114BE8u) {
        ctx->pc = 0x114BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114BE4u;
        // 0x114be8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114BECu;
        goto label_114bec;
    }
    ctx->pc = 0x114BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x114BECu);
        ctx->pc = 0x114BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114BE4u;
        // 0x114be8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114BE4u, 0x114BECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x114BECu;
label_114bec:
    // 0x114bec: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x114becu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_114bf0:
    // 0x114bf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x114bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_114bf4:
    // 0x114bf4: 0x8f3900d8  lw          $t9, 0xD8($t9)
    ctx->pc = 0x114bf4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 216)));
label_114bf8:
    // 0x114bf8: 0x320f809  jalr        $t9
label_114bfc:
    if (ctx->pc == 0x114BFCu) {
        ctx->pc = 0x114BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114BF8u;
        // 0x114bfc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114C00u;
        goto label_114c00;
    }
    ctx->pc = 0x114BF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x114C00u);
        ctx->pc = 0x114BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114BF8u;
        // 0x114bfc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114BF8u, 0x114C00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x114C00u;
label_114c00:
    // 0x114c00: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x114c00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_114c04:
    // 0x114c04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x114c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_114c08:
    // 0x114c08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x114c08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_114c0c:
    // 0x114c0c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x114c0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_114c10:
    // 0x114c10: 0x320f809  jalr        $t9
label_114c14:
    if (ctx->pc == 0x114C14u) {
        ctx->pc = 0x114C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114C10u;
        // 0x114c14: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114C18u;
        goto label_114c18;
    }
    ctx->pc = 0x114C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x114C18u);
        ctx->pc = 0x114C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114C10u;
        // 0x114c14: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114C10u, 0x114C18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x114C18u;
label_114c18:
    // 0x114c18: 0x92440255  lbu         $a0, 0x255($s2)
    ctx->pc = 0x114c18u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 597)));
label_114c1c:
    // 0x114c1c: 0x30020001  andi        $v0, $zero, 0x1
    ctx->pc = 0x114c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
label_114c20:
    // 0x114c20: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x114c20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_114c24:
    // 0x114c24: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x114c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_114c28:
    // 0x114c28: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x114c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_114c2c:
    // 0x114c2c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x114c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_114c30:
    // 0x114c30: 0xa2420255  sb          $v0, 0x255($s2)
    ctx->pc = 0x114c30u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 597), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x114c34u;
}
