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

// Function: entry_001ea6cc
// Address: 0x1ea6cc - 0x1ea6e0
void entry_001ea6cc_0x1ea6cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ea6cc_0x1ea6cc");
#endif

    ctx->pc = 0x1ea6ccu;

    // 0x1ea6cc: 0x8e840018  lw          $a0, 0x18($s4)
    ctx->pc = 0x1ea6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x1ea6d0: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x1ea6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x1ea6d4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1ea6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1ea6d8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1ea6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ea6dc: 0x0  nop
    ctx->pc = 0x1ea6dcu;
    // NOP
    ctx->pc = 0x1ea6e0u;
}
