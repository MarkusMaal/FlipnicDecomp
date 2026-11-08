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

// Function: FUN_0016aee0
// Address: 0x16aee0 - 0x16afa0
void FUN_0016aee0_0x16aee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016aee0_0x16aee0");
#endif

    switch (ctx->pc) {
        case 0x16af84u: goto label_16af84;
        case 0x16af94u: goto label_16af94;
        default: break;
    }

    ctx->pc = 0x16aee0u;

    // 0x16aee0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16aee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16aee4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x16aee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x16aee8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16aee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16aeec: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x16aeecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16aef0: 0x8063006c  lb          $v1, 0x6C($v1)
    ctx->pc = 0x16aef0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x16aef4: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x16AEF4u;
    {
        const bool branch_taken_0x16aef4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x16AEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AEF4u;
        // 0x16aef8: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16aef4) {
            ctx->pc = 0x16AF00u;
            goto label_16af00;
        }
    }
    ctx->pc = 0x16AEFCu;
    // 0x16aefc: 0x24a30078  addiu       $v1, $a1, 0x78
    ctx->pc = 0x16aefcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 120));
label_16af00:
    // 0x16af00: 0x93828488  lbu         $v0, -0x7B78($gp)
    ctx->pc = 0x16af00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935688)));
    // 0x16af04: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16AF04u;
    {
        const bool branch_taken_0x16af04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AF04u;
        // 0x16af08: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16af04) {
            ctx->pc = 0x16AF18u;
            goto label_16af18;
        }
    }
    ctx->pc = 0x16AF0Cu;
    // 0x16af0c: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x16af0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x16af10: 0x90262eb5  lbu         $a2, 0x2EB5($at)
    ctx->pc = 0x16af10u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)FAST_READ8(0x2B2EB5u));
    // 0x16af14: 0x0  nop
    ctx->pc = 0x16af14u;
    // NOP
label_16af18:
    // 0x16af18: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x16AF18u;
    {
        const bool branch_taken_0x16af18 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x16AF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AF18u;
        // 0x16af1c: 0x61040  sll         $v0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16af18) {
            ctx->pc = 0x16AF28u;
            goto label_16af28;
        }
    }
    ctx->pc = 0x16AF20u;
    // 0x16af20: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x16AF20u;
    {
        const bool branch_taken_0x16af20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AF20u;
        // 0x16af24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16af20) {
            ctx->pc = 0x16AF48u;
            goto label_16af48;
        }
    }
    ctx->pc = 0x16AF28u;
label_16af28:
    // 0x16af28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16af28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16af2c: 0x84420004  lh          $v0, 0x4($v0)
    ctx->pc = 0x16af2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16af30: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x16af30u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x16af34: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x16AF34u;
    {
        const bool branch_taken_0x16af34 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x16af34) {
            ctx->pc = 0x16AF44u;
            goto label_16af44;
        }
    }
    ctx->pc = 0x16AF3Cu;
    // 0x16af3c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16AF3Cu;
    {
        const bool branch_taken_0x16af3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AF3Cu;
        // 0x16af40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16af3c) {
            ctx->pc = 0x16AF48u;
            goto label_16af48;
        }
    }
    ctx->pc = 0x16AF44u;
label_16af44:
    // 0x16af44: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16af44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16af48:
    // 0x16af48: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16AF48u;
    {
        const bool branch_taken_0x16af48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16af48) {
            ctx->pc = 0x16AF5Cu;
            goto label_16af5c;
        }
    }
    ctx->pc = 0x16AF50u;
    // 0x16af50: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16af50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x16af54: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16AF54u;
    {
        const bool branch_taken_0x16af54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AF54u;
        // 0x16af58: 0xac820250  sw          $v0, 0x250($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16af54) {
            ctx->pc = 0x16AF64u;
            goto label_16af64;
        }
    }
    ctx->pc = 0x16AF5Cu;
label_16af5c:
    // 0x16af5c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x16af5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x16af60: 0xac820250  sw          $v0, 0x250($a0)
    ctx->pc = 0x16af60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 592), GPR_U32(ctx, 2));
label_16af64:
    // 0x16af64: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x16af64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16af68: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x16af68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x16af6c: 0x8066006c  lb          $a2, 0x6C($v1)
    ctx->pc = 0x16af6cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x16af70: 0x14c20006  bne         $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16AF70u;
    {
        const bool branch_taken_0x16af70 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x16af70) {
            ctx->pc = 0x16AF8Cu;
            goto label_16af8c;
        }
    }
    ctx->pc = 0x16AF78u;
    // 0x16af78: 0x24840220  addiu       $a0, $a0, 0x220
    ctx->pc = 0x16af78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 544));
    // 0x16af7c: 0xc05a924  jal         func_16A490
    ctx->pc = 0x16AF7Cu;
    SET_GPR_U32(ctx, 31, 0x16AF84u);
    ctx->pc = 0x16AF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AF7Cu;
    // 0x16af80: 0x24a50078  addiu       $a1, $a1, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A490u, 0x16AF7Cu, 0x16AF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AF84u;
label_16af84:
    // 0x16af84: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16AF84u;
    {
        const bool branch_taken_0x16af84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AF84u;
        // 0x16af88: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16af84) {
            ctx->pc = 0x16AF98u;
            goto label_16af98;
        }
    }
    ctx->pc = 0x16AF8Cu;
label_16af8c:
    // 0x16af8c: 0xc05a924  jal         func_16A490
    ctx->pc = 0x16AF8Cu;
    SET_GPR_U32(ctx, 31, 0x16AF94u);
    ctx->pc = 0x16AF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AF8Cu;
    // 0x16af90: 0x24840220  addiu       $a0, $a0, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A490u, 0x16AF8Cu, 0x16AF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AF94u;
label_16af94:
    // 0x16af94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16af94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16af98:
    // 0x16af98: 0x3e00008  jr          $ra
    ctx->pc = 0x16AF98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16AF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AF98u;
        // 0x16af9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16AF98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16AFA0u;
}
