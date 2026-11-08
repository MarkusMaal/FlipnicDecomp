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

// Function: entry_0010023c
// Address: 0x10023c - 0x1002d8
void entry_0010023c_0x10023c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010023c_0x10023c");
#endif

    switch (ctx->pc) {
        case 0x100250u: goto label_100250;
        case 0x100258u: goto label_100258;
        case 0x100260u: goto label_100260;
        case 0x10026cu: goto label_10026c;
        case 0x10027cu: goto label_10027c;
        case 0x100284u: goto label_100284;
        case 0x100290u: goto label_100290;
        case 0x100298u: goto label_100298;
        case 0x1002a4u: goto label_1002a4;
        case 0x1002b4u: goto label_1002b4;
        case 0x1002bcu: goto label_1002bc;
        case 0x1002c8u: goto label_1002c8;
        case 0x1002d0u: goto label_1002d0;
        default: break;
    }

    ctx->pc = 0x10023cu;

    // 0x10023c: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x10023cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x100240: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x100240u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x100244: 0x2484df80  addiu       $a0, $a0, -0x2080
    ctx->pc = 0x100244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958976));
    // 0x100248: 0xc045f58  jal         func_117D60
    ctx->pc = 0x100248u;
    SET_GPR_U32(ctx, 31, 0x100250u);
    ctx->pc = 0x10024Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100248u;
    // 0x10024c: 0x24a5df88  addiu       $a1, $a1, -0x2078 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117D60u, 0x100248u, 0x100250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100250u;
label_100250:
    // 0x100250: 0xc045fa0  jal         func_117E80
    ctx->pc = 0x100250u;
    SET_GPR_U32(ctx, 31, 0x100258u);
    ctx->pc = 0x117E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117E80u, 0x100250u, 0x100258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100258u;
label_100258:
    // 0x100258: 0xc047a3c  jal         func_11E8F0
    ctx->pc = 0x100258u;
    SET_GPR_U32(ctx, 31, 0x100260u);
    ctx->pc = 0x11E8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E8F0u, 0x100258u, 0x100260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100260u;
label_100260:
    // 0x100260: 0x24450104  addiu       $a1, $v0, 0x104
    ctx->pc = 0x100260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 260));
    // 0x100264: 0xc080702  jal         func_201C08
    ctx->pc = 0x100264u;
    SET_GPR_U32(ctx, 31, 0x10026Cu);
    ctx->pc = 0x100268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100264u;
    // 0x100268: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x100264u, 0x10026Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10026Cu;
label_10026c:
    // 0x10026c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x10026cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x100270: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x100270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x100274: 0xc080664  jal         func_201990
    ctx->pc = 0x100274u;
    SET_GPR_U32(ctx, 31, 0x10027Cu);
    ctx->pc = 0x100278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100274u;
    // 0x100278: 0x24a5df98  addiu       $a1, $a1, -0x2068 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x100274u, 0x10027Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10027Cu;
label_10027c:
    // 0x10027c: 0xc047a50  jal         func_11E940
    ctx->pc = 0x10027Cu;
    SET_GPR_U32(ctx, 31, 0x100284u);
    ctx->pc = 0x11E940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E940u, 0x10027Cu, 0x100284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100284u;
label_100284:
    // 0x100284: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x100284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100288: 0xc046b28  jal         func_11ACA0
    ctx->pc = 0x100288u;
    SET_GPR_U32(ctx, 31, 0x100290u);
    ctx->pc = 0x10028Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100288u;
    // 0x10028c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ACA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ACA0u, 0x100288u, 0x100290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100290u;
label_100290:
    // 0x100290: 0xc047a3c  jal         func_11E8F0
    ctx->pc = 0x100290u;
    SET_GPR_U32(ctx, 31, 0x100298u);
    ctx->pc = 0x11E8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E8F0u, 0x100290u, 0x100298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100298u;
label_100298:
    // 0x100298: 0x24450104  addiu       $a1, $v0, 0x104
    ctx->pc = 0x100298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 260));
    // 0x10029c: 0xc080702  jal         func_201C08
    ctx->pc = 0x10029Cu;
    SET_GPR_U32(ctx, 31, 0x1002A4u);
    ctx->pc = 0x1002A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10029Cu;
    // 0x1002a0: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x10029Cu, 0x1002A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1002A4u;
label_1002a4:
    // 0x1002a4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1002a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1002a8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1002a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1002ac: 0xc080664  jal         func_201990
    ctx->pc = 0x1002ACu;
    SET_GPR_U32(ctx, 31, 0x1002B4u);
    ctx->pc = 0x1002B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1002ACu;
    // 0x1002b0: 0x24a5dfa0  addiu       $a1, $a1, -0x2060 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x1002ACu, 0x1002B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1002B4u;
label_1002b4:
    // 0x1002b4: 0xc047a64  jal         func_11E990
    ctx->pc = 0x1002B4u;
    SET_GPR_U32(ctx, 31, 0x1002BCu);
    ctx->pc = 0x11E990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E990u, 0x1002B4u, 0x1002BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1002BCu;
label_1002bc:
    // 0x1002bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1002bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1002c0: 0xc046b28  jal         func_11ACA0
    ctx->pc = 0x1002C0u;
    SET_GPR_U32(ctx, 31, 0x1002C8u);
    ctx->pc = 0x1002C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1002C0u;
    // 0x1002c4: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ACA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ACA0u, 0x1002C0u, 0x1002C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1002C8u;
label_1002c8:
    // 0x1002c8: 0xc06cf8c  jal         func_1B3E30
    ctx->pc = 0x1002C8u;
    SET_GPR_U32(ctx, 31, 0x1002D0u);
    ctx->pc = 0x1B3E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3E30u, 0x1002C8u, 0x1002D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1002D0u;
label_1002d0:
    // 0x1002d0: 0xc06d400  jal         func_1B5000
    ctx->pc = 0x1002D0u;
    SET_GPR_U32(ctx, 31, 0x1002D8u);
    ctx->pc = 0x1B5000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5000u, 0x1002D0u, 0x1002D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1002D8u;
}
