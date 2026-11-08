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

// Function: entry_001111cc
// Address: 0x1111cc - 0x111210
void entry_001111cc_0x1111cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001111cc_0x1111cc");
#endif

    switch (ctx->pc) {
        case 0x111200u: goto label_111200;
        default: break;
    }

    ctx->pc = 0x1111ccu;

label_1111cc:
    // 0x1111cc: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1111ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1111d0:
    // 0x1111d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1111d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1111d4:
    // 0x1111d4: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1111d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1111d8:
    // 0x1111d8: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x1111d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_1111dc:
    // 0x1111dc: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x1111dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1111e0:
    // 0x1111e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1111e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1111e4:
    // 0x1111e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1111e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1111e8:
    // 0x1111e8: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x1111e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_1111ec:
    // 0x1111ec: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1111ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1111f0:
    // 0x1111f0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1111f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1111f4:
    // 0x1111f4: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x1111f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_1111f8:
    // 0x1111f8: 0x320f809  jalr        $t9
label_1111fc:
    if (ctx->pc == 0x1111FCu) {
        ctx->pc = 0x1111FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1111F8u;
        // 0x1111fc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111200u;
        goto label_111200;
    }
    ctx->pc = 0x1111F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x111200u);
        ctx->pc = 0x1111FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1111F8u;
        // 0x1111fc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1111F8u, 0x111200u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x111200u;
label_111200:
    // 0x111200: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x111200u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_111204:
    // 0x111204: 0x253182a  slt         $v1, $s2, $s3
    ctx->pc = 0x111204u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_111208:
    // 0x111208: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
label_11120c:
    if (ctx->pc == 0x11120Cu) {
        ctx->pc = 0x11120Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111208u;
        // 0x11120c: 0x26940002  addiu       $s4, $s4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111210u;
        goto label_fallthrough_0x111208;
    }
    ctx->pc = 0x111208u;
    {
        const bool branch_taken_0x111208 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11120Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111208u;
        // 0x11120c: 0x26940002  addiu       $s4, $s4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111208) {
            ctx->pc = 0x1111CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1111cc;
        }
    }
label_fallthrough_0x111208:
    ctx->pc = 0x111210u;
}
