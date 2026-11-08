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

// Function: entry_001359dc
// Address: 0x1359dc - 0x1359e8
void entry_001359dc_0x1359dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001359dc_0x1359dc");
#endif

    ctx->pc = 0x1359dcu;

    // 0x1359dc: 0x8e440080  lw          $a0, 0x80($s2)
    ctx->pc = 0x1359dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x1359e0: 0xc04e7f8  jal         func_139FE0
    ctx->pc = 0x1359E0u;
    SET_GPR_U32(ctx, 31, 0x1359E8u);
    ctx->pc = 0x1359E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1359E0u;
    // 0x1359e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139FE0u, 0x1359E0u, 0x1359E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1359E8u;
}
