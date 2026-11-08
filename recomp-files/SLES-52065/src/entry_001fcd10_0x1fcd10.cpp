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

// Function: entry_001fcd10
// Address: 0x1fcd10 - 0x1fcd18
void entry_001fcd10_0x1fcd10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fcd10_0x1fcd10");
#endif

    ctx->pc = 0x1fcd10u;

    // 0x1fcd10: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1fcd10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fcd14: 0x28770002  slti        $s7, $v1, 0x2
    ctx->pc = 0x1fcd14u;
    SET_GPR_U64(ctx, 23, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    ctx->pc = 0x1fcd18u;
}
