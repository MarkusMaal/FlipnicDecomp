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

// Function: entry_00204c00
// Address: 0x204c00 - 0x204c4c
void entry_00204c00_0x204c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00204c00_0x204c00");
#endif

    ctx->pc = 0x204c00u;

    // 0x204c00: 0x8fa301dc  lw          $v1, 0x1DC($sp)
    ctx->pc = 0x204c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x204c04: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x204c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x204c08: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x204c08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x204c0c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x204c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x204c10: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x204c10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x204c14: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x204c14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x204c18: 0x8fa301e0  lw          $v1, 0x1E0($sp)
    ctx->pc = 0x204c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x204c1c: 0x8fa501dc  lw          $a1, 0x1DC($sp)
    ctx->pc = 0x204c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x204c20: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x204c20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x204c24: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x204c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x204c28: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x204c28u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x204c2c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x204c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x204c30: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x204c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x204c34: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x204c34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x204c38: 0x28430008  slti        $v1, $v0, 0x8
    ctx->pc = 0x204c38u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x204c3c: 0x14600081  bnez        $v1, . + 4 + (0x81 << 2)
    ctx->pc = 0x204C3Cu;
    {
        const bool branch_taken_0x204c3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x204C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204C3Cu;
        // 0x204c40: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204c3c) {
            ctx->pc = 0x204E44u;
            return;
        }
    }
    ctx->pc = 0x204C44u;
    // 0x204c44: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x204C44u;
    {
        const bool branch_taken_0x204c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204C44u;
        // 0x204c48: 0x8fa401e8  lw          $a0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204c44) {
            ctx->pc = 0x204E34u;
            return;
        }
    }
    ctx->pc = 0x204C4Cu;
}
