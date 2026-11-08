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

// Function: entry_001fdf2c
// Address: 0x1fdf2c - 0x1fdf3c
void entry_001fdf2c_0x1fdf2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fdf2c_0x1fdf2c");
#endif

    ctx->pc = 0x1fdf2cu;

    // 0x1fdf2c: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x1fdf2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1fdf30: 0xae03004c  sw          $v1, 0x4C($s0)
    ctx->pc = 0x1fdf30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 3));
    // 0x1fdf34: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x1fdf34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x1fdf38: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x1fdf38u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1fdf3cu;
}
