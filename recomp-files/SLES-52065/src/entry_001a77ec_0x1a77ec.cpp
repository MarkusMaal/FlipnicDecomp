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

// Function: entry_001a77ec
// Address: 0x1a77ec - 0x1a77f4
void entry_001a77ec_0x1a77ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a77ec_0x1a77ec");
#endif

    ctx->pc = 0x1a77ecu;

    // 0x1a77ec: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1a77ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1a77f0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a77f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    ctx->pc = 0x1a77f4u;
}
