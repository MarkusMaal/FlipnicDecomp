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

// Function: entry_001e870c
// Address: 0x1e870c - 0x1e872c
void entry_001e870c_0x1e870c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e870c_0x1e870c");
#endif

    ctx->pc = 0x1e870cu;

label_1e870c:
    // 0x1e870c: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x1e870cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x1e8710: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x1e8710u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1e8714: 0x0  nop
    ctx->pc = 0x1e8714u;
    // NOP
    // 0x1e8718: 0x0  nop
    ctx->pc = 0x1e8718u;
    // NOP
    // 0x1e871c: 0x0  nop
    ctx->pc = 0x1e871cu;
    // NOP
    // 0x1e8720: 0x0  nop
    ctx->pc = 0x1e8720u;
    // NOP
    // 0x1e8724: 0x1420fff9  bnez        $at, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1E8724u;
    {
        const bool branch_taken_0x1e8724 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e8724) {
            ctx->pc = 0x1E870Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e870c;
        }
    }
    ctx->pc = 0x1E872Cu;
}
