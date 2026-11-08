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

// Function: entry_001b2b1c
// Address: 0x1b2b1c - 0x1b2b38
void entry_001b2b1c_0x1b2b1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2b1c_0x1b2b1c");
#endif

    ctx->pc = 0x1b2b1cu;

    // 0x1b2b1c: 0x2851821  addu        $v1, $s4, $a1
    ctx->pc = 0x1b2b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x1b2b20: 0x24660008  addiu       $a2, $v1, 0x8
    ctx->pc = 0x1b2b20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1b2b24: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x1b2b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1b2b28: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B2B28u;
    {
        const bool branch_taken_0x1b2b28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2b28) {
            ctx->pc = 0x1B2B38u;
            return;
        }
    }
    ctx->pc = 0x1B2B30u;
    // 0x1b2b30: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b2b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b2b34: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x1b2b34u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x1b2b38u;
}
