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

// Function: RetryOriginalGameMenuRendering
// Address: 0x1ce8c0 - 0x1ceabc
void RetryOriginalGameMenuRendering_0x1ce8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RetryOriginalGameMenuRendering_0x1ce8c0");
#endif

    switch (ctx->pc) {
        case 0x1ce910u: goto label_1ce910;
        case 0x1ce91cu: goto label_1ce91c;
        case 0x1ce928u: goto label_1ce928;
        case 0x1ce934u: goto label_1ce934;
        case 0x1ce960u: goto label_1ce960;
        case 0x1ce97cu: goto label_1ce97c;
        case 0x1ce984u: goto label_1ce984;
        case 0x1ce994u: goto label_1ce994;
        case 0x1ce99cu: goto label_1ce99c;
        case 0x1ce9a8u: goto label_1ce9a8;
        case 0x1ce9ecu: goto label_1ce9ec;
        case 0x1cea08u: goto label_1cea08;
        case 0x1cea14u: goto label_1cea14;
        case 0x1cea20u: goto label_1cea20;
        case 0x1cea2cu: goto label_1cea2c;
        case 0x1cea3cu: goto label_1cea3c;
        case 0x1cea54u: goto label_1cea54;
        case 0x1cea7cu: goto label_1cea7c;
        case 0x1cea94u: goto label_1cea94;
        case 0x1ceaa8u: goto label_1ceaa8;
        default: break;
    }

    ctx->pc = 0x1ce8c0u;

    // 0x1ce8c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ce8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ce8c4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1ce8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ce8c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ce8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ce8cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ce8ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ce8d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ce8d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ce8d4: 0x8c830068  lw          $v1, 0x68($a0)
    ctx->pc = 0x1ce8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x1ce8d8: 0x10620070  beq         $v1, $v0, . + 4 + (0x70 << 2)
    ctx->pc = 0x1CE8D8u;
    {
        const bool branch_taken_0x1ce8d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CE8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE8D8u;
        // 0x1ce8dc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce8d8) {
            ctx->pc = 0x1CEA9Cu;
            goto label_1cea9c;
        }
    }
    ctx->pc = 0x1CE8E0u;
    // 0x1ce8e0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ce8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ce8e4: 0x10620069  beq         $v1, $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x1CE8E4u;
    {
        const bool branch_taken_0x1ce8e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CE8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE8E4u;
        // 0x1ce8e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce8e4) {
            ctx->pc = 0x1CEA8Cu;
            goto label_1cea8c;
        }
    }
    ctx->pc = 0x1CE8ECu;
    // 0x1ce8ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ce8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce8f0: 0x10620043  beq         $v1, $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x1CE8F0u;
    {
        const bool branch_taken_0x1ce8f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CE8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE8F0u;
        // 0x1ce8f4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce8f0) {
            ctx->pc = 0x1CEA00u;
            goto label_1cea00;
        }
    }
    ctx->pc = 0x1CE8F8u;
    // 0x1ce8f8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CE8F8u;
    {
        const bool branch_taken_0x1ce8f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE8F8u;
        // 0x1ce8fc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce8f8) {
            ctx->pc = 0x1CE908u;
            goto label_1ce908;
        }
    }
    ctx->pc = 0x1CE900u;
    // 0x1ce900: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x1CE900u;
    {
        const bool branch_taken_0x1ce900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE900u;
        // 0x1ce904: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce900) {
            ctx->pc = 0x1CEAA0u;
            goto label_1ceaa0;
        }
    }
    ctx->pc = 0x1CE908u;
label_1ce908:
    // 0x1ce908: 0xc06ddd0  jal         func_1B7740
    ctx->pc = 0x1CE908u;
    SET_GPR_U32(ctx, 31, 0x1CE910u);
    ctx->pc = 0x1B7740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7740u, 0x1CE908u, 0x1CE910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE910u;
