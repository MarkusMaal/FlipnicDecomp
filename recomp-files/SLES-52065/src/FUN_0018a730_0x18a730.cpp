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

// Function: FUN_0018a730
// Address: 0x18a730 - 0x18a760
void FUN_0018a730_0x18a730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018a730_0x18a730");
#endif

    switch (ctx->pc) {
        case 0x18a738u: goto label_18a738;
        case 0x18a740u: goto label_18a740;
        case 0x18a748u: goto label_18a748;
        case 0x18a758u: goto label_18a758;
        default: break;
    }

    ctx->pc = 0x18a730u;

    // 0x18a730: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18a730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18a734: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18a734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_18a738:
    // 0x18a738: 0xc07ad50  jal         func_1EB540
    ctx->pc = 0x18A738u;
    SET_GPR_U32(ctx, 31, 0x18A740u);
    ctx->pc = 0x1EB540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB540u, 0x18A738u, 0x18A740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A740u;
label_18a740:
    // 0x18a740: 0xc07635e  jal         func_1D8D78
    ctx->pc = 0x18A740u;
    SET_GPR_U32(ctx, 31, 0x18A748u);
    ctx->pc = 0x1D8D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8D78u, 0x18A740u, 0x18A748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A748u;
label_18a748:
    // 0x18a748: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x18A748u;
    {
        const bool branch_taken_0x18a748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a748) {
            ctx->pc = 0x18A738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18a738;
        }
    }
    ctx->pc = 0x18A750u;
    // 0x18a750: 0xc074c2c  jal         func_1D30B0
    ctx->pc = 0x18A750u;
    SET_GPR_U32(ctx, 31, 0x18A758u);
    ctx->pc = 0x1D30B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D30B0u, 0x18A750u, 0x18A758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A758u;
label_18a758:
    // 0x18a758: 0x1000fff7  b           . + 4 + (-0x9 << 2)
    ctx->pc = 0x18A758u;
    {
        const bool branch_taken_0x18a758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a758) {
            ctx->pc = 0x18A738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18a738;
        }
    }
    ctx->pc = 0x18A760u;
}
