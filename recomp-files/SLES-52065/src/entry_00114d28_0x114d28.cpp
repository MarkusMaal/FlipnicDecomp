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

// Function: entry_00114d28
// Address: 0x114d28 - 0x114d98
void entry_00114d28_0x114d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114d28_0x114d28");
#endif

    switch (ctx->pc) {
        case 0x114d54u: goto label_114d54;
        case 0x114d68u: goto label_114d68;
        case 0x114d88u: goto label_114d88;
        default: break;
    }

    ctx->pc = 0x114d28u;

label_114d28:
    // 0x114d28: 0x10400395  beqz        $v0, . + 4 + (0x395 << 2)
label_114d2c:
    if (ctx->pc == 0x114D2Cu) {
        ctx->pc = 0x114D30u;
        goto label_114d30;
    }
    ctx->pc = 0x114D28u;
    {
        const bool branch_taken_0x114d28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x114d28) {
            ctx->pc = 0x115B80u;
            return;
        }
    }
    ctx->pc = 0x114D30u;
label_114d30:
    // 0x114d30: 0x93828284  lbu         $v0, -0x7D7C($gp)
    ctx->pc = 0x114d30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935172)));
label_114d34:
    // 0x114d34: 0x27a30110  addiu       $v1, $sp, 0x110
    ctx->pc = 0x114d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_114d38:
    // 0x114d38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x114d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_114d3c:
    // 0x114d3c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x114d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_114d40:
    // 0x114d40: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x114d40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_114d44:
    // 0x114d44: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x114d44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_114d48:
    // 0x114d48: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x114d48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_114d4c:
    // 0x114d4c: 0x320f809  jalr        $t9
label_114d50:
    if (ctx->pc == 0x114D50u) {
        ctx->pc = 0x114D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114D4Cu;
        // 0x114d50: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114D54u;
        goto label_114d54;
    }
    ctx->pc = 0x114D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x114D54u);
        ctx->pc = 0x114D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114D4Cu;
        // 0x114d50: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114D4Cu, 0x114D54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x114D54u;
label_114d54:
    // 0x114d54: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x114d54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_114d58:
    // 0x114d58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x114d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_114d5c:
    // 0x114d5c: 0x8f390078  lw          $t9, 0x78($t9)
    ctx->pc = 0x114d5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 120)));
label_114d60:
    // 0x114d60: 0x320f809  jalr        $t9
label_114d64:
    if (ctx->pc == 0x114D64u) {
        ctx->pc = 0x114D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114D60u;
        // 0x114d64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114D68u;
        goto label_114d68;
    }
    ctx->pc = 0x114D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x114D68u);
        ctx->pc = 0x114D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114D60u;
        // 0x114d64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114D60u, 0x114D68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x114D68u;
label_114d68:
    // 0x114d68: 0x93828288  lbu         $v0, -0x7D78($gp)
    ctx->pc = 0x114d68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935176)));
label_114d6c:
    // 0x114d6c: 0x27a30114  addiu       $v1, $sp, 0x114
    ctx->pc = 0x114d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
label_114d70:
    // 0x114d70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x114d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_114d74:
    // 0x114d74: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x114d74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_114d78:
    // 0x114d78: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x114d78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_114d7c:
    // 0x114d7c: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x114d7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_114d80:
    // 0x114d80: 0x320f809  jalr        $t9
label_114d84:
    if (ctx->pc == 0x114D84u) {
        ctx->pc = 0x114D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114D80u;
        // 0x114d84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114D88u;
        goto label_114d88;
    }
    ctx->pc = 0x114D80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x114D88u);
        ctx->pc = 0x114D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114D80u;
        // 0x114d84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114D80u, 0x114D88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x114D88u;
label_114d88:
    // 0x114d88: 0x8e420260  lw          $v0, 0x260($s2)
    ctx->pc = 0x114d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 608)));
label_114d8c:
    // 0x114d8c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x114d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_114d90:
    // 0x114d90: 0x1000037b  b           . + 4 + (0x37B << 2)
label_114d94:
    if (ctx->pc == 0x114D94u) {
        ctx->pc = 0x114D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114D90u;
        // 0x114d94: 0xae420260  sw          $v0, 0x260($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114D98u;
        goto label_fallthrough_0x114d90;
    }
    ctx->pc = 0x114D90u;
    {
        const bool branch_taken_0x114d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114D90u;
        // 0x114d94: 0xae420260  sw          $v0, 0x260($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114d90) {
            ctx->pc = 0x115B80u;
            return;
        }
    }
label_fallthrough_0x114d90:
    ctx->pc = 0x114D98u;
}
