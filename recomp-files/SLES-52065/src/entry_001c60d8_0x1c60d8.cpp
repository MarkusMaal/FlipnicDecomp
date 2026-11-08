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

// Function: entry_001c60d8
// Address: 0x1c60d8 - 0x1c6100
void entry_001c60d8_0x1c60d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c60d8_0x1c60d8");
#endif

    ctx->pc = 0x1c60d8u;

    // 0x1c60d8: 0x10600059  beqz        $v1, . + 4 + (0x59 << 2)
    ctx->pc = 0x1C60D8u;
    {
        const bool branch_taken_0x1c60d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c60d8) {
            ctx->pc = 0x1C6240u;
            return;
        }
    }
    ctx->pc = 0x1C60E0u;
    // 0x1c60e0: 0x8e42005c  lw          $v0, 0x5C($s2)
    ctx->pc = 0x1c60e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x1c60e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c60e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c60e8: 0xae42005c  sw          $v0, 0x5C($s2)
    ctx->pc = 0x1c60e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 2));
    // 0x1c60ec: 0x8e42005c  lw          $v0, 0x5C($s2)
    ctx->pc = 0x1c60ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x1c60f0: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x1c60f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1c60f4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C60F4u;
    {
        const bool branch_taken_0x1c60f4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c60f4) {
            ctx->pc = 0x1C6100u;
            return;
        }
    }
    ctx->pc = 0x1C60FCu;
    // 0x1c60fc: 0xae40005c  sw          $zero, 0x5C($s2)
    ctx->pc = 0x1c60fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 0));
    ctx->pc = 0x1c6100u;
}
