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

// Function: entry_001376a4
// Address: 0x1376a4 - 0x1376b4
void entry_001376a4_0x1376a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001376a4_0x1376a4");
#endif

    ctx->pc = 0x1376a4u;

    // 0x1376a4: 0x0  nop
    ctx->pc = 0x1376a4u;
    // NOP
    // 0x1376a8: 0x263100a0  addiu       $s1, $s1, 0xA0
    ctx->pc = 0x1376a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    // 0x1376ac: 0x26520030  addiu       $s2, $s2, 0x30
    ctx->pc = 0x1376acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x1376b0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1376b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x1376b4u;
}
