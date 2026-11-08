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

// Function: entry_00124f9c
// Address: 0x124f9c - 0x124fb4
void entry_00124f9c_0x124f9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124f9c_0x124f9c");
#endif

    ctx->pc = 0x124f9cu;

    // 0x124f9c: 0x0  nop
    ctx->pc = 0x124f9cu;
    // NOP
    // 0x124fa0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x124fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x124fa4: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x124FA4u;
    {
        const bool branch_taken_0x124fa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x124fa4) {
            ctx->pc = 0x124FB4u;
            return;
        }
    }
    ctx->pc = 0x124FACu;
    // 0x124fac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x124FACu;
    {
        const bool branch_taken_0x124fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x124fac) {
            ctx->pc = 0x124FBCu;
            return;
        }
    }
    ctx->pc = 0x124FB4u;
}
