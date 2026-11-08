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

// Function: entry_0012bbf0
// Address: 0x12bbf0 - 0x12bbfc
void entry_0012bbf0_0x12bbf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012bbf0_0x12bbf0");
#endif

    ctx->pc = 0x12bbf0u;

    // 0x12bbf0: 0xca182a  slt         $v1, $a2, $t2
    ctx->pc = 0x12bbf0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x12bbf4: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x12BBF4u;
    {
        const bool branch_taken_0x12bbf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12bbf4) {
            ctx->pc = 0x12BBD8u;
            return;
        }
    }
    ctx->pc = 0x12BBFCu;
}
