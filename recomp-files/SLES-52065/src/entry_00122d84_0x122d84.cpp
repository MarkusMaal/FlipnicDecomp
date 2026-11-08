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

// Function: entry_00122d84
// Address: 0x122d84 - 0x122da0
void entry_00122d84_0x122d84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122d84_0x122d84");
#endif

    ctx->pc = 0x122d84u;

label_122d84:
    // 0x122d84: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x122d84u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x122d88: 0xb3182b  sltu        $v1, $a1, $s3
    ctx->pc = 0x122d88u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x122d8c: 0x0  nop
    ctx->pc = 0x122d8cu;
    // NOP
    // 0x122d90: 0x0  nop
    ctx->pc = 0x122d90u;
    // NOP
    // 0x122d94: 0x0  nop
    ctx->pc = 0x122d94u;
    // NOP
    // 0x122d98: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x122D98u;
    {
        const bool branch_taken_0x122d98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x122d98) {
            ctx->pc = 0x122D84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_122d84;
        }
    }
    ctx->pc = 0x122DA0u;
}
