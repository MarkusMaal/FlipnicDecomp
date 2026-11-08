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

// Function: entry_001cfcf8
// Address: 0x1cfcf8 - 0x1cfd0c
void entry_001cfcf8_0x1cfcf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cfcf8_0x1cfcf8");
#endif

    switch (ctx->pc) {
        case 0x1cfd04u: goto label_1cfd04;
        default: break;
    }

    ctx->pc = 0x1cfcf8u;

    // 0x1cfcf8: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x1cfcf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1cfcfc: 0xc06d894  jal         func_1B6250
    ctx->pc = 0x1CFCFCu;
    SET_GPR_U32(ctx, 31, 0x1CFD04u);
    ctx->pc = 0x1CFD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFCFCu;
    // 0x1cfd00: 0x2405001a  addiu       $a1, $zero, 0x1A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6250u, 0x1CFCFCu, 0x1CFD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFD04u;
label_1cfd04:
    // 0x1cfd04: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1CFD04u;
    {
        const bool branch_taken_0x1cfd04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cfd04) {
            ctx->pc = 0x1CFD64u;
            return;
        }
    }
    ctx->pc = 0x1CFD0Cu;
}
