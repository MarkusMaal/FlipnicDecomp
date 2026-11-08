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

// Function: entry_0010c104
// Address: 0x10c104 - 0x10c114
void entry_0010c104_0x10c104(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c104_0x10c104");
#endif

    switch (ctx->pc) {
        case 0x10c10cu: goto label_10c10c;
        default: break;
    }

    ctx->pc = 0x10c104u;

    // 0x10c104: 0xc042570  jal         func_1095C0
    ctx->pc = 0x10C104u;
    SET_GPR_U32(ctx, 31, 0x10C10Cu);
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x10C104u, 0x10C10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C10Cu;
label_10c10c:
    // 0x10c10c: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x10C10Cu;
    {
        const bool branch_taken_0x10c10c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10c10c) {
            ctx->pc = 0x10C1F8u;
            return;
        }
    }
    ctx->pc = 0x10C114u;
}
