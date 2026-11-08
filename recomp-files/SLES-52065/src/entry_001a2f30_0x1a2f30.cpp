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

// Function: entry_001a2f30
// Address: 0x1a2f30 - 0x1a2f48
void entry_001a2f30_0x1a2f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2f30_0x1a2f30");
#endif

    ctx->pc = 0x1a2f30u;

    // 0x1a2f30: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a2f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a2f34: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1a2f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1a2f38: 0x1083ffca  beq         $a0, $v1, . + 4 + (-0x36 << 2)
    ctx->pc = 0x1A2F38u;
    {
        const bool branch_taken_0x1a2f38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a2f38) {
            ctx->pc = 0x1A2E64u;
            return;
        }
    }
    ctx->pc = 0x1A2F40u;
    // 0x1a2f40: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1A2F40u;
    {
        const bool branch_taken_0x1a2f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2f40) {
            ctx->pc = 0x1A2F64u;
            return;
        }
    }
    ctx->pc = 0x1A2F48u;
}
