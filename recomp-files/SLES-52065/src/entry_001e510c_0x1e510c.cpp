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

// Function: entry_001e510c
// Address: 0x1e510c - 0x1e5158
void entry_001e510c_0x1e510c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e510c_0x1e510c");
#endif

    switch (ctx->pc) {
        case 0x1e5148u: goto label_1e5148;
        default: break;
    }

    ctx->pc = 0x1e510cu;

label_1e510c:
    // 0x1e510c: 0x92020052  lbu         $v0, 0x52($s0)
    ctx->pc = 0x1e510cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 82)));
label_1e5110:
    // 0x1e5110: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_1e5114:
    if (ctx->pc == 0x1E5114u) {
        ctx->pc = 0x1E5118u;
        goto label_1e5118;
    }
    ctx->pc = 0x1E5110u;
    {
        const bool branch_taken_0x1e5110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5110) {
            ctx->pc = 0x1E5184u;
            return;
        }
    }
    ctx->pc = 0x1E5118u;
label_1e5118:
    // 0x1e5118: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1e5118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1e511c:
    // 0x1e511c: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_1e5120:
    if (ctx->pc == 0x1E5120u) {
        ctx->pc = 0x1E5124u;
        goto label_1e5124;
    }
    ctx->pc = 0x1E511Cu;
    {
        const bool branch_taken_0x1e511c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e511c) {
            ctx->pc = 0x1E5184u;
            return;
        }
    }
    ctx->pc = 0x1E5124u;
label_1e5124:
    // 0x1e5124: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1e5124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1e5128:
    // 0x1e5128: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1e5128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1e512c:
    // 0x1e512c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x1e512cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1e5130:
    // 0x1e5130: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_1e5134:
    if (ctx->pc == 0x1E5134u) {
        ctx->pc = 0x1E5134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5130u;
        // 0x1e5134: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5138u;
        goto label_1e5138;
    }
    ctx->pc = 0x1E5130u;
    {
        const bool branch_taken_0x1e5130 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5130u;
        // 0x1e5134: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5130) {
            ctx->pc = 0x1E5158u;
            return;
        }
    }
    ctx->pc = 0x1E5138u;
label_1e5138:
    // 0x1e5138: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e5138u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e513c:
    // 0x1e513c: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x1e513cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_1e5140:
    // 0x1e5140: 0x320f809  jalr        $t9
label_1e5144:
    if (ctx->pc == 0x1E5144u) {
        ctx->pc = 0x1E5144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5140u;
        // 0x1e5144: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5148u;
        goto label_1e5148;
    }
    ctx->pc = 0x1E5140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E5148u);
        ctx->pc = 0x1E5144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5140u;
        // 0x1e5144: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5140u, 0x1E5148u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E5148u;
label_1e5148:
    // 0x1e5148: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e5148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e514c:
    // 0x1e514c: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_1e5150:
    if (ctx->pc == 0x1E5150u) {
        ctx->pc = 0x1E5154u;
        goto label_1e5154;
    }
    ctx->pc = 0x1E514Cu;
    {
        const bool branch_taken_0x1e514c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e514c) {
            ctx->pc = 0x1E5158u;
            return;
        }
    }
    ctx->pc = 0x1E5154u;
label_1e5154:
    // 0x1e5154: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x1e5154u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    ctx->pc = 0x1e5158u;
}
