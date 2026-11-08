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

// Function: entry_00170f90
// Address: 0x170f90 - 0x170f98
void entry_00170f90_0x170f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170f90_0x170f90");
#endif

    ctx->pc = 0x170f90u;

    // 0x170f90: 0xa2000260  sb          $zero, 0x260($s0)
    ctx->pc = 0x170f90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 608), (uint8_t)GPR_U32(ctx, 0));
    // 0x170f94: 0xa2000261  sb          $zero, 0x261($s0)
    ctx->pc = 0x170f94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 609), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x170f98u;
}
