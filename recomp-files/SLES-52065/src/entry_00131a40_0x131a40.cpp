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

// Function: entry_00131a40
// Address: 0x131a40 - 0x131a4c
void entry_00131a40_0x131a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131a40_0x131a40");
#endif

    switch (ctx->pc) {
        case 0x131a48u: goto label_131a48;
        default: break;
    }

    ctx->pc = 0x131a40u;

    // 0x131a40: 0xc07d3ac  jal         func_1F4EB0
    ctx->pc = 0x131A40u;
    SET_GPR_U32(ctx, 31, 0x131A48u);
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x131A40u, 0x131A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131A48u;
label_131a48:
    // 0x131a48: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x131a48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->pc = 0x131a4cu;
}
