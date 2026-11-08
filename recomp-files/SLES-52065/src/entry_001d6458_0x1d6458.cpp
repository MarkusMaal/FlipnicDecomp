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

// Function: entry_001d6458
// Address: 0x1d6458 - 0x1d6468
void entry_001d6458_0x1d6458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d6458_0x1d6458");
#endif

    switch (ctx->pc) {
        case 0x1d6464u: goto label_1d6464;
        default: break;
    }

    ctx->pc = 0x1d6458u;

    // 0x1d6458: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d6458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d645c: 0xc080664  jal         func_201990
    ctx->pc = 0x1D645Cu;
    SET_GPR_U32(ctx, 31, 0x1D6464u);
    ctx->pc = 0x1D6460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D645Cu;
    // 0x1d6460: 0x24a53668  addiu       $a1, $a1, 0x3668 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x1D645Cu, 0x1D6464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6464u;
label_1d6464:
    // 0x1d6464: 0x8ea80258  lw          $t0, 0x258($s5)
    ctx->pc = 0x1d6464u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 600)));
    ctx->pc = 0x1d6468u;
}
