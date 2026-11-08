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

// Function: entry_00112f24
// Address: 0x112f24 - 0x112f48
void entry_00112f24_0x112f24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112f24_0x112f24");
#endif

    ctx->pc = 0x112f24u;

    // 0x112f24: 0x0  nop
    ctx->pc = 0x112f24u;
    // NOP
    // 0x112f28: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x112f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x112f2c: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x112f2cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x112f30: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x112F30u;
    {
        const bool branch_taken_0x112f30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x112f30) {
            ctx->pc = 0x112EF4u;
            return;
        }
    }
    ctx->pc = 0x112F38u;
    // 0x112f38: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x112f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x112f3c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x112f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x112f40: 0x100001af  b           . + 4 + (0x1AF << 2)
    ctx->pc = 0x112F40u;
    {
        const bool branch_taken_0x112f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112F40u;
        // 0x112f44: 0xae23002c  sw          $v1, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112f40) {
            ctx->pc = 0x113600u;
            return;
        }
    }
    ctx->pc = 0x112F48u;
}
