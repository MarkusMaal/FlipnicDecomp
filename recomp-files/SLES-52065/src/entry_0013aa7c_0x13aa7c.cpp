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

// Function: entry_0013aa7c
// Address: 0x13aa7c - 0x13aa8c
void entry_0013aa7c_0x13aa7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013aa7c_0x13aa7c");
#endif

    ctx->pc = 0x13aa7cu;

    // 0x13aa7c: 0x0  nop
    ctx->pc = 0x13aa7cu;
    // NOP
    // 0x13aa80: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x13aa80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x13aa84: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x13aa84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x13aa88: 0xac600028  sw          $zero, 0x28($v1)
    ctx->pc = 0x13aa88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
    ctx->pc = 0x13aa8cu;
}
