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

// Function: entry_001ddbf0
// Address: 0x1ddbf0 - 0x1ddc48
void entry_001ddbf0_0x1ddbf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ddbf0_0x1ddbf0");
#endif

    ctx->pc = 0x1ddbf0u;

    // 0x1ddbf0: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1ddbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ddbf4: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x1ddbf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x1ddbf8: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1DDBF8u;
    {
        const bool branch_taken_0x1ddbf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDBF8u;
        // 0x1ddbfc: 0x30830008  andi        $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddbf8) {
            ctx->pc = 0x1DDC58u;
            return;
        }
    }
    ctx->pc = 0x1DDC00u;
    // 0x1ddc00: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x1DDC00u;
    {
        const bool branch_taken_0x1ddc00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddc00) {
            ctx->pc = 0x1DDC04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DDC00u;
            // 0x1ddc04: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DDC5Cu;
            return;
        }
    }
    ctx->pc = 0x1DDC08u;
    // 0x1ddc08: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x1ddc08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1ddc0c: 0x54510013  bnel        $v0, $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1DDC0Cu;
    {
        const bool branch_taken_0x1ddc0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x1ddc0c) {
            ctx->pc = 0x1DDC10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DDC0Cu;
            // 0x1ddc10: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DDC5Cu;
            return;
        }
    }
    ctx->pc = 0x1DDC14u;
    // 0x1ddc14: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x1ddc14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x1ddc18: 0x54500010  bnel        $v0, $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1DDC18u;
    {
        const bool branch_taken_0x1ddc18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x1ddc18) {
            ctx->pc = 0x1DDC1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DDC18u;
            // 0x1ddc1c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DDC5Cu;
            return;
        }
    }
    ctx->pc = 0x1DDC20u;
    // 0x1ddc20: 0x8a2024  and         $a0, $a0, $t2
    ctx->pc = 0x1ddc20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 10));
    // 0x1ddc24: 0x28c20018  slti        $v0, $a2, 0x18
    ctx->pc = 0x1ddc24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x1ddc28: 0x120182d  daddu       $v1, $t1, $zero
    ctx->pc = 0x1ddc28u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddc2c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x1ddc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x1ddc30: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x1ddc30u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x1ddc34: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x1ddc34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x1ddc38: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DDC38u;
    {
        const bool branch_taken_0x1ddc38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDC38u;
        // 0x1ddc3c: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddc38) {
            ctx->pc = 0x1DDC48u;
            return;
        }
    }
    ctx->pc = 0x1DDC40u;
    // 0x1ddc40: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DDC40u;
    {
        const bool branch_taken_0x1ddc40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDC40u;
        // 0x1ddc44: 0xc71004  sllv        $v0, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 6) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddc40) {
            ctx->pc = 0x1DDC50u;
            return;
        }
    }
    ctx->pc = 0x1DDC48u;
}
