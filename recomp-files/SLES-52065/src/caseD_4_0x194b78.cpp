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

// Function: caseD_4
// Address: 0x194b78 - 0x194ba8
void caseD_4_0x194b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x194b78");
#endif

    switch (ctx->pc) {
        case 0x194b8cu: goto label_194b8c;
        case 0x194b98u: goto label_194b98;
        default: break;
    }

    ctx->pc = 0x194b78u;

    // 0x194b78: 0x8e110028  lw          $s1, 0x28($s0)
    ctx->pc = 0x194b78u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x194b7c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x194b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x194b80: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x194b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x194b84: 0xc063f7c  jal         func_18FDF0
    ctx->pc = 0x194B84u;
    SET_GPR_U32(ctx, 31, 0x194B8Cu);
    ctx->pc = 0x194B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194B84u;
    // 0x194b88: 0x7fa000e0  sq          $zero, 0xE0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FDF0u, 0x194B84u, 0x194B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194B8Cu;
label_194b8c:
    // 0x194b8c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x194b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194b90: 0xc0648ec  jal         func_1923B0
    ctx->pc = 0x194B90u;
    SET_GPR_U32(ctx, 31, 0x194B98u);
    ctx->pc = 0x194B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194B90u;
    // 0x194b94: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1923B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1923B0u, 0x194B90u, 0x194B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194B98u;
label_194b98:
    // 0x194b98: 0x104000b1  beqz        $v0, . + 4 + (0xB1 << 2)
    ctx->pc = 0x194B98u;
    {
        const bool branch_taken_0x194b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x194b98) {
            ctx->pc = 0x194E60u;
            return;
        }
    }
    ctx->pc = 0x194BA0u;
    // 0x194ba0: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x194BA0u;
    {
        const bool branch_taken_0x194ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194BA0u;
        // 0x194ba4: 0xac51032c  sw          $s1, 0x32C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 812), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194ba0) {
            ctx->pc = 0x194E60u;
            return;
        }
    }
    ctx->pc = 0x194BA8u;
}
