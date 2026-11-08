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

// Function: entry_00148cf0
// Address: 0x148cf0 - 0x148cf8
void entry_00148cf0_0x148cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00148cf0_0x148cf0");
#endif

    ctx->pc = 0x148cf0u;

    // 0x148cf0: 0xe48c02a0  swc1        $f12, 0x2A0($a0)
    ctx->pc = 0x148cf0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 672), bits); }
    // 0x148cf4: 0xe48c02a4  swc1        $f12, 0x2A4($a0)
    ctx->pc = 0x148cf4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 676), bits); }
    ctx->pc = 0x148cf8u;
}
