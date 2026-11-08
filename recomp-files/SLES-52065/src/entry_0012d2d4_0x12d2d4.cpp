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

// Function: entry_0012d2d4
// Address: 0x12d2d4 - 0x12d2d8
void entry_0012d2d4_0x12d2d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012d2d4_0x12d2d4");
#endif

    ctx->pc = 0x12d2d4u;

    // 0x12d2d4: 0x41903  sra         $v1, $a0, 4
    ctx->pc = 0x12d2d4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
    ctx->pc = 0x12d2d8u;
}
