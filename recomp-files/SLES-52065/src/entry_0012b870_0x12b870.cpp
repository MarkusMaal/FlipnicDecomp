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

// Function: entry_0012b870
// Address: 0x12b870 - 0x12b8ac
void entry_0012b870_0x12b870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b870_0x12b870");
#endif

    switch (ctx->pc) {
        case 0x12b888u: goto label_12b888;
        default: break;
    }

    ctx->pc = 0x12b870u;

label_12b870:
    // 0x12b870: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x12b870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_12b874:
    // 0x12b874: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x12b874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_12b878:
    // 0x12b878: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x12b878u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_12b87c:
    // 0x12b87c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x12b87cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_12b880:
    // 0x12b880: 0x320f809  jalr        $t9
label_12b884:
    if (ctx->pc == 0x12B884u) {
        ctx->pc = 0x12B888u;
        goto label_12b888;
    }
    ctx->pc = 0x12B880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x12B888u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B880u, 0x12B888u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12B888u;
label_12b888:
    // 0x12b888: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x12b888u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_12b88c:
    // 0x12b88c: 0x2a230003  slti        $v1, $s1, 0x3
    ctx->pc = 0x12b88cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
label_12b890:
    // 0x12b890: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_12b894:
    if (ctx->pc == 0x12B894u) {
        ctx->pc = 0x12B894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B890u;
        // 0x12b894: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B898u;
        goto label_12b898;
    }
    ctx->pc = 0x12B890u;
    {
        const bool branch_taken_0x12b890 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B890u;
        // 0x12b894: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b890) {
            ctx->pc = 0x12B870u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b870;
        }
    }
    ctx->pc = 0x12B898u;
label_12b898:
    // 0x12b898: 0x83838480  lb          $v1, -0x7B80($gp)
    ctx->pc = 0x12b898u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935680)));
label_12b89c:
    // 0x12b89c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_12b8a0:
    if (ctx->pc == 0x12B8A0u) {
        ctx->pc = 0x12B8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B89Cu;
        // 0x12b8a0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B8A4u;
        goto label_12b8a4;
    }
    ctx->pc = 0x12B89Cu;
    {
        const bool branch_taken_0x12b89c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B89Cu;
        // 0x12b8a0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b89c) {
            ctx->pc = 0x12B8ACu;
            return;
        }
    }
    ctx->pc = 0x12B8A4u;
label_12b8a4:
    // 0x12b8a4: 0xaf80847c  sw          $zero, -0x7B84($gp)
    ctx->pc = 0x12b8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935676), GPR_U32(ctx, 0));
label_12b8a8:
    // 0x12b8a8: 0xa3838480  sb          $v1, -0x7B80($gp)
    ctx->pc = 0x12b8a8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935680), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x12b8acu;
}
