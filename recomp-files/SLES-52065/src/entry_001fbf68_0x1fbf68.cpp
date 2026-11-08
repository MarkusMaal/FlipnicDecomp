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

// Function: entry_001fbf68
// Address: 0x1fbf68 - 0x1fbf7c
void entry_001fbf68_0x1fbf68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fbf68_0x1fbf68");
#endif

    ctx->pc = 0x1fbf68u;

    // 0x1fbf68: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1fbf68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1fbf6c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1fbf6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1fbf70: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1fbf70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1fbf74: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FBF74u;
    {
        const bool branch_taken_0x1fbf74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBF74u;
        // 0x1fbf78: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbf74) {
            ctx->pc = 0x1FBF88u;
            return;
        }
    }
    ctx->pc = 0x1FBF7Cu;
}
