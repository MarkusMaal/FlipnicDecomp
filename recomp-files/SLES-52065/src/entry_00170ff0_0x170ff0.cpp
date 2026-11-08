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

// Function: entry_00170ff0
// Address: 0x170ff0 - 0x170ff8
void entry_00170ff0_0x170ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170ff0_0x170ff0");
#endif

    ctx->pc = 0x170ff0u;

    // 0x170ff0: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x170ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x170ff4: 0xac602798  sw          $zero, 0x2798($v1)
    ctx->pc = 0x170ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 10136), GPR_U32(ctx, 0));
    ctx->pc = 0x170ff8u;
}
