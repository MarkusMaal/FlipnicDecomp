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

// Function: entry_0013613c
// Address: 0x13613c - 0x13614c
void entry_0013613c_0x13613c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013613c_0x13613c");
#endif

    ctx->pc = 0x13613cu;

    // 0x13613c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x13613cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x136140: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x136140u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136144: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x136144u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x136148: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x136148u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    ctx->pc = 0x13614cu;
}
