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

// Function: entry_001a2f24
// Address: 0x1a2f24 - 0x1a2f30
void entry_001a2f24_0x1a2f24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2f24_0x1a2f24");
#endif

    ctx->pc = 0x1a2f24u;

    // 0x1a2f24: 0x0  nop
    ctx->pc = 0x1a2f24u;
    // NOP
    // 0x1a2f28: 0xaf918624  sw          $s1, -0x79DC($gp)
    ctx->pc = 0x1a2f28u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936100), GPR_U32(ctx, 17));
    // 0x1a2f2c: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x1a2f2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->pc = 0x1a2f30u;
}
