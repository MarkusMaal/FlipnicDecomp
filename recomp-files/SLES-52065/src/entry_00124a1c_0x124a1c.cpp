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

// Function: entry_00124a1c
// Address: 0x124a1c - 0x124a30
void entry_00124a1c_0x124a1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124a1c_0x124a1c");
#endif

    ctx->pc = 0x124a1cu;

    // 0x124a1c: 0x0  nop
    ctx->pc = 0x124a1cu;
    // NOP
    // 0x124a20: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x124a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x124a24: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x124A24u;
    {
        const bool branch_taken_0x124a24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x124a24) {
            ctx->pc = 0x124A30u;
            return;
        }
    }
    ctx->pc = 0x124A2Cu;
    // 0x124a2c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x124a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x124a30u;
}
