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

// Function: entry_00113528
// Address: 0x113528 - 0x113568
void entry_00113528_0x113528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113528_0x113528");
#endif

    switch (ctx->pc) {
        case 0x113558u: goto label_113558;
        default: break;
    }

    ctx->pc = 0x113528u;

label_113528:
    // 0x113528: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x113528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_11352c:
    // 0x11352c: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x11352cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_113530:
    // 0x113530: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x113530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_113534:
    // 0x113534: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x113534u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_113538:
    // 0x113538: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x113538u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_11353c:
    // 0x11353c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11353cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_113540:
    // 0x113540: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x113540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_113544:
    // 0x113544: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x113544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_113548:
    // 0x113548: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x113548u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_11354c:
    // 0x11354c: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x11354cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_113550:
    // 0x113550: 0x320f809  jalr        $t9
label_113554:
    if (ctx->pc == 0x113554u) {
        ctx->pc = 0x113554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113550u;
        // 0x113554: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113558u;
        goto label_113558;
    }
    ctx->pc = 0x113550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x113558u);
        ctx->pc = 0x113554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113550u;
        // 0x113554: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113550u, 0x113558u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x113558u;
label_113558:
    // 0x113558: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x113558u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_11355c:
    // 0x11355c: 0x250182a  slt         $v1, $s2, $s0
    ctx->pc = 0x11355cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_113560:
    // 0x113560: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
label_113564:
    if (ctx->pc == 0x113564u) {
        ctx->pc = 0x113564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113560u;
        // 0x113564: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113568u;
        goto label_fallthrough_0x113560;
    }
    ctx->pc = 0x113560u;
    {
        const bool branch_taken_0x113560 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x113564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113560u;
        // 0x113564: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113560) {
            ctx->pc = 0x113528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113528;
        }
    }
label_fallthrough_0x113560:
    ctx->pc = 0x113568u;
}
