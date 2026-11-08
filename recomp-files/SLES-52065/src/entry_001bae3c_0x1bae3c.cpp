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

// Function: entry_001bae3c
// Address: 0x1bae3c - 0x1bae58
void entry_001bae3c_0x1bae3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bae3c_0x1bae3c");
#endif

    ctx->pc = 0x1bae3cu;

    // 0x1bae3c: 0xac800080  sw          $zero, 0x80($a0)
    ctx->pc = 0x1bae3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 0));
    // 0x1bae40: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1bae40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1bae44: 0xac830078  sw          $v1, 0x78($a0)
    ctx->pc = 0x1bae44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 3));
    // 0x1bae48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bae48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bae4c: 0xac83007c  sw          $v1, 0x7C($a0)
    ctx->pc = 0x1bae4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 3));
    // 0x1bae50: 0xac8000a8  sw          $zero, 0xA8($a0)
    ctx->pc = 0x1bae50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 0));
    // 0x1bae54: 0xa08300a0  sb          $v1, 0xA0($a0)
    ctx->pc = 0x1bae54u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 160), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1bae58u;
}
