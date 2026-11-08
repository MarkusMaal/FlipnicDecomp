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

// Function: entry_0013f9f0
// Address: 0x13f9f0 - 0x13fa48
void entry_0013f9f0_0x13f9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f9f0_0x13f9f0");
#endif

    ctx->pc = 0x13f9f0u;

    // 0x13f9f0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x13f9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x13f9f4: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x13f9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x13f9f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13f9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13f9fc: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x13f9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x13fa00: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x13fa00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x13fa04: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x13fa04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x13fa08: 0x10c00045  beqz        $a2, . + 4 + (0x45 << 2)
    ctx->pc = 0x13FA08u;
    {
        const bool branch_taken_0x13fa08 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x13fa08) {
            ctx->pc = 0x13FB20u;
            return;
        }
    }
    ctx->pc = 0x13FA10u;
    // 0x13fa10: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x13fa10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x13fa14: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x13fa14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13fa18: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x13fa18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x13fa1c: 0x85082b  sltu        $at, $a0, $a1
    ctx->pc = 0x13fa1cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x13fa20: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x13FA20u;
    {
        const bool branch_taken_0x13fa20 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FA20u;
        // 0x13fa24: 0x240182d  daddu       $v1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fa20) {
            ctx->pc = 0x13FA48u;
            return;
        }
    }
    ctx->pc = 0x13FA28u;
    // 0x13fa28: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x13fa28u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x13fa2c: 0x27ab0060  addiu       $t3, $sp, 0x60
    ctx->pc = 0x13fa2cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x13fa30: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x13fa30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x13fa34: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x13fa34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x13fa38: 0xafa60064  sw          $a2, 0x64($sp)
    ctx->pc = 0x13fa38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 6));
    // 0x13fa3c: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x13fa3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x13fa40: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x13FA40u;
    {
        const bool branch_taken_0x13fa40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FA40u;
        // 0x13fa44: 0xafb00060  sw          $s0, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fa40) {
            ctx->pc = 0x13FA68u;
            return;
        }
    }
    ctx->pc = 0x13FA48u;
}
