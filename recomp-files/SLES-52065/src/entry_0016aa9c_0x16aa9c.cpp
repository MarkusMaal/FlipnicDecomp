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

// Function: entry_0016aa9c
// Address: 0x16aa9c - 0x16aaa0
void entry_0016aa9c_0x16aa9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016aa9c_0x16aa9c");
#endif

    ctx->pc = 0x16aa9cu;

    // 0x16aa9c: 0xe6140244  swc1        $f20, 0x244($s0)
    ctx->pc = 0x16aa9cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 580), bits); }
    ctx->pc = 0x16aaa0u;
}
