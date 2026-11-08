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

// Function: Trigger_StageStatus
// Address: 0x116240 - 0x11637c
void Trigger_StageStatus_0x116240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Trigger_StageStatus_0x116240");
#endif

    switch (ctx->pc) {
        case 0x116280u: goto label_116280;
        case 0x116290u: goto label_116290;
        case 0x1162a0u: goto label_1162a0;
        case 0x1162b4u: goto label_1162b4;
        case 0x1162bcu: goto label_1162bc;
        case 0x1162c4u: goto label_1162c4;
        case 0x1162d4u: goto label_1162d4;
        case 0x1162e4u: goto label_1162e4;
        case 0x1162f0u: goto label_1162f0;
        case 0x1162f8u: goto label_1162f8;
        case 0x116300u: goto label_116300;
        case 0x116328u: goto label_116328;
        case 0x11634cu: goto label_11634c;
        case 0x11635cu: goto label_11635c;
        default: break;
    }

    ctx->pc = 0x116240u;

    // 0x116240: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x116240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x116244: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x116244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x116248: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x116248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x11624c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11624cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x116250: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x116250u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116254: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x116254u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116258: 0x16200042  bnez        $s1, . + 4 + (0x42 << 2)
    ctx->pc = 0x116258u;
    {
        const bool branch_taken_0x116258 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x11625Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116258u;
        // 0x11625c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116258) {
            ctx->pc = 0x116364u;
            goto label_116364;
        }
    }
    ctx->pc = 0x116260u;
    // 0x116260: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x116260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x116264: 0x14a3003f  bne         $a1, $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x116264u;
    {
        const bool branch_taken_0x116264 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x116264) {
            ctx->pc = 0x116364u;
            goto label_116364;
        }
    }
    ctx->pc = 0x11626Cu;
    // 0x11626c: 0xdf838390  ld          $v1, -0x7C70($gp)
    ctx->pc = 0x11626cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294935440)));
    // 0x116270: 0x1060003c  beqz        $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x116270u;
    {
        const bool branch_taken_0x116270 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x116274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116270u;
        // 0x116274: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116270) {
            ctx->pc = 0x116364u;
            goto label_116364;
        }
    }
    ctx->pc = 0x116278u;
    // 0x116278: 0xc053c5c  jal         func_14F170
    ctx->pc = 0x116278u;
    SET_GPR_U32(ctx, 31, 0x116280u);
    ctx->pc = 0x14F170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F170u, 0x116278u, 0x116280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116280u;
label_116280:
    // 0x116280: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x116280u;
    {
        const bool branch_taken_0x116280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x116284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116280u;
        // 0x116284: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116280) {
            ctx->pc = 0x116364u;
            goto label_116364;
        }
    }
    ctx->pc = 0x116288u;
    // 0x116288: 0xc053c5c  jal         func_14F170
    ctx->pc = 0x116288u;
    SET_GPR_U32(ctx, 31, 0x116290u);
    ctx->pc = 0x14F170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F170u, 0x116288u, 0x116290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116290u;
label_116290:
    // 0x116290: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x116290u;
    {
        const bool branch_taken_0x116290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x116290) {
            ctx->pc = 0x116364u;
            goto label_116364;
        }
    }
    ctx->pc = 0x116298u;
    // 0x116298: 0xc06d2f4  jal         func_1B4BD0
    ctx->pc = 0x116298u;
    SET_GPR_U32(ctx, 31, 0x1162A0u);
    ctx->pc = 0x1B4BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4BD0u, 0x116298u, 0x1162A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1162A0u;
label_1162a0:
    // 0x1162a0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1162a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1162a4: 0x1060002f  beqz        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x1162A4u;
    {
        const bool branch_taken_0x1162a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1162a4) {
            ctx->pc = 0x116364u;
            goto label_116364;
        }
    }
    ctx->pc = 0x1162ACu;
    // 0x1162ac: 0xc062d50  jal         func_18B540
    ctx->pc = 0x1162ACu;
    SET_GPR_U32(ctx, 31, 0x1162B4u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1162ACu, 0x1162B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1162B4u;
label_1162b4:
    // 0x1162b4: 0xc062b80  jal         func_18AE00
    ctx->pc = 0x1162B4u;
    SET_GPR_U32(ctx, 31, 0x1162BCu);
    ctx->pc = 0x1162B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1162B4u;
    // 0x1162b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AE00u, 0x1162B4u, 0x1162BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1162BCu;
label_1162bc:
    // 0x1162bc: 0xc064228  jal         func_1908A0
    ctx->pc = 0x1162BCu;
    SET_GPR_U32(ctx, 31, 0x1162C4u);
    ctx->pc = 0x1908A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1908A0u, 0x1162BCu, 0x1162C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1162C4u;
label_1162c4:
    // 0x1162c4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1162c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1162c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1162c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1162cc: 0xc0642e0  jal         func_190B80
    ctx->pc = 0x1162CCu;
    SET_GPR_U32(ctx, 31, 0x1162D4u);
    ctx->pc = 0x1162D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1162CCu;
    // 0x1162d0: 0x24a5e560  addiu       $a1, $a1, -0x1AA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190B80u, 0x1162CCu, 0x1162D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1162D4u;
label_1162d4:
    // 0x1162d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1162D4u;
    {
        const bool branch_taken_0x1162d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1162D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1162D4u;
        // 0x1162d8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1162d4) {
            ctx->pc = 0x1162E8u;
            goto label_1162e8;
        }
    }
    ctx->pc = 0x1162DCu;
    // 0x1162dc: 0xc064fec  jal         func_193FB0
    ctx->pc = 0x1162DCu;
    SET_GPR_U32(ctx, 31, 0x1162E4u);
    ctx->pc = 0x1162E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1162DCu;
    // 0x1162e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193FB0u, 0x1162DCu, 0x1162E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1162E4u;
