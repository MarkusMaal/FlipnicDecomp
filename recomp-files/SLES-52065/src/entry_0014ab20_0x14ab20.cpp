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

// Function: entry_0014ab20
// Address: 0x14ab20 - 0x14ab4c
void entry_0014ab20_0x14ab20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ab20_0x14ab20");
#endif

    switch (ctx->pc) {
        case 0x14ab44u: goto label_14ab44;
        default: break;
    }

    ctx->pc = 0x14ab20u;

    // 0x14ab20: 0x8ea30018  lw          $v1, 0x18($s5)
    ctx->pc = 0x14ab20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x14ab24: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x14ab24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x14ab28: 0xaea30018  sw          $v1, 0x18($s5)
    ctx->pc = 0x14ab28u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 3));
    // 0x14ab2c: 0x27a3017c  addiu       $v1, $sp, 0x17C
    ctx->pc = 0x14ab2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 380));
    // 0x14ab30: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x14ab30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14ab34: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x14AB34u;
    {
        const bool branch_taken_0x14ab34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ab34) {
            ctx->pc = 0x14AB7Cu;
            return;
        }
    }
    ctx->pc = 0x14AB3Cu;
    // 0x14ab3c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x14AB3Cu;
    SET_GPR_U32(ctx, 31, 0x14AB44u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x14AB3Cu, 0x14AB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AB44u;
label_14ab44:
    // 0x14ab44: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x14AB44u;
    {
        const bool branch_taken_0x14ab44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ab44) {
            ctx->pc = 0x14AB7Cu;
            return;
        }
    }
    ctx->pc = 0x14AB4Cu;
}
