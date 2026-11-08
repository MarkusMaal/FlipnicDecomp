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

// Function: entry_00112f6c
// Address: 0x112f6c - 0x112fac
void entry_00112f6c_0x112f6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112f6c_0x112f6c");
#endif

    switch (ctx->pc) {
        case 0x112f9cu: goto label_112f9c;
        default: break;
    }

    ctx->pc = 0x112f6cu;

label_112f6c:
    // 0x112f6c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x112f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_112f70:
    // 0x112f70: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x112f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_112f74:
    // 0x112f74: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x112f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_112f78:
    // 0x112f78: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x112f78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_112f7c:
    // 0x112f7c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x112f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_112f80:
    // 0x112f80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x112f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_112f84:
    // 0x112f84: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x112f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_112f88:
    // 0x112f88: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x112f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_112f8c:
    // 0x112f8c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x112f8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_112f90:
    // 0x112f90: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x112f90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_112f94:
    // 0x112f94: 0x320f809  jalr        $t9
label_112f98:
    if (ctx->pc == 0x112F98u) {
        ctx->pc = 0x112F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112F94u;
        // 0x112f98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112F9Cu;
        goto label_112f9c;
    }
    ctx->pc = 0x112F94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x112F9Cu);
        ctx->pc = 0x112F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112F94u;
        // 0x112f98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112F94u, 0x112F9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x112F9Cu;
label_112f9c:
    // 0x112f9c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x112f9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_112fa0:
    // 0x112fa0: 0x212182a  slt         $v1, $s0, $s2
    ctx->pc = 0x112fa0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_112fa4:
    // 0x112fa4: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
label_112fa8:
    if (ctx->pc == 0x112FA8u) {
        ctx->pc = 0x112FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112FA4u;
        // 0x112fa8: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112FACu;
        goto label_fallthrough_0x112fa4;
    }
    ctx->pc = 0x112FA4u;
    {
        const bool branch_taken_0x112fa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x112FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112FA4u;
        // 0x112fa8: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112fa4) {
            ctx->pc = 0x112F6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_112f6c;
        }
    }
label_fallthrough_0x112fa4:
    ctx->pc = 0x112FACu;
}
