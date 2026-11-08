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

// Function: entry_001590b8
// Address: 0x1590b8 - 0x1590c4
void entry_001590b8_0x1590b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001590b8_0x1590b8");
#endif

    ctx->pc = 0x1590b8u;

    // 0x1590b8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1590B8u;
    {
        const bool branch_taken_0x1590b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1590b8) {
            ctx->pc = 0x1590DCu;
            return;
        }
    }
    ctx->pc = 0x1590C0u;
    // 0x1590c0: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1590c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    ctx->pc = 0x1590c4u;
}
