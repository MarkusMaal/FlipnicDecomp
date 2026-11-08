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

// Function: entry_001eecd4
// Address: 0x1eecd4 - 0x1eece8
void entry_001eecd4_0x1eecd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eecd4_0x1eecd4");
#endif

    ctx->pc = 0x1eecd4u;

    // 0x1eecd4: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x1eecd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1eecd8: 0x18a00003  blez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EECD8u;
    {
        const bool branch_taken_0x1eecd8 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x1eecd8) {
            ctx->pc = 0x1EECE8u;
            return;
        }
    }
    ctx->pc = 0x1EECE0u;
    // 0x1eece0: 0xc07b76e  jal         func_1EDDB8
    ctx->pc = 0x1EECE0u;
    SET_GPR_U32(ctx, 31, 0x1EECE8u);
    ctx->pc = 0x1EECE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EECE0u;
    // 0x1eece4: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDDB8u, 0x1EECE0u, 0x1EECE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EECE8u;
}
