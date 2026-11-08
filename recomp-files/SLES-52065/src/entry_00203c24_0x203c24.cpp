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

// Function: entry_00203c24
// Address: 0x203c24 - 0x203c30
void entry_00203c24_0x203c24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203c24_0x203c24");
#endif

    ctx->pc = 0x203c24u;

    // 0x203c24: 0x8fa501f0  lw          $a1, 0x1F0($sp)
    ctx->pc = 0x203c24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x203c28: 0xb22821  addu        $a1, $a1, $s2
    ctx->pc = 0x203c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x203c2c: 0xafa501f0  sw          $a1, 0x1F0($sp)
    ctx->pc = 0x203c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 5));
    ctx->pc = 0x203c30u;
}
