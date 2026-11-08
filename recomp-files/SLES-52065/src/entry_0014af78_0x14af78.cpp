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

// Function: entry_0014af78
// Address: 0x14af78 - 0x14af90
void entry_0014af78_0x14af78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014af78_0x14af78");
#endif

    ctx->pc = 0x14af78u;

    // 0x14af78: 0x8d860000  lw          $a2, 0x0($t4)
    ctx->pc = 0x14af78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x14af7c: 0xd2880  sll         $a1, $t5, 2
    ctx->pc = 0x14af7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x14af80: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x14af80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14af84: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x14af84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x14af88: 0xad460000  sw          $a2, 0x0($t2)
    ctx->pc = 0x14af88u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 6));
    // 0x14af8c: 0xad650000  sw          $a1, 0x0($t3)
    ctx->pc = 0x14af8cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 5));
    ctx->pc = 0x14af90u;
}
