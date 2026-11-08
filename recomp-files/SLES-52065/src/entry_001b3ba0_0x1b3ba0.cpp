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

// Function: entry_001b3ba0
// Address: 0x1b3ba0 - 0x1b3bb8
void entry_001b3ba0_0x1b3ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3ba0_0x1b3ba0");
#endif

    ctx->pc = 0x1b3ba0u;

    // 0x1b3ba0: 0x28a30020  slti        $v1, $a1, 0x20
    ctx->pc = 0x1b3ba0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1b3ba4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B3BA4u;
    {
        const bool branch_taken_0x1b3ba4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3ba4) {
            ctx->pc = 0x1B3B90u;
            return;
        }
    }
    ctx->pc = 0x1B3BACu;
    // 0x1b3bac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b3bacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3bb0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B3BB0u;
    {
        const bool branch_taken_0x1b3bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3bb0) {
            ctx->pc = 0x1B3BC8u;
            return;
        }
    }
    ctx->pc = 0x1B3BB8u;
}
