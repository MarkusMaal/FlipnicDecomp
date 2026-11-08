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

// Function: FUN_001b3840
// Address: 0x1b3840 - 0x1b3874
void FUN_001b3840_0x1b3840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b3840_0x1b3840");
#endif

    switch (ctx->pc) {
        case 0x1b384cu: goto label_1b384c;
        default: break;
    }

    ctx->pc = 0x1b3840u;

    // 0x1b3840: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b3840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3844: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B3844u;
    {
        const bool branch_taken_0x1b3844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3844) {
            ctx->pc = 0x1B385Cu;
            goto label_1b385c;
        }
    }
    ctx->pc = 0x1B384Cu;
label_1b384c:
    // 0x1b384c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1b384cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1b3850: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b3850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b3854: 0xac602858  sw          $zero, 0x2858($v1)
    ctx->pc = 0x1b3854u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 10328), GPR_U32(ctx, 0));
    // 0x1b3858: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1b3858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1b385c:
    // 0x1b385c: 0x0  nop
    ctx->pc = 0x1b385cu;
    // NOP
    // 0x1b3860: 0x28a30020  slti        $v1, $a1, 0x20
    ctx->pc = 0x1b3860u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1b3864: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1B3864u;
    {
        const bool branch_taken_0x1b3864 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3864) {
            ctx->pc = 0x1B384Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b384c;
        }
    }
    ctx->pc = 0x1B386Cu;
    // 0x1b386c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B386Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B386Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3874u;
}
