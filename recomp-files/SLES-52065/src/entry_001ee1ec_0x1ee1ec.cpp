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

// Function: entry_001ee1ec
// Address: 0x1ee1ec - 0x1ee1fc
void entry_001ee1ec_0x1ee1ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ee1ec_0x1ee1ec");
#endif

    ctx->pc = 0x1ee1ecu;

    // 0x1ee1ec: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EE1ECu;
    {
        const bool branch_taken_0x1ee1ec = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x1ee1ec) {
            ctx->pc = 0x1EE1FCu;
            return;
        }
    }
    ctx->pc = 0x1EE1F4u;
    // 0x1ee1f4: 0xc07ad94  jal         func_1EB650
    ctx->pc = 0x1EE1F4u;
    SET_GPR_U32(ctx, 31, 0x1EE1FCu);
    ctx->pc = 0x1EB650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB650u, 0x1EE1F4u, 0x1EE1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE1FCu;
}
