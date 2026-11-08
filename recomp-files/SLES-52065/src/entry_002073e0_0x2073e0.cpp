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

// Function: entry_002073e0
// Address: 0x2073e0 - 0x2073f0
void entry_002073e0_0x2073e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002073e0_0x2073e0");
#endif

    ctx->pc = 0x2073e0u;

    // 0x2073e0: 0x665823  subu        $t3, $v1, $a2
    ctx->pc = 0x2073e0u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2073e4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2073e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2073e8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2073e8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2073ec: 0x456825  or          $t5, $v0, $a1
    ctx->pc = 0x2073ecu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    ctx->pc = 0x2073f0u;
}
