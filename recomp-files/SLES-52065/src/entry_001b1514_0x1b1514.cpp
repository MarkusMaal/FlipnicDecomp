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

// Function: entry_001b1514
// Address: 0x1b1514 - 0x1b151c
void entry_001b1514_0x1b1514(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1514_0x1b1514");
#endif

    ctx->pc = 0x1b1514u;

    // 0x1b1514: 0xc06c554  jal         func_1B1550
    ctx->pc = 0x1B1514u;
    SET_GPR_U32(ctx, 31, 0x1B151Cu);
    ctx->pc = 0x1B1550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1550u, 0x1B1514u, 0x1B151Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B151Cu;
}
