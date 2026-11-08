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

// Function: entry_00177284
// Address: 0x177284 - 0x177298
void entry_00177284_0x177284(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177284_0x177284");
#endif

    ctx->pc = 0x177284u;

    // 0x177284: 0x0  nop
    ctx->pc = 0x177284u;
    // NOP
    // 0x177288: 0x28c20003  slti        $v0, $a2, 0x3
    ctx->pc = 0x177288u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x17728c: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x17728Cu;
    {
        const bool branch_taken_0x17728c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17728c) {
            ctx->pc = 0x177200u;
            return;
        }
    }
    ctx->pc = 0x177294u;
    // 0x177294: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x177294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x177298u;
}
