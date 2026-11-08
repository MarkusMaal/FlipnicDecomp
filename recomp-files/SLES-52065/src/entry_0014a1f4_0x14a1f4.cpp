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

// Function: entry_0014a1f4
// Address: 0x14a1f4 - 0x14a234
void entry_0014a1f4_0x14a1f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014a1f4_0x14a1f4");
#endif

    ctx->pc = 0x14a1f4u;

    // 0x14a1f4: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x14a1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x14a1f8: 0xafa30150  sw          $v1, 0x150($sp)
    ctx->pc = 0x14a1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 3));
    // 0x14a1fc: 0x27a300f4  addiu       $v1, $sp, 0xF4
    ctx->pc = 0x14a1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    // 0x14a200: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14a200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14a204: 0xafa30154  sw          $v1, 0x154($sp)
    ctx->pc = 0x14a204u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 3));
    // 0x14a208: 0x27a300f8  addiu       $v1, $sp, 0xF8
    ctx->pc = 0x14a208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x14a20c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14a20cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14a210: 0xafa30158  sw          $v1, 0x158($sp)
    ctx->pc = 0x14a210u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 3));
    // 0x14a214: 0x27a300fc  addiu       $v1, $sp, 0xFC
    ctx->pc = 0x14a214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
    // 0x14a218: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14a218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14a21c: 0xafa3015c  sw          $v1, 0x15C($sp)
    ctx->pc = 0x14a21cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 3));
    // 0x14a220: 0x27a30100  addiu       $v1, $sp, 0x100
    ctx->pc = 0x14a220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x14a224: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14a224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14a228: 0xafa30160  sw          $v1, 0x160($sp)
    ctx->pc = 0x14a228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 3));
    // 0x14a22c: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x14a22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x14a230: 0xafa30164  sw          $v1, 0x164($sp)
    ctx->pc = 0x14a230u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 3));
    ctx->pc = 0x14a234u;
}
