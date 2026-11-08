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

// Function: entry_0015f95c
// Address: 0x15f95c - 0x15f96c
void entry_0015f95c_0x15f95c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015f95c_0x15f95c");
#endif

    ctx->pc = 0x15f95cu;

    // 0x15f95c: 0x0  nop
    ctx->pc = 0x15f95cu;
    // NOP
    // 0x15f960: 0x211182a  slt         $v1, $s0, $s1
    ctx->pc = 0x15f960u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x15f964: 0x1460ff8a  bnez        $v1, . + 4 + (-0x76 << 2)
    ctx->pc = 0x15F964u;
    {
        const bool branch_taken_0x15f964 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f964) {
            ctx->pc = 0x15F790u;
            return;
        }
    }
    ctx->pc = 0x15F96Cu;
}
