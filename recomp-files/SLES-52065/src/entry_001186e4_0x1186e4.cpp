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

// Function: entry_001186e4
// Address: 0x1186e4 - 0x1186ec
void entry_001186e4_0x1186e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001186e4_0x1186e4");
#endif

    ctx->pc = 0x1186e4u;

    // 0x1186e4: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1186E4u;
    SET_GPR_U32(ctx, 31, 0x1186ECu);
    ctx->pc = 0x1186E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1186E4u;
    // 0x1186e8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1186E4u, 0x1186ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1186ECu;
}
