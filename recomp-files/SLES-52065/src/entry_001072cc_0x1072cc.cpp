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

// Function: entry_001072cc
// Address: 0x1072cc - 0x1072d4
void entry_001072cc_0x1072cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001072cc_0x1072cc");
#endif

    ctx->pc = 0x1072ccu;

    // 0x1072cc: 0xc04ae3c  jal         func_12B8F0
    ctx->pc = 0x1072CCu;
    SET_GPR_U32(ctx, 31, 0x1072D4u);
    ctx->pc = 0x1072D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1072CCu;
    // 0x1072d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B8F0u, 0x1072CCu, 0x1072D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1072D4u;
}
