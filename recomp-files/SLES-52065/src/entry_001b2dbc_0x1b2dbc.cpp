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

// Function: entry_001b2dbc
// Address: 0x1b2dbc - 0x1b2dc4
void entry_001b2dbc_0x1b2dbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2dbc_0x1b2dbc");
#endif

    ctx->pc = 0x1b2dbcu;

    // 0x1b2dbc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b2dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1b2dc0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b2dc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    ctx->pc = 0x1b2dc4u;
}
