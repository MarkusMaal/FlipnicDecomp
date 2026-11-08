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

// Function: FUN_0011a530
// Address: 0x11a530 - 0x11a594
void FUN_0011a530_0x11a530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011a530_0x11a530");
#endif

    switch (ctx->pc) {
        case 0x11a564u: goto label_11a564;
        case 0x11a56cu: goto label_11a56c;
        case 0x11a574u: goto label_11a574;
        case 0x11a57cu: goto label_11a57c;
        default: break;
    }

    ctx->pc = 0x11a530u;

    // 0x11a530: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11a530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11a534: 0x3c011200  lui         $at, 0x1200
    ctx->pc = 0x11a534u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4608 << 16));
    // 0x11a538: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11a538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11a53c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x11a53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11a540: 0xdc231000  ld          $v1, 0x1000($at)
    ctx->pc = 0x11a540u;
    SET_GPR_U64(ctx, 3, runtime->Load64(rdram, ctx, 0x12001000u));
    // 0x11a544: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x11a544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x11a548: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x11a548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11a54c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x11a54cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x11a550: 0x31b43  sra         $v1, $v1, 13
    ctx->pc = 0x11a550u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 13));
    // 0x11a554: 0x14820009  bne         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11A554u;
    {
        const bool branch_taken_0x11a554 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x11A558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A554u;
        // 0x11a558: 0xaf8383dc  sw          $v1, -0x7C24($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935516), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a554) {
            ctx->pc = 0x11A57Cu;
            goto label_11a57c;
        }
    }
    ctx->pc = 0x11A55Cu;
    // 0x11a55c: 0xc07ad60  jal         func_1EB580
    ctx->pc = 0x11A55Cu;
    SET_GPR_U32(ctx, 31, 0x11A564u);
    ctx->pc = 0x11A560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A55Cu;
    // 0x11a560: 0x8f8483cc  lw          $a0, -0x7C34($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935500)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB580u, 0x11A55Cu, 0x11A564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A564u;
label_11a564:
    // 0x11a564: 0xc07b134  jal         func_1EC4D0
    ctx->pc = 0x11A564u;
    SET_GPR_U32(ctx, 31, 0x11A56Cu);
    ctx->pc = 0x11A568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A564u;
    // 0x11a568: 0x8f8483cc  lw          $a0, -0x7C34($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935500)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC4D0u, 0x11A564u, 0x11A56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A56Cu;
label_11a56c:
    // 0x11a56c: 0xc07ad60  jal         func_1EB580
    ctx->pc = 0x11A56Cu;
    SET_GPR_U32(ctx, 31, 0x11A574u);
    ctx->pc = 0x11A570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A56Cu;
    // 0x11a570: 0x8f8483d0  lw          $a0, -0x7C30($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935504)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB580u, 0x11A56Cu, 0x11A574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A574u;
label_11a574:
    // 0x11a574: 0xc07b134  jal         func_1EC4D0
    ctx->pc = 0x11A574u;
    SET_GPR_U32(ctx, 31, 0x11A57Cu);
    ctx->pc = 0x11A578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A574u;
    // 0x11a578: 0x8f8483d0  lw          $a0, -0x7C30($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935504)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC4D0u, 0x11A574u, 0x11A57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A57Cu;
label_11a57c:
    // 0x11a57c: 0xf  sync
    ctx->pc = 0x11a57cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x11a580: 0x42000038  ei
    ctx->pc = 0x11a580u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x11a584: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11a584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a588: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11a588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11a58c: 0x3e00008  jr          $ra
    ctx->pc = 0x11A58Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A58Cu;
        // 0x11a590: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A58Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A594u;
}
