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

// Function: entry_0011815c
// Address: 0x11815c - 0x1181b8
void entry_0011815c_0x11815c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011815c_0x11815c");
#endif

    switch (ctx->pc) {
        case 0x118164u: goto label_118164;
        case 0x118170u: goto label_118170;
        case 0x118178u: goto label_118178;
        case 0x118184u: goto label_118184;
        case 0x11818cu: goto label_11818c;
        case 0x118198u: goto label_118198;
        case 0x1181a0u: goto label_1181a0;
        case 0x1181a8u: goto label_1181a8;
        default: break;
    }

    ctx->pc = 0x11815cu;

    // 0x11815c: 0xc06d220  jal         func_1B4880
    ctx->pc = 0x11815Cu;
    SET_GPR_U32(ctx, 31, 0x118164u);
    ctx->pc = 0x1B4880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4880u, 0x11815Cu, 0x118164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118164u;
label_118164:
    // 0x118164: 0x27848334  addiu       $a0, $gp, -0x7CCC
    ctx->pc = 0x118164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935348));
    // 0x118168: 0xc053c54  jal         func_14F150
    ctx->pc = 0x118168u;
    SET_GPR_U32(ctx, 31, 0x118170u);
    ctx->pc = 0x11816Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118168u;
    // 0x11816c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F150u, 0x118168u, 0x118170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118170u;
label_118170:
    // 0x118170: 0xc04b1e4  jal         func_12C790
    ctx->pc = 0x118170u;
    SET_GPR_U32(ctx, 31, 0x118178u);
    ctx->pc = 0x12C790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C790u, 0x118170u, 0x118178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118178u;
label_118178:
    // 0x118178: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x118178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11817c: 0xc04b21c  jal         func_12C870
    ctx->pc = 0x11817Cu;
    SET_GPR_U32(ctx, 31, 0x118184u);
    ctx->pc = 0x118180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11817Cu;
    // 0x118180: 0x27858334  addiu       $a1, $gp, -0x7CCC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935348));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C870u, 0x11817Cu, 0x118184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118184u;
label_118184:
    // 0x118184: 0xc04b220  jal         func_12C880
    ctx->pc = 0x118184u;
    SET_GPR_U32(ctx, 31, 0x11818Cu);
    ctx->pc = 0x12C880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C880u, 0x118184u, 0x11818Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11818Cu;
label_11818c:
    // 0x11818c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11818cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118190: 0xc04b27c  jal         func_12C9F0
    ctx->pc = 0x118190u;
    SET_GPR_U32(ctx, 31, 0x118198u);
    ctx->pc = 0x118194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118190u;
    // 0x118194: 0x27858334  addiu       $a1, $gp, -0x7CCC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935348));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C9F0u, 0x118190u, 0x118198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118198u;
label_118198:
    // 0x118198: 0xc045e40  jal         func_117900
    ctx->pc = 0x118198u;
    SET_GPR_U32(ctx, 31, 0x1181A0u);
    ctx->pc = 0x11819Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118198u;
    // 0x11819c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117900u, 0x118198u, 0x1181A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1181A0u;
label_1181a0:
    // 0x1181a0: 0xc061868  jal         func_1861A0
    ctx->pc = 0x1181A0u;
    SET_GPR_U32(ctx, 31, 0x1181A8u);
    ctx->pc = 0x1861A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1861A0u, 0x1181A0u, 0x1181A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1181A8u;
label_1181a8:
    // 0x1181a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1181a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1181ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1181acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1181b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1181B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1181B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1181B0u;
        // 0x1181b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1181B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1181B8u;
}
