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

// Function: entry_0017e520
// Address: 0x17e520 - 0x17e528
void entry_0017e520_0x17e520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e520_0x17e520");
#endif

    ctx->pc = 0x17e520u;

    // 0x17e520: 0xc05f538  jal         func_17D4E0
    ctx->pc = 0x17E520u;
    SET_GPR_U32(ctx, 31, 0x17E528u);
    ctx->pc = 0x17D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D4E0u, 0x17E520u, 0x17E528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E528u;
}
