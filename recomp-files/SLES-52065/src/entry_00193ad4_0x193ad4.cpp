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

// Function: entry_00193ad4
// Address: 0x193ad4 - 0x193aec
void entry_00193ad4_0x193ad4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193ad4_0x193ad4");
#endif

    ctx->pc = 0x193ad4u;

    // 0x193ad4: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x193ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x193ad8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x193ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x193adc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x193adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x193ae0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x193ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x193ae4: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x193ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x193ae8: 0xa06501f9  sb          $a1, 0x1F9($v1)
    ctx->pc = 0x193ae8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 505), (uint8_t)GPR_U32(ctx, 5));
    ctx->pc = 0x193aecu;
}
