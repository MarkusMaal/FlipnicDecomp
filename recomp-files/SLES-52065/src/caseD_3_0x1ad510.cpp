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

// Function: caseD_3
// Address: 0x1ad510 - 0x1ad528
void caseD_3_0x1ad510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x1ad510");
#endif

    switch (ctx->pc) {
        case 0x1ad520u: goto label_1ad520;
        default: break;
    }

    ctx->pc = 0x1ad510u;

    // 0x1ad510: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ad510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ad514: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ad514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad518: 0xc063e14  jal         func_18F850
    ctx->pc = 0x1AD518u;
    SET_GPR_U32(ctx, 31, 0x1AD520u);
    ctx->pc = 0x1AD51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD518u;
    // 0x1ad51c: 0xa22206c1  sb          $v0, 0x6C1($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 1729), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1AD518u, 0x1AD520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD520u;
label_1ad520:
    // 0x1ad520: 0x10000163  b           . + 4 + (0x163 << 2)
    ctx->pc = 0x1AD520u;
    {
        const bool branch_taken_0x1ad520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad520) {
            ctx->pc = 0x1ADAB0u;
            return;
        }
    }
    ctx->pc = 0x1AD528u;
}
