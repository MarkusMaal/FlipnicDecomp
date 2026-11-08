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

// Function: entry_001f8aa4
// Address: 0x1f8aa4 - 0x1f8aac
void entry_001f8aa4_0x1f8aa4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f8aa4_0x1f8aa4");
#endif

    ctx->pc = 0x1f8aa4u;

    // 0x1f8aa4: 0xc07ad90  jal         func_1EB640
    ctx->pc = 0x1F8AA4u;
    SET_GPR_U32(ctx, 31, 0x1F8AACu);
    ctx->pc = 0x1F8AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8AA4u;
    // 0x1f8aa8: 0x8ea4d6bc  lw          $a0, -0x2944($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294956732)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB640u, 0x1F8AA4u, 0x1F8AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8AACu;
}
