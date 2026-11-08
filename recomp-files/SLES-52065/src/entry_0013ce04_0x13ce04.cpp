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

// Function: entry_0013ce04
// Address: 0x13ce04 - 0x13ce44
void entry_0013ce04_0x13ce04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ce04_0x13ce04");
#endif

    switch (ctx->pc) {
        case 0x13ce34u: goto label_13ce34;
        default: break;
    }

    ctx->pc = 0x13ce04u;

    // 0x13ce04: 0x8e42010c  lw          $v0, 0x10C($s2)
    ctx->pc = 0x13ce04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
    // 0x13ce08: 0x58880  sll         $s1, $a1, 2
    ctx->pc = 0x13ce08u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x13ce0c: 0x51a021  addu        $s4, $v0, $s1
    ctx->pc = 0x13ce0cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x13ce10: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x13ce10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x13ce14: 0x8c4200a8  lw          $v0, 0xA8($v0)
    ctx->pc = 0x13ce14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
    // 0x13ce18: 0x8c4200b0  lw          $v0, 0xB0($v0)
    ctx->pc = 0x13ce18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x13ce1c: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x13ce1cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13ce20: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x13ce20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x13ce24: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13CE24u;
    {
        const bool branch_taken_0x13ce24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13CE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CE24u;
        // 0x13ce28: 0x2650010c  addiu       $s0, $s2, 0x10C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ce24) {
            ctx->pc = 0x13CE44u;
            return;
        }
    }
    ctx->pc = 0x13CE2Cu;
    // 0x13ce2c: 0xc040168  jal         func_1005A0
    ctx->pc = 0x13CE2Cu;
    SET_GPR_U32(ctx, 31, 0x13CE34u);
    ctx->pc = 0x13CE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CE2Cu;
    // 0x13ce30: 0x132100  sll         $a0, $s3, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x13CE2Cu, 0x13CE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CE34u;
label_13ce34:
    // 0x13ce34: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x13ce34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x13ce38: 0x8c6300a8  lw          $v1, 0xA8($v1)
    ctx->pc = 0x13ce38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 168)));
    // 0x13ce3c: 0x8c6300b0  lw          $v1, 0xB0($v1)
    ctx->pc = 0x13ce3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 176)));
    // 0x13ce40: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x13ce40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    ctx->pc = 0x13ce44u;
}
