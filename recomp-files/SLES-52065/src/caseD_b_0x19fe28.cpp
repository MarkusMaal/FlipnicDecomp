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

// Function: caseD_b
// Address: 0x19fe28 - 0x19fe34
void caseD_b_0x19fe28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_b_0x19fe28");
#endif

    ctx->pc = 0x19fe28u;

    // 0x19fe28: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x19fe28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x19fe2c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x19FE2Cu;
    {
        const bool branch_taken_0x19fe2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FE2Cu;
        // 0x19fe30: 0xac6628e8  sw          $a2, 0x28E8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 10472), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fe2c) {
            ctx->pc = 0x19FE6Cu;
            return;
        }
    }
    ctx->pc = 0x19FE34u;
}
