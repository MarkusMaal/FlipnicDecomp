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

// Function: entry_0013b34c
// Address: 0x13b34c - 0x13b374
void entry_0013b34c_0x13b34c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b34c_0x13b34c");
#endif

    ctx->pc = 0x13b34cu;

    // 0x13b34c: 0x0  nop
    ctx->pc = 0x13b34cu;
    // NOP
    // 0x13b350: 0x8ea60004  lw          $a2, 0x4($s5)
    ctx->pc = 0x13b350u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x13b354: 0x25290060  addiu       $t1, $t1, 0x60
    ctx->pc = 0x13b354u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 96));
    // 0x13b358: 0x24a50060  addiu       $a1, $a1, 0x60
    ctx->pc = 0x13b358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
    // 0x13b35c: 0x124182b  sltu        $v1, $t1, $a0
    ctx->pc = 0x13b35cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x13b360: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x13b360u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x13b364: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x13B364u;
    {
        const bool branch_taken_0x13b364 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13B368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B364u;
        // 0x13b368: 0xaea60004  sw          $a2, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b364) {
            ctx->pc = 0x13B314u;
            return;
        }
    }
    ctx->pc = 0x13B36Cu;
    // 0x13b36c: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x13B36Cu;
    {
        const bool branch_taken_0x13b36c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b36c) {
            ctx->pc = 0x13B488u;
            return;
        }
    }
    ctx->pc = 0x13B374u;
}
