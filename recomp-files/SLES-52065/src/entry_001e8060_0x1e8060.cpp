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

// Function: entry_001e8060
// Address: 0x1e8060 - 0x1e8080
void entry_001e8060_0x1e8060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e8060_0x1e8060");
#endif

    ctx->pc = 0x1e8060u;

label_1e8060:
    // 0x1e8060: 0x2463fffa  addiu       $v1, $v1, -0x6
    ctx->pc = 0x1e8060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x1e8064: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x1e8064u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1e8068: 0x0  nop
    ctx->pc = 0x1e8068u;
    // NOP
    // 0x1e806c: 0x0  nop
    ctx->pc = 0x1e806cu;
    // NOP
    // 0x1e8070: 0x0  nop
    ctx->pc = 0x1e8070u;
    // NOP
    // 0x1e8074: 0x0  nop
    ctx->pc = 0x1e8074u;
    // NOP
    // 0x1e8078: 0x1420fff9  bnez        $at, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1E8078u;
    {
        const bool branch_taken_0x1e8078 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e8078) {
            ctx->pc = 0x1E8060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e8060;
        }
    }
    ctx->pc = 0x1E8080u;
}
