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

// Function: entry_0011f7f8
// Address: 0x11f7f8 - 0x11f830
void entry_0011f7f8_0x11f7f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f7f8_0x11f7f8");
#endif

    ctx->pc = 0x11f7f8u;

    // 0x11f7f8: 0x8c83201c  lw          $v1, 0x201C($a0)
    ctx->pc = 0x11f7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8220)));
    // 0x11f7fc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x11f7fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x11f800: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x11f800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x11f804: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x11f804u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x11f808: 0x8c83201c  lw          $v1, 0x201C($a0)
    ctx->pc = 0x11f808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8220)));
    // 0x11f80c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x11f80cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x11f810: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x11f810u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x11f814: 0x8c83201c  lw          $v1, 0x201C($a0)
    ctx->pc = 0x11f814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8220)));
    // 0x11f818: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x11f818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x11f81c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x11f81cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x11f820: 0x8c83201c  lw          $v1, 0x201C($a0)
    ctx->pc = 0x11f820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8220)));
    // 0x11f824: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x11f824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x11f828: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x11f828u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x11f82c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x11f82cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->pc = 0x11f830u;
}
