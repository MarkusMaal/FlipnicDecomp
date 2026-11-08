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

// Function: entry_00132280
// Address: 0x132280 - 0x132284
void entry_00132280_0x132280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00132280_0x132280");
#endif

    ctx->pc = 0x132280u;

    // 0x132280: 0x4616ad42  mul.s       $f21, $f21, $f22
    ctx->pc = 0x132280u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[22]);
    ctx->pc = 0x132284u;
}
