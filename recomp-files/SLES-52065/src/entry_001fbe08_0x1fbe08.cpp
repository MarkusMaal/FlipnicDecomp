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

// Function: entry_001fbe08
// Address: 0x1fbe08 - 0x1fbe0c
void entry_001fbe08_0x1fbe08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fbe08_0x1fbe08");
#endif

    ctx->pc = 0x1fbe08u;

    // 0x1fbe08: 0x4600b006  mov.s       $f0, $f22
    ctx->pc = 0x1fbe08u;
    ctx->f[0] = FPU_MOV_S(ctx->f[22]);
    ctx->pc = 0x1fbe0cu;
}
