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

// Function: entry_00191dd0
// Address: 0x191dd0 - 0x191e10
void entry_00191dd0_0x191dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191dd0_0x191dd0");
#endif

    switch (ctx->pc) {
        case 0x191df4u: goto label_191df4;
        default: break;
    }

    ctx->pc = 0x191dd0u;

label_191dd0:
    // 0x191dd0: 0x8c420450  lw          $v0, 0x450($v0)
    ctx->pc = 0x191dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1104)));
label_191dd4:
    // 0x191dd4: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x191dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_191dd8:
    // 0x191dd8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x191dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_191ddc:
    // 0x191ddc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x191ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_191de0:
    // 0x191de0: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x191de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_191de4:
    // 0x191de4: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x191de4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_191de8:
    // 0x191de8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x191de8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_191dec:
    // 0x191dec: 0x320f809  jalr        $t9
label_191df0:
    if (ctx->pc == 0x191DF0u) {
        ctx->pc = 0x191DF4u;
        goto label_191df4;
    }
    ctx->pc = 0x191DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x191DF4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191DECu, 0x191DF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x191DF4u;
label_191df4:
    // 0x191df4: 0x16420006  bne         $s2, $v0, . + 4 + (0x6 << 2)
label_191df8:
    if (ctx->pc == 0x191DF8u) {
        ctx->pc = 0x191DFCu;
        goto label_191dfc;
    }
    ctx->pc = 0x191DF4u;
    {
        const bool branch_taken_0x191df4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x191df4) {
            ctx->pc = 0x191E10u;
            return;
        }
    }
    ctx->pc = 0x191DFCu;
label_191dfc:
    // 0x191dfc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x191dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_191e00:
    // 0x191e00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x191e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_191e04:
    // 0x191e04: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x191e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_191e08:
    // 0x191e08: 0x10000146  b           . + 4 + (0x146 << 2)
label_191e0c:
    if (ctx->pc == 0x191E0Cu) {
        ctx->pc = 0x191E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191E08u;
        // 0x191e0c: 0xac4304d0  sw          $v1, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191E10u;
        goto label_fallthrough_0x191e08;
    }
    ctx->pc = 0x191E08u;
    {
        const bool branch_taken_0x191e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191E08u;
        // 0x191e0c: 0xac4304d0  sw          $v1, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191e08) {
            ctx->pc = 0x192324u;
            return;
        }
    }
label_fallthrough_0x191e08:
    ctx->pc = 0x191E10u;
}
