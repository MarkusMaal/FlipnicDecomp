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

// Function: entry_0013baec
// Address: 0x13baec - 0x13bafc
void entry_0013baec_0x13baec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013baec_0x13baec");
#endif

    switch (ctx->pc) {
        case 0x13baf4u: goto label_13baf4;
        default: break;
    }

    ctx->pc = 0x13baecu;

    // 0x13baec: 0xc04eedc  jal         func_13BB70
    ctx->pc = 0x13BAECu;
    SET_GPR_U32(ctx, 31, 0x13BAF4u);
    ctx->pc = 0x13BB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13BB70u, 0x13BAECu, 0x13BAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BAF4u;
label_13baf4:
    // 0x13baf4: 0xc04eed8  jal         func_13BB60
    ctx->pc = 0x13BAF4u;
    SET_GPR_U32(ctx, 31, 0x13BAFCu);
    ctx->pc = 0x13BAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BAF4u;
    // 0x13baf8: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13BB60u, 0x13BAF4u, 0x13BAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BAFCu;
}
