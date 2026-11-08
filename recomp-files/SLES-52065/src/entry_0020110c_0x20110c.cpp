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

// Function: entry_0020110c
// Address: 0x20110c - 0x201130
void entry_0020110c_0x20110c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020110c_0x20110c");
#endif

    ctx->pc = 0x20110cu;

    // 0x20110c: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x20110cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x201110: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x201110u;
    {
        const bool branch_taken_0x201110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x201114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201110u;
        // 0x201114: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201110) {
            ctx->pc = 0x201130u;
            return;
        }
    }
    ctx->pc = 0x201118u;
    // 0x201118: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x201118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x20111c: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x20111Cu;
    {
        const bool branch_taken_0x20111c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20111c) {
            ctx->pc = 0x201120u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20111Cu;
            // 0x201120: 0x8e050030  lw          $a1, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201174u;
            return;
        }
    }
    ctx->pc = 0x201124u;
    // 0x201124: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x201124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x201128: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x201128u;
    {
        const bool branch_taken_0x201128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20112Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201128u;
        // 0x20112c: 0x30620008  andi        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x201128) {
            ctx->pc = 0x201138u;
            return;
        }
    }
    ctx->pc = 0x201130u;
}
