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

// Function: entry_001e503c
// Address: 0x1e503c - 0x1e5080
void entry_001e503c_0x1e503c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e503c_0x1e503c");
#endif

    switch (ctx->pc) {
        case 0x1e5050u: goto label_1e5050;
        case 0x1e5060u: goto label_1e5060;
        default: break;
    }

    ctx->pc = 0x1e503cu;

label_1e503c:
    // 0x1e503c: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x1e503cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_1e5040:
    // 0x1e5040: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e5040u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e5044:
    // 0x1e5044: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1e5044u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1e5048:
    // 0x1e5048: 0x320f809  jalr        $t9
label_1e504c:
    if (ctx->pc == 0x1E504Cu) {
        ctx->pc = 0x1E5050u;
        goto label_1e5050;
    }
    ctx->pc = 0x1E5048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E5050u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5048u, 0x1E5050u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E5050u;
label_1e5050:
    // 0x1e5050: 0x1000000b  b           . + 4 + (0xB << 2)
label_1e5054:
    if (ctx->pc == 0x1E5054u) {
        ctx->pc = 0x1E5058u;
        goto label_1e5058;
    }
    ctx->pc = 0x1E5050u;
    {
        const bool branch_taken_0x1e5050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5050) {
            ctx->pc = 0x1E5080u;
            return;
        }
    }
    ctx->pc = 0x1E5058u;
label_1e5058:
    // 0x1e5058: 0xc07a704  jal         func_1E9C10
label_1e505c:
    if (ctx->pc == 0x1E505Cu) {
        ctx->pc = 0x1E505Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5058u;
        // 0x1e505c: 0x27c40040  addiu       $a0, $fp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5060u;
        goto label_1e5060;
    }
    ctx->pc = 0x1E5058u;
    SET_GPR_U32(ctx, 31, 0x1E5060u);
    ctx->pc = 0x1E505Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5058u;
    // 0x1e505c: 0x27c40040  addiu       $a0, $fp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9C10u, 0x1E5058u, 0x1E5060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5060u;
label_1e5060:
    // 0x1e5060: 0x0  nop
    ctx->pc = 0x1e5060u;
    // NOP
label_1e5064:
    // 0x1e5064: 0x0  nop
    ctx->pc = 0x1e5064u;
    // NOP
label_1e5068:
    // 0x1e5068: 0x0  nop
    ctx->pc = 0x1e5068u;
    // NOP
label_1e506c:
    // 0x1e506c: 0x0  nop
    ctx->pc = 0x1e506cu;
    // NOP
label_1e5070:
    // 0x1e5070: 0x0  nop
    ctx->pc = 0x1e5070u;
    // NOP
label_1e5074:
    // 0x1e5074: 0x0  nop
    ctx->pc = 0x1e5074u;
    // NOP
label_1e5078:
    // 0x1e5078: 0x1000fff9  b           . + 4 + (-0x7 << 2)
label_1e507c:
    if (ctx->pc == 0x1E507Cu) {
        ctx->pc = 0x1E5080u;
        goto label_fallthrough_0x1e5078;
    }
    ctx->pc = 0x1E5078u;
    {
        const bool branch_taken_0x1e5078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5078) {
            ctx->pc = 0x1E5060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e5060;
        }
    }
label_fallthrough_0x1e5078:
    ctx->pc = 0x1E5080u;
}
