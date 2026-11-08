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

// Function: entry_001bd980
// Address: 0x1bd980 - 0x1bd9b8
void entry_001bd980_0x1bd980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bd980_0x1bd980");
#endif

    ctx->pc = 0x1bd980u;

    // 0x1bd980: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1bd980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1bd984: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bd984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bd988: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1bd988u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1bd98c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1bd98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1bd990: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x1bd990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1bd994: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x1bd994u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x1bd998: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1bd998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1bd99c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1bd99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bd9a0: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x1bd9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1bd9a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bd9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bd9a8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1bd9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bd9ac: 0x14a20002  bne         $a1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BD9ACu;
    {
        const bool branch_taken_0x1bd9ac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bd9ac) {
            ctx->pc = 0x1BD9B8u;
            return;
        }
    }
    ctx->pc = 0x1BD9B4u;
    // 0x1bd9b4: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1bd9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x1bd9b8u;
}
