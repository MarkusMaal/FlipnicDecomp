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

// Function: entry_0011d520
// Address: 0x11d520 - 0x11d55c
void entry_0011d520_0x11d520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d520_0x11d520");
#endif

    switch (ctx->pc) {
        case 0x11d534u: goto label_11d534;
        case 0x11d544u: goto label_11d544;
        case 0x11d554u: goto label_11d554;
        default: break;
    }

    ctx->pc = 0x11d520u;

    // 0x11d520: 0x8e940038  lw          $s4, 0x38($s4)
    ctx->pc = 0x11d520u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
    // 0x11d524: 0x1680000d  bnez        $s4, . + 4 + (0xD << 2)
    ctx->pc = 0x11D524u;
    {
        const bool branch_taken_0x11d524 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x11d524) {
            ctx->pc = 0x11D55Cu;
            return;
        }
    }
    ctx->pc = 0x11D52Cu;
    // 0x11d52c: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x11D52Cu;
    SET_GPR_U32(ctx, 31, 0x11D534u);
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x11D52Cu, 0x11D534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D534u;
label_11d534:
    // 0x11d534: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11d534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d538: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x11d538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d53c: 0xc04782c  jal         func_11E0B0
    ctx->pc = 0x11D53Cu;
    SET_GPR_U32(ctx, 31, 0x11D544u);
    ctx->pc = 0x11D540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D53Cu;
    // 0x11d540: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E0B0u, 0x11D53Cu, 0x11D544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D544u;
label_11d544:
    // 0x11d544: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x11D544u;
    {
        const bool branch_taken_0x11d544 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d544) {
            ctx->pc = 0x11D5A8u;
            return;
        }
    }
    ctx->pc = 0x11D54Cu;
    // 0x11d54c: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x11D54Cu;
    SET_GPR_U32(ctx, 31, 0x11D554u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x11D54Cu, 0x11D554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D554u;
label_11d554:
    // 0x11d554: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x11D554u;
    {
        const bool branch_taken_0x11d554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D554u;
        // 0x11d558: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d554) {
            ctx->pc = 0x11D5ACu;
            return;
        }
    }
    ctx->pc = 0x11D55Cu;
}
