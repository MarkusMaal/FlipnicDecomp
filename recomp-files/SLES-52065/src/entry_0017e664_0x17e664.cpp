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

// Function: entry_0017e664
// Address: 0x17e664 - 0x17e66c
void entry_0017e664_0x17e664(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e664_0x17e664");
#endif

    ctx->pc = 0x17e664u;

    // 0x17e664: 0xc05f558  jal         func_17D560
    ctx->pc = 0x17E664u;
    SET_GPR_U32(ctx, 31, 0x17E66Cu);
    ctx->pc = 0x17D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D560u, 0x17E664u, 0x17E66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E66Cu;
}
