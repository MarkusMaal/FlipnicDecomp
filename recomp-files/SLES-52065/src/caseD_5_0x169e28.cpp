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
// Address: 0x169e28 - 0x169e48
void caseD_5_0x169e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x169e28");
#endif

    switch (ctx->pc) {
        case 0x169e3cu: goto label_169e3c;
        default: break;
    }

    ctx->pc = 0x169e28u;

    // 0x169e28: 0x8e040224  lw          $a0, 0x224($s0)
    ctx->pc = 0x169e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x169e2c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x169E2Cu;
    {
        const bool branch_taken_0x169e2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x169e2c) {
            ctx->pc = 0x169E48u;
            return;
        }
    }
    ctx->pc = 0x169E34u;
    // 0x169e34: 0xc055c40  jal         func_157100
    ctx->pc = 0x169E34u;
    SET_GPR_U32(ctx, 31, 0x169E3Cu);
    ctx->pc = 0x157100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157100u, 0x169E34u, 0x169E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169E3Cu;
label_169e3c:
    // 0x169e3c: 0x8e030224  lw          $v1, 0x224($s0)
    ctx->pc = 0x169e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x169e40: 0x7a060060  lq          $a2, 0x60($s0)
    ctx->pc = 0x169e40u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x169e44: 0x7c660000  sq          $a2, 0x0($v1)
    ctx->pc = 0x169e44u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 6));
    ctx->pc = 0x169e48u;
}
