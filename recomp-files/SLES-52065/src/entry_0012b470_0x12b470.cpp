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

// Function: entry_0012b470
// Address: 0x12b470 - 0x12b49c
void entry_0012b470_0x12b470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b470_0x12b470");
#endif

    switch (ctx->pc) {
        case 0x12b48cu: goto label_12b48c;
        default: break;
    }

    ctx->pc = 0x12b470u;

label_12b470:
    // 0x12b470: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x12b470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_12b474:
    // 0x12b474: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x12b474u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_12b478:
    // 0x12b478: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x12b478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_12b47c:
    // 0x12b47c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x12b47cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_12b480:
    // 0x12b480: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x12b480u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_12b484:
    // 0x12b484: 0x320f809  jalr        $t9
label_12b488:
    if (ctx->pc == 0x12B488u) {
        ctx->pc = 0x12B488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B484u;
        // 0x12b488: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B48Cu;
        goto label_12b48c;
    }
    ctx->pc = 0x12B484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x12B48Cu);
        ctx->pc = 0x12B488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B484u;
        // 0x12b488: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B484u, 0x12B48Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12B48Cu;
label_12b48c:
    // 0x12b48c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x12b48cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_12b490:
    // 0x12b490: 0x2a230003  slti        $v1, $s1, 0x3
    ctx->pc = 0x12b490u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
label_12b494:
    // 0x12b494: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_12b498:
    if (ctx->pc == 0x12B498u) {
        ctx->pc = 0x12B498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B494u;
        // 0x12b498: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B49Cu;
        goto label_fallthrough_0x12b494;
    }
    ctx->pc = 0x12B494u;
    {
        const bool branch_taken_0x12b494 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B494u;
        // 0x12b498: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b494) {
            ctx->pc = 0x12B470u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b470;
        }
    }
label_fallthrough_0x12b494:
    ctx->pc = 0x12B49Cu;
}
