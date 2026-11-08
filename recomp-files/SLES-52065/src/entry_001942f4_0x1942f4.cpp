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

// Function: entry_001942f4
// Address: 0x1942f4 - 0x194304
void entry_001942f4_0x1942f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001942f4_0x1942f4");
#endif

    ctx->pc = 0x1942f4u;

    // 0x1942f4: 0x0  nop
    ctx->pc = 0x1942f4u;
    // NOP
    // 0x1942f8: 0x2a030010  slti        $v1, $s0, 0x10
    ctx->pc = 0x1942f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1942fc: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1942FCu;
    {
        const bool branch_taken_0x1942fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1942fc) {
            ctx->pc = 0x1942A4u;
            return;
        }
    }
    ctx->pc = 0x194304u;
}
