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

// Function: caseD_5
// Address: 0x194ba8 - 0x194bf4
void caseD_5_0x194ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x194ba8");
#endif

    switch (ctx->pc) {
        case 0x194ba8u: goto label_194ba8;
        case 0x194bacu: goto label_194bac;
        case 0x194bb0u: goto label_194bb0;
        case 0x194bb4u: goto label_194bb4;
        case 0x194bb8u: goto label_194bb8;
        case 0x194bbcu: goto label_194bbc;
        case 0x194bc0u: goto label_194bc0;
        case 0x194bc4u: goto label_194bc4;
        case 0x194bc8u: goto label_194bc8;
        case 0x194bccu: goto label_194bcc;
        case 0x194bd0u: goto label_194bd0;
        case 0x194bd4u: goto label_194bd4;
        case 0x194bd8u: goto label_194bd8;
        case 0x194bdcu: goto label_194bdc;
        case 0x194be0u: goto label_194be0;
        case 0x194be4u: goto label_194be4;
        case 0x194be8u: goto label_194be8;
        case 0x194becu: goto label_194bec;
        case 0x194bf0u: goto label_194bf0;
        default: break;
    }

    ctx->pc = 0x194ba8u;

label_194ba8:
    // 0x194ba8: 0xc049e34  jal         func_1278D0
label_194bac:
    if (ctx->pc == 0x194BACu) {
        ctx->pc = 0x194BB0u;
        goto label_194bb0;
    }
    ctx->pc = 0x194BA8u;
    SET_GPR_U32(ctx, 31, 0x194BB0u);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x194BA8u, 0x194BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194BB0u;
label_194bb0:
    // 0x194bb0: 0xc04a02c  jal         func_1280B0
label_194bb4:
    if (ctx->pc == 0x194BB4u) {
        ctx->pc = 0x194BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194BB0u;
        // 0x194bb4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194BB8u;
        goto label_194bb8;
    }
    ctx->pc = 0x194BB0u;
    SET_GPR_U32(ctx, 31, 0x194BB8u);
    ctx->pc = 0x194BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194BB0u;
    // 0x194bb4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1280B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1280B0u, 0x194BB0u, 0x194BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194BB8u;
label_194bb8:
    // 0x194bb8: 0xc049e34  jal         func_1278D0
label_194bbc:
    if (ctx->pc == 0x194BBCu) {
        ctx->pc = 0x194BC0u;
        goto label_194bc0;
    }
    ctx->pc = 0x194BB8u;
    SET_GPR_U32(ctx, 31, 0x194BC0u);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x194BB8u, 0x194BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194BC0u;
label_194bc0:
    // 0x194bc0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x194bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_194bc4:
    // 0x194bc4: 0xc049ed8  jal         func_127B60
label_194bc8:
    if (ctx->pc == 0x194BC8u) {
        ctx->pc = 0x194BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194BC4u;
        // 0x194bc8: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194BCCu;
        goto label_194bcc;
    }
    ctx->pc = 0x194BC4u;
    SET_GPR_U32(ctx, 31, 0x194BCCu);
    ctx->pc = 0x194BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194BC4u;
    // 0x194bc8: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B60u, 0x194BC4u, 0x194BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194BCCu;
label_194bcc:
    // 0x194bcc: 0xc057548  jal         func_15D520
label_194bd0:
    if (ctx->pc == 0x194BD0u) {
        ctx->pc = 0x194BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194BCCu;
        // 0x194bd0: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194BD4u;
        goto label_194bd4;
    }
    ctx->pc = 0x194BCCu;
    SET_GPR_U32(ctx, 31, 0x194BD4u);
    ctx->pc = 0x194BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194BCCu;
    // 0x194bd0: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15D520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D520u, 0x194BCCu, 0x194BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194BD4u;
label_194bd4:
    // 0x194bd4: 0xc04d988  jal         func_136620
label_194bd8:
    if (ctx->pc == 0x194BD8u) {
        ctx->pc = 0x194BDCu;
        goto label_194bdc;
    }
    ctx->pc = 0x194BD4u;
    SET_GPR_U32(ctx, 31, 0x194BDCu);
    ctx->pc = 0x136620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136620u, 0x194BD4u, 0x194BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194BDCu;
label_194bdc:
    // 0x194bdc: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x194bdcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_194be0:
    // 0x194be0: 0x8f3900b4  lw          $t9, 0xB4($t9)
    ctx->pc = 0x194be0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 180)));
label_194be4:
    // 0x194be4: 0x320f809  jalr        $t9
label_194be8:
    if (ctx->pc == 0x194BE8u) {
        ctx->pc = 0x194BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194BE4u;
        // 0x194be8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194BECu;
        goto label_194bec;
    }
    ctx->pc = 0x194BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x194BECu);
        ctx->pc = 0x194BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194BE4u;
        // 0x194be8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194BE4u, 0x194BECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x194BECu;
label_194bec:
    // 0x194bec: 0x1000009c  b           . + 4 + (0x9C << 2)
label_194bf0:
    if (ctx->pc == 0x194BF0u) {
        ctx->pc = 0x194BF4u;
        goto label_fallthrough_0x194bec;
    }
    ctx->pc = 0x194BECu;
    {
        const bool branch_taken_0x194bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x194bec) {
            ctx->pc = 0x194E60u;
            return;
        }
    }
label_fallthrough_0x194bec:
    ctx->pc = 0x194BF4u;
}
