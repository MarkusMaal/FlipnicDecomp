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

// Function: entry_001e8630
// Address: 0x1e8630 - 0x1e8650
void entry_001e8630_0x1e8630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e8630_0x1e8630");
#endif

    ctx->pc = 0x1e8630u;

label_1e8630:
    // 0x1e8630: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x1e8630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x1e8634: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x1e8634u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1e8638: 0x0  nop
    ctx->pc = 0x1e8638u;
    // NOP
    // 0x1e863c: 0x0  nop
    ctx->pc = 0x1e863cu;
    // NOP
    // 0x1e8640: 0x0  nop
    ctx->pc = 0x1e8640u;
    // NOP
    // 0x1e8644: 0x0  nop
    ctx->pc = 0x1e8644u;
    // NOP
    // 0x1e8648: 0x1420fff9  bnez        $at, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1E8648u;
    {
        const bool branch_taken_0x1e8648 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e8648) {
            ctx->pc = 0x1E8630u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e8630;
        }
    }
    ctx->pc = 0x1E8650u;
}
