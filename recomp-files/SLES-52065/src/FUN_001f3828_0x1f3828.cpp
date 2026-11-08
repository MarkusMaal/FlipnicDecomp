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

// Function: FUN_001f3828
// Address: 0x1f3828 - 0x1f3964
void FUN_001f3828_0x1f3828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f3828_0x1f3828");
#endif

    switch (ctx->pc) {
        case 0x1f3844u: goto label_1f3844;
        case 0x1f3850u: goto label_1f3850;
        case 0x1f3878u: goto label_1f3878;
        case 0x1f38f4u: goto label_1f38f4;
        case 0x1f3900u: goto label_1f3900;
        case 0x1f390cu: goto label_1f390c;
        case 0x1f391cu: goto label_1f391c;
        case 0x1f3928u: goto label_1f3928;
        case 0x1f3938u: goto label_1f3938;
        case 0x1f3944u: goto label_1f3944;
        default: break;
    }

    ctx->pc = 0x1f3828u;

    // 0x1f3828: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f3828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f382c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1f382cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1f3830: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1f3830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1f3834: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f3834u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3838: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1f3838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1f383c: 0xc07ae3c  jal         func_1EB8F0
    ctx->pc = 0x1F383Cu;
    SET_GPR_U32(ctx, 31, 0x1F3844u);
    ctx->pc = 0x1F3840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F383Cu;
    // 0x1f3840: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB8F0u, 0x1F383Cu, 0x1F3844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3844u;
label_1f3844:
    // 0x1f3844: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1f3844u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1f3848: 0xc07ae8c  jal         func_1EBA30
    ctx->pc = 0x1F3848u;
    SET_GPR_U32(ctx, 31, 0x1F3850u);
    ctx->pc = 0x1EBA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBA30u, 0x1F3848u, 0x1F3850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3850u;
label_1f3850:
    // 0x1f3850: 0x3c0a0039  lui         $t2, 0x39
    ctx->pc = 0x1f3850u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)57 << 16));
    // 0x1f3854: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x1f3854u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3858: 0x2543fdc0  addiu       $v1, $t2, -0x240
    ctx->pc = 0x1f3858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294966720));
    // 0x1f385c: 0xac700014  sw          $s0, 0x14($v1)
    ctx->pc = 0x1f385cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x38FDD4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38FDD4u, _value); } while (0);
    // 0x1f3860: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x1f3860u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f3864: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F3864u;
    {
        const bool branch_taken_0x1f3864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3864u;
        // 0x1f3868: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3864) {
            ctx->pc = 0x1F3898u;
            goto label_1f3898;
        }
    }
    ctx->pc = 0x1F386Cu;
    // 0x1f386c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1f386cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3870: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x1f3870u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f3874: 0x0  nop
    ctx->pc = 0x1f3874u;
    // NOP
label_1f3878:
    // 0x1f3878: 0x2543fdc0  addiu       $v1, $t2, -0x240
    ctx->pc = 0x1f3878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294966720));
    // 0x1f387c: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1f387cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1f3880: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1f3880u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1f3884: 0xa0640018  sb          $a0, 0x18($v1)
    ctx->pc = 0x1f3884u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 24), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f3888: 0x2291021  addu        $v0, $s1, $t1
    ctx->pc = 0x1f3888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 9)));
    // 0x1f388c: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x1f388cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f3890: 0x5460fff9  bnel        $v1, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1F3890u;
    {
        const bool branch_taken_0x1f3890 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f3890) {
            ctx->pc = 0x1F3894u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F3890u;
            // 0x1f3894: 0x90440000  lbu         $a0, 0x0($v0) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F3878u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f3878;
        }
    }
    ctx->pc = 0x1F3898u;
label_1f3898:
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
            goto label_1f394c;
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
            goto label_1f3950;
        }
    }
    ctx->pc = 0x1F394Cu;
label_1f394c:
    // 0x1f394c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f394cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f3950:
    // 0x1f3950: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1f3950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f3954: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1f3954u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f3958: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f3958u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f395c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F395Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F395Cu;
        // 0x1f3960: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F395Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F3964u;
}
