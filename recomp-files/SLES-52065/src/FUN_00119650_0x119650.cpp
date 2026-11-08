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

// Function: FUN_00119650
// Address: 0x119650 - 0x1196dc
void FUN_00119650_0x119650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00119650_0x119650");
#endif

    switch (ctx->pc) {
        case 0x11968cu: goto label_11968c;
        default: break;
    }

    ctx->pc = 0x119650u;

    // 0x119650: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x119650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x119654: 0x90420023  lbu         $v0, 0x23($v0)
    ctx->pc = 0x119654u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 35)));
    // 0x119658: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x119658u;
    {
        const bool branch_taken_0x119658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x119658) {
            ctx->pc = 0x1196B4u;
            goto label_1196b4;
        }
    }
    ctx->pc = 0x119660u;
    // 0x119660: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x119660u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x119664: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x119664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x119668: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x119668u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x11966c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x11966cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x119670: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x119670u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x119674: 0x90420020  lbu         $v0, 0x20($v0)
    ctx->pc = 0x119674u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x119678: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x119678u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11967c: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x11967Cu;
    {
        const bool branch_taken_0x11967c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11967c) {
            ctx->pc = 0x1196D4u;
            goto label_1196d4;
        }
    }
    ctx->pc = 0x119684u;
    // 0x119684: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x119684u;
    {
        const bool branch_taken_0x119684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119684u;
        // 0x119688: 0xa4800000  sh          $zero, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119684) {
            ctx->pc = 0x1196D4u;
            goto label_1196d4;
        }
    }
    ctx->pc = 0x11968Cu;
label_11968c:
    // 0x11968c: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x11968cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x119690: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x119690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x119694: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x119694u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x119698: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x119698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x11969c: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x11969cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1196a0: 0x90420020  lbu         $v0, 0x20($v0)
    ctx->pc = 0x1196a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1196a4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1196a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1196a8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1196A8u;
    {
        const bool branch_taken_0x1196a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1196a8) {
            ctx->pc = 0x1196B4u;
            goto label_1196b4;
        }
    }
    ctx->pc = 0x1196B0u;
    // 0x1196b0: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x1196b0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
label_1196b4:
    // 0x1196b4: 0x0  nop
    ctx->pc = 0x1196b4u;
    // NOP
    // 0x1196b8: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x1196b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1196bc: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1196bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1196c0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1196c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1196c4: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1196c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1196c8: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1196C8u;
    {
        const bool branch_taken_0x1196c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1196CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1196C8u;
        // 0x1196cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1196c8) {
            ctx->pc = 0x11968Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11968c;
        }
    }
    ctx->pc = 0x1196D0u;
    // 0x1196d0: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x1196d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_1196d4:
    // 0x1196d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1196D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1196D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1196D4u;
        // 0x1196d8: 0x84820000  lh          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1196D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1196DCu;
}
