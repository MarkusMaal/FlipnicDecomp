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

// Function: caseD_a
// Address: 0x194c90 - 0x194cf0
void caseD_a_0x194c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_a_0x194c90");
#endif

    switch (ctx->pc) {
        case 0x194cb0u: goto label_194cb0;
        case 0x194cbcu: goto label_194cbc;
        default: break;
    }

    ctx->pc = 0x194c90u;

    // 0x194c90: 0x8e150034  lw          $s5, 0x34($s0)
    ctx->pc = 0x194c90u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x194c94: 0x8e120030  lw          $s2, 0x30($s0)
    ctx->pc = 0x194c94u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x194c98: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x194c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x194c9c: 0x8e11002c  lw          $s1, 0x2C($s0)
    ctx->pc = 0x194c9cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x194ca0: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x194ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x194ca4: 0x8e160028  lw          $s6, 0x28($s0)
    ctx->pc = 0x194ca4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x194ca8: 0xc063f7c  jal         func_18FDF0
    ctx->pc = 0x194CA8u;
    SET_GPR_U32(ctx, 31, 0x194CB0u);
    ctx->pc = 0x194CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194CA8u;
    // 0x194cac: 0x7fa000f0  sq          $zero, 0xF0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FDF0u, 0x194CA8u, 0x194CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194CB0u;
label_194cb0:
    // 0x194cb0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x194cb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194cb4: 0xc0648ec  jal         func_1923B0
    ctx->pc = 0x194CB4u;
    SET_GPR_U32(ctx, 31, 0x194CBCu);
    ctx->pc = 0x194CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194CB4u;
    // 0x194cb8: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1923B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1923B0u, 0x194CB4u, 0x194CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194CBCu;
label_194cbc:
    // 0x194cbc: 0x10400068  beqz        $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x194CBCu;
    {
        const bool branch_taken_0x194cbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x194cbc) {
            ctx->pc = 0x194E60u;
            return;
        }
    }
    ctx->pc = 0x194CC4u;
    // 0x194cc4: 0x8c430328  lw          $v1, 0x328($v0)
    ctx->pc = 0x194cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 808)));
    // 0x194cc8: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x194cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x194ccc: 0xac430328  sw          $v1, 0x328($v0)
    ctx->pc = 0x194cccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 808), GPR_U32(ctx, 3));
    // 0x194cd0: 0x8c430328  lw          $v1, 0x328($v0)
    ctx->pc = 0x194cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 808)));
    // 0x194cd4: 0x71082a  slt         $at, $v1, $s1
    ctx->pc = 0x194cd4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x194cd8: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x194CD8u;
    {
        const bool branch_taken_0x194cd8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x194cd8) {
            ctx->pc = 0x194CF8u;
            return;
        }
    }
    ctx->pc = 0x194CE0u;
    // 0x194ce0: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x194CE0u;
    {
        const bool branch_taken_0x194ce0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x194ce0) {
            ctx->pc = 0x194CF0u;
            return;
        }
    }
    ctx->pc = 0x194CE8u;
    // 0x194ce8: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x194CE8u;
    {
        const bool branch_taken_0x194ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194CE8u;
        // 0x194cec: 0xac520328  sw          $s2, 0x328($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 808), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194ce8) {
            ctx->pc = 0x194E60u;
            return;
        }
    }
    ctx->pc = 0x194CF0u;
}
