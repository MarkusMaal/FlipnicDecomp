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

// Function: caseD_b
// Address: 0x194d20 - 0x194d80
void caseD_b_0x194d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_b_0x194d20");
#endif

    switch (ctx->pc) {
        case 0x194d40u: goto label_194d40;
        case 0x194d4cu: goto label_194d4c;
        default: break;
    }

    ctx->pc = 0x194d20u;

    // 0x194d20: 0x8e150034  lw          $s5, 0x34($s0)
    ctx->pc = 0x194d20u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x194d24: 0x8e120030  lw          $s2, 0x30($s0)
    ctx->pc = 0x194d24u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x194d28: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x194d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x194d2c: 0x8e11002c  lw          $s1, 0x2C($s0)
    ctx->pc = 0x194d2cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x194d30: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x194d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x194d34: 0x8e160028  lw          $s6, 0x28($s0)
    ctx->pc = 0x194d34u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x194d38: 0xc063f7c  jal         func_18FDF0
    ctx->pc = 0x194D38u;
    SET_GPR_U32(ctx, 31, 0x194D40u);
    ctx->pc = 0x194D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194D38u;
    // 0x194d3c: 0x7fa00100  sq          $zero, 0x100($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FDF0u, 0x194D38u, 0x194D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194D40u;
label_194d40:
    // 0x194d40: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x194d40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194d44: 0xc0648ec  jal         func_1923B0
    ctx->pc = 0x194D44u;
    SET_GPR_U32(ctx, 31, 0x194D4Cu);
    ctx->pc = 0x194D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194D44u;
    // 0x194d48: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1923B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1923B0u, 0x194D44u, 0x194D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194D4Cu;
label_194d4c:
    // 0x194d4c: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x194D4Cu;
    {
        const bool branch_taken_0x194d4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x194d4c) {
            ctx->pc = 0x194E60u;
            return;
        }
    }
    ctx->pc = 0x194D54u;
    // 0x194d54: 0x8c43032c  lw          $v1, 0x32C($v0)
    ctx->pc = 0x194d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 812)));
    // 0x194d58: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x194d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x194d5c: 0xac43032c  sw          $v1, 0x32C($v0)
    ctx->pc = 0x194d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 812), GPR_U32(ctx, 3));
    // 0x194d60: 0x8c43032c  lw          $v1, 0x32C($v0)
    ctx->pc = 0x194d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 812)));
    // 0x194d64: 0x71082a  slt         $at, $v1, $s1
    ctx->pc = 0x194d64u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x194d68: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x194D68u;
    {
        const bool branch_taken_0x194d68 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x194d68) {
            ctx->pc = 0x194D88u;
            return;
        }
    }
    ctx->pc = 0x194D70u;
    // 0x194d70: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x194D70u;
    {
        const bool branch_taken_0x194d70 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x194d70) {
            ctx->pc = 0x194D80u;
            return;
        }
    }
    ctx->pc = 0x194D78u;
    // 0x194d78: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x194D78u;
    {
        const bool branch_taken_0x194d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194D78u;
        // 0x194d7c: 0xac52032c  sw          $s2, 0x32C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 812), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194d78) {
            ctx->pc = 0x194E60u;
            return;
        }
    }
    ctx->pc = 0x194D80u;
}
