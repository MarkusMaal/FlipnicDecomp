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

// Function: entry_001da3d0
// Address: 0x1da3d0 - 0x1da3e0
void entry_001da3d0_0x1da3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001da3d0_0x1da3d0");
#endif

    ctx->pc = 0x1da3d0u;

    // 0x1da3d0: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1da3d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da3d4: 0xa2020044  sb          $v0, 0x44($s0)
    ctx->pc = 0x1da3d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 68), (uint8_t)GPR_U32(ctx, 2));
    // 0x1da3d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1da3d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da3dc: 0x0  nop
    ctx->pc = 0x1da3dcu;
    // NOP
    ctx->pc = 0x1da3e0u;
}
