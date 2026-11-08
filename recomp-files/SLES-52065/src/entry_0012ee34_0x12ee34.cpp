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

// Function: entry_0012ee34
// Address: 0x12ee34 - 0x12ee40
void entry_0012ee34_0x12ee34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ee34_0x12ee34");
#endif

    switch (ctx->pc) {
        case 0x12ee3cu: goto label_12ee3c;
        default: break;
    }

    ctx->pc = 0x12ee34u;

    // 0x12ee34: 0xc0401a4  jal         func_100690
    ctx->pc = 0x12EE34u;
    SET_GPR_U32(ctx, 31, 0x12EE3Cu);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x12EE34u, 0x12EE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EE3Cu;
label_12ee3c:
    // 0x12ee3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12ee3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12ee40u;
}
