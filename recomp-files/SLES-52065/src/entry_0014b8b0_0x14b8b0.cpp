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

// Function: entry_0014b8b0
// Address: 0x14b8b0 - 0x14b8c8
void entry_0014b8b0_0x14b8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014b8b0_0x14b8b0");
#endif

    ctx->pc = 0x14b8b0u;

label_14b8b0:
    // 0x14b8b0: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x14b8b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x14b8b4: 0x124182b  sltu        $v1, $t1, $a0
    ctx->pc = 0x14b8b4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x14b8b8: 0x0  nop
    ctx->pc = 0x14b8b8u;
    // NOP
    // 0x14b8bc: 0x0  nop
    ctx->pc = 0x14b8bcu;
    // NOP
    // 0x14b8c0: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x14B8C0u;
    {
        const bool branch_taken_0x14b8c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b8c0) {
            ctx->pc = 0x14B8B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14b8b0;
        }
    }
    ctx->pc = 0x14B8C8u;
}
