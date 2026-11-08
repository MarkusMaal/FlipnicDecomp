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

// Function: entry_0017e790
// Address: 0x17e790 - 0x17e798
void entry_0017e790_0x17e790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e790_0x17e790");
#endif

    ctx->pc = 0x17e790u;

    // 0x17e790: 0xc05f568  jal         func_17D5A0
    ctx->pc = 0x17E790u;
    SET_GPR_U32(ctx, 31, 0x17E798u);
    ctx->pc = 0x17D5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D5A0u, 0x17E790u, 0x17E798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E798u;
}
