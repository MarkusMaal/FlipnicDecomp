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

// Function: entry_00130edc
// Address: 0x130edc - 0x130ee4
void entry_00130edc_0x130edc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130edc_0x130edc");
#endif

    ctx->pc = 0x130edcu;

    // 0x130edc: 0xc0401a4  jal         func_100690
    ctx->pc = 0x130EDCu;
    SET_GPR_U32(ctx, 31, 0x130EE4u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x130EDCu, 0x130EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130EE4u;
}
