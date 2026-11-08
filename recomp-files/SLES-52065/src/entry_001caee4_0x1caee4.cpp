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

// Function: entry_001caee4
// Address: 0x1caee4 - 0x1caf30
void entry_001caee4_0x1caee4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001caee4_0x1caee4");
#endif

    ctx->pc = 0x1caee4u;

    // 0x1caee4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1caee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1caee8: 0xae030074  sw          $v1, 0x74($s0)
    ctx->pc = 0x1caee8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 3));
    // 0x1caeec: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x1caeecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1caef0: 0xae030078  sw          $v1, 0x78($s0)
    ctx->pc = 0x1caef0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 3));
    // 0x1caef4: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x1caef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1caef8: 0x10620036  beq         $v1, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x1CAEF8u;
    {
        const bool branch_taken_0x1caef8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CAEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAEF8u;
        // 0x1caefc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caef8) {
            ctx->pc = 0x1CAFD4u;
            return;
        }
    }
    ctx->pc = 0x1CAF00u;
    // 0x1caf00: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1caf00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1caf04: 0x10620029  beq         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1CAF04u;
    {
        const bool branch_taken_0x1caf04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CAF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAF04u;
        // 0x1caf08: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caf04) {
            ctx->pc = 0x1CAFACu;
            return;
        }
    }
    ctx->pc = 0x1CAF0Cu;
    // 0x1caf0c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1caf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1caf10: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1CAF10u;
    {
        const bool branch_taken_0x1caf10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CAF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAF10u;
        // 0x1caf14: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caf10) {
            ctx->pc = 0x1CAF80u;
            return;
        }
    }
    ctx->pc = 0x1CAF18u;
    // 0x1caf18: 0x106b000f  beq         $v1, $t3, . + 4 + (0xF << 2)
    ctx->pc = 0x1CAF18u;
    {
        const bool branch_taken_0x1caf18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 11));
        if (branch_taken_0x1caf18) {
            ctx->pc = 0x1CAF58u;
            return;
        }
    }
    ctx->pc = 0x1CAF20u;
    // 0x1caf20: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CAF20u;
    {
        const bool branch_taken_0x1caf20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAF20u;
        // 0x1caf24: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caf20) {
            ctx->pc = 0x1CAF30u;
            return;
        }
    }
    ctx->pc = 0x1CAF28u;
    // 0x1caf28: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1CAF28u;
    {
        const bool branch_taken_0x1caf28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAF28u;
        // 0x1caf2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caf28) {
            ctx->pc = 0x1CAFF0u;
            return;
        }
    }
    ctx->pc = 0x1CAF30u;
}
