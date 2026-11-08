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

// Function: entry_0017e544
// Address: 0x17e544 - 0x17e54c
void entry_0017e544_0x17e544(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e544_0x17e544");
#endif

    ctx->pc = 0x17e544u;

    // 0x17e544: 0xc05f550  jal         func_17D540
    ctx->pc = 0x17E544u;
    SET_GPR_U32(ctx, 31, 0x17E54Cu);
    ctx->pc = 0x17D540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D540u, 0x17E544u, 0x17E54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E54Cu;
}
