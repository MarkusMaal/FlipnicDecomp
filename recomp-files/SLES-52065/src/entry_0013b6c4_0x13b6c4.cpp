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

// Function: entry_0013b6c4
// Address: 0x13b6c4 - 0x13b6e4
void entry_0013b6c4_0x13b6c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b6c4_0x13b6c4");
#endif

    ctx->pc = 0x13b6c4u;

    // 0x13b6c4: 0x0  nop
    ctx->pc = 0x13b6c4u;
    // NOP
    // 0x13b6c8: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x13b6c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13b6cc: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x13b6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x13b6d0: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x13b6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x13b6d4: 0x82282b  sltu        $a1, $a0, $v0
    ctx->pc = 0x13b6d4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x13b6d8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x13b6d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x13b6dc: 0x14a0ffeb  bnez        $a1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x13B6DCu;
    {
        const bool branch_taken_0x13b6dc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x13B6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B6DCu;
        // 0x13b6e0: 0xae260000  sw          $a2, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b6dc) {
            ctx->pc = 0x13B68Cu;
            return;
        }
    }
    ctx->pc = 0x13B6E4u;
}
