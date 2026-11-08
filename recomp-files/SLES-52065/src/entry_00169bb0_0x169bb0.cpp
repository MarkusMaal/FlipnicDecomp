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

// Function: entry_00169bb0
// Address: 0x169bb0 - 0x169bb4
void entry_00169bb0_0x169bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00169bb0_0x169bb0");
#endif

    ctx->pc = 0x169bb0u;

    // 0x169bb0: 0xa20001d3  sb          $zero, 0x1D3($s0)
    ctx->pc = 0x169bb0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 467), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x169bb4u;
}
