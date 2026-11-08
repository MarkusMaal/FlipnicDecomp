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

// Function: entry_001101f4
// Address: 0x1101f4 - 0x110230
void entry_001101f4_0x1101f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001101f4_0x1101f4");
#endif

    ctx->pc = 0x1101f4u;

    // 0x1101f4: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1101f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1101f8: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1101f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1101fc: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1101fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x110200: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x110200u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x110204: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x110204u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x110208: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x110208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x11020c: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x11020cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x110210: 0x90820224  lbu         $v0, 0x224($a0)
    ctx->pc = 0x110210u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 548)));
    // 0x110214: 0x216fc  dsll32      $v0, $v0, 27
    ctx->pc = 0x110214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 27));
    // 0x110218: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x110218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x11021c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11021Cu;
    {
        const bool branch_taken_0x11021c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11021c) {
            ctx->pc = 0x110230u;
            return;
        }
    }
    ctx->pc = 0x110224u;
    // 0x110224: 0x8c820224  lw          $v0, 0x224($a0)
    ctx->pc = 0x110224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 548)));
    // 0x110228: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x110228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x11022c: 0xac820224  sw          $v0, 0x224($a0)
    ctx->pc = 0x11022cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 548), GPR_U32(ctx, 2));
    ctx->pc = 0x110230u;
}
