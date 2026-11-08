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

// Function: FUN_00127390
// Address: 0x127390 - 0x12746c
void FUN_00127390_0x127390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00127390_0x127390");
#endif

    switch (ctx->pc) {
        case 0x1273b8u: goto label_1273b8;
        case 0x1273c8u: goto label_1273c8;
        case 0x1273d4u: goto label_1273d4;
        case 0x1273f8u: goto label_1273f8;
        case 0x127400u: goto label_127400;
        case 0x127410u: goto label_127410;
        case 0x127420u: goto label_127420;
        case 0x12742cu: goto label_12742c;
        case 0x12743cu: goto label_12743c;
        case 0x127448u: goto label_127448;
        case 0x127454u: goto label_127454;
        default: break;
    }

    ctx->pc = 0x127390u;

    // 0x127390: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x127390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x127394: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x127394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x127398: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x127398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x12739c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12739cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1273a0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1273a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1273a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1273a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1273a8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1273a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1273ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1273acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1273b0: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x1273B0u;
    SET_GPR_U32(ctx, 31, 0x1273B8u);
    ctx->pc = 0x1273B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1273B0u;
    // 0x1273b4: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x1273B0u, 0x1273B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1273B8u;
label_1273b8:
    // 0x1273b8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1273b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1273bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1273bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1273c0: 0xc07d370  jal         func_1F4DC0
    ctx->pc = 0x1273C0u;
    SET_GPR_U32(ctx, 31, 0x1273C8u);
    ctx->pc = 0x1273C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1273C0u;
    // 0x1273c4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DC0u, 0x1273C0u, 0x1273C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1273C8u;
label_1273c8:
    // 0x1273c8: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x1273c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x1273cc: 0xc07d312  jal         func_1F4C48
    ctx->pc = 0x1273CCu;
    SET_GPR_U32(ctx, 31, 0x1273D4u);
    ctx->pc = 0x1273D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1273CCu;
    // 0x1273d0: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x1273CCu, 0x1273D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1273D4u;
label_1273d4:
    // 0x1273d4: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x1273d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x1273d8: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x1273d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1273dc: 0x24420b80  addiu       $v0, $v0, 0xB80
    ctx->pc = 0x1273dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2944));
    // 0x1273e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1273e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1273e4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1273e4u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x210B80u));
    // 0x1273e8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1273e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1273ec: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1273ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1273f0: 0xc07d370  jal         func_1F4DC0
    ctx->pc = 0x1273F0u;
    SET_GPR_U32(ctx, 31, 0x1273F8u);
    ctx->pc = 0x1273F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1273F0u;
    // 0x1273f4: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DC0u, 0x1273F0u, 0x1273F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1273F8u;
label_1273f8:
    // 0x1273f8: 0xc07d3ac  jal         func_1F4EB0
    ctx->pc = 0x1273F8u;
    SET_GPR_U32(ctx, 31, 0x127400u);
    ctx->pc = 0x1273FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1273F8u;
    // 0x1273fc: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x1273F8u, 0x127400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127400u;
label_127400:
    // 0x127400: 0x27b10070  addiu       $s1, $sp, 0x70
    ctx->pc = 0x127400u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x127404: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x127404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x127408: 0xc07d312  jal         func_1F4C48
    ctx->pc = 0x127408u;
    SET_GPR_U32(ctx, 31, 0x127410u);
    ctx->pc = 0x12740Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127408u;
    // 0x12740c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x127408u, 0x127410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127410u;
label_127410:
    // 0x127410: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x127410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x127414: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x127414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x127418: 0xc07d300  jal         func_1F4C00
    ctx->pc = 0x127418u;
    SET_GPR_U32(ctx, 31, 0x127420u);
    ctx->pc = 0x12741Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127418u;
    // 0x12741c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C00u, 0x127418u, 0x127420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127420u;
label_127420:
    // 0x127420: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x127420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x127424: 0xc07d312  jal         func_1F4C48
    ctx->pc = 0x127424u;
    SET_GPR_U32(ctx, 31, 0x12742Cu);
    ctx->pc = 0x127428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127424u;
    // 0x127428: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x127424u, 0x12742Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12742Cu;
label_12742c:
    // 0x12742c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12742cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127430: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x127430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x127434: 0xc07d300  jal         func_1F4C00
    ctx->pc = 0x127434u;
    SET_GPR_U32(ctx, 31, 0x12743Cu);
    ctx->pc = 0x127438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127434u;
    // 0x127438: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C00u, 0x127434u, 0x12743Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12743Cu;
label_12743c:
    // 0x12743c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x12743cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x127440: 0xc07d312  jal         func_1F4C48
    ctx->pc = 0x127440u;
    SET_GPR_U32(ctx, 31, 0x127448u);
    ctx->pc = 0x127444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127440u;
    // 0x127444: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x127440u, 0x127448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127448u;
label_127448:
    // 0x127448: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x127448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x12744c: 0xc07d392  jal         func_1F4E48
    ctx->pc = 0x12744Cu;
    SET_GPR_U32(ctx, 31, 0x127454u);
    ctx->pc = 0x127450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12744Cu;
    // 0x127450: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E48u, 0x12744Cu, 0x127454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127454u;
label_127454:
    // 0x127454: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x127454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x127458: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x127458u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12745c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12745cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x127460: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x127460u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x127464: 0x3e00008  jr          $ra
    ctx->pc = 0x127464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127464u;
        // 0x127468: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127464u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12746Cu;
}
