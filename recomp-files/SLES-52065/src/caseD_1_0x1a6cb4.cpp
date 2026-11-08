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

// Function: caseD_1
// Address: 0x1a6cb4 - 0x1a6cf4
void caseD_1_0x1a6cb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x1a6cb4");
#endif

    switch (ctx->pc) {
        case 0x1a6cb4u: goto label_1a6cb4;
        case 0x1a6cb8u: goto label_1a6cb8;
        case 0x1a6cbcu: goto label_1a6cbc;
        case 0x1a6cc0u: goto label_1a6cc0;
        case 0x1a6cc4u: goto label_1a6cc4;
        case 0x1a6cc8u: goto label_1a6cc8;
        case 0x1a6cccu: goto label_1a6ccc;
        case 0x1a6cd0u: goto label_1a6cd0;
        case 0x1a6cd4u: goto label_1a6cd4;
        case 0x1a6cd8u: goto label_1a6cd8;
        case 0x1a6cdcu: goto label_1a6cdc;
        case 0x1a6ce0u: goto label_1a6ce0;
        case 0x1a6ce4u: goto label_1a6ce4;
        case 0x1a6ce8u: goto label_1a6ce8;
        case 0x1a6cecu: goto label_1a6cec;
        case 0x1a6cf0u: goto label_1a6cf0;
        default: break;
    }

    ctx->pc = 0x1a6cb4u;

label_1a6cb4:
    // 0x1a6cb4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a6cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a6cb8:
    // 0x1a6cb8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a6cb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a6cbc:
    // 0x1a6cbc: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1a6cbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1a6cc0:
    // 0x1a6cc0: 0x320f809  jalr        $t9
label_1a6cc4:
    if (ctx->pc == 0x1A6CC4u) {
        ctx->pc = 0x1A6CC8u;
        goto label_1a6cc8;
    }
    ctx->pc = 0x1A6CC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A6CC8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6CC0u, 0x1A6CC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A6CC8u;
label_1a6cc8:
    // 0x1a6cc8: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
label_1a6ccc:
    if (ctx->pc == 0x1A6CCCu) {
        ctx->pc = 0x1A6CD0u;
        goto label_1a6cd0;
    }
    ctx->pc = 0x1A6CC8u;
    {
        const bool branch_taken_0x1a6cc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6cc8) {
            ctx->pc = 0x1A6DB4u;
            return;
        }
    }
    ctx->pc = 0x1A6CD0u;
label_1a6cd0:
    // 0x1a6cd0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a6cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a6cd4:
    // 0x1a6cd4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a6cd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a6cd8:
    // 0x1a6cd8: 0x8f3900d0  lw          $t9, 0xD0($t9)
    ctx->pc = 0x1a6cd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 208)));
label_1a6cdc:
    // 0x1a6cdc: 0x320f809  jalr        $t9
label_1a6ce0:
    if (ctx->pc == 0x1A6CE0u) {
        ctx->pc = 0x1A6CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6CDCu;
        // 0x1a6ce0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6CE4u;
        goto label_1a6ce4;
    }
    ctx->pc = 0x1A6CDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A6CE4u);
        ctx->pc = 0x1A6CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6CDCu;
        // 0x1a6ce0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6CDCu, 0x1A6CE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A6CE4u;
label_1a6ce4:
    // 0x1a6ce4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1a6ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1a6ce8:
    // 0x1a6ce8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a6ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a6cec:
    // 0x1a6cec: 0x10000031  b           . + 4 + (0x31 << 2)
label_1a6cf0:
    if (ctx->pc == 0x1A6CF0u) {
        ctx->pc = 0x1A6CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6CECu;
        // 0x1a6cf0: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6CF4u;
        goto label_fallthrough_0x1a6cec;
    }
    ctx->pc = 0x1A6CECu;
    {
        const bool branch_taken_0x1a6cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6CECu;
        // 0x1a6cf0: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6cec) {
            ctx->pc = 0x1A6DB4u;
            return;
        }
    }
label_fallthrough_0x1a6cec:
    ctx->pc = 0x1A6CF4u;
}
