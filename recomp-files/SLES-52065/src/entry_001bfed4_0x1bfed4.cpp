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

// Function: entry_001bfed4
// Address: 0x1bfed4 - 0x1bfedc
void entry_001bfed4_0x1bfed4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bfed4_0x1bfed4");
#endif

    ctx->pc = 0x1bfed4u;

    // 0x1bfed4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1bfed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1bfed8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1bfed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->pc = 0x1bfedcu;
}
