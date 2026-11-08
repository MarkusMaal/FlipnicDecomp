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

// Function: entry_001ea450
// Address: 0x1ea450 - 0x1ea464
void entry_001ea450_0x1ea450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ea450_0x1ea450");
#endif

    ctx->pc = 0x1ea450u;

    // 0x1ea450: 0x8e850018  lw          $a1, 0x18($s4)
    ctx->pc = 0x1ea450u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x1ea454: 0x8fa400d4  lw          $a0, 0xD4($sp)
    ctx->pc = 0x1ea454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x1ea458: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1ea458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1ea45c: 0x80840000  lb          $a0, 0x0($a0)
    ctx->pc = 0x1ea45cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ea460: 0x0  nop
    ctx->pc = 0x1ea460u;
    // NOP
    ctx->pc = 0x1ea464u;
}
