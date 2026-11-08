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

// Function: entry_001b48c8
// Address: 0x1b48c8 - 0x1b48dc
void entry_001b48c8_0x1b48c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b48c8_0x1b48c8");
#endif

    ctx->pc = 0x1b48c8u;

    // 0x1b48c8: 0x8ea3000c  lw          $v1, 0xC($s5)
    ctx->pc = 0x1b48c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x1b48cc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1b48ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1b48d0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1b48d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1b48d4: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1b48d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1b48d8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1b48d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    ctx->pc = 0x1b48dcu;
}
