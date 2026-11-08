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

// Function: entry_0014aee8
// Address: 0x14aee8 - 0x14af00
void entry_0014aee8_0x14aee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014aee8_0x14aee8");
#endif

    ctx->pc = 0x14aee8u;

    // 0x14aee8: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x14aee8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x14aeec: 0xd2880  sll         $a1, $t5, 2
    ctx->pc = 0x14aeecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x14aef0: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x14aef0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14aef4: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x14aef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x14aef8: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x14aef8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x14aefc: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x14aefcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    ctx->pc = 0x14af00u;
}
