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

// Function: entry_001c5f20
// Address: 0x1c5f20 - 0x1c5f68
void entry_001c5f20_0x1c5f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5f20_0x1c5f20");
#endif

    ctx->pc = 0x1c5f20u;

    // 0x1c5f20: 0x10600031  beqz        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x1C5F20u;
    {
        const bool branch_taken_0x1c5f20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5f20) {
            ctx->pc = 0x1C5FE8u;
            return;
        }
    }
    ctx->pc = 0x1C5F28u;
    // 0x1c5f28: 0x9242006c  lbu         $v0, 0x6C($s2)
    ctx->pc = 0x1c5f28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 108)));
    // 0x1c5f2c: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1C5F2Cu;
    {
        const bool branch_taken_0x1c5f2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c5f2c) {
            ctx->pc = 0x1C5FB8u;
            return;
        }
    }
    ctx->pc = 0x1C5F34u;
    // 0x1c5f34: 0x8e43005c  lw          $v1, 0x5C($s2)
    ctx->pc = 0x1c5f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x1c5f38: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c5f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c5f3c: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C5F3Cu;
    {
        const bool branch_taken_0x1c5f3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C5F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5F3Cu;
        // 0x1c5f40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5f3c) {
            ctx->pc = 0x1C5FA4u;
            return;
        }
    }
    ctx->pc = 0x1C5F44u;
    // 0x1c5f44: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c5f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c5f48: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C5F48u;
    {
        const bool branch_taken_0x1c5f48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C5F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5F48u;
        // 0x1c5f4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5f48) {
            ctx->pc = 0x1C5F90u;
            return;
        }
    }
    ctx->pc = 0x1C5F50u;
    // 0x1c5f50: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C5F50u;
    {
        const bool branch_taken_0x1c5f50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c5f50) {
            ctx->pc = 0x1C5F7Cu;
            return;
        }
    }
    ctx->pc = 0x1C5F58u;
    // 0x1c5f58: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C5F58u;
    {
        const bool branch_taken_0x1c5f58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5f58) {
            ctx->pc = 0x1C5F68u;
            return;
        }
    }
    ctx->pc = 0x1C5F60u;
    // 0x1c5f60: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1C5F60u;
    {
        const bool branch_taken_0x1c5f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5F60u;
        // 0x1c5f64: 0x9242006c  lbu         $v0, 0x6C($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5f60) {
            ctx->pc = 0x1C5FECu;
            return;
        }
    }
    ctx->pc = 0x1C5F68u;
}
