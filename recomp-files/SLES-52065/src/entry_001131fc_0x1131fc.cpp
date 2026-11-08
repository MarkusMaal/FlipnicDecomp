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

// Function: entry_001131fc
// Address: 0x1131fc - 0x113224
void entry_001131fc_0x1131fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001131fc_0x1131fc");
#endif

    ctx->pc = 0x1131fcu;

    // 0x1131fc: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1131fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x113200: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x113200u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x113204: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x113204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x113208: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x113208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x11320c: 0x84a50000  lh          $a1, 0x0($a1)
    ctx->pc = 0x11320cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x113210: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x113210u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x113214: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x113214u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x113218: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x113218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x11321c: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x11321cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x113220: 0xac640230  sw          $a0, 0x230($v1)
    ctx->pc = 0x113220u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 560), GPR_U32(ctx, 4));
    ctx->pc = 0x113224u;
}
