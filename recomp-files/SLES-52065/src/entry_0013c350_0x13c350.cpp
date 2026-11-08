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

// Function: entry_0013c350
// Address: 0x13c350 - 0x13c35c
void entry_0013c350_0x13c350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c350_0x13c350");
#endif

    switch (ctx->pc) {
        case 0x13c358u: goto label_13c358;
        default: break;
    }

    ctx->pc = 0x13c350u;

    // 0x13c350: 0xc0401a4  jal         func_100690
    ctx->pc = 0x13C350u;
    SET_GPR_U32(ctx, 31, 0x13C358u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x13C350u, 0x13C358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C358u;
label_13c358:
    // 0x13c358: 0x264401c8  addiu       $a0, $s2, 0x1C8
    ctx->pc = 0x13c358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 456));
    ctx->pc = 0x13c35cu;
}
