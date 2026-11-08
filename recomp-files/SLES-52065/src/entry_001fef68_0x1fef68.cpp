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

// Function: entry_001fef68
// Address: 0x1fef68 - 0x1fef70
void entry_001fef68_0x1fef68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fef68_0x1fef68");
#endif

    ctx->pc = 0x1fef68u;

    // 0x1fef68: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x1FEF68u;
    {
        const bool branch_taken_0x1fef68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEF68u;
        // 0x1fef6c: 0x256b0002  addiu       $t3, $t3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fef68) {
            ctx->pc = 0x1FF058u;
            return;
        }
    }
    ctx->pc = 0x1FEF70u;
}
