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

// Function: entry_001e5f84
// Address: 0x1e5f84 - 0x1e5fa0
void entry_001e5f84_0x1e5f84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e5f84_0x1e5f84");
#endif

    ctx->pc = 0x1e5f84u;

    // 0x1e5f84: 0x8f838788  lw          $v1, -0x7878($gp)
    ctx->pc = 0x1e5f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936456)));
    // 0x1e5f88: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E5F88u;
    {
        const bool branch_taken_0x1e5f88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E5F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5F88u;
        // 0x1e5f8c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5f88) {
            ctx->pc = 0x1E5FA0u;
            return;
        }
    }
    ctx->pc = 0x1E5F90u;
    // 0x1e5f90: 0x8f83875c  lw          $v1, -0x78A4($gp)
    ctx->pc = 0x1e5f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936412)));
    // 0x1e5f94: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1e5f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e5f98: 0xaf83875c  sw          $v1, -0x78A4($gp)
    ctx->pc = 0x1e5f98u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936412), GPR_U32(ctx, 3));
    // 0x1e5f9c: 0xaf838788  sw          $v1, -0x7878($gp)
    ctx->pc = 0x1e5f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936456), GPR_U32(ctx, 3));
    ctx->pc = 0x1e5fa0u;
}
