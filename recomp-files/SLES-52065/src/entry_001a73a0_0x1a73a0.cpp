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

// Function: entry_001a73a0
// Address: 0x1a73a0 - 0x1a73a8
void entry_001a73a0_0x1a73a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a73a0_0x1a73a0");
#endif

    ctx->pc = 0x1a73a0u;

    // 0x1a73a0: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1a73a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1a73a4: 0x8e44002c  lw          $a0, 0x2C($s2)
    ctx->pc = 0x1a73a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    ctx->pc = 0x1a73a8u;
}
