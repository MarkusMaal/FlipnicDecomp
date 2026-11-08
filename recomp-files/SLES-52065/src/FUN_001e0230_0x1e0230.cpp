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

// Function: FUN_001e0230
// Address: 0x1e0230 - 0x1e0310
void FUN_001e0230_0x1e0230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e0230_0x1e0230");
#endif

    switch (ctx->pc) {
        case 0x1e0268u: goto label_1e0268;
        case 0x1e0284u: goto label_1e0284;
        case 0x1e0294u: goto label_1e0294;
        case 0x1e02a0u: goto label_1e02a0;
        case 0x1e02a8u: goto label_1e02a8;
        case 0x1e02b4u: goto label_1e02b4;
        case 0x1e02c8u: goto label_1e02c8;
        case 0x1e02d4u: goto label_1e02d4;
        case 0x1e02e4u: goto label_1e02e4;
        case 0x1e02f4u: goto label_1e02f4;
        default: break;
    }

    ctx->pc = 0x1e0230u;

    // 0x1e0230: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e0230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e0234: 0x411c0  sll         $v0, $a0, 7
    ctx->pc = 0x1e0234u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
    // 0x1e0238: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e0238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e023c: 0x3c110039  lui         $s1, 0x39
    ctx->pc = 0x1e023cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)57 << 16));
    // 0x1e0240: 0x26319f00  addiu       $s1, $s1, -0x6100
    ctx->pc = 0x1e0240u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294942464));
    // 0x1e0244: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x1e0244u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1e0248: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1e0248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e024c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1e024cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0250: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e0250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e0254: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1e0254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1e0258: 0x4600027  bltz        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x1E0258u;
    {
        const bool branch_taken_0x1e0258 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1E025Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0258u;
        // 0x1e025c: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0258) {
            ctx->pc = 0x1E02F8u;
            goto label_1e02f8;
        }
    }
    ctx->pc = 0x1E0260u;
    // 0x1e0260: 0xc08218c  jal         func_208630
    ctx->pc = 0x1E0260u;
    SET_GPR_U32(ctx, 31, 0x1E0268u);
    ctx->pc = 0x208630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208630u, 0x1E0260u, 0x1E0268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0268u;
label_1e0268:
    // 0x1e0268: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1e0268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1e026c: 0xdc243938  ld          $a0, 0x3938($at)
    ctx->pc = 0x1e026cu;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x223938u));
    // 0x1e0270: 0xde230030  ld          $v1, 0x30($s1)
    ctx->pc = 0x1e0270u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1e0274: 0xfe220078  sd          $v0, 0x78($s1)
    ctx->pc = 0x1e0274u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 120), GPR_U64(ctx, 2));
    // 0x1e0278: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1e0278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e027c: 0xc0820d8  jal         func_208360
    ctx->pc = 0x1E027Cu;
    SET_GPR_U32(ctx, 31, 0x1E0284u);
    ctx->pc = 0x1E0280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E027Cu;
    // 0x1e0280: 0xfe230030  sd          $v1, 0x30($s1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 17), 48), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208360u, 0x1E027Cu, 0x1E0284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0284u;
label_1e0284:
    // 0x1e0284: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1e0284u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1e0288: 0xdc243940  ld          $a0, 0x3940($at)
    ctx->pc = 0x1e0288u;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x223940u));
    // 0x1e028c: 0xc0820d8  jal         func_208360
    ctx->pc = 0x1E028Cu;
    SET_GPR_U32(ctx, 31, 0x1E0294u);
    ctx->pc = 0x1E0290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E028Cu;
    // 0x1e0290: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208360u, 0x1E028Cu, 0x1E0294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0294u;
label_1e0294:
    // 0x1e0294: 0xde250038  ld          $a1, 0x38($s1)
    ctx->pc = 0x1e0294u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x1e0298: 0xc08202e  jal         func_2080B8
    ctx->pc = 0x1E0298u;
    SET_GPR_U32(ctx, 31, 0x1E02A0u);
    ctx->pc = 0x1E029Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0298u;
    // 0x1e029c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2080B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080B8u, 0x1E0298u, 0x1E02A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E02A0u;
label_1e02a0:
    // 0x1e02a0: 0xc074c4c  jal         func_1D3130
    ctx->pc = 0x1E02A0u;
    SET_GPR_U32(ctx, 31, 0x1E02A8u);
    ctx->pc = 0x1E02A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E02A0u;
    // 0x1e02a4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3130u, 0x1E02A0u, 0x1E02A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E02A8u;
label_1e02a8:
    // 0x1e02a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e02a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e02ac: 0xc08218c  jal         func_208630
    ctx->pc = 0x1E02ACu;
    SET_GPR_U32(ctx, 31, 0x1E02B4u);
    ctx->pc = 0x1E02B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E02ACu;
    // 0x1e02b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208630u, 0x1E02ACu, 0x1E02B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E02B4u;
label_1e02b4:
    // 0x1e02b4: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x1e02b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x1e02b8: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E02B8u;
    {
        const bool branch_taken_0x1e02b8 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1E02BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E02B8u;
        // 0x1e02bc: 0x52bfc  dsll32      $a1, $a1, 15 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e02b8) {
            ctx->pc = 0x1E02C8u;
            goto label_1e02c8;
        }
    }
    ctx->pc = 0x1E02C0u;
    // 0x1e02c0: 0xc081ffe  jal         func_207FF8
    ctx->pc = 0x1E02C0u;
    SET_GPR_U32(ctx, 31, 0x1E02C8u);
    ctx->pc = 0x1E02C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E02C0u;
    // 0x1e02c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207FF8u, 0x1E02C0u, 0x1E02C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E02C8u;
label_1e02c8:
    // 0x1e02c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e02c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e02cc: 0xc0820d8  jal         func_208360
    ctx->pc = 0x1E02CCu;
    SET_GPR_U32(ctx, 31, 0x1E02D4u);
    ctx->pc = 0x1E02D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E02CCu;
    // 0x1e02d0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208360u, 0x1E02CCu, 0x1E02D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E02D4u;
label_1e02d4:
    // 0x1e02d4: 0xde250078  ld          $a1, 0x78($s1)
    ctx->pc = 0x1e02d4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x1e02d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e02d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e02dc: 0xc08202e  jal         func_2080B8
    ctx->pc = 0x1E02DCu;
    SET_GPR_U32(ctx, 31, 0x1E02E4u);
    ctx->pc = 0x1E02E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E02DCu;
    // 0x1e02e0: 0xfe220040  sd          $v0, 0x40($s1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 17), 64), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2080B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080B8u, 0x1E02DCu, 0x1E02E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E02E4u;
label_1e02e4:
    // 0x1e02e4: 0x340580b2  ori         $a1, $zero, 0x80B2
    ctx->pc = 0x1e02e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32946);
    // 0x1e02e8: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x1e02e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x1e02ec: 0xc0820d8  jal         func_208360
    ctx->pc = 0x1E02ECu;
    SET_GPR_U32(ctx, 31, 0x1E02F4u);
    ctx->pc = 0x1E02F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E02ECu;
    // 0x1e02f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208360u, 0x1E02ECu, 0x1E02F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E02F4u;
label_1e02f4:
    // 0x1e02f4: 0xfe220040  sd          $v0, 0x40($s1)
    ctx->pc = 0x1e02f4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 64), GPR_U64(ctx, 2));
label_1e02f8:
    // 0x1e02f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e02f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e02fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e02fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e0300: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e0300u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e0304: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1e0304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e0308: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E030Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0308u;
        // 0x1e030c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0310u;
}
