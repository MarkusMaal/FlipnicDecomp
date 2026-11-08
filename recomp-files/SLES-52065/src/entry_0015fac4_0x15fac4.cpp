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

// Function: entry_0015fac4
// Address: 0x15fac4 - 0x15fadc
void entry_0015fac4_0x15fac4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015fac4_0x15fac4");
#endif

    ctx->pc = 0x15fac4u;

    // 0x15fac4: 0x0  nop
    ctx->pc = 0x15fac4u;
    // NOP
    // 0x15fac8: 0x2a830009  slti        $v1, $s4, 0x9
    ctx->pc = 0x15fac8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x15facc: 0x1460fd90  bnez        $v1, . + 4 + (-0x270 << 2)
    ctx->pc = 0x15FACCu;
    {
        const bool branch_taken_0x15facc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15facc) {
            ctx->pc = 0x15F110u;
            return;
        }
    }
    ctx->pc = 0x15FAD4u;
    // 0x15fad4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x15FAD4u;
    {
        const bool branch_taken_0x15fad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fad4) {
            ctx->pc = 0x15FAECu;
            return;
        }
    }
    ctx->pc = 0x15FADCu;
}
