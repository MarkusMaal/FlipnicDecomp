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

// Function: entry_00121da4
// Address: 0x121da4 - 0x121db0
void entry_00121da4_0x121da4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121da4_0x121da4");
#endif

    ctx->pc = 0x121da4u;

    // 0x121da4: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x121da4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x121da8: 0xc048a20  jal         func_122880
    ctx->pc = 0x121DA8u;
    SET_GPR_U32(ctx, 31, 0x121DB0u);
    ctx->pc = 0x121DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121DA8u;
    // 0x121dac: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122880u, 0x121DA8u, 0x121DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121DB0u;
}
