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

// Function: entry_001f3ea8
// Address: 0x1f3ea8 - 0x1f3ed8
void entry_001f3ea8_0x1f3ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f3ea8_0x1f3ea8");
#endif

    switch (ctx->pc) {
        case 0x1f3eccu: goto label_1f3ecc;
        case 0x1f3ed4u: goto label_1f3ed4;
        default: break;
    }

    ctx->pc = 0x1f3ea8u;

    // 0x1f3ea8: 0x2650aab8  addiu       $s0, $s2, -0x5548
    ctx->pc = 0x1f3ea8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294945464));
    // 0x1f3eac: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1f3eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1f3eb0: 0x3228821  addu        $s1, $t9, $v0
    ctx->pc = 0x1f3eb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
    // 0x1f3eb4: 0x2a230031  slti        $v1, $s1, 0x31
    ctx->pc = 0x1f3eb4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)49) ? 1 : 0);
    // 0x1f3eb8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F3EB8u;
    {
        const bool branch_taken_0x1f3eb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F3EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3EB8u;
        // 0x1f3ebc: 0x331102a  slt         $v0, $t9, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3eb8) {
            ctx->pc = 0x1F3ED8u;
            return;
        }
    }
    ctx->pc = 0x1F3EC0u;
    // 0x1f3ec0: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1f3ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1f3ec4: 0xc07b5a2  jal         func_1ED688
    ctx->pc = 0x1F3EC4u;
    SET_GPR_U32(ctx, 31, 0x1F3ECCu);
    ctx->pc = 0x1F3EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3EC4u;
    // 0x1f3ec8: 0x248444d0  addiu       $a0, $a0, 0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED688u, 0x1F3EC4u, 0x1F3ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3ECCu;
label_1f3ecc:
    // 0x1f3ecc: 0xc07d274  jal         func_1F49D0
    ctx->pc = 0x1F3ECCu;
    SET_GPR_U32(ctx, 31, 0x1F3ED4u);
    ctx->pc = 0x1F3ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3ECCu;
    // 0x1f3ed0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F49D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F49D0u, 0x1F3ECCu, 0x1F3ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3ED4u;
label_1f3ed4:
    // 0x1f3ed4: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x1f3ed4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    ctx->pc = 0x1f3ed8u;
}
