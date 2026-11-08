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

// Function: entry_00207b90
// Address: 0x207b90 - 0x207ba0
void entry_00207b90_0x207b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00207b90_0x207b90");
#endif

    ctx->pc = 0x207b90u;

    // 0x207b90: 0xe91823  subu        $v1, $a3, $t1
    ctx->pc = 0x207b90u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x207b94: 0xc4102b  sltu        $v0, $a2, $a0
    ctx->pc = 0x207b94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x207b98: 0x623823  subu        $a3, $v1, $v0
    ctx->pc = 0x207b98u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x207b9c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x207b9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x207ba0u;
}
