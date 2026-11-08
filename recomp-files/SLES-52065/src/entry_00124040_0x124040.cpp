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

// Function: entry_00124040
// Address: 0x124040 - 0x124054
void entry_00124040_0x124040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124040_0x124040");
#endif

    ctx->pc = 0x124040u;

    // 0x124040: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x124040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x124044: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x124044u;
    {
        const bool branch_taken_0x124044 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x124044) {
            ctx->pc = 0x124054u;
            return;
        }
    }
    ctx->pc = 0x12404Cu;
    // 0x12404c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12404Cu;
    {
        const bool branch_taken_0x12404c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12404c) {
            ctx->pc = 0x12405Cu;
            return;
        }
    }
    ctx->pc = 0x124054u;
}
