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

// Function: entry_00150a68
// Address: 0x150a68 - 0x150abc
void entry_00150a68_0x150a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150a68_0x150a68");
#endif

    ctx->pc = 0x150a68u;

    // 0x150a68: 0x27a40094  addiu       $a0, $sp, 0x94
    ctx->pc = 0x150a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x150a6c: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x150a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x150a70: 0x27a50098  addiu       $a1, $sp, 0x98
    ctx->pc = 0x150a70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x150a74: 0xafa30090  sw          $v1, 0x90($sp)
    ctx->pc = 0x150a74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 3));
    // 0x150a78: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x150a78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x150a7c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x150a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x150a80: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x150a80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x150a84: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x150a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x150a88: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x150a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x150a8c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x150a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x150a90: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x150a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x150a94: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x150a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x150a98: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x150a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x150a9c: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x150A9Cu;
    {
        const bool branch_taken_0x150a9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x150AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150A9Cu;
        // 0x150aa0: 0x27a70090  addiu       $a3, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150a9c) {
            ctx->pc = 0x150ABCu;
            return;
        }
    }
    ctx->pc = 0x150AA4u;
    // 0x150aa4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x150aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x150aa8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x150aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x150aac: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x150aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x150ab0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x150ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x150ab4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x150ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x150ab8: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x150ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x150abcu;
}
