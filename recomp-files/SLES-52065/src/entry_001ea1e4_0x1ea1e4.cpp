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

// Function: entry_001ea1e4
// Address: 0x1ea1e4 - 0x1ea1fc
void entry_001ea1e4_0x1ea1e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ea1e4_0x1ea1e4");
#endif

    ctx->pc = 0x1ea1e4u;

    // 0x1ea1e4: 0x0  nop
    ctx->pc = 0x1ea1e4u;
    // NOP
    // 0x1ea1e8: 0x8e830018  lw          $v1, 0x18($s4)
    ctx->pc = 0x1ea1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x1ea1ec: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x1ea1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1ea1f0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1ea1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ea1f4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1ea1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ea1f8: 0x0  nop
    ctx->pc = 0x1ea1f8u;
    // NOP
    ctx->pc = 0x1ea1fcu;
}
