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

// Function: entry_001b42d8
// Address: 0x1b42d8 - 0x1b42ec
void entry_001b42d8_0x1b42d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b42d8_0x1b42d8");
#endif

    ctx->pc = 0x1b42d8u;

    // 0x1b42d8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1b42d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1b42dc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b42dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b42e0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1b42e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1b42e4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1b42e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1b42e8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1b42e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    ctx->pc = 0x1b42ecu;
}
