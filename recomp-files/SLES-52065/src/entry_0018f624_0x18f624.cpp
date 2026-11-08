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

// Function: entry_0018f624
// Address: 0x18f624 - 0x18f64c
void entry_0018f624_0x18f624(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f624_0x18f624");
#endif

    switch (ctx->pc) {
        case 0x18f62cu: goto label_18f62c;
        case 0x18f648u: goto label_18f648;
        default: break;
    }

    ctx->pc = 0x18f624u;

    // 0x18f624: 0xc063ec8  jal         func_18FB20
    ctx->pc = 0x18F624u;
    SET_GPR_U32(ctx, 31, 0x18F62Cu);
    ctx->pc = 0x18FB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FB20u, 0x18F624u, 0x18F62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F62Cu;
label_18f62c:
    // 0x18f62c: 0x8c430230  lw          $v1, 0x230($v0)
    ctx->pc = 0x18f62cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 560)));
    // 0x18f630: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x18f630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x18f634: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18F634u;
    {
        const bool branch_taken_0x18f634 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18f634) {
            ctx->pc = 0x18F64Cu;
            return;
        }
    }
    ctx->pc = 0x18F63Cu;
    // 0x18f63c: 0x8e320014  lw          $s2, 0x14($s1)
    ctx->pc = 0x18f63cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x18f640: 0xc063ec8  jal         func_18FB20
    ctx->pc = 0x18F640u;
    SET_GPR_U32(ctx, 31, 0x18F648u);
    ctx->pc = 0x18F644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F640u;
    // 0x18f644: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FB20u, 0x18F640u, 0x18F648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F648u;
label_18f648:
    // 0x18f648: 0xac520230  sw          $s2, 0x230($v0)
    ctx->pc = 0x18f648u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 560), GPR_U32(ctx, 18));
    ctx->pc = 0x18f64cu;
}
