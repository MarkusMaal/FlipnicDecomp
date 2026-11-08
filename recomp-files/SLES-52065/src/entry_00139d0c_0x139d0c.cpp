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

// Function: entry_00139d0c
// Address: 0x139d0c - 0x139d18
void entry_00139d0c_0x139d0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00139d0c_0x139d0c");
#endif

    ctx->pc = 0x139d0cu;

    // 0x139d0c: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x139d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x139d10: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x139d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x139d14: 0xac600028  sw          $zero, 0x28($v1)
    ctx->pc = 0x139d14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
    ctx->pc = 0x139d18u;
}