label_1162e4:
    // 0x1162e4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1162e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1162e8:
    // 0x1162e8: 0xc0618fc  jal         func_1863F0
    ctx->pc = 0x1162E8u;
    SET_GPR_U32(ctx, 31, 0x1162F0u);
    ctx->pc = 0x1863F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1863F0u, 0x1162E8u, 0x1162F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1162F0u;
label_1162f0:
    // 0x1162f0: 0xc0618fc  jal         func_1863F0
    ctx->pc = 0x1162F0u;
    SET_GPR_U32(ctx, 31, 0x1162F8u);
    ctx->pc = 0x1162F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1162F0u;
    // 0x1162f4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1863F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1863F0u, 0x1162F0u, 0x1162F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1162F8u;
label_1162f8:
    // 0x1162f8: 0xc045c98  jal         func_117260
    ctx->pc = 0x1162F8u;
    SET_GPR_U32(ctx, 31, 0x116300u);
    ctx->pc = 0x1162FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1162F8u;
    // 0x1162fc: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117260u, 0x1162F8u, 0x116300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116300u;
label_116300:
    // 0x116300: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x116300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x116304: 0x27b0004c  addiu       $s0, $sp, 0x4C
    ctx->pc = 0x116304u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x116308: 0x24428650  addiu       $v0, $v0, -0x79B0
    ctx->pc = 0x116308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936144));
    // 0x11630c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x11630cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x116310: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x116310u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x116314: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x116314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116318: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x116318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x11631c: 0x244287d0  addiu       $v0, $v0, -0x7830
    ctx->pc = 0x11631cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936528));
    // 0x116320: 0xc054660  jal         func_151980
    ctx->pc = 0x116320u;
    SET_GPR_U32(ctx, 31, 0x116328u);
    ctx->pc = 0x116324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116320u;
    // 0x116324: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151980u, 0x116320u, 0x116328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116328u;
label_116328:
    // 0x116328: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x116328u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x11632c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x11632cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x116330: 0x246387d0  addiu       $v1, $v1, -0x7830
    ctx->pc = 0x116330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936528));
    // 0x116334: 0x24428650  addiu       $v0, $v0, -0x79B0
    ctx->pc = 0x116334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936144));
    // 0x116338: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x116338u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x11633c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x11633cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x116340: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x116340u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x116344: 0xc045cb8  jal         func_1172E0
    ctx->pc = 0x116344u;
    SET_GPR_U32(ctx, 31, 0x11634Cu);
    ctx->pc = 0x116348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116344u;
    // 0x116348: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1172E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1172E0u, 0x116344u, 0x11634Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11634Cu;
label_11634c:
    // 0x11634c: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x11634Cu;
    {
        const bool branch_taken_0x11634c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x116350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11634Cu;
        // 0x116350: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11634c) {
            ctx->pc = 0x116360u;
            goto label_116360;
        }
    }
    ctx->pc = 0x116354u;
    // 0x116354: 0xc06d2d8  jal         func_1B4B60
    ctx->pc = 0x116354u;
    SET_GPR_U32(ctx, 31, 0x11635Cu);
    ctx->pc = 0x116358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116354u;
    // 0x116358: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4B60u, 0x116354u, 0x11635Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11635Cu;
label_11635c:
    // 0x11635c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11635cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_116360:
    // 0x116360: 0xa3838488  sb          $v1, -0x7B78($gp)
    ctx->pc = 0x116360u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935688), (uint8_t)GPR_U32(ctx, 3));
label_116364:
    // 0x116364: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x116364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x116368: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x116368u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11636c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11636cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x116370: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x116370u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x116374: 0x3e00008  jr          $ra
    ctx->pc = 0x116374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116374u;
        // 0x116378: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11637Cu;
}
