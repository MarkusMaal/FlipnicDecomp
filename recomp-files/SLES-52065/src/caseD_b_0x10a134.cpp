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
// Address: 0x10a134 - 0x10a14c
void caseD_b_0x10a134(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_b_0x10a134");
#endif

    switch (ctx->pc) {
        case 0x10a144u: goto label_10a144;
        default: break;
    }

    ctx->pc = 0x10a134u;

    // 0x10a134: 0x86260002  lh          $a2, 0x2($s1)
    ctx->pc = 0x10a134u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x10a138: 0x8f858388  lw          $a1, -0x7C78($gp)
    ctx->pc = 0x10a138u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
    // 0x10a13c: 0xc046350  jal         func_118D40
    ctx->pc = 0x10A13Cu;
    SET_GPR_U32(ctx, 31, 0x10A144u);
    ctx->pc = 0x10A140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A13Cu;
    // 0x10a140: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118D40u, 0x10A13Cu, 0x10A144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A144u;
label_10a144:
    // 0x10a144: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x10A144u;
    {
        const bool branch_taken_0x10a144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a144) {
            ctx->pc = 0x10A1F0u;
            return;
        }
    }
    ctx->pc = 0x10A14Cu;
}
