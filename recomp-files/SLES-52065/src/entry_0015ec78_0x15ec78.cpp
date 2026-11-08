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

// Function: entry_0015ec78
// Address: 0x15ec78 - 0x15ec84
void entry_0015ec78_0x15ec78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ec78_0x15ec78");
#endif

    ctx->pc = 0x15ec78u;

    // 0x15ec78: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x15ec78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x15ec7c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x15ec7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15ec80: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x15ec80u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x15ec84u;
}
