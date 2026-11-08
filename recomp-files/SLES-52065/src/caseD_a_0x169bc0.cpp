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

// Function: caseD_a
// Address: 0x169bc0 - 0x169be4
void caseD_a_0x169bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_a_0x169bc0");
#endif

    switch (ctx->pc) {
        case 0x169bc0u: goto label_169bc0;
        case 0x169bc4u: goto label_169bc4;
        case 0x169bc8u: goto label_169bc8;
        case 0x169bccu: goto label_169bcc;
        case 0x169bd0u: goto label_169bd0;
        case 0x169bd4u: goto label_169bd4;
        case 0x169bd8u: goto label_169bd8;
        case 0x169bdcu: goto label_169bdc;
        case 0x169be0u: goto label_169be0;
        default: break;
    }

    ctx->pc = 0x169bc0u;

label_169bc0:
    // 0x169bc0: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x169bc0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_169bc4:
    // 0x169bc4: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x169bc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_169bc8:
    // 0x169bc8: 0x320f809  jalr        $t9
label_169bcc:
    if (ctx->pc == 0x169BCCu) {
        ctx->pc = 0x169BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169BC8u;
        // 0x169bcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169BD0u;
        goto label_169bd0;
    }
    ctx->pc = 0x169BC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x169BD0u);
        ctx->pc = 0x169BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169BC8u;
        // 0x169bcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169BC8u, 0x169BD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x169BD0u;
label_169bd0:
    // 0x169bd0: 0x92040223  lbu         $a0, 0x223($s0)
    ctx->pc = 0x169bd0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 547)));
label_169bd4:
    // 0x169bd4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_169bd8:
    if (ctx->pc == 0x169BD8u) {
        ctx->pc = 0x169BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169BD4u;
        // 0x169bd8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169BDCu;
        goto label_169bdc;
    }
    ctx->pc = 0x169BD4u;
    {
        const bool branch_taken_0x169bd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x169BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169BD4u;
        // 0x169bd8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169bd4) {
            ctx->pc = 0x169BE4u;
            return;
        }
    }
    ctx->pc = 0x169BDCu;
label_169bdc:
    // 0x169bdc: 0x14830012  bne         $a0, $v1, . + 4 + (0x12 << 2)
label_169be0:
    if (ctx->pc == 0x169BE0u) {
        ctx->pc = 0x169BE4u;
        goto label_fallthrough_0x169bdc;
    }
    ctx->pc = 0x169BDCu;
    {
        const bool branch_taken_0x169bdc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x169bdc) {
            ctx->pc = 0x169C28u;
            return;
        }
    }
label_fallthrough_0x169bdc:
    ctx->pc = 0x169BE4u;
}
