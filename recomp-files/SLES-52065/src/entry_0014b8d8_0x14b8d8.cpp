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

// Function: entry_0014b8d8
// Address: 0x14b8d8 - 0x14b8dc
void entry_0014b8d8_0x14b8d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014b8d8_0x14b8d8");
#endif

    ctx->pc = 0x14b8d8u;

    // 0x14b8d8: 0x2068023  subu        $s0, $s0, $a2
    ctx->pc = 0x14b8d8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    ctx->pc = 0x14b8dcu;
}
