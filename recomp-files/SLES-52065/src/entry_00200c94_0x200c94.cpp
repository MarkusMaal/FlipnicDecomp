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

// Function: entry_00200c94
// Address: 0x200c94 - 0x200d70
void entry_00200c94_0x200c94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00200c94_0x200c94");
#endif

    ctx->pc = 0x200c94u;

    // 0x200c94: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x200c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x200c98: 0x14400095  bnez        $v0, . + 4 + (0x95 << 2)
    ctx->pc = 0x200C98u;
    {
        const bool branch_taken_0x200c98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x200C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200C98u;
        // 0x200c9c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200c98) {
            ctx->pc = 0x200EF0u;
            return;
        }
    }
    ctx->pc = 0x200CA0u;
    // 0x200ca0: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x200ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x200ca4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x200ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x200ca8: 0x3463fffc  ori         $v1, $v1, 0xFFFC
    ctx->pc = 0x200ca8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65532);
    // 0x200cac: 0x2a2a023  subu        $s4, $s5, $v0
    ctx->pc = 0x200cacu;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x200cb0: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x200cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x200cb4: 0x10e00054  beqz        $a3, . + 4 + (0x54 << 2)
    ctx->pc = 0x200CB4u;
    {
        const bool branch_taken_0x200cb4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x200CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200CB4u;
        // 0x200cb8: 0x832024  and         $a0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200cb4) {
            ctx->pc = 0x200E08u;
            return;
        }
    }
    ctx->pc = 0x200CBCu;
    // 0x200cbc: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x200cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x200cc0: 0x2462d9c8  addiu       $v0, $v1, -0x2638
    ctx->pc = 0x200cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957512));
    // 0x200cc4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x200cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x21D9D0u));
    // 0x200cc8: 0x14e30042  bne         $a3, $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x200CC8u;
    {
        const bool branch_taken_0x200cc8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        ctx->pc = 0x200CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200CC8u;
        // 0x200ccc: 0xc41021  addu        $v0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200cc8) {
            ctx->pc = 0x200DD4u;
            return;
        }
    }
    ctx->pc = 0x200CD0u;
    // 0x200cd0: 0xc41821  addu        $v1, $a2, $a0
    ctx->pc = 0x200cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x200cd4: 0x26c20010  addiu       $v0, $s6, 0x10
    ctx->pc = 0x200cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x200cd8: 0x73b821  addu        $s7, $v1, $s3
    ctx->pc = 0x200cd8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x200cdc: 0x2e2102b  sltu        $v0, $s7, $v0
    ctx->pc = 0x200cdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x200ce0: 0x14400049  bnez        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x200CE0u;
    {
        const bool branch_taken_0x200ce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x200CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200CE0u;
        // 0x200ce4: 0x280882d  daddu       $s1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200ce0) {
            ctx->pc = 0x200E08u;
            return;
        }
    }
    ctx->pc = 0x200CE8u;
    // 0x200ce8: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x200ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x200cec: 0x8e860008  lw          $a2, 0x8($s4)
    ctx->pc = 0x200cecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x200cf0: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x200cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x200cf4: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x200cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x200cf8: 0x2666fffc  addiu       $a2, $s3, -0x4
    ctx->pc = 0x200cf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
    // 0x200cfc: 0x2cc20025  sltiu       $v0, $a2, 0x25
    ctx->pc = 0x200cfcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)37) ? 1 : 0);
    // 0x200d00: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x200D00u;
    {
        const bool branch_taken_0x200d00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x200D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200D00u;
        // 0x200d04: 0x26320008  addiu       $s2, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200d00) {
            ctx->pc = 0x200D94u;
            return;
        }
    }
    ctx->pc = 0x200D08u;
    // 0x200d08: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x200d08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200d0c: 0x2cc20014  sltiu       $v0, $a2, 0x14
    ctx->pc = 0x200d0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x200d10: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x200D10u;
    {
        const bool branch_taken_0x200d10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x200D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200D10u;
        // 0x200d14: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200d10) {
            ctx->pc = 0x200D70u;
            return;
        }
    }
    ctx->pc = 0x200D18u;
    // 0x200d18: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x200d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x200d1c: 0x26070008  addiu       $a3, $s0, 0x8
    ctx->pc = 0x200d1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x200d20: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x200d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x200d24: 0x2cc4001c  sltiu       $a0, $a2, 0x1C
    ctx->pc = 0x200d24u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)28) ? 1 : 0);
    // 0x200d28: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x200d28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x200d2c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x200d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x200d30: 0x1480000f  bnez        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x200D30u;
    {
        const bool branch_taken_0x200d30 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x200D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200D30u;
        // 0x200d34: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200d30) {
            ctx->pc = 0x200D70u;
            return;
        }
    }
    ctx->pc = 0x200D38u;
    // 0x200d38: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x200d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x200d3c: 0x2cc40024  sltiu       $a0, $a2, 0x24
    ctx->pc = 0x200d3cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)36) ? 1 : 0);
    // 0x200d40: 0x26070010  addiu       $a3, $s0, 0x10
    ctx->pc = 0x200d40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x200d44: 0x26250018  addiu       $a1, $s1, 0x18
    ctx->pc = 0x200d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x200d48: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x200d48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x200d4c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x200d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x200d50: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x200D50u;
    {
        const bool branch_taken_0x200d50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x200D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200D50u;
        // 0x200d54: 0xae230014  sw          $v1, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200d50) {
            ctx->pc = 0x200D70u;
            return;
        }
    }
    ctx->pc = 0x200D58u;
    // 0x200d58: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x200d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x200d5c: 0x26070018  addiu       $a3, $s0, 0x18
    ctx->pc = 0x200d5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x200d60: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x200d60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x200d64: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x200d64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
    // 0x200d68: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x200d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x200d6c: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x200d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    ctx->pc = 0x200d70u;
}
