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

// Function: entry_0015ec44
// Address: 0x15ec44 - 0x15ec5c
void entry_0015ec44_0x15ec44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ec44_0x15ec44");
#endif

    ctx->pc = 0x15ec44u;

    // 0x15ec44: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x15ec44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15ec48: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x15ec48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x15ec4c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x15ec4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15ec50: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x15ec50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x15ec54: 0x80840024  lb          $a0, 0x24($a0)
    ctx->pc = 0x15ec54u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x15ec58: 0xa4640230  sh          $a0, 0x230($v1)
    ctx->pc = 0x15ec58u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 560), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x15ec5cu;
}
