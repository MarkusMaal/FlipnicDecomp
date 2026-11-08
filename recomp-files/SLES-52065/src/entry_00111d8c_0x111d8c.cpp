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

// Function: entry_00111d8c
// Address: 0x111d8c - 0x111dd0
void entry_00111d8c_0x111d8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111d8c_0x111d8c");
#endif

    switch (ctx->pc) {
        case 0x111dc0u: goto label_111dc0;
        default: break;
    }

    ctx->pc = 0x111d8cu;

label_111d8c:
    // 0x111d8c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x111d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_111d90:
    // 0x111d90: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x111d90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_111d94:
    // 0x111d94: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x111d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_111d98:
    // 0x111d98: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x111d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_111d9c:
    // 0x111d9c: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x111d9cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_111da0:
    // 0x111da0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x111da0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_111da4:
    // 0x111da4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x111da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_111da8:
    // 0x111da8: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x111da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_111dac:
    // 0x111dac: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x111dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_111db0:
    // 0x111db0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x111db0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_111db4:
    // 0x111db4: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x111db4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_111db8:
    // 0x111db8: 0x320f809  jalr        $t9
label_111dbc:
    if (ctx->pc == 0x111DBCu) {
        ctx->pc = 0x111DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111DB8u;
        // 0x111dbc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111DC0u;
        goto label_111dc0;
    }
    ctx->pc = 0x111DB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x111DC0u);
        ctx->pc = 0x111DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111DB8u;
        // 0x111dbc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111DB8u, 0x111DC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x111DC0u;
label_111dc0:
    // 0x111dc0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x111dc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_111dc4:
    // 0x111dc4: 0x232182a  slt         $v1, $s1, $s2
    ctx->pc = 0x111dc4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_111dc8:
    // 0x111dc8: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
label_111dcc:
    if (ctx->pc == 0x111DCCu) {
        ctx->pc = 0x111DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111DC8u;
        // 0x111dcc: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111DD0u;
        goto label_fallthrough_0x111dc8;
    }
    ctx->pc = 0x111DC8u;
    {
        const bool branch_taken_0x111dc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x111DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111DC8u;
        // 0x111dcc: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111dc8) {
            ctx->pc = 0x111D8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_111d8c;
        }
    }
label_fallthrough_0x111dc8:
    ctx->pc = 0x111DD0u;
}
