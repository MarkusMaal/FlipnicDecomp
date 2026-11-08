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

// Function: entry_00200d70
// Address: 0x200d70 - 0x200d94
void entry_00200d70_0x200d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00200d70_0x200d70");
#endif

    ctx->pc = 0x200d70u;

    // 0x200d70: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x200d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x200d74: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x200d74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x200d78: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x200d78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x200d7c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x200d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x200d80: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x200d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x200d84: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x200d84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x200d88: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x200d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x200d8c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x200D8Cu;
    {
        const bool branch_taken_0x200d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200D8Cu;
        // 0x200d90: 0xaca30004  sw          $v1, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200d8c) {
            ctx->pc = 0x200DA0u;
            return;
        }
    }
    ctx->pc = 0x200D94u;
}
