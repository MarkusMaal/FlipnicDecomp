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

// Function: entry_0014ac0c
// Address: 0x14ac0c - 0x14ac34
void entry_0014ac0c_0x14ac0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ac0c_0x14ac0c");
#endif

    ctx->pc = 0x14ac0cu;

    // 0x14ac0c: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x14ac0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x14ac10: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x14ac10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x14ac14: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x14ac14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x14ac18: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x14ac18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x14ac1c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x14ac1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x14ac20: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x14ac20u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x14ac24: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14AC24u;
    {
        const bool branch_taken_0x14ac24 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x14AC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AC24u;
        // 0x14ac28: 0x21883  sra         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ac24) {
            ctx->pc = 0x14AC34u;
            return;
        }
    }
    ctx->pc = 0x14AC2Cu;
    // 0x14ac2c: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x14ac2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x14ac30: 0x21883  sra         $v1, $v0, 2
    ctx->pc = 0x14ac30u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
    ctx->pc = 0x14ac34u;
}
