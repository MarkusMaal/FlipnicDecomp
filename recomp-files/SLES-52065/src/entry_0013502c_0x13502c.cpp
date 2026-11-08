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

// Function: entry_0013502c
// Address: 0x13502c - 0x135064
void entry_0013502c_0x13502c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013502c_0x13502c");
#endif

    switch (ctx->pc) {
        case 0x135048u: goto label_135048;
        default: break;
    }

    ctx->pc = 0x13502cu;

label_13502c:
    // 0x13502c: 0x8e4200a4  lw          $v0, 0xA4($s2)
    ctx->pc = 0x13502cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
label_135030:
    // 0x135030: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_135034:
    if (ctx->pc == 0x135034u) {
        ctx->pc = 0x135038u;
        goto label_135038;
    }
    ctx->pc = 0x135030u;
    {
        const bool branch_taken_0x135030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x135030) {
            ctx->pc = 0x135064u;
            return;
        }
    }
    ctx->pc = 0x135038u;
label_135038:
    // 0x135038: 0x8c440050  lw          $a0, 0x50($v0)
    ctx->pc = 0x135038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_13503c:
    // 0x13503c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x13503cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_135040:
    // 0x135040: 0xc080874  jal         func_2021D0
label_135044:
    if (ctx->pc == 0x135044u) {
        ctx->pc = 0x135044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135040u;
        // 0x135044: 0x24a5eee8  addiu       $a1, $a1, -0x1118 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962920));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135048u;
        goto label_135048;
    }
    ctx->pc = 0x135040u;
    SET_GPR_U32(ctx, 31, 0x135048u);
    ctx->pc = 0x135044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135040u;
    // 0x135044: 0x24a5eee8  addiu       $a1, $a1, -0x1118 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2021D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2021D0u, 0x135040u, 0x135048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135048u;
label_135048:
    // 0x135048: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_13504c:
    if (ctx->pc == 0x13504Cu) {
        ctx->pc = 0x135050u;
        goto label_135050;
    }
    ctx->pc = 0x135048u;
    {
        const bool branch_taken_0x135048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x135048) {
            ctx->pc = 0x135064u;
            return;
        }
    }
    ctx->pc = 0x135050u;
label_135050:
    // 0x135050: 0x8e4400a4  lw          $a0, 0xA4($s2)
    ctx->pc = 0x135050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
label_135054:
    // 0x135054: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x135054u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_135058:
    // 0x135058: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x135058u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_13505c:
    // 0x13505c: 0x320f809  jalr        $t9
label_135060:
    if (ctx->pc == 0x135060u) {
        ctx->pc = 0x135060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13505Cu;
        // 0x135060: 0x92450054  lbu         $a1, 0x54($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135064u;
        goto label_fallthrough_0x13505c;
    }
    ctx->pc = 0x13505Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x135064u);
        ctx->pc = 0x135060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13505Cu;
        // 0x135060: 0x92450054  lbu         $a1, 0x54($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13505Cu, 0x135064u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x13505c:
    ctx->pc = 0x135064u;
}
