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

// Function: entry_001ddce0
// Address: 0x1ddce0 - 0x1ddd48
void entry_001ddce0_0x1ddce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ddce0_0x1ddce0");
#endif

    ctx->pc = 0x1ddce0u;

    // 0x1ddce0: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x1ddce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1ddce4: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x1ddce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x1ddce8: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x1DDCE8u;
    {
        const bool branch_taken_0x1ddce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddce8) {
            ctx->pc = 0x1DDCECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DDCE8u;
            // 0x1ddcec: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DDD5Cu;
            return;
        }
    }
    ctx->pc = 0x1DDCF0u;
    // 0x1ddcf0: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x1ddcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1ddcf4: 0x54520019  bnel        $v0, $s2, . + 4 + (0x19 << 2)
    ctx->pc = 0x1DDCF4u;
    {
        const bool branch_taken_0x1ddcf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x1ddcf4) {
            ctx->pc = 0x1DDCF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DDCF4u;
            // 0x1ddcf8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DDD5Cu;
            return;
        }
    }
    ctx->pc = 0x1DDCFCu;
    // 0x1ddcfc: 0x25420004  addiu       $v0, $t2, 0x4
    ctx->pc = 0x1ddcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x1ddd00: 0x1022821  addu        $a1, $t0, $v0
    ctx->pc = 0x1ddd00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1ddd04: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1ddd04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddd08: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1ddd08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1ddd0c: 0x54710013  bnel        $v1, $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1DDD0Cu;
    {
        const bool branch_taken_0x1ddd0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        if (branch_taken_0x1ddd0c) {
            ctx->pc = 0x1DDD10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DDD0Cu;
            // 0x1ddd10: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DDD5Cu;
            return;
        }
    }
    ctx->pc = 0x1DDD14u;
    // 0x1ddd14: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x1ddd14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1ddd18: 0x54500010  bnel        $v0, $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1DDD18u;
    {
        const bool branch_taken_0x1ddd18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x1ddd18) {
            ctx->pc = 0x1DDD1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DDD18u;
            // 0x1ddd1c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DDD5Cu;
            return;
        }
    }
    ctx->pc = 0x1DDD20u;
    // 0x1ddd20: 0x8d2024  and         $a0, $a0, $t5
    ctx->pc = 0x1ddd20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 13));
    // 0x1ddd24: 0x28c20018  slti        $v0, $a2, 0x18
    ctx->pc = 0x1ddd24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x1ddd28: 0x180182d  daddu       $v1, $t4, $zero
    ctx->pc = 0x1ddd28u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddd2c: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x1ddd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x1ddd30: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x1ddd30u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x1ddd34: 0x6e1821  addu        $v1, $v1, $t6
    ctx->pc = 0x1ddd34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x1ddd38: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DDD38u;
    {
        const bool branch_taken_0x1ddd38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDD38u;
        // 0x1ddd3c: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddd38) {
            ctx->pc = 0x1DDD48u;
            return;
        }
    }
    ctx->pc = 0x1DDD40u;
    // 0x1ddd40: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DDD40u;
    {
        const bool branch_taken_0x1ddd40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDD40u;
        // 0x1ddd44: 0xc91004  sllv        $v0, $t1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddd40) {
            ctx->pc = 0x1DDD50u;
            return;
        }
    }
    ctx->pc = 0x1DDD48u;
}
