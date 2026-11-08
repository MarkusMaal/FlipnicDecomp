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

// Function: entry_001e3f5c
// Address: 0x1e3f5c - 0x1e3fa0
void entry_001e3f5c_0x1e3f5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e3f5c_0x1e3f5c");
#endif

    switch (ctx->pc) {
        case 0x1e3f70u: goto label_1e3f70;
        case 0x1e3f80u: goto label_1e3f80;
        default: break;
    }

    ctx->pc = 0x1e3f5cu;

label_1e3f5c:
    // 0x1e3f5c: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x1e3f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_1e3f60:
    // 0x1e3f60: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e3f60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e3f64:
    // 0x1e3f64: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1e3f64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1e3f68:
    // 0x1e3f68: 0x320f809  jalr        $t9
label_1e3f6c:
    if (ctx->pc == 0x1E3F6Cu) {
        ctx->pc = 0x1E3F70u;
        goto label_1e3f70;
    }
    ctx->pc = 0x1E3F68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E3F70u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3F68u, 0x1E3F70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E3F70u;
label_1e3f70:
    // 0x1e3f70: 0x1000000b  b           . + 4 + (0xB << 2)
label_1e3f74:
    if (ctx->pc == 0x1E3F74u) {
        ctx->pc = 0x1E3F78u;
        goto label_1e3f78;
    }
    ctx->pc = 0x1E3F70u;
    {
        const bool branch_taken_0x1e3f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3f70) {
            ctx->pc = 0x1E3FA0u;
            return;
        }
    }
    ctx->pc = 0x1E3F78u;
label_1e3f78:
    // 0x1e3f78: 0xc07a704  jal         func_1E9C10
label_1e3f7c:
    if (ctx->pc == 0x1E3F7Cu) {
        ctx->pc = 0x1E3F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3F78u;
        // 0x1e3f7c: 0x27c40040  addiu       $a0, $fp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3F80u;
        goto label_1e3f80;
    }
    ctx->pc = 0x1E3F78u;
    SET_GPR_U32(ctx, 31, 0x1E3F80u);
    ctx->pc = 0x1E3F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3F78u;
    // 0x1e3f7c: 0x27c40040  addiu       $a0, $fp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9C10u, 0x1E3F78u, 0x1E3F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3F80u;
label_1e3f80:
    // 0x1e3f80: 0x0  nop
    ctx->pc = 0x1e3f80u;
    // NOP
label_1e3f84:
    // 0x1e3f84: 0x0  nop
    ctx->pc = 0x1e3f84u;
    // NOP
label_1e3f88:
    // 0x1e3f88: 0x0  nop
    ctx->pc = 0x1e3f88u;
    // NOP
label_1e3f8c:
    // 0x1e3f8c: 0x0  nop
    ctx->pc = 0x1e3f8cu;
    // NOP
label_1e3f90:
    // 0x1e3f90: 0x0  nop
    ctx->pc = 0x1e3f90u;
    // NOP
label_1e3f94:
    // 0x1e3f94: 0x0  nop
    ctx->pc = 0x1e3f94u;
    // NOP
label_1e3f98:
    // 0x1e3f98: 0x1000fff9  b           . + 4 + (-0x7 << 2)
label_1e3f9c:
    if (ctx->pc == 0x1E3F9Cu) {
        ctx->pc = 0x1E3FA0u;
        goto label_fallthrough_0x1e3f98;
    }
    ctx->pc = 0x1E3F98u;
    {
        const bool branch_taken_0x1e3f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3f98) {
            ctx->pc = 0x1E3F80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e3f80;
        }
    }
label_fallthrough_0x1e3f98:
    ctx->pc = 0x1E3FA0u;
}
