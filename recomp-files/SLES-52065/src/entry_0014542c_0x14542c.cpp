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

// Function: entry_0014542c
// Address: 0x14542c - 0x145480
void entry_0014542c_0x14542c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014542c_0x14542c");
#endif

    ctx->pc = 0x14542cu;

    // 0x14542c: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x14542cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x145430: 0x8fa20074  lw          $v0, 0x74($sp)
    ctx->pc = 0x145430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x145434: 0x27a50058  addiu       $a1, $sp, 0x58
    ctx->pc = 0x145434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x145438: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x145438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
    // 0x14543c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x14543cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x145440: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x145440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x145444: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x145444u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x145448: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x145448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14544c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x14544cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x145450: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x145450u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x145454: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x145454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x145458: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x145458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14545c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x14545cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x145460: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x145460u;
    {
        const bool branch_taken_0x145460 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x145464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145460u;
        // 0x145464: 0x27a70050  addiu       $a3, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145460) {
            ctx->pc = 0x145480u;
            return;
        }
    }
    ctx->pc = 0x145468u;
    // 0x145468: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x145468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x14546c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x14546cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x145470: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x145470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x145474: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x145474u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x145478: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x145478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14547c: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x14547cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x145480u;
}
