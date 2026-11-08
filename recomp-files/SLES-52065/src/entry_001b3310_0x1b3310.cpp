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

// Function: entry_001b3310
// Address: 0x1b3310 - 0x1b3320
void entry_001b3310_0x1b3310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3310_0x1b3310");
#endif

    ctx->pc = 0x1b3310u;

    // 0x1b3310: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x1b3310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1b3314: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1b3314u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1b3318: 0xc0627bc  jal         func_189EF0
    ctx->pc = 0x1B3318u;
    SET_GPR_U32(ctx, 31, 0x1B3320u);
    ctx->pc = 0x1B331Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3318u;
    // 0x1b331c: 0x24a50cb8  addiu       $a1, $a1, 0xCB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EF0u, 0x1B3318u, 0x1B3320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3320u;
}
