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

// Function: entry_00198b20
// Address: 0x198b20 - 0x198b54
void entry_00198b20_0x198b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198b20_0x198b20");
#endif

    switch (ctx->pc) {
        case 0x198b48u: goto label_198b48;
        default: break;
    }

    ctx->pc = 0x198b20u;

    // 0x198b20: 0x8ea30340  lw          $v1, 0x340($s5)
    ctx->pc = 0x198b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 832)));
    // 0x198b24: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x198b24u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x198b28: 0x1460ff6b  bnez        $v1, . + 4 + (-0x95 << 2)
    ctx->pc = 0x198B28u;
    {
        const bool branch_taken_0x198b28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x198B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198B28u;
        // 0x198b2c: 0x2b08821  addu        $s1, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198b28) {
            ctx->pc = 0x1988D8u;
            return;
        }
    }
    ctx->pc = 0x198B30u;
    // 0x198b30: 0x8ea30320  lw          $v1, 0x320($s5)
    ctx->pc = 0x198b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 800)));
    // 0x198b34: 0x1460003f  bnez        $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x198B34u;
    {
        const bool branch_taken_0x198b34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x198b34) {
            ctx->pc = 0x198C34u;
            return;
        }
    }
    ctx->pc = 0x198B3Cu;
    // 0x198b3c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x198b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198b40: 0xc063e08  jal         func_18F820
    ctx->pc = 0x198B40u;
    SET_GPR_U32(ctx, 31, 0x198B48u);
    ctx->pc = 0x198B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198B40u;
    // 0x198b44: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x198B40u, 0x198B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198B48u;
label_198b48:
    // 0x198b48: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x198B48u;
    {
        const bool branch_taken_0x198b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x198b48) {
            ctx->pc = 0x198C34u;
            return;
        }
    }
    ctx->pc = 0x198B50u;
    // 0x198b50: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x198b50u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x198b54u;
}
