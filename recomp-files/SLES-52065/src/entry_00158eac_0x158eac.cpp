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

// Function: entry_00158eac
// Address: 0x158eac - 0x158eb4
void entry_00158eac_0x158eac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158eac_0x158eac");
#endif

    ctx->pc = 0x158eacu;

    // 0x158eac: 0x82620029  lb          $v0, 0x29($s3)
    ctx->pc = 0x158eacu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 41)));
    // 0x158eb0: 0xa24201d3  sb          $v0, 0x1D3($s2)
    ctx->pc = 0x158eb0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 467), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x158eb4u;
}
