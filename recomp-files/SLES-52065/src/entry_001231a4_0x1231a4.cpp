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

// Function: entry_001231a4
// Address: 0x1231a4 - 0x1231b4
void entry_001231a4_0x1231a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001231a4_0x1231a4");
#endif

    ctx->pc = 0x1231a4u;

    // 0x1231a4: 0x8c680008  lw          $t0, 0x8($v1)
    ctx->pc = 0x1231a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1231a8: 0x2407fffe  addiu       $a3, $zero, -0x2
    ctx->pc = 0x1231a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1231ac: 0x1073824  and         $a3, $t0, $a3
    ctx->pc = 0x1231acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & GPR_U64(ctx, 7));
    // 0x1231b0: 0xac670008  sw          $a3, 0x8($v1)
    ctx->pc = 0x1231b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
    ctx->pc = 0x1231b4u;
}
