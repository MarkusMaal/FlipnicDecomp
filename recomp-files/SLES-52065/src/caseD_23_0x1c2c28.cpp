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

// Function: caseD_23
// Address: 0x1c2c28 - 0x1c2c38
void caseD_23_0x1c2c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_23_0x1c2c28");
#endif

    ctx->pc = 0x1c2c28u;

    // 0x1c2c28: 0x8e22024c  lw          $v0, 0x24C($s1)
    ctx->pc = 0x1c2c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 588)));
    // 0x1c2c2c: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C2C2Cu;
    {
        const bool branch_taken_0x1c2c2c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1C2C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2C2Cu;
        // 0x1c2c30: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2c2c) {
            ctx->pc = 0x1C2C38u;
            return;
        }
    }
    ctx->pc = 0x1C2C34u;
    // 0x1c2c34: 0xae220248  sw          $v0, 0x248($s1)
    ctx->pc = 0x1c2c34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
    ctx->pc = 0x1c2c38u;
}
