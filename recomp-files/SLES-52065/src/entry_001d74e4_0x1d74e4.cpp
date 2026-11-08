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

// Function: entry_001d74e4
// Address: 0x1d74e4 - 0x1d74f0
void entry_001d74e4_0x1d74e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d74e4_0x1d74e4");
#endif

    switch (ctx->pc) {
        case 0x1d74ecu: goto label_1d74ec;
        default: break;
    }

    ctx->pc = 0x1d74e4u;

    // 0x1d74e4: 0xc07784c  jal         func_1DE130
    ctx->pc = 0x1D74E4u;
    SET_GPR_U32(ctx, 31, 0x1D74ECu);
    ctx->pc = 0x1DE130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE130u, 0x1D74E4u, 0x1D74ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D74ECu;
label_1d74ec:
    // 0x1d74ec: 0x96a30060  lhu         $v1, 0x60($s5)
    ctx->pc = 0x1d74ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 96)));
    ctx->pc = 0x1d74f0u;
}
