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

// Function: entry_00205dbc
// Address: 0x205dbc - 0x205dc8
void entry_00205dbc_0x205dbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00205dbc_0x205dbc");
#endif

    ctx->pc = 0x205dbcu;

    // 0x205dbc: 0x24a60001  addiu       $a2, $a1, 0x1
    ctx->pc = 0x205dbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x205dc0: 0xa0490000  sb          $t1, 0x0($v0)
    ctx->pc = 0x205dc0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 9));
    // 0x205dc4: 0x80a80000  lb          $t0, 0x0($a1)
    ctx->pc = 0x205dc4u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->pc = 0x205dc8u;
}
