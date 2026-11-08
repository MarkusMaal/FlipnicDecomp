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

// Function: entry_00179be0
// Address: 0x179be0 - 0x179bf0
void entry_00179be0_0x179be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179be0_0x179be0");
#endif

    ctx->pc = 0x179be0u;

    // 0x179be0: 0x28e30040  slti        $v1, $a3, 0x40
    ctx->pc = 0x179be0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x179be4: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x179BE4u;
    {
        const bool branch_taken_0x179be4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x179be4) {
            ctx->pc = 0x179B94u;
            return;
        }
    }
    ctx->pc = 0x179BECu;
    // 0x179bec: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x179becu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    ctx->pc = 0x179bf0u;
}
