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

// Function: entry_001e3bc4
// Address: 0x1e3bc4 - 0x1e3bcc
void entry_001e3bc4_0x1e3bc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e3bc4_0x1e3bc4");
#endif

    ctx->pc = 0x1e3bc4u;

    // 0x1e3bc4: 0xc0817ae  jal         func_205EB8
    ctx->pc = 0x1E3BC4u;
    SET_GPR_U32(ctx, 31, 0x1E3BCCu);
    ctx->pc = 0x1E3BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3BC4u;
    // 0x1e3bc8: 0x4263f  dsra32      $a0, $a0, 24 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205EB8u, 0x1E3BC4u, 0x1E3BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3BCCu;
}
