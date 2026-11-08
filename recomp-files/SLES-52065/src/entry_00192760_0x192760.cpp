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

// Function: entry_00192760
// Address: 0x192760 - 0x19277c
void entry_00192760_0x192760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192760_0x192760");
#endif

    ctx->pc = 0x192760u;

    // 0x192760: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x192760u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x192764: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x192764u;
    {
        const bool branch_taken_0x192764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x192764) {
            ctx->pc = 0x19278Cu;
            return;
        }
    }
    ctx->pc = 0x19276Cu;
    // 0x19276c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x19276cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x192770: 0xc41021  addu        $v0, $a2, $a0
    ctx->pc = 0x192770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x192774: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x192774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x192778: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x192778u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x19277cu;
}
