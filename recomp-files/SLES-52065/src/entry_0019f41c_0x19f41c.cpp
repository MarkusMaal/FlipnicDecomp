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

// Function: entry_0019f41c
// Address: 0x19f41c - 0x19f46c
void entry_0019f41c_0x19f41c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f41c_0x19f41c");
#endif

    switch (ctx->pc) {
        case 0x19f424u: goto label_19f424;
        case 0x19f42cu: goto label_19f42c;
        case 0x19f43cu: goto label_19f43c;
        default: break;
    }

    ctx->pc = 0x19f41cu;

label_19f41c:
    // 0x19f41c: 0xc057548  jal         func_15D520
label_19f420:
    if (ctx->pc == 0x19F420u) {
        ctx->pc = 0x19F420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F41Cu;
        // 0x19f420: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F424u;
        goto label_19f424;
    }
    ctx->pc = 0x19F41Cu;
    SET_GPR_U32(ctx, 31, 0x19F424u);
    ctx->pc = 0x19F420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F41Cu;
    // 0x19f420: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15D520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D520u, 0x19F41Cu, 0x19F424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F424u;
label_19f424:
    // 0x19f424: 0xc04d988  jal         func_136620
label_19f428:
    if (ctx->pc == 0x19F428u) {
        ctx->pc = 0x19F42Cu;
        goto label_19f42c;
    }
    ctx->pc = 0x19F424u;
    SET_GPR_U32(ctx, 31, 0x19F42Cu);
    ctx->pc = 0x136620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136620u, 0x19F424u, 0x19F42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F42Cu;
label_19f42c:
    // 0x19f42c: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x19f42cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19f430:
    // 0x19f430: 0x8f3900b4  lw          $t9, 0xB4($t9)
    ctx->pc = 0x19f430u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 180)));
label_19f434:
    // 0x19f434: 0x320f809  jalr        $t9
label_19f438:
    if (ctx->pc == 0x19F438u) {
        ctx->pc = 0x19F438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F434u;
        // 0x19f438: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F43Cu;
        goto label_19f43c;
    }
    ctx->pc = 0x19F434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19F43Cu);
        ctx->pc = 0x19F438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F434u;
        // 0x19f438: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F434u, 0x19F43Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19F43Cu;
label_19f43c:
    // 0x19f43c: 0x8e820694  lw          $v0, 0x694($s4)
    ctx->pc = 0x19f43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1684)));
label_19f440:
    // 0x19f440: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_19f444:
    if (ctx->pc == 0x19F444u) {
        ctx->pc = 0x19F448u;
        goto label_19f448;
    }
    ctx->pc = 0x19F440u;
    {
        const bool branch_taken_0x19f440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19f440) {
            ctx->pc = 0x19F46Cu;
            return;
        }
    }
    ctx->pc = 0x19F448u;
label_19f448:
    // 0x19f448: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x19f448u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_19f44c:
    // 0x19f44c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x19f44cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_19f450:
    // 0x19f450: 0x24a502e0  addiu       $a1, $a1, 0x2E0
    ctx->pc = 0x19f450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 736));
label_19f454:
    // 0x19f454: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x19f454u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_19f458:
    // 0x19f458: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19f458u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f45c:
    // 0x19f45c: 0x24080009  addiu       $t0, $zero, 0x9
    ctx->pc = 0x19f45cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_19f460:
    // 0x19f460: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x19f460u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f464:
    // 0x19f464: 0xc064b40  jal         func_192D00
label_19f468:
    if (ctx->pc == 0x19F468u) {
        ctx->pc = 0x19F468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F464u;
        // 0x19f468: 0x240a0008  addiu       $t2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F46Cu;
        goto label_fallthrough_0x19f464;
    }
    ctx->pc = 0x19F464u;
    SET_GPR_U32(ctx, 31, 0x19F46Cu);
    ctx->pc = 0x19F468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F464u;
    // 0x19f468: 0x240a0008  addiu       $t2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192D00u, 0x19F464u, 0x19F46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_fallthrough_0x19f464:
    ctx->pc = 0x19F46Cu;
}
