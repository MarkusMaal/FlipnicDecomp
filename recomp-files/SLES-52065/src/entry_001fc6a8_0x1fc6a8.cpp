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

// Function: entry_001fc6a8
// Address: 0x1fc6a8 - 0x1fc6b4
void entry_001fc6a8_0x1fc6a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fc6a8_0x1fc6a8");
#endif

    ctx->pc = 0x1fc6a8u;

    // 0x1fc6a8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1fc6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fc6ac: 0x2c71000f  sltiu       $s1, $v1, 0xF
    ctx->pc = 0x1fc6acu;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x1fc6b0: 0x8fc50044  lw          $a1, 0x44($fp)
    ctx->pc = 0x1fc6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 68)));
    ctx->pc = 0x1fc6b4u;
}
