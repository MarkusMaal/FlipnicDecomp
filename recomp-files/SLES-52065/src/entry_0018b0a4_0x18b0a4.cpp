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

// Function: entry_0018b0a4
// Address: 0x18b0a4 - 0x18b0b0
void entry_0018b0a4_0x18b0a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b0a4_0x18b0a4");
#endif

    switch (ctx->pc) {
        case 0x18b0acu: goto label_18b0ac;
        default: break;
    }

    ctx->pc = 0x18b0a4u;

    // 0x18b0a4: 0xc077d70  jal         func_1DF5C0
    ctx->pc = 0x18B0A4u;
    SET_GPR_U32(ctx, 31, 0x18B0ACu);
    ctx->pc = 0x1DF5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF5C0u, 0x18B0A4u, 0x18B0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B0ACu;
label_18b0ac:
    // 0x18b0ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18b0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x18b0b0u;
}
