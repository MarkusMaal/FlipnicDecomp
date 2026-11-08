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

// Function: caseD_16
// Address: 0x1d1bdc - 0x1d1bf0
void caseD_16_0x1d1bdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_16_0x1d1bdc");
#endif

    switch (ctx->pc) {
        case 0x1d1be8u: goto label_1d1be8;
        default: break;
    }

    ctx->pc = 0x1d1bdcu;

    // 0x1d1bdc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d1bdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1be0: 0xc074790  jal         func_1D1E40
    ctx->pc = 0x1D1BE0u;
    SET_GPR_U32(ctx, 31, 0x1D1BE8u);
    ctx->pc = 0x1D1BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1BE0u;
    // 0x1d1be4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1E40u, 0x1D1BE0u, 0x1D1BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1BE8u;
label_1d1be8:
    // 0x1d1be8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1D1BE8u;
    {
        const bool branch_taken_0x1d1be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1BE8u;
        // 0x1d1bec: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1be8) {
            ctx->pc = 0x1D1C64u;
            return;
        }
    }
    ctx->pc = 0x1D1BF0u;
}
