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

// Function: entry_0017f524
// Address: 0x17f524 - 0x17f530
void entry_0017f524_0x17f524(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f524_0x17f524");
#endif

    switch (ctx->pc) {
        case 0x17f52cu: goto label_17f52c;
        default: break;
    }

    ctx->pc = 0x17f524u;

    // 0x17f524: 0xc0401a4  jal         func_100690
    ctx->pc = 0x17F524u;
    SET_GPR_U32(ctx, 31, 0x17F52Cu);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x17F524u, 0x17F52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F52Cu;
label_17f52c:
    // 0x17f52c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17f52cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17f530u;
}
