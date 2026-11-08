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

// Function: caseD_d
// Address: 0x194dcc - 0x194e18
void caseD_d_0x194dcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_d_0x194dcc");
#endif

    switch (ctx->pc) {
        case 0x194dccu: goto label_194dcc;
        case 0x194dd0u: goto label_194dd0;
        case 0x194dd4u: goto label_194dd4;
        case 0x194dd8u: goto label_194dd8;
        case 0x194ddcu: goto label_194ddc;
        case 0x194de0u: goto label_194de0;
        case 0x194de4u: goto label_194de4;
        case 0x194de8u: goto label_194de8;
        case 0x194decu: goto label_194dec;
        case 0x194df0u: goto label_194df0;
        case 0x194df4u: goto label_194df4;
        case 0x194df8u: goto label_194df8;
        case 0x194dfcu: goto label_194dfc;
        case 0x194e00u: goto label_194e00;
        case 0x194e04u: goto label_194e04;
        case 0x194e08u: goto label_194e08;
        case 0x194e0cu: goto label_194e0c;
        case 0x194e10u: goto label_194e10;
        case 0x194e14u: goto label_194e14;
        default: break;
    }

    ctx->pc = 0x194dccu;

label_194dcc:
    // 0x194dcc: 0x0  nop
    ctx->pc = 0x194dccu;
    // NOP
label_194dd0:
    // 0x194dd0: 0x8f9185f4  lw          $s1, -0x7A0C($gp)
    ctx->pc = 0x194dd0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_194dd4:
    // 0x194dd4: 0x8e243ddc  lw          $a0, 0x3DDC($s1)
    ctx->pc = 0x194dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 15836)));
label_194dd8:
    // 0x194dd8: 0x8e233dd8  lw          $v1, 0x3DD8($s1)
    ctx->pc = 0x194dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 15832)));
label_194ddc:
    // 0x194ddc: 0x10830020  beq         $a0, $v1, . + 4 + (0x20 << 2)
label_194de0:
    if (ctx->pc == 0x194DE0u) {
        ctx->pc = 0x194DE4u;
        goto label_194de4;
    }
    ctx->pc = 0x194DDCu;
    {
        const bool branch_taken_0x194ddc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x194ddc) {
            ctx->pc = 0x194E60u;
            return;
        }
    }
    ctx->pc = 0x194DE4u;
label_194de4:
    // 0x194de4: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x194de4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_194de8:
    // 0x194de8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x194de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_194dec:
    // 0x194dec: 0x8c443cd8  lw          $a0, 0x3CD8($v0)
    ctx->pc = 0x194decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15576)));
label_194df0:
    // 0x194df0: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x194df0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_194df4:
    // 0x194df4: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x194df4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_194df8:
    // 0x194df8: 0x320f809  jalr        $t9
label_194dfc:
    if (ctx->pc == 0x194DFCu) {
        ctx->pc = 0x194E00u;
        goto label_194e00;
    }
    ctx->pc = 0x194DF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x194E00u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194DF8u, 0x194E00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x194E00u;
label_194e00:
    // 0x194e00: 0x8e233ddc  lw          $v1, 0x3DDC($s1)
    ctx->pc = 0x194e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 15836)));
label_194e04:
    // 0x194e04: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x194e04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_194e08:
    // 0x194e08: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x194e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_194e0c:
    // 0x194e0c: 0x8c633cd8  lw          $v1, 0x3CD8($v1)
    ctx->pc = 0x194e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15576)));
label_194e10:
    // 0x194e10: 0x10000013  b           . + 4 + (0x13 << 2)
label_194e14:
    if (ctx->pc == 0x194E14u) {
        ctx->pc = 0x194E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194E10u;
        // 0x194e14: 0xa06001f9  sb          $zero, 0x1F9($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 505), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194E18u;
        goto label_fallthrough_0x194e10;
    }
    ctx->pc = 0x194E10u;
    {
        const bool branch_taken_0x194e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194E10u;
        // 0x194e14: 0xa06001f9  sb          $zero, 0x1F9($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 505), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194e10) {
            ctx->pc = 0x194E60u;
            return;
        }
    }
label_fallthrough_0x194e10:
    ctx->pc = 0x194E18u;
}
