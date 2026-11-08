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

// Function: entry_0021aee0
// Address: 0x21aee0 - 0x21af90
void entry_0021aee0_0x21aee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021aee0_0x21aee0");
#endif

    switch (ctx->pc) {
        case 0x21af1cu: goto label_21af1c;
        case 0x21af34u: goto label_21af34;
        case 0x21af44u: goto label_21af44;
        case 0x21af54u: goto label_21af54;
        case 0x21af64u: goto label_21af64;
        case 0x21af74u: goto label_21af74;
        case 0x21af84u: goto label_21af84;
        default: break;
    }

    ctx->pc = 0x21aee0u;

label_21aee0:
    // 0x21aee0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x21aee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_21aee4:
    // 0x21aee4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x21aee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_21aee8:
    // 0x21aee8: 0x0  nop
    ctx->pc = 0x21aee8u;
    // NOP
label_21aeec:
    // 0x21aeec: 0x0  nop
    ctx->pc = 0x21aeecu;
    // NOP
label_21aef0:
    // 0x21aef0: 0x0  nop
    ctx->pc = 0x21aef0u;
    // NOP
label_21aef4:
    // 0x21aef4: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
label_21aef8:
    if (ctx->pc == 0x21AEF8u) {
        ctx->pc = 0x21AEFCu;
        goto label_21aefc;
    }
    ctx->pc = 0x21AEF4u;
    {
        const bool branch_taken_0x21aef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21aef4) {
            ctx->pc = 0x21AEE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21aee0;
        }
    }
    ctx->pc = 0x21AEFCu;
label_21aefc:
    // 0x21aefc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x21aefcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_21af00:
    // 0x21af00: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x21af00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_21af04:
    // 0x21af04: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x21af04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
label_21af08:
    // 0x21af08: 0x3c038007  lui         $v1, 0x8007
    ctx->pc = 0x21af08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32775 << 16));
label_21af0c:
    // 0x21af0c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x21af0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_21af10:
    // 0x21af10: 0x8c624760  lw          $v0, 0x4760($v1)
    ctx->pc = 0x21af10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18272)));
label_21af14:
    // 0x21af14: 0x40f809  jalr        $v0
label_21af18:
    if (ctx->pc == 0x21AF18u) {
        ctx->pc = 0x21AF1Cu;
        goto label_21af1c;
    }
    ctx->pc = 0x21AF14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21AF1Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21AF14u, 0x21AF1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21AF1Cu;
label_21af1c:
    // 0x21af1c: 0x3c028007  lui         $v0, 0x8007
    ctx->pc = 0x21af1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32775 << 16));
label_21af20:
    // 0x21af20: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x21af20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_21af24:
    // 0x21af24: 0x8c434764  lw          $v1, 0x4764($v0)
    ctx->pc = 0x21af24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18276)));
label_21af28:
    // 0x21af28: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x21af28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21af2c:
    // 0x21af2c: 0x60f809  jalr        $v1
label_21af30:
    if (ctx->pc == 0x21AF30u) {
        ctx->pc = 0x21AF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AF2Cu;
        // 0x21af30: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AF34u;
        goto label_21af34;
    }
    ctx->pc = 0x21AF2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x21AF34u);
        ctx->pc = 0x21AF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AF2Cu;
        // 0x21af30: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21AF2Cu, 0x21AF34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21AF34u;
label_21af34:
    // 0x21af34: 0x3c028007  lui         $v0, 0x8007
    ctx->pc = 0x21af34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32775 << 16));
label_21af38:
    // 0x21af38: 0x8c43474c  lw          $v1, 0x474C($v0)
    ctx->pc = 0x21af38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18252)));
label_21af3c:
    // 0x21af3c: 0x60f809  jalr        $v1
label_21af40:
    if (ctx->pc == 0x21AF40u) {
        ctx->pc = 0x21AF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AF3Cu;
        // 0x21af40: 0x3404dffd  ori         $a0, $zero, 0xDFFD (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57341);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AF44u;
        goto label_21af44;
    }
    ctx->pc = 0x21AF3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x21AF44u);
        ctx->pc = 0x21AF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AF3Cu;
        // 0x21af40: 0x3404dffd  ori         $a0, $zero, 0xDFFD (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57341);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21AF3Cu, 0x21AF44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21AF44u;
label_21af44:
    // 0x21af44: 0x3c028007  lui         $v0, 0x8007
    ctx->pc = 0x21af44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32775 << 16));
label_21af48:
    // 0x21af48: 0x8c434750  lw          $v1, 0x4750($v0)
    ctx->pc = 0x21af48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18256)));
label_21af4c:
    // 0x21af4c: 0x60f809  jalr        $v1
label_21af50:
    if (ctx->pc == 0x21AF50u) {
        ctx->pc = 0x21AF54u;
        goto label_21af54;
    }
    ctx->pc = 0x21AF4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x21AF54u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21AF4Cu, 0x21AF54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21AF54u;
label_21af54:
    // 0x21af54: 0x3c028007  lui         $v0, 0x8007
    ctx->pc = 0x21af54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32775 << 16));
label_21af58:
    // 0x21af58: 0x8c43475c  lw          $v1, 0x475C($v0)
    ctx->pc = 0x21af58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18268)));
label_21af5c:
    // 0x21af5c: 0x60f809  jalr        $v1
label_21af60:
    if (ctx->pc == 0x21AF60u) {
        ctx->pc = 0x21AF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AF5Cu;
        // 0x21af60: 0x2404007f  addiu       $a0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AF64u;
        goto label_21af64;
    }
    ctx->pc = 0x21AF5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x21AF64u);
        ctx->pc = 0x21AF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AF5Cu;
        // 0x21af60: 0x2404007f  addiu       $a0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21AF5Cu, 0x21AF64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21AF64u;
label_21af64:
    // 0x21af64: 0x3c028007  lui         $v0, 0x8007
    ctx->pc = 0x21af64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32775 << 16));
label_21af68:
    // 0x21af68: 0x8c434754  lw          $v1, 0x4754($v0)
    ctx->pc = 0x21af68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18260)));
label_21af6c:
    // 0x21af6c: 0x60f809  jalr        $v1
label_21af70:
    if (ctx->pc == 0x21AF70u) {
        ctx->pc = 0x21AF74u;
        goto label_21af74;
    }
    ctx->pc = 0x21AF6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x21AF74u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21AF6Cu, 0x21AF74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21AF74u;
label_21af74:
    // 0x21af74: 0x3c028007  lui         $v0, 0x8007
    ctx->pc = 0x21af74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32775 << 16));
label_21af78:
    // 0x21af78: 0x8c434758  lw          $v1, 0x4758($v0)
    ctx->pc = 0x21af78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18264)));
label_21af7c:
    // 0x21af7c: 0x60f809  jalr        $v1
label_21af80:
    if (ctx->pc == 0x21AF80u) {
        ctx->pc = 0x21AF84u;
        goto label_21af84;
    }
    ctx->pc = 0x21AF7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x21AF84u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21AF7Cu, 0x21AF84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21AF84u;
label_21af84:
    // 0x21af84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21af84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21af88:
    // 0x21af88: 0x3e00008  jr          $ra
label_21af8c:
    if (ctx->pc == 0x21AF8Cu) {
        ctx->pc = 0x21AF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AF88u;
        // 0x21af8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AF90u;
        goto label_fallthrough_0x21af88;
    }
    ctx->pc = 0x21AF88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21AF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AF88u;
        // 0x21af8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21AF88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x21af88:
    ctx->pc = 0x21AF90u;
}
