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

// Function: entry_001ff038
// Address: 0x1ff038 - 0x1ff044
void entry_001ff038_0x1ff038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ff038_0x1ff038");
#endif

    ctx->pc = 0x1ff038u;

    // 0x1ff038: 0x1111023  subu        $v0, $t0, $s1
    ctx->pc = 0x1ff038u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 17)));
    // 0x1ff03c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ff03cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ff040: 0x2383e  dsrl32      $a3, $v0, 0
    ctx->pc = 0x1ff040u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) >> (32 + 0));
    ctx->pc = 0x1ff044u;
}