label_1ce910:
    // 0x1ce910: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ce910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce914: 0xc06e5e8  jal         func_1B97A0
    ctx->pc = 0x1CE914u;
    SET_GPR_U32(ctx, 31, 0x1CE91Cu);
    ctx->pc = 0x1CE918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE914u;
    // 0x1ce918: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B97A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B97A0u, 0x1CE914u, 0x1CE91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE91Cu;
label_1ce91c:
    // 0x1ce91c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ce91cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce920: 0xc06ddd0  jal         func_1B7740
    ctx->pc = 0x1CE920u;
    SET_GPR_U32(ctx, 31, 0x1CE928u);
    ctx->pc = 0x1CE924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE920u;
    // 0x1ce924: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7740u, 0x1CE920u, 0x1CE928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE928u;
label_1ce928:
    // 0x1ce928: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ce928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce92c: 0xc06e5e8  jal         func_1B97A0
    ctx->pc = 0x1CE92Cu;
    SET_GPR_U32(ctx, 31, 0x1CE934u);
    ctx->pc = 0x1CE930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE92Cu;
    // 0x1ce930: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B97A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B97A0u, 0x1CE92Cu, 0x1CE934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE934u;
label_1ce934:
    // 0x1ce934: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x1ce934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1ce938: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ce938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce93c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1ce93cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1ce940: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x1ce940u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1ce944: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ce944u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce948: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1ce948u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce94c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1ce94cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce950: 0x260a0060  addiu       $t2, $s0, 0x60
    ctx->pc = 0x1ce950u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x1ce954: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1ce954u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce958: 0xc06dd54  jal         func_1B7550
    ctx->pc = 0x1CE958u;
    SET_GPR_U32(ctx, 31, 0x1CE960u);
    ctx->pc = 0x1CE95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE958u;
    // 0x1ce95c: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7550u, 0x1CE958u, 0x1CE960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE960u;
label_1ce960:
    // 0x1ce960: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x1ce960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1ce964: 0x8e060064  lw          $a2, 0x64($s0)
    ctx->pc = 0x1ce964u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x1ce968: 0x1046000d  beq         $v0, $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x1CE968u;
    {
        const bool branch_taken_0x1ce968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x1CE96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE968u;
        // 0x1ce96c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce968) {
            ctx->pc = 0x1CE9A0u;
            goto label_1ce9a0;
        }
    }
    ctx->pc = 0x1CE970u;
    // 0x1ce970: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ce970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce974: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CE974u;
    SET_GPR_U32(ctx, 31, 0x1CE97Cu);
    ctx->pc = 0x1CE978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE974u;
    // 0x1ce978: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CE974u, 0x1CE97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE97Cu;
label_1ce97c:
    // 0x1ce97c: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1CE97Cu;
    SET_GPR_U32(ctx, 31, 0x1CE984u);
    ctx->pc = 0x1CE980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE97Cu;
    // 0x1ce980: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1CE97Cu, 0x1CE984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE984u;
label_1ce984:
    // 0x1ce984: 0x8e060060  lw          $a2, 0x60($s0)
    ctx->pc = 0x1ce984u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1ce988: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ce988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce98c: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CE98Cu;
    SET_GPR_U32(ctx, 31, 0x1CE994u);
    ctx->pc = 0x1CE990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE98Cu;
    // 0x1ce990: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CE98Cu, 0x1CE994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE994u;
label_1ce994:
    // 0x1ce994: 0xc06e468  jal         func_1B91A0
    ctx->pc = 0x1CE994u;
    SET_GPR_U32(ctx, 31, 0x1CE99Cu);
    ctx->pc = 0x1CE998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE994u;
    // 0x1ce998: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91A0u, 0x1CE994u, 0x1CE99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE99Cu;
label_1ce99c:
    // 0x1ce99c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ce99cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ce9a0:
    // 0x1ce9a0: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1CE9A0u;
    SET_GPR_U32(ctx, 31, 0x1CE9A8u);
    ctx->pc = 0x1CE9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE9A0u;
    // 0x1ce9a4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1CE9A0u, 0x1CE9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE9A8u;
