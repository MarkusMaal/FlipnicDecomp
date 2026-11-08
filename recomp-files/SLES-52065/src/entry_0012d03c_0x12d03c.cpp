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

// Function: entry_0012d03c
// Address: 0x12d03c - 0x12d050
void entry_0012d03c_0x12d03c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012d03c_0x12d03c");
#endif

    ctx->pc = 0x12d03cu;

    // 0x12d03c: 0x0  nop
    ctx->pc = 0x12d03cu;
    // NOP
    // 0x12d040: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x12d040u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x12d044: 0x230102a  slt         $v0, $s1, $s0
    ctx->pc = 0x12d044u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x12d048: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x12D048u;
    {
        const bool branch_taken_0x12d048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12d048) {
            ctx->pc = 0x12CFA8u;
            return;
        }
    }
    ctx->pc = 0x12D050u;
}
