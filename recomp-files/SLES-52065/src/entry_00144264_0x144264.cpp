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

// Function: entry_00144264
// Address: 0x144264 - 0x144280
void entry_00144264_0x144264(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00144264_0x144264");
#endif

    ctx->pc = 0x144264u;

    // 0x144264: 0x0  nop
    ctx->pc = 0x144264u;
    // NOP
    // 0x144268: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x144268u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x14426c: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x14426cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x144270: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x144270u;
    {
        const bool branch_taken_0x144270 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x144270) {
            ctx->pc = 0x144280u;
            return;
        }
    }
    ctx->pc = 0x144278u;
    // 0x144278: 0xc0401a4  jal         func_100690
    ctx->pc = 0x144278u;
    SET_GPR_U32(ctx, 31, 0x144280u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x144278u, 0x144280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144280u;
}
