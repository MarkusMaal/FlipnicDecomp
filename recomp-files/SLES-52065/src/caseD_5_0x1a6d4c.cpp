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

// Function: caseD_5
// Address: 0x1a6d4c - 0x1a6d78
void caseD_5_0x1a6d4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x1a6d4c");
#endif

    switch (ctx->pc) {
        case 0x1a6d4cu: goto label_1a6d4c;
        case 0x1a6d50u: goto label_1a6d50;
        case 0x1a6d54u: goto label_1a6d54;
        case 0x1a6d58u: goto label_1a6d58;
        case 0x1a6d5cu: goto label_1a6d5c;
        case 0x1a6d60u: goto label_1a6d60;
        case 0x1a6d64u: goto label_1a6d64;
        case 0x1a6d68u: goto label_1a6d68;
        case 0x1a6d6cu: goto label_1a6d6c;
        case 0x1a6d70u: goto label_1a6d70;
        case 0x1a6d74u: goto label_1a6d74;
        default: break;
    }

    ctx->pc = 0x1a6d4cu;

label_1a6d4c:
    // 0x1a6d4c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a6d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a6d50:
    // 0x1a6d50: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a6d50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a6d54:
    // 0x1a6d54: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1a6d54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1a6d58:
    // 0x1a6d58: 0x320f809  jalr        $t9
label_1a6d5c:
    if (ctx->pc == 0x1A6D5Cu) {
        ctx->pc = 0x1A6D60u;
        goto label_1a6d60;
    }
    ctx->pc = 0x1A6D58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A6D60u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6D58u, 0x1A6D60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A6D60u;
label_1a6d60:
    // 0x1a6d60: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_1a6d64:
    if (ctx->pc == 0x1A6D64u) {
        ctx->pc = 0x1A6D68u;
        goto label_1a6d68;
    }
    ctx->pc = 0x1A6D60u;
    {
        const bool branch_taken_0x1a6d60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6d60) {
            ctx->pc = 0x1A6DB4u;
            return;
        }
    }
    ctx->pc = 0x1A6D68u;
label_1a6d68:
    // 0x1a6d68: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1a6d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1a6d6c:
    // 0x1a6d6c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a6d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a6d70:
    // 0x1a6d70: 0x10000010  b           . + 4 + (0x10 << 2)
label_1a6d74:
    if (ctx->pc == 0x1A6D74u) {
        ctx->pc = 0x1A6D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6D70u;
        // 0x1a6d74: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6D78u;
        goto label_fallthrough_0x1a6d70;
    }
    ctx->pc = 0x1A6D70u;
    {
        const bool branch_taken_0x1a6d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6D70u;
        // 0x1a6d74: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6d70) {
            ctx->pc = 0x1A6DB4u;
            return;
        }
    }
label_fallthrough_0x1a6d70:
    ctx->pc = 0x1A6D78u;
}
