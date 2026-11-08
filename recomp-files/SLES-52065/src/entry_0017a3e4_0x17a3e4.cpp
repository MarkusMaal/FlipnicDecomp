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

// Function: entry_0017a3e4
// Address: 0x17a3e4 - 0x17a424
void entry_0017a3e4_0x17a3e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a3e4_0x17a3e4");
#endif

    switch (ctx->pc) {
        case 0x17a414u: goto label_17a414;
        default: break;
    }

    ctx->pc = 0x17a3e4u;

label_17a3e4:
    // 0x17a3e4: 0x8f838628  lw          $v1, -0x79D8($gp)
    ctx->pc = 0x17a3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936104)));
label_17a3e8:
    // 0x17a3e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17a3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17a3ec:
    // 0x17a3ec: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x17a3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_17a3f0:
    // 0x17a3f0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x17a3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_17a3f4:
    // 0x17a3f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17a3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17a3f8:
    // 0x17a3f8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x17a3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_17a3fc:
    // 0x17a3fc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x17a3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_17a400:
    // 0x17a400: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x17a400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_17a404:
    // 0x17a404: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x17a404u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17a408:
    // 0x17a408: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x17a408u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_17a40c:
    // 0x17a40c: 0x320f809  jalr        $t9
label_17a410:
    if (ctx->pc == 0x17A410u) {
        ctx->pc = 0x17A410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A40Cu;
        // 0x17a410: 0x13280a  movz        $a1, $zero, $s3 (Delay Slot)
        if (GPR_U64(ctx, 19) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A414u;
        goto label_17a414;
    }
    ctx->pc = 0x17A40Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17A414u);
        ctx->pc = 0x17A410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A40Cu;
        // 0x17a410: 0x13280a  movz        $a1, $zero, $s3 (Delay Slot)
        if (GPR_U64(ctx, 19) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A40Cu, 0x17A414u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17A414u;
label_17a414:
    // 0x17a414: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17a414u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_17a418:
    // 0x17a418: 0x211182a  slt         $v1, $s0, $s1
    ctx->pc = 0x17a418u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_17a41c:
    // 0x17a41c: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
label_17a420:
    if (ctx->pc == 0x17A420u) {
        ctx->pc = 0x17A420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A41Cu;
        // 0x17a420: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A424u;
        goto label_fallthrough_0x17a41c;
    }
    ctx->pc = 0x17A41Cu;
    {
        const bool branch_taken_0x17a41c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17A420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A41Cu;
        // 0x17a420: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a41c) {
            ctx->pc = 0x17A3E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17a3e4;
        }
    }
label_fallthrough_0x17a41c:
    ctx->pc = 0x17A424u;
}
