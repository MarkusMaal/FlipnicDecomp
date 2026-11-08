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

// Function: entry_001dcb10
// Address: 0x1dcb10 - 0x1dcb54
void entry_001dcb10_0x1dcb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dcb10_0x1dcb10");
#endif

    ctx->pc = 0x1dcb10u;

    // 0x1dcb10: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1dcb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dcb14: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1dcb14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1dcb18: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1DCB18u;
    {
        const bool branch_taken_0x1dcb18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dcb18) {
            ctx->pc = 0x1DCB1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DCB18u;
            // 0x1dcb1c: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DCB54u;
            return;
        }
    }
    ctx->pc = 0x1DCB20u;
    // 0x1dcb20: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1dcb20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1dcb24: 0x5445000b  bnel        $v0, $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x1DCB24u;
    {
        const bool branch_taken_0x1dcb24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1dcb24) {
            ctx->pc = 0x1DCB28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DCB24u;
            // 0x1dcb28: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DCB54u;
            return;
        }
    }
    ctx->pc = 0x1DCB2Cu;
    // 0x1dcb2c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1dcb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1dcb30: 0x54460008  bnel        $v0, $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DCB30u;
    {
        const bool branch_taken_0x1dcb30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x1dcb30) {
            ctx->pc = 0x1DCB34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DCB30u;
            // 0x1dcb34: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DCB54u;
            return;
        }
    }
    ctx->pc = 0x1DCB38u;
    // 0x1dcb38: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1dcb38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x1dcb3c: 0x54470005  bnel        $v0, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DCB3Cu;
    {
        const bool branch_taken_0x1dcb3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x1dcb3c) {
            ctx->pc = 0x1DCB40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DCB3Cu;
            // 0x1dcb40: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DCB54u;
            return;
        }
    }
    ctx->pc = 0x1DCB44u;
    // 0x1dcb44: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x1dcb44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
    // 0x1dcb48: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1dcb48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1dcb4c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1dcb4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1dcb50: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1dcb50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    ctx->pc = 0x1dcb54u;
}
