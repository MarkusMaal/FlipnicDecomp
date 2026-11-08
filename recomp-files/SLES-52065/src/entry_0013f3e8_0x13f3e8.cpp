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

// Function: entry_0013f3e8
// Address: 0x13f3e8 - 0x13f3f4
void entry_0013f3e8_0x13f3e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f3e8_0x13f3e8");
#endif

    ctx->pc = 0x13f3e8u;

    // 0x13f3e8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x13f3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13f3ec: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x13f3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x13f3f0: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x13f3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
    ctx->pc = 0x13f3f4u;
}
