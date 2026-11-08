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

// Function: caseD_d
// Address: 0x19fe40 - 0x19fe4c
void caseD_d_0x19fe40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_d_0x19fe40");
#endif

    ctx->pc = 0x19fe40u;

    // 0x19fe40: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x19fe40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x19fe44: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x19FE44u;
    {
        const bool branch_taken_0x19fe44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FE44u;
        // 0x19fe48: 0xa066282b  sb          $a2, 0x282B($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 10283), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fe44) {
            ctx->pc = 0x19FE6Cu;
            return;
        }
    }
    ctx->pc = 0x19FE4Cu;
}
