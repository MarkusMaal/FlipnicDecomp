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

// Function: entry_001bff38
// Address: 0x1bff38 - 0x1bff48
void entry_001bff38_0x1bff38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bff38_0x1bff38");
#endif

    ctx->pc = 0x1bff38u;

    // 0x1bff38: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BFF38u;
    {
        const bool branch_taken_0x1bff38 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BFF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFF38u;
        // 0x1bff3c: 0x8c23f4f0  lw          $v1, -0xB10($at) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bff38) {
            ctx->pc = 0x1BFF48u;
            return;
        }
    }
    ctx->pc = 0x1BFF40u;
    // 0x1bff40: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BFF40u;
    {
        const bool branch_taken_0x1bff40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFF40u;
        // 0x1bff44: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bff40) {
            ctx->pc = 0x1BFF54u;
            return;
        }
    }
    ctx->pc = 0x1BFF48u;
}
