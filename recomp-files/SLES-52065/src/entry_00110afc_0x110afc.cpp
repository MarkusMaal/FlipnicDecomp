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

// Function: entry_00110afc
// Address: 0x110afc - 0x110b40
void entry_00110afc_0x110afc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110afc_0x110afc");
#endif

    switch (ctx->pc) {
        case 0x110b30u: goto label_110b30;
        default: break;
    }

    ctx->pc = 0x110afcu;

label_110afc:
    // 0x110afc: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x110afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_110b00:
    // 0x110b00: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x110b00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_110b04:
    // 0x110b04: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x110b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_110b08:
    // 0x110b08: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x110b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_110b0c:
    // 0x110b0c: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x110b0cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_110b10:
    // 0x110b10: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x110b10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_110b14:
    // 0x110b14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x110b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_110b18:
    // 0x110b18: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x110b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_110b1c:
    // 0x110b1c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x110b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_110b20:
    // 0x110b20: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x110b20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_110b24:
    // 0x110b24: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x110b24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_110b28:
    // 0x110b28: 0x320f809  jalr        $t9
label_110b2c:
    if (ctx->pc == 0x110B2Cu) {
        ctx->pc = 0x110B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110B28u;
        // 0x110b2c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110B30u;
        goto label_110b30;
    }
    ctx->pc = 0x110B28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x110B30u);
        ctx->pc = 0x110B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110B28u;
        // 0x110b2c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110B28u, 0x110B30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x110B30u;
label_110b30:
    // 0x110b30: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x110b30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_110b34:
    // 0x110b34: 0x253182a  slt         $v1, $s2, $s3
    ctx->pc = 0x110b34u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_110b38:
    // 0x110b38: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
label_110b3c:
    if (ctx->pc == 0x110B3Cu) {
        ctx->pc = 0x110B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110B38u;
        // 0x110b3c: 0x26940002  addiu       $s4, $s4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110B40u;
        goto label_fallthrough_0x110b38;
    }
    ctx->pc = 0x110B38u;
    {
        const bool branch_taken_0x110b38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x110B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110B38u;
        // 0x110b3c: 0x26940002  addiu       $s4, $s4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110b38) {
            ctx->pc = 0x110AFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_110afc;
        }
    }
label_fallthrough_0x110b38:
    ctx->pc = 0x110B40u;
}
