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

// Function: entry_0013f574
// Address: 0x13f574 - 0x13f59c
void entry_0013f574_0x13f574(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f574_0x13f574");
#endif

    switch (ctx->pc) {
        case 0x13f594u: goto label_13f594;
        default: break;
    }

    ctx->pc = 0x13f574u;

    // 0x13f574: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x13f574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x13f578: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x13f578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x13f57c: 0xae430018  sw          $v1, 0x18($s2)
    ctx->pc = 0x13f57cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 3));
    // 0x13f580: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x13f580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13f584: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x13F584u;
    {
        const bool branch_taken_0x13f584 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f584) {
            ctx->pc = 0x13F5CCu;
            return;
        }
    }
    ctx->pc = 0x13F58Cu;
    // 0x13f58c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x13F58Cu;
    SET_GPR_U32(ctx, 31, 0x13F594u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x13F58Cu, 0x13F594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F594u;
label_13f594:
    // 0x13f594: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x13F594u;
    {
        const bool branch_taken_0x13f594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f594) {
            ctx->pc = 0x13F5CCu;
            return;
        }
    }
    ctx->pc = 0x13F59Cu;
}
