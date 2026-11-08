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

// Function: entry_001e5dbc
// Address: 0x1e5dbc - 0x1e5dd8
void entry_001e5dbc_0x1e5dbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e5dbc_0x1e5dbc");
#endif

    ctx->pc = 0x1e5dbcu;

    // 0x1e5dbc: 0x8f828754  lw          $v0, -0x78AC($gp)
    ctx->pc = 0x1e5dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936404)));
    // 0x1e5dc0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E5DC0u;
    {
        const bool branch_taken_0x1e5dc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E5DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5DC0u;
        // 0x1e5dc4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5dc0) {
            ctx->pc = 0x1E5DD8u;
            return;
        }
    }
    ctx->pc = 0x1E5DC8u;
    // 0x1e5dc8: 0x8f82875c  lw          $v0, -0x78A4($gp)
    ctx->pc = 0x1e5dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936412)));
    // 0x1e5dcc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e5dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e5dd0: 0xaf82875c  sw          $v0, -0x78A4($gp)
    ctx->pc = 0x1e5dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936412), GPR_U32(ctx, 2));
    // 0x1e5dd4: 0xaf828754  sw          $v0, -0x78AC($gp)
    ctx->pc = 0x1e5dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936404), GPR_U32(ctx, 2));
    ctx->pc = 0x1e5dd8u;
}
