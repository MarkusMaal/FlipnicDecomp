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

// Function: entry_00200f50
// Address: 0x200f50 - 0x200fc0
void entry_00200f50_0x200f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00200f50_0x200f50");
#endif

    ctx->pc = 0x200f50u;

    // 0x200f50: 0x2cc20025  sltiu       $v0, $a2, 0x25
    ctx->pc = 0x200f50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)37) ? 1 : 0);
    // 0x200f54: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x200F54u;
    {
        const bool branch_taken_0x200f54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x200F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200F54u;
        // 0x200f58: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200f54) {
            ctx->pc = 0x200FE4u;
            return;
        }
    }
    ctx->pc = 0x200F5Cu;
    // 0x200f5c: 0x2cc20014  sltiu       $v0, $a2, 0x14
    ctx->pc = 0x200f5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x200f60: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x200F60u;
    {
        const bool branch_taken_0x200f60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x200F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200F60u;
        // 0x200f64: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200f60) {
            ctx->pc = 0x200FC0u;
            return;
        }
    }
    ctx->pc = 0x200F68u;
    // 0x200f68: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x200f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x200f6c: 0x26070008  addiu       $a3, $s0, 0x8
    ctx->pc = 0x200f6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x200f70: 0x26450008  addiu       $a1, $s2, 0x8
    ctx->pc = 0x200f70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x200f74: 0x2cc4001c  sltiu       $a0, $a2, 0x1C
    ctx->pc = 0x200f74u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)28) ? 1 : 0);
    // 0x200f78: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x200f78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x200f7c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x200f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x200f80: 0x1480000f  bnez        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x200F80u;
    {
        const bool branch_taken_0x200f80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x200F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200F80u;
        // 0x200f84: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200f80) {
            ctx->pc = 0x200FC0u;
            return;
        }
    }
    ctx->pc = 0x200F88u;
    // 0x200f88: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x200f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x200f8c: 0x2cc40024  sltiu       $a0, $a2, 0x24
    ctx->pc = 0x200f8cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)36) ? 1 : 0);
    // 0x200f90: 0x26070010  addiu       $a3, $s0, 0x10
    ctx->pc = 0x200f90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x200f94: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x200f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x200f98: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x200f98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x200f9c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x200f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x200fa0: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x200FA0u;
    {
        const bool branch_taken_0x200fa0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x200FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200FA0u;
        // 0x200fa4: 0xae43000c  sw          $v1, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200fa0) {
            ctx->pc = 0x200FC0u;
            return;
        }
    }
    ctx->pc = 0x200FA8u;
    // 0x200fa8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x200fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x200fac: 0x26070018  addiu       $a3, $s0, 0x18
    ctx->pc = 0x200facu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x200fb0: 0x26450018  addiu       $a1, $s2, 0x18
    ctx->pc = 0x200fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x200fb4: 0xae430010  sw          $v1, 0x10($s2)
    ctx->pc = 0x200fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
    // 0x200fb8: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x200fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x200fbc: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x200fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
    ctx->pc = 0x200fc0u;
}
