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

// Function: entry_0012349c
// Address: 0x12349c - 0x1234b0
void entry_0012349c_0x12349c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012349c_0x12349c");
#endif

    ctx->pc = 0x12349cu;

    // 0x12349c: 0x0  nop
    ctx->pc = 0x12349cu;
    // NOP
    // 0x1234a0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1234a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1234a4: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1234a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1234a8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1234a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1234ac: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1234acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x1234b0u;
}
