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

// Function: entry_0012be4c
// Address: 0x12be4c - 0x12be64
void entry_0012be4c_0x12be4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012be4c_0x12be4c");
#endif

    ctx->pc = 0x12be4cu;

    // 0x12be4c: 0x0  nop
    ctx->pc = 0x12be4cu;
    // NOP
    // 0x12be50: 0x12a102a  slt         $v0, $t1, $t2
    ctx->pc = 0x12be50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x12be54: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x12BE54u;
    {
        const bool branch_taken_0x12be54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12be54) {
            ctx->pc = 0x12BDCCu;
            return;
        }
    }
    ctx->pc = 0x12BE5Cu;
    // 0x12be5c: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x12BE5Cu;
    {
        const bool branch_taken_0x12be5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12be5c) {
            ctx->pc = 0x12C02Cu;
            return;
        }
    }
    ctx->pc = 0x12BE64u;
}
