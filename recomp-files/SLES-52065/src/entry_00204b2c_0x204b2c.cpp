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

// Function: entry_00204b2c
// Address: 0x204b2c - 0x204b6c
void entry_00204b2c_0x204b2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00204b2c_0x204b2c");
#endif

    ctx->pc = 0x204b2cu;

    // 0x204b2c: 0x33c20001  andi        $v0, $fp, 0x1
    ctx->pc = 0x204b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
    // 0x204b30: 0x104000c4  beqz        $v0, . + 4 + (0xC4 << 2)
    ctx->pc = 0x204B30u;
    {
        const bool branch_taken_0x204b30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x204B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204B30u;
        // 0x204b34: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204b30) {
            ctx->pc = 0x204E44u;
            return;
        }
    }
    ctx->pc = 0x204B38u;
    // 0x204b38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x204b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204b3c: 0x24425210  addiu       $v0, $v0, 0x5210
    ctx->pc = 0x204b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21008));
    // 0x204b40: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x204b40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x204b44: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x204b44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x204b48: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x204b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x204b4c: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x204b4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x204b50: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x204b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x204b54: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x204b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x204b58: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x204b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x204b5c: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x204b5cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x204b60: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x204b60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x204b64: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x204B64u;
    {
        const bool branch_taken_0x204b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204B64u;
        // 0x204b68: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204b64) {
            ctx->pc = 0x204E28u;
            return;
        }
    }
    ctx->pc = 0x204B6Cu;
}
