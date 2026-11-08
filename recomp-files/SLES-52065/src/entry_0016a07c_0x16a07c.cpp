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

// Function: entry_0016a07c
// Address: 0x16a07c - 0x16a0c0
void entry_0016a07c_0x16a07c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a07c_0x16a07c");
#endif

    switch (ctx->pc) {
        case 0x16a08cu: goto label_16a08c;
        case 0x16a0a0u: goto label_16a0a0;
        case 0x16a0b8u: goto label_16a0b8;
        default: break;
    }

    ctx->pc = 0x16a07cu;

label_16a07c:
    // 0x16a07c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x16a07cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16a080:
    // 0x16a080: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x16a080u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_16a084:
    // 0x16a084: 0x320f809  jalr        $t9
label_16a088:
    if (ctx->pc == 0x16A088u) {
        ctx->pc = 0x16A08Cu;
        goto label_16a08c;
    }
    ctx->pc = 0x16A084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16A08Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A084u, 0x16A08Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16A08Cu;
label_16a08c:
    // 0x16a08c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16a08cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16a090:
    // 0x16a090: 0x14430011  bne         $v0, $v1, . + 4 + (0x11 << 2)
label_16a094:
    if (ctx->pc == 0x16A094u) {
        ctx->pc = 0x16A098u;
        goto label_16a098;
    }
    ctx->pc = 0x16A090u;
    {
        const bool branch_taken_0x16a090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x16a090) {
            ctx->pc = 0x16A0D8u;
            return;
        }
    }
    ctx->pc = 0x16A098u;
label_16a098:
    // 0x16a098: 0xc04be08  jal         func_12F820
label_16a09c:
    if (ctx->pc == 0x16A09Cu) {
        ctx->pc = 0x16A09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A098u;
        // 0x16a09c: 0x8e040228  lw          $a0, 0x228($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 552)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A0A0u;
        goto label_16a0a0;
    }
    ctx->pc = 0x16A098u;
    SET_GPR_U32(ctx, 31, 0x16A0A0u);
    ctx->pc = 0x16A09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A098u;
    // 0x16a09c: 0x8e040228  lw          $a0, 0x228($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 552)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F820u, 0x16A098u, 0x16A0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A0A0u;
label_16a0a0:
    // 0x16a0a0: 0xae000228  sw          $zero, 0x228($s0)
    ctx->pc = 0x16a0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 0));
label_16a0a4:
    // 0x16a0a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16a0a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16a0a8:
    // 0x16a0a8: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x16a0a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_16a0ac:
    // 0x16a0ac: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x16a0acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_16a0b0:
    // 0x16a0b0: 0x320f809  jalr        $t9
label_16a0b4:
    if (ctx->pc == 0x16A0B4u) {
        ctx->pc = 0x16A0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A0B0u;
        // 0x16a0b4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A0B8u;
        goto label_16a0b8;
    }
    ctx->pc = 0x16A0B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16A0B8u);
        ctx->pc = 0x16A0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A0B0u;
        // 0x16a0b4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A0B0u, 0x16A0B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16A0B8u;
label_16a0b8:
    // 0x16a0b8: 0x10000007  b           . + 4 + (0x7 << 2)
label_16a0bc:
    if (ctx->pc == 0x16A0BCu) {
        ctx->pc = 0x16A0C0u;
        goto label_fallthrough_0x16a0b8;
    }
    ctx->pc = 0x16A0B8u;
    {
        const bool branch_taken_0x16a0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a0b8) {
            ctx->pc = 0x16A0D8u;
            return;
        }
    }
label_fallthrough_0x16a0b8:
    ctx->pc = 0x16A0C0u;
}
