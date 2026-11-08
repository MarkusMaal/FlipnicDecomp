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

// Function: entry_0020a200
// Address: 0x20a200 - 0x20a218
void entry_0020a200_0x20a200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020a200_0x20a200");
#endif

    ctx->pc = 0x20a200u;

    // 0x20a200: 0x2133c  dsll32      $v0, $v0, 12
    ctx->pc = 0x20a200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 12));
    // 0x20a204: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x20a204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x20a208: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x20a208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x20a20c: 0x671025  or          $v0, $v1, $a3
    ctx->pc = 0x20a20cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x20a210: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x20A210u;
    {
        const bool branch_taken_0x20a210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A210u;
        // 0x20a214: 0xfe620018  sd          $v0, 0x18($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a210) {
            ctx->pc = 0x20A308u;
            return;
        }
    }
    ctx->pc = 0x20A218u;
}
