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

// Function: entry_0017fe90
// Address: 0x17fe90 - 0x17fe98
void entry_0017fe90_0x17fe90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017fe90_0x17fe90");
#endif

    ctx->pc = 0x17fe90u;

    // 0x17fe90: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x17fe90u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x17fe94: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x17fe94u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    ctx->pc = 0x17fe98u;
}
