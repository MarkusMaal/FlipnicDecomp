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

// Function: entry_001e5ea4
// Address: 0x1e5ea4 - 0x1e5ec0
void entry_001e5ea4_0x1e5ea4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e5ea4_0x1e5ea4");
#endif

    ctx->pc = 0x1e5ea4u;

    // 0x1e5ea4: 0x8f838784  lw          $v1, -0x787C($gp)
    ctx->pc = 0x1e5ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x1e5ea8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E5EA8u;
    {
        const bool branch_taken_0x1e5ea8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E5EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5EA8u;
        // 0x1e5eac: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5ea8) {
            ctx->pc = 0x1E5EC0u;
            return;
        }
    }
    ctx->pc = 0x1E5EB0u;
    // 0x1e5eb0: 0x8f83875c  lw          $v1, -0x78A4($gp)
    ctx->pc = 0x1e5eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936412)));
    // 0x1e5eb4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1e5eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e5eb8: 0xaf83875c  sw          $v1, -0x78A4($gp)
    ctx->pc = 0x1e5eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936412), GPR_U32(ctx, 3));
    // 0x1e5ebc: 0xaf838784  sw          $v1, -0x787C($gp)
    ctx->pc = 0x1e5ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936452), GPR_U32(ctx, 3));
    ctx->pc = 0x1e5ec0u;
}
