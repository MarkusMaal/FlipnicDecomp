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

// Function: entry_00202b20
// Address: 0x202b20 - 0x202b34
void entry_00202b20_0x202b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00202b20_0x202b20");
#endif

    ctx->pc = 0x202b20u;

    // 0x202b20: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x202b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x202b24: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x202b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x202b28: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x202b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x202b2c: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x202B2Cu;
    {
        const bool branch_taken_0x202b2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x202b2c) {
            ctx->pc = 0x202B74u;
            return;
        }
    }
    ctx->pc = 0x202B34u;
}
