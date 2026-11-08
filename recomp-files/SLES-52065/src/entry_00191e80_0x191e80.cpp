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

// Function: entry_00191e80
// Address: 0x191e80 - 0x191ec0
void entry_00191e80_0x191e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191e80_0x191e80");
#endif

    switch (ctx->pc) {
        case 0x191ea4u: goto label_191ea4;
        default: break;
    }

    ctx->pc = 0x191e80u;

label_191e80:
    // 0x191e80: 0x8c420450  lw          $v0, 0x450($v0)
    ctx->pc = 0x191e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1104)));
label_191e84:
    // 0x191e84: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x191e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_191e88:
    // 0x191e88: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x191e88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_191e8c:
    // 0x191e8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x191e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_191e90:
    // 0x191e90: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x191e90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_191e94:
    // 0x191e94: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x191e94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_191e98:
    // 0x191e98: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x191e98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_191e9c:
    // 0x191e9c: 0x320f809  jalr        $t9
label_191ea0:
    if (ctx->pc == 0x191EA0u) {
        ctx->pc = 0x191EA4u;
        goto label_191ea4;
    }
    ctx->pc = 0x191E9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x191EA4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191E9Cu, 0x191EA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x191EA4u;
label_191ea4:
    // 0x191ea4: 0x12420006  beq         $s2, $v0, . + 4 + (0x6 << 2)
label_191ea8:
    if (ctx->pc == 0x191EA8u) {
        ctx->pc = 0x191EACu;
        goto label_191eac;
    }
    ctx->pc = 0x191EA4u;
    {
        const bool branch_taken_0x191ea4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x191ea4) {
            ctx->pc = 0x191EC0u;
            return;
        }
    }
    ctx->pc = 0x191EACu;
label_191eac:
    // 0x191eac: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x191eacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_191eb0:
    // 0x191eb0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x191eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_191eb4:
    // 0x191eb4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x191eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_191eb8:
    // 0x191eb8: 0x1000011a  b           . + 4 + (0x11A << 2)
label_191ebc:
    if (ctx->pc == 0x191EBCu) {
        ctx->pc = 0x191EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191EB8u;
        // 0x191ebc: 0xac4304d0  sw          $v1, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191EC0u;
        goto label_fallthrough_0x191eb8;
    }
    ctx->pc = 0x191EB8u;
    {
        const bool branch_taken_0x191eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191EB8u;
        // 0x191ebc: 0xac4304d0  sw          $v1, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191eb8) {
            ctx->pc = 0x192324u;
            return;
        }
    }
label_fallthrough_0x191eb8:
    ctx->pc = 0x191EC0u;
}
