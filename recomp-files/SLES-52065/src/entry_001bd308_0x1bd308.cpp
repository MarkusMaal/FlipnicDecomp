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

// Function: entry_001bd308
// Address: 0x1bd308 - 0x1bd35c
void entry_001bd308_0x1bd308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bd308_0x1bd308");
#endif

    ctx->pc = 0x1bd308u;

    // 0x1bd308: 0x27a40094  addiu       $a0, $sp, 0x94
    ctx->pc = 0x1bd308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x1bd30c: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x1bd30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x1bd310: 0x27a50098  addiu       $a1, $sp, 0x98
    ctx->pc = 0x1bd310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x1bd314: 0xafa30090  sw          $v1, 0x90($sp)
    ctx->pc = 0x1bd314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 3));
    // 0x1bd318: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1bd318u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1bd31c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1bd31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1bd320: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1bd320u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1bd324: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1bd324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1bd328: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1bd328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1bd32c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1bd32cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1bd330: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1bd330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1bd334: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1bd334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bd338: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1bd338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1bd33c: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BD33Cu;
    {
        const bool branch_taken_0x1bd33c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BD340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD33Cu;
        // 0x1bd340: 0x27a70090  addiu       $a3, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd33c) {
            ctx->pc = 0x1BD35Cu;
            return;
        }
    }
    ctx->pc = 0x1BD344u;
    // 0x1bd344: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1bd344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1bd348: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1bd348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bd34c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1bd34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1bd350: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1bd350u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1bd354: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bd354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bd358: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x1bd358u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x1bd35cu;
}
