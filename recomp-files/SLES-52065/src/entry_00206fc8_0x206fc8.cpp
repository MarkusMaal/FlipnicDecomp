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

// Function: entry_00206fc8
// Address: 0x206fc8 - 0x206fd8
void entry_00206fc8_0x206fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00206fc8_0x206fc8");
#endif

    ctx->pc = 0x206fc8u;

    // 0x206fc8: 0xe91823  subu        $v1, $a3, $t1
    ctx->pc = 0x206fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x206fcc: 0xc4102b  sltu        $v0, $a2, $a0
    ctx->pc = 0x206fccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x206fd0: 0x623823  subu        $a3, $v1, $v0
    ctx->pc = 0x206fd0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x206fd4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x206fd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x206fd8u;
}
