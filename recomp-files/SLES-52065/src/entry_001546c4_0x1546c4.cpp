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

// Function: entry_001546c4
// Address: 0x1546c4 - 0x1546c8
void entry_001546c4_0x1546c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001546c4_0x1546c4");
#endif

    ctx->pc = 0x1546c4u;

    // 0x1546c4: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1546c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    ctx->pc = 0x1546c8u;
}
