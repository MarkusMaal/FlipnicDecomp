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

// Function: caseD_c
// Address: 0x19fe34 - 0x19fe40
void caseD_c_0x19fe34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_c_0x19fe34");
#endif

    ctx->pc = 0x19fe34u;

    // 0x19fe34: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x19fe34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x19fe38: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x19FE38u;
    {
        const bool branch_taken_0x19fe38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FE38u;
        // 0x19fe3c: 0xac6628dc  sw          $a2, 0x28DC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 10460), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fe38) {
            ctx->pc = 0x19FE6Cu;
            return;
        }
    }
    ctx->pc = 0x19FE40u;
}
