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

// Function: entry_0014ed34
// Address: 0x14ed34 - 0x14ed50
void entry_0014ed34_0x14ed34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ed34_0x14ed34");
#endif

    ctx->pc = 0x14ed34u;

label_14ed34:
    // 0x14ed34: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x14ed34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x14ed38: 0xa4182b  sltu        $v1, $a1, $a0
    ctx->pc = 0x14ed38u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x14ed3c: 0x0  nop
    ctx->pc = 0x14ed3cu;
    // NOP
    // 0x14ed40: 0x0  nop
    ctx->pc = 0x14ed40u;
    // NOP
    // 0x14ed44: 0x0  nop
    ctx->pc = 0x14ed44u;
    // NOP
    // 0x14ed48: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14ED48u;
    {
        const bool branch_taken_0x14ed48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14ed48) {
            ctx->pc = 0x14ED34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14ed34;
        }
    }
    ctx->pc = 0x14ED50u;
}
