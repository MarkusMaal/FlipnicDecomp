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

// Function: entry_0010e35c
// Address: 0x10e35c - 0x10e368
void entry_0010e35c_0x10e35c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e35c_0x10e35c");
#endif

    ctx->pc = 0x10e35cu;

    // 0x10e35c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x10E35Cu;
    {
        const bool branch_taken_0x10e35c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e35c) {
            ctx->pc = 0x10E368u;
            return;
        }
    }
    ctx->pc = 0x10E364u;
    // 0x10e364: 0x108023  negu        $s0, $s0
    ctx->pc = 0x10e364u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
    ctx->pc = 0x10e368u;
}
