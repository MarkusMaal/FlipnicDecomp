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

// Function: entry_001e8080
// Address: 0x1e8080 - 0x1e8098
void entry_001e8080_0x1e8080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e8080_0x1e8080");
#endif

    ctx->pc = 0x1e8080u;

    // 0x1e8080: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x1e8080u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
    // 0x1e8084: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x1e8084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1e8088: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E8088u;
    {
        const bool branch_taken_0x1e8088 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8088) {
            ctx->pc = 0x1E8098u;
            return;
        }
    }
    ctx->pc = 0x1E8090u;
    // 0x1e8090: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1E8090u;
    SET_GPR_U32(ctx, 31, 0x1E8098u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1E8090u, 0x1E8098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8098u;
}
