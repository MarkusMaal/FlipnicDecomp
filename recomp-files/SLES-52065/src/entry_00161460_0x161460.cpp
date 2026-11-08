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

// Function: entry_00161460
// Address: 0x161460 - 0x161468
void entry_00161460_0x161460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161460_0x161460");
#endif

    ctx->pc = 0x161460u;

    // 0x161460: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x161460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161464: 0x0  nop
    ctx->pc = 0x161464u;
    // NOP
    ctx->pc = 0x161468u;
}
