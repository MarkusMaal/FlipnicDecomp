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

// Function: entry_001f1064
// Address: 0x1f1064 - 0x1f1070
void entry_001f1064_0x1f1064(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f1064_0x1f1064");
#endif

    switch (ctx->pc) {
        case 0x1f106cu: goto label_1f106c;
        default: break;
    }

    ctx->pc = 0x1f1064u;

    // 0x1f1064: 0xc07ad90  jal         func_1EB640
    ctx->pc = 0x1F1064u;
    SET_GPR_U32(ctx, 31, 0x1F106Cu);
    ctx->pc = 0x1EB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB640u, 0x1F1064u, 0x1F106Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F106Cu;
label_1f106c:
    // 0x1f106c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1f106cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1f1070u;
}
