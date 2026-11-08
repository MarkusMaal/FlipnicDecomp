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

// Function: entry_0019dd58
// Address: 0x19dd58 - 0x19dd68
void entry_0019dd58_0x19dd58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019dd58_0x19dd58");
#endif

    ctx->pc = 0x19dd58u;

    // 0x19dd58: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19dd58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19dd5c: 0x14c40002  bne         $a2, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19DD5Cu;
    {
        const bool branch_taken_0x19dd5c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        if (branch_taken_0x19dd5c) {
            ctx->pc = 0x19DD68u;
            return;
        }
    }
    ctx->pc = 0x19DD64u;
    // 0x19dd64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19dd64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19dd68u;
}
