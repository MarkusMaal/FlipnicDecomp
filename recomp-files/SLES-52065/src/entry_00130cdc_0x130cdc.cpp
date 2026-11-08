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

// Function: entry_00130cdc
// Address: 0x130cdc - 0x130ce4
void entry_00130cdc_0x130cdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130cdc_0x130cdc");
#endif

    ctx->pc = 0x130cdcu;

    // 0x130cdc: 0xc0401a4  jal         func_100690
    ctx->pc = 0x130CDCu;
    SET_GPR_U32(ctx, 31, 0x130CE4u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x130CDCu, 0x130CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130CE4u;
}
