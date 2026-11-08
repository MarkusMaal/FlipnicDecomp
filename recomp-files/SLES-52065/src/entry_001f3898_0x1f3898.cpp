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

// Function: entry_001f3898
// Address: 0x1f3898 - 0x1f394c
void entry_001f3898_0x1f3898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f3898_0x1f3898");
#endif

    switch (ctx->pc) {
        case 0x1f38f4u: goto label_1f38f4;
        case 0x1f3900u: goto label_1f3900;
        case 0x1f390cu: goto label_1f390c;
        case 0x1f391cu: goto label_1f391c;
        case 0x1f3928u: goto label_1f3928;
        case 0x1f3938u: goto label_1f3938;
        case 0x1f3944u: goto label_1f3944;
        default: break;
    }

    ctx->pc = 0x1f3898u;

    // 0x1f3898: 0x2546fdc0  addiu       $a2, $t2, -0x240
    ctx->pc = 0x1f3898u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), 4294966720));
    // 0x1f389c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1f389cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1f38a0: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x1f38a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x1f38a4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1f38a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f38a8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1f38a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1f38ac: 0x348400ff  ori         $a0, $a0, 0xFF
    ctx->pc = 0x1f38acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)255);
    // 0x1f38b0: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x1f38b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x1f38b4: 0x24050068  addiu       $a1, $zero, 0x68
    ctx->pc = 0x1f38b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x1f38b8: 0xdd42fdc0  ld          $v0, -0x240($t2)
    ctx->pc = 0x1f38b8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 10), 4294966720)));
    // 0x1f38bc: 0x24070068  addiu       $a3, $zero, 0x68
    ctx->pc = 0x1f38bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x1f38c0: 0xacc90010  sw          $t1, 0x10($a2)
    ctx->pc = 0x1f38c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 9));
    // 0x1f38c4: 0x24080044  addiu       $t0, $zero, 0x44
    ctx->pc = 0x1f38c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1f38c8: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1f38c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x1f38cc: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1f38ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1f38d0: 0xfd42fdc0  sd          $v0, -0x240($t2)
    ctx->pc = 0x1f38d0u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 4294966720), GPR_U64(ctx, 2));
    // 0x1f38d4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1f38d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f38d8: 0xa145fdc0  sb          $a1, -0x240($t2)
    ctx->pc = 0x1f38d8u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 4294966720), (uint8_t)GPR_U32(ctx, 5));
    // 0x1f38dc: 0x24050068  addiu       $a1, $zero, 0x68
    ctx->pc = 0x1f38dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x1f38e0: 0xafab0004  sw          $t3, 0x4($sp)
    ctx->pc = 0x1f38e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 11));
    // 0x1f38e4: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x1f38e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x1f38e8: 0xafa8000c  sw          $t0, 0xC($sp)
    ctx->pc = 0x1f38e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 8));
    // 0x1f38ec: 0xc07b76e  jal         func_1EDDB8
    ctx->pc = 0x1F38ECu;
    SET_GPR_U32(ctx, 31, 0x1F38F4u);
    ctx->pc = 0x1F38F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F38ECu;
    // 0x1f38f0: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDDB8u, 0x1F38ECu, 0x1F38F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F38F4u;
label_1f38f4:
    // 0x1f38f4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1f38f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f38f8: 0xc07ae88  jal         func_1EBA20
    ctx->pc = 0x1F38F8u;
    SET_GPR_U32(ctx, 31, 0x1F3900u);
    ctx->pc = 0x1F38FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F38F8u;
    // 0x1f38fc: 0x3c050004  lui         $a1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EBA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBA20u, 0x1F38F8u, 0x1F3900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3900u;
label_1f3900:
    // 0x1f3900: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f3900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3904: 0xc07ae78  jal         func_1EB9E0
    ctx->pc = 0x1F3904u;
    SET_GPR_U32(ctx, 31, 0x1F390Cu);
    ctx->pc = 0x1F3908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3904u;
    // 0x1f3908: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB9E0u, 0x1F3904u, 0x1F390Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F390Cu;
label_1f390c:
    // 0x1f390c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1F390Cu;
    {
        const bool branch_taken_0x1f390c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F390Cu;
        // 0x1f3910: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f390c) {
            ctx->pc = 0x1F394Cu;
            return;
        }
    }
    ctx->pc = 0x1F3914u;
    // 0x1f3914: 0xc07ae88  jal         func_1EBA20
    ctx->pc = 0x1F3914u;
    SET_GPR_U32(ctx, 31, 0x1F391Cu);
    ctx->pc = 0x1F3918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3914u;
    // 0x1f3918: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EBA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBA20u, 0x1F3914u, 0x1F391Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F391Cu;
label_1f391c:
    // 0x1f391c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1f391cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f3920: 0xc07ae88  jal         func_1EBA20
    ctx->pc = 0x1F3920u;
    SET_GPR_U32(ctx, 31, 0x1F3928u);
    ctx->pc = 0x1F3924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3920u;
    // 0x1f3924: 0x3c050002  lui         $a1, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EBA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBA20u, 0x1F3920u, 0x1F3928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3928u;
label_1f3928:
    // 0x1f3928: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1f3928u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1f392c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f392cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3930: 0xc07ae88  jal         func_1EBA20
    ctx->pc = 0x1F3930u;
    SET_GPR_U32(ctx, 31, 0x1F3938u);
    ctx->pc = 0x1F3934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3930u;
    // 0x1f3934: 0x34840002  ori         $a0, $a0, 0x2 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EBA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBA20u, 0x1F3930u, 0x1F3938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3938u;
label_1f3938:
    // 0x1f3938: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1f3938u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1f393c: 0xc07ae88  jal         func_1EBA20
    ctx->pc = 0x1F393Cu;
    SET_GPR_U32(ctx, 31, 0x1F3944u);
    ctx->pc = 0x1F3940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F393Cu;
    // 0x1f3940: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EBA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBA20u, 0x1F393Cu, 0x1F3944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3944u;
label_1f3944:
    // 0x1f3944: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F3944u;
    {
        const bool branch_taken_0x1f3944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3944u;
        // 0x1f3948: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3944) {
            ctx->pc = 0x1F3950u;
            return;
        }
    }
    ctx->pc = 0x1F394Cu;
}