label_1ce9a8:
    // 0x1ce9a8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1CE9A8u;
    {
        const bool branch_taken_0x1ce9a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE9A8u;
        // 0x1ce9ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce9a8) {
            ctx->pc = 0x1CE9E4u;
            goto label_1ce9e4;
        }
    }
    ctx->pc = 0x1CE9B0u;
    // 0x1ce9b0: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x1ce9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1ce9b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ce9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce9b8: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CE9B8u;
    {
        const bool branch_taken_0x1ce9b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ce9b8) {
            ctx->pc = 0x1CE9D8u;
            goto label_1ce9d8;
        }
    }
    ctx->pc = 0x1CE9C0u;
    // 0x1ce9c0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CE9C0u;
    {
        const bool branch_taken_0x1ce9c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce9c0) {
            ctx->pc = 0x1CE9D0u;
            goto label_1ce9d0;
        }
    }
    ctx->pc = 0x1CE9C8u;
    // 0x1ce9c8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1CE9C8u;
    {
        const bool branch_taken_0x1ce9c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce9c8) {
            ctx->pc = 0x1CE9E0u;
            goto label_1ce9e0;
        }
    }
    ctx->pc = 0x1CE9D0u;
label_1ce9d0:
    // 0x1ce9d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1CE9D0u;
    {
        const bool branch_taken_0x1ce9d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE9D0u;
        // 0x1ce9d4: 0xae020068  sw          $v0, 0x68($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce9d0) {
            ctx->pc = 0x1CE9E0u;
            goto label_1ce9e0;
        }
    }
    ctx->pc = 0x1CE9D8u;
label_1ce9d8:
    // 0x1ce9d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ce9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ce9dc: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x1ce9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
label_1ce9e0:
    // 0x1ce9e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ce9e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ce9e4:
    // 0x1ce9e4: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1CE9E4u;
    SET_GPR_U32(ctx, 31, 0x1CE9ECu);
    ctx->pc = 0x1CE9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE9E4u;
    // 0x1ce9e8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1CE9E4u, 0x1CE9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE9ECu;
label_1ce9ec:
    // 0x1ce9ec: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1CE9ECu;
    {
        const bool branch_taken_0x1ce9ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce9ec) {
            ctx->pc = 0x1CEA9Cu;
            goto label_1cea9c;
        }
    }
    ctx->pc = 0x1CE9F4u;
    // 0x1ce9f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ce9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ce9f8: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1CE9F8u;
    {
        const bool branch_taken_0x1ce9f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE9F8u;
        // 0x1ce9fc: 0xae020068  sw          $v0, 0x68($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce9f8) {
            ctx->pc = 0x1CEA9Cu;
            goto label_1cea9c;
        }
    }
    ctx->pc = 0x1CEA00u;
label_1cea00:
    // 0x1cea00: 0xc06ddd0  jal         func_1B7740
    ctx->pc = 0x1CEA00u;
    SET_GPR_U32(ctx, 31, 0x1CEA08u);
    ctx->pc = 0x1B7740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7740u, 0x1CEA00u, 0x1CEA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEA08u;
label_1cea08:
    // 0x1cea08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cea08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cea0c: 0xc06e5e8  jal         func_1B97A0
    ctx->pc = 0x1CEA0Cu;
    SET_GPR_U32(ctx, 31, 0x1CEA14u);
    ctx->pc = 0x1CEA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEA0Cu;
    // 0x1cea10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B97A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B97A0u, 0x1CEA0Cu, 0x1CEA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEA14u;
label_1cea14:
    // 0x1cea14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cea14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cea18: 0xc06ddd0  jal         func_1B7740
    ctx->pc = 0x1CEA18u;
    SET_GPR_U32(ctx, 31, 0x1CEA20u);
    ctx->pc = 0x1CEA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEA18u;
    // 0x1cea1c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7740u, 0x1CEA18u, 0x1CEA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEA20u;
