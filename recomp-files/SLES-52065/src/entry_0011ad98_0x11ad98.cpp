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

// Function: entry_0011ad98
// Address: 0x11ad98 - 0x11adac
void entry_0011ad98_0x11ad98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ad98_0x11ad98");
#endif

    ctx->pc = 0x11ad98u;

    // 0x11ad98: 0xac510034  sw          $s1, 0x34($v0)
    ctx->pc = 0x11ad98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 17));
    // 0x11ad9c: 0x8e030528  lw          $v1, 0x528($s0)
    ctx->pc = 0x11ad9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1320)));
    // 0x11ada0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11ada0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11ada4: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x11ada4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x11ada8: 0xae03052c  sw          $v1, 0x52C($s0)
    ctx->pc = 0x11ada8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1324), GPR_U32(ctx, 3));
    ctx->pc = 0x11adacu;
}
