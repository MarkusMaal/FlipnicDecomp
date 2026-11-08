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

// Function: entry_00150d70
// Address: 0x150d70 - 0x150da8
void entry_00150d70_0x150d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150d70_0x150d70");
#endif

    ctx->pc = 0x150d70u;

    // 0x150d70: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x150d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x150d74: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x150d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x150d78: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x150d78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x150d7c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x150d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x150d80: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x150d80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x150d84: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x150d84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x150d88: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x150d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x150d8c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x150d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x150d90: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x150d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x150d94: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x150d94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x150d98: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x150d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x150d9c: 0x14a20002  bne         $a1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x150D9Cu;
    {
        const bool branch_taken_0x150d9c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x150d9c) {
            ctx->pc = 0x150DA8u;
            return;
        }
    }
    ctx->pc = 0x150DA4u;
    // 0x150da4: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x150da4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x150da8u;
}
