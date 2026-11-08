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

// Function: entry_0019f4c8
// Address: 0x19f4c8 - 0x19f518
void entry_0019f4c8_0x19f4c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f4c8_0x19f4c8");
#endif

    switch (ctx->pc) {
        case 0x19f4d0u: goto label_19f4d0;
        case 0x19f4d8u: goto label_19f4d8;
        case 0x19f4e8u: goto label_19f4e8;
        default: break;
    }

    ctx->pc = 0x19f4c8u;

label_19f4c8:
    // 0x19f4c8: 0xc057548  jal         func_15D520
label_19f4cc:
    if (ctx->pc == 0x19F4CCu) {
        ctx->pc = 0x19F4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F4C8u;
        // 0x19f4cc: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F4D0u;
        goto label_19f4d0;
    }
    ctx->pc = 0x19F4C8u;
    SET_GPR_U32(ctx, 31, 0x19F4D0u);
    ctx->pc = 0x19F4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F4C8u;
    // 0x19f4cc: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15D520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D520u, 0x19F4C8u, 0x19F4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F4D0u;
label_19f4d0:
    // 0x19f4d0: 0xc04d988  jal         func_136620
label_19f4d4:
    if (ctx->pc == 0x19F4D4u) {
        ctx->pc = 0x19F4D8u;
        goto label_19f4d8;
    }
    ctx->pc = 0x19F4D0u;
    SET_GPR_U32(ctx, 31, 0x19F4D8u);
    ctx->pc = 0x136620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136620u, 0x19F4D0u, 0x19F4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F4D8u;
label_19f4d8:
    // 0x19f4d8: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x19f4d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19f4dc:
    // 0x19f4dc: 0x8f3900b4  lw          $t9, 0xB4($t9)
    ctx->pc = 0x19f4dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 180)));
label_19f4e0:
    // 0x19f4e0: 0x320f809  jalr        $t9
label_19f4e4:
    if (ctx->pc == 0x19F4E4u) {
        ctx->pc = 0x19F4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F4E0u;
        // 0x19f4e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F4E8u;
        goto label_19f4e8;
    }
    ctx->pc = 0x19F4E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19F4E8u);
        ctx->pc = 0x19F4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F4E0u;
        // 0x19f4e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F4E0u, 0x19F4E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19F4E8u;
label_19f4e8:
    // 0x19f4e8: 0x8e820694  lw          $v0, 0x694($s4)
    ctx->pc = 0x19f4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1684)));
label_19f4ec:
    // 0x19f4ec: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_19f4f0:
    if (ctx->pc == 0x19F4F0u) {
        ctx->pc = 0x19F4F4u;
        goto label_19f4f4;
    }
    ctx->pc = 0x19F4ECu;
    {
        const bool branch_taken_0x19f4ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19f4ec) {
            ctx->pc = 0x19F518u;
            return;
        }
    }
    ctx->pc = 0x19F4F4u;
label_19f4f4:
    // 0x19f4f4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x19f4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_19f4f8:
    // 0x19f4f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x19f4f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_19f4fc:
    // 0x19f4fc: 0x24a502e0  addiu       $a1, $a1, 0x2E0
    ctx->pc = 0x19f4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 736));
label_19f500:
    // 0x19f500: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x19f500u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_19f504:
    // 0x19f504: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19f504u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f508:
    // 0x19f508: 0x24080009  addiu       $t0, $zero, 0x9
    ctx->pc = 0x19f508u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_19f50c:
    // 0x19f50c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x19f50cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f510:
    // 0x19f510: 0xc064b40  jal         func_192D00
label_19f514:
    if (ctx->pc == 0x19F514u) {
        ctx->pc = 0x19F514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F510u;
        // 0x19f514: 0x240a0008  addiu       $t2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F518u;
        goto label_fallthrough_0x19f510;
    }
    ctx->pc = 0x19F510u;
    SET_GPR_U32(ctx, 31, 0x19F518u);
    ctx->pc = 0x19F514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F510u;
    // 0x19f514: 0x240a0008  addiu       $t2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192D00u, 0x19F510u, 0x19F518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_fallthrough_0x19f510:
    ctx->pc = 0x19F518u;
}
