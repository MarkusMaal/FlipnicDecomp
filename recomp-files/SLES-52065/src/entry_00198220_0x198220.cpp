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

// Function: entry_00198220
// Address: 0x198220 - 0x198234
void entry_00198220_0x198220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198220_0x198220");
#endif

    ctx->pc = 0x198220u;

    // 0x198220: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x198220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x198224: 0xc7182a  slt         $v1, $a2, $a3
    ctx->pc = 0x198224u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x198228: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x198228u;
    {
        const bool branch_taken_0x198228 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x198228) {
            ctx->pc = 0x198234u;
            return;
        }
    }
    ctx->pc = 0x198230u;
    // 0x198230: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x198230u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x198234u;
}