label_1cea20:
    // 0x1cea20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cea20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cea24: 0xc06e5e8  jal         func_1B97A0
    ctx->pc = 0x1CEA24u;
    SET_GPR_U32(ctx, 31, 0x1CEA2Cu);
    ctx->pc = 0x1CEA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEA24u;
    // 0x1cea28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B97A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B97A0u, 0x1CEA24u, 0x1CEA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEA2Cu;
label_1cea2c:
    // 0x1cea2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cea2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cea30: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1cea30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1cea34: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CEA34u;
    SET_GPR_U32(ctx, 31, 0x1CEA3Cu);
    ctx->pc = 0x1CEA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEA34u;
    // 0x1cea38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CEA34u, 0x1CEA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEA3Cu;
label_1cea3c:
    // 0x1cea3c: 0xa0400008  sb          $zero, 0x8($v0)
    ctx->pc = 0x1cea3cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cea40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cea40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cea44: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1cea44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1cea48: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1cea48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cea4c: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CEA4Cu;
    SET_GPR_U32(ctx, 31, 0x1CEA54u);
    ctx->pc = 0x1CEA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEA4Cu;
    // 0x1cea50: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CEA4Cu, 0x1CEA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEA54u;
label_1cea54:
    // 0x1cea54: 0xa0510008  sb          $s1, 0x8($v0)
    ctx->pc = 0x1cea54u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 17));
    // 0x1cea58: 0x8e02006c  lw          $v0, 0x6C($s0)
    ctx->pc = 0x1cea58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1cea5c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1cea5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1cea60: 0xae02006c  sw          $v0, 0x6C($s0)
    ctx->pc = 0x1cea60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
    // 0x1cea64: 0x8e02006c  lw          $v0, 0x6C($s0)
    ctx->pc = 0x1cea64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1cea68: 0x1c40000c  bgtz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1CEA68u;
    {
        const bool branch_taken_0x1cea68 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1cea68) {
            ctx->pc = 0x1CEA9Cu;
            goto label_1cea9c;
        }
    }
    ctx->pc = 0x1CEA70u;
    // 0x1cea70: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1cea70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cea74: 0xc064208  jal         func_190820
    ctx->pc = 0x1CEA74u;
    SET_GPR_U32(ctx, 31, 0x1CEA7Cu);
    ctx->pc = 0x1CEA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEA74u;
    // 0x1cea78: 0xae020068  sw          $v0, 0x68($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190820u, 0x1CEA74u, 0x1CEA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEA7Cu;
label_1cea7c:
    // 0x1cea7c: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1cea7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1cea80: 0x8c22ca84  lw          $v0, -0x357C($at)
    ctx->pc = 0x1cea80u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x22CA84u));
    // 0x1cea84: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1CEA84u;
    {
        const bool branch_taken_0x1cea84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEA84u;
        // 0x1cea88: 0xfc400028  sd          $zero, 0x28($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 40), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cea84) {
            ctx->pc = 0x1CEA9Cu;
            goto label_1cea9c;
        }
    }
    ctx->pc = 0x1CEA8Cu;
label_1cea8c:
    // 0x1cea8c: 0xc073ab0  jal         func_1CEAC0
    ctx->pc = 0x1CEA8Cu;
    SET_GPR_U32(ctx, 31, 0x1CEA94u);
    ctx->pc = 0x1CEAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEAC0u, 0x1CEA8Cu, 0x1CEA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEA94u;
label_1cea94:
    // 0x1cea94: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1cea94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cea98: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x1cea98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
label_1cea9c:
    // 0x1cea9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cea9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ceaa0:
    // 0x1ceaa0: 0xc06dc70  jal         func_1B71C0
    ctx->pc = 0x1CEAA0u;
    SET_GPR_U32(ctx, 31, 0x1CEAA8u);
    ctx->pc = 0x1B71C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B71C0u, 0x1CEAA0u, 0x1CEAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEAA8u;
label_1ceaa8:
    // 0x1ceaa8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ceaa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ceaac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ceaacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ceab0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ceab0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ceab4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CEAB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CEAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEAB4u;
        // 0x1ceab8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CEAB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CEABCu;
}
