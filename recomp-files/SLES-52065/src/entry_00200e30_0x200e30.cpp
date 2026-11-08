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

// Function: entry_00200e30
// Address: 0x200e30 - 0x200eb0
void entry_00200e30_0x200e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00200e30_0x200e30");
#endif

    ctx->pc = 0x200e30u;

    // 0x200e30: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x200e30u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x200e34: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x200e34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x200e38: 0x2666fffc  addiu       $a2, $s3, -0x4
    ctx->pc = 0x200e38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
    // 0x200e3c: 0x2cc20025  sltiu       $v0, $a2, 0x25
    ctx->pc = 0x200e3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)37) ? 1 : 0);
    // 0x200e40: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x200E40u;
    {
        const bool branch_taken_0x200e40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x200E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200E40u;
        // 0x200e44: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200e40) {
            ctx->pc = 0x200ED8u;
            return;
        }
    }
    ctx->pc = 0x200E48u;
    // 0x200e48: 0x2cc20014  sltiu       $v0, $a2, 0x14
    ctx->pc = 0x200e48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x200e4c: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x200E4Cu;
    {
        const bool branch_taken_0x200e4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x200E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200E4Cu;
        // 0x200e50: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200e4c) {
            ctx->pc = 0x200EB0u;
            return;
        }
    }
    ctx->pc = 0x200E54u;
    // 0x200e54: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x200e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x200e58: 0x26070008  addiu       $a3, $s0, 0x8
    ctx->pc = 0x200e58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x200e5c: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x200e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x200e60: 0x2cc4001c  sltiu       $a0, $a2, 0x1C
    ctx->pc = 0x200e60u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)28) ? 1 : 0);
    // 0x200e64: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x200e64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x200e68: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x200e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x200e6c: 0x14800010  bnez        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x200E6Cu;
    {
        const bool branch_taken_0x200e6c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x200E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200E6Cu;
        // 0x200e70: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200e6c) {
            ctx->pc = 0x200EB0u;
            return;
        }
    }
    ctx->pc = 0x200E74u;
    // 0x200e74: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x200e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x200e78: 0x2cc40024  sltiu       $a0, $a2, 0x24
    ctx->pc = 0x200e78u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)36) ? 1 : 0);
    // 0x200e7c: 0x26070010  addiu       $a3, $s0, 0x10
    ctx->pc = 0x200e7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x200e80: 0x26250018  addiu       $a1, $s1, 0x18
    ctx->pc = 0x200e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x200e84: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x200e84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x200e88: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x200e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x200e8c: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x200E8Cu;
    {
        const bool branch_taken_0x200e8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x200E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200E8Cu;
        // 0x200e90: 0xae230014  sw          $v1, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200e8c) {
            ctx->pc = 0x200EB0u;
            return;
        }
    }
    ctx->pc = 0x200E94u;
    // 0x200e94: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x200e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x200e98: 0x26070018  addiu       $a3, $s0, 0x18
    ctx->pc = 0x200e98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x200e9c: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x200e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x200ea0: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x200ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
    // 0x200ea4: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x200ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x200ea8: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x200ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x200eac: 0x0  nop
    ctx->pc = 0x200eacu;
    // NOP
    ctx->pc = 0x200eb0u;
}
