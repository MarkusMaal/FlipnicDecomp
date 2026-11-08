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

// Function: entry_002027dc
// Address: 0x2027dc - 0x2027e0
void entry_002027dc_0x2027dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002027dc_0x2027dc");
#endif

    ctx->pc = 0x2027dcu;

    // 0x2027dc: 0x2931023  subu        $v0, $s4, $s3
    ctx->pc = 0x2027dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    ctx->pc = 0x2027e0u;
}
