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

// Function: entry_00113100
// Address: 0x113100 - 0x113140
void entry_00113100_0x113100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113100_0x113100");
#endif

    switch (ctx->pc) {
        case 0x113130u: goto label_113130;
        default: break;
    }

    ctx->pc = 0x113100u;

label_113100:
    // 0x113100: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x113100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_113104:
    // 0x113104: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x113104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_113108:
    // 0x113108: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x113108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_11310c:
    // 0x11310c: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x11310cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_113110:
    // 0x113110: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x113110u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_113114:
    // 0x113114: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x113114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_113118:
    // 0x113118: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x113118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_11311c:
    // 0x11311c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x11311cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_113120:
    // 0x113120: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x113120u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_113124:
    // 0x113124: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x113124u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_113128:
    // 0x113128: 0x320f809  jalr        $t9
label_11312c:
    if (ctx->pc == 0x11312Cu) {
        ctx->pc = 0x11312Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113128u;
        // 0x11312c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113130u;
        goto label_113130;
    }
    ctx->pc = 0x113128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x113130u);
        ctx->pc = 0x11312Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113128u;
        // 0x11312c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113128u, 0x113130u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x113130u;
label_113130:
    // 0x113130: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x113130u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_113134:
    // 0x113134: 0x212182a  slt         $v1, $s0, $s2
    ctx->pc = 0x113134u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_113138:
    // 0x113138: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
label_11313c:
    if (ctx->pc == 0x11313Cu) {
        ctx->pc = 0x11313Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113138u;
        // 0x11313c: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113140u;
        goto label_fallthrough_0x113138;
    }
    ctx->pc = 0x113138u;
    {
        const bool branch_taken_0x113138 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11313Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113138u;
        // 0x11313c: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113138) {
            ctx->pc = 0x113100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113100;
        }
    }
label_fallthrough_0x113138:
    ctx->pc = 0x113140u;
}
