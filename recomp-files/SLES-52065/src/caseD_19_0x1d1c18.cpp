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

// Function: caseD_19
// Address: 0x1d1c18 - 0x1d1c34
void caseD_19_0x1d1c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_19_0x1d1c18");
#endif

    switch (ctx->pc) {
        case 0x1d1c2cu: goto label_1d1c2c;
        default: break;
    }

    ctx->pc = 0x1d1c18u;

    // 0x1d1c18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d1c18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1c1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d1c1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1c20: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d1c20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1c24: 0xc074a58  jal         func_1D2960
    ctx->pc = 0x1D1C24u;
    SET_GPR_U32(ctx, 31, 0x1D1C2Cu);
    ctx->pc = 0x1D1C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1C24u;
    // 0x1d1c28: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2960u, 0x1D1C24u, 0x1D1C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1C2Cu;
label_1d1c2c:
    // 0x1d1c2c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1D1C2Cu;
    {
        const bool branch_taken_0x1d1c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1c2c) {
            ctx->pc = 0x1D1C60u;
            return;
        }
    }
    ctx->pc = 0x1D1C34u;
}
