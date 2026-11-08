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

// Function: entry_00110f88
// Address: 0x110f88 - 0x110fa8
void entry_00110f88_0x110f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110f88_0x110f88");
#endif

    ctx->pc = 0x110f88u;

    // 0x110f88: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x110f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x110f8c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x110f8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x110f90: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x110F90u;
    {
        const bool branch_taken_0x110f90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x110f90) {
            ctx->pc = 0x110F2Cu;
            return;
        }
    }
    ctx->pc = 0x110F98u;
    // 0x110f98: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x110f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x110f9c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x110f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x110fa0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x110FA0u;
    {
        const bool branch_taken_0x110fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110FA0u;
        // 0x110fa4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110fa0) {
            ctx->pc = 0x111008u;
            return;
        }
    }
    ctx->pc = 0x110FA8u;
}
