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

// Function: entry_001be040
// Address: 0x1be040 - 0x1be058
void entry_001be040_0x1be040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001be040_0x1be040");
#endif

    ctx->pc = 0x1be040u;

label_1be040:
    // 0x1be040: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x1be040u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x1be044: 0x124182b  sltu        $v1, $t1, $a0
    ctx->pc = 0x1be044u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1be048: 0x0  nop
    ctx->pc = 0x1be048u;
    // NOP
    // 0x1be04c: 0x0  nop
    ctx->pc = 0x1be04cu;
    // NOP
    // 0x1be050: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1BE050u;
    {
        const bool branch_taken_0x1be050 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1be050) {
            ctx->pc = 0x1BE040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1be040;
        }
    }
    ctx->pc = 0x1BE058u;
}
