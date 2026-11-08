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

// Function: entry_001fcdf4
// Address: 0x1fcdf4 - 0x1fce44
void entry_001fcdf4_0x1fcdf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fcdf4_0x1fcdf4");
#endif

    ctx->pc = 0x1fcdf4u;

    // 0x1fcdf4: 0x12e00015  beqz        $s7, . + 4 + (0x15 << 2)
    ctx->pc = 0x1FCDF4u;
    {
        const bool branch_taken_0x1fcdf4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCDF4u;
        // 0x1fcdf8: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcdf4) {
            ctx->pc = 0x1FCE4Cu;
            return;
        }
    }
    ctx->pc = 0x1FCDFCu;
    // 0x1fcdfc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1fcdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fce00: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x1fce00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x1fce04: 0x2c21024  and         $v0, $s6, $v0
    ctx->pc = 0x1fce04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & GPR_U64(ctx, 2));
    // 0x1fce08: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1FCE08u;
    {
        const bool branch_taken_0x1fce08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fce08) {
            ctx->pc = 0x1FCE0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FCE08u;
            // 0x1fce0c: 0xafa00040  sw          $zero, 0x40($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FCE48u;
            return;
        }
    }
    ctx->pc = 0x1FCE10u;
    // 0x1fce10: 0x16103f  dsra32      $v0, $s6, 0
    ctx->pc = 0x1fce10u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 22) >> (32 + 0));
    // 0x1fce14: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x1fce14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x1fce18: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1fce18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1fce1c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FCE1Cu;
    {
        const bool branch_taken_0x1fce1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCE1Cu;
        // 0x1fce20: 0x8fa40018  lw          $a0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fce1c) {
            ctx->pc = 0x1FCE44u;
            return;
        }
    }
    ctx->pc = 0x1FCE24u;
    // 0x1fce24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fce24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fce28: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1fce28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1fce2c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1fce2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1fce30: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x1fce30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
    // 0x1fce34: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1fce34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1fce38: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x1fce38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x1fce3c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FCE3Cu;
    {
        const bool branch_taken_0x1fce3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCE3Cu;
        // 0x1fce40: 0xafa20038  sw          $v0, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fce3c) {
            ctx->pc = 0x1FCE48u;
            return;
        }
    }
    ctx->pc = 0x1FCE44u;
}
