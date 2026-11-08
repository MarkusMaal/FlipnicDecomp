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

// Function: entry_001f3ddc
// Address: 0x1f3ddc - 0x1f3de8
void entry_001f3ddc_0x1f3ddc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f3ddc_0x1f3ddc");
#endif

    switch (ctx->pc) {
        case 0x1f3de4u: goto label_1f3de4;
        default: break;
    }

    ctx->pc = 0x1f3ddcu;

    // 0x1f3ddc: 0xc07aea4  jal         func_1EBA90
    ctx->pc = 0x1F3DDCu;
    SET_GPR_U32(ctx, 31, 0x1F3DE4u);
    ctx->pc = 0x1EBA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBA90u, 0x1F3DDCu, 0x1F3DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3DE4u;
label_1f3de4:
    // 0x1f3de4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f3de4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1f3de8u;
}
