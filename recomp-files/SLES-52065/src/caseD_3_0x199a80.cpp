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

// Function: caseD_3
// Address: 0x199a80 - 0x199aac
void caseD_3_0x199a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x199a80");
#endif

    switch (ctx->pc) {
        case 0x199a80u: goto label_199a80;
        case 0x199a84u: goto label_199a84;
        case 0x199a88u: goto label_199a88;
        case 0x199a8cu: goto label_199a8c;
        case 0x199a90u: goto label_199a90;
        case 0x199a94u: goto label_199a94;
        case 0x199a98u: goto label_199a98;
        case 0x199a9cu: goto label_199a9c;
        case 0x199aa0u: goto label_199aa0;
        case 0x199aa4u: goto label_199aa4;
        case 0x199aa8u: goto label_199aa8;
        default: break;
    }

    ctx->pc = 0x199a80u;

label_199a80:
    // 0x199a80: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x199a80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_199a84:
    // 0x199a84: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x199a84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_199a88:
    // 0x199a88: 0x320f809  jalr        $t9
label_199a8c:
    if (ctx->pc == 0x199A8Cu) {
        ctx->pc = 0x199A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199A88u;
        // 0x199a8c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199A90u;
        goto label_199a90;
    }
    ctx->pc = 0x199A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x199A90u);
        ctx->pc = 0x199A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199A88u;
        // 0x199a8c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199A88u, 0x199A90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x199A90u;
label_199a90:
    // 0x199a90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x199a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_199a94:
    // 0x199a94: 0x14430044  bne         $v0, $v1, . + 4 + (0x44 << 2)
label_199a98:
    if (ctx->pc == 0x199A98u) {
        ctx->pc = 0x199A9Cu;
        goto label_199a9c;
    }
    ctx->pc = 0x199A94u;
    {
        const bool branch_taken_0x199a94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x199a94) {
            ctx->pc = 0x199BA8u;
            return;
        }
    }
    ctx->pc = 0x199A9Cu;
label_199a9c:
    // 0x199a9c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x199a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_199aa0:
    // 0x199aa0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x199aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_199aa4:
    // 0x199aa4: 0x10000040  b           . + 4 + (0x40 << 2)
label_199aa8:
    if (ctx->pc == 0x199AA8u) {
        ctx->pc = 0x199AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199AA4u;
        // 0x199aa8: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199AACu;
        goto label_fallthrough_0x199aa4;
    }
    ctx->pc = 0x199AA4u;
    {
        const bool branch_taken_0x199aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199AA4u;
        // 0x199aa8: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199aa4) {
            ctx->pc = 0x199BA8u;
            return;
        }
    }
label_fallthrough_0x199aa4:
    ctx->pc = 0x199AACu;
}
