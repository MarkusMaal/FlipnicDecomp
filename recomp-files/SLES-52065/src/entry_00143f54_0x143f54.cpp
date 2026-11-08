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

// Function: entry_00143f54
// Address: 0x143f54 - 0x143f60
void entry_00143f54_0x143f54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143f54_0x143f54");
#endif

    ctx->pc = 0x143f54u;

    // 0x143f54: 0x291082b  sltu        $at, $s4, $s1
    ctx->pc = 0x143f54u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x143f58: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x143F58u;
    {
        const bool branch_taken_0x143f58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x143f58) {
            ctx->pc = 0x143F80u;
            return;
        }
    }
    ctx->pc = 0x143F60u;
}
