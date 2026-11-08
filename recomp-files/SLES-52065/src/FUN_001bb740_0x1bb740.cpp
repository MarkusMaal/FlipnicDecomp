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

// Function: FUN_001bb740
// Address: 0x1bb740 - 0x1bb8b4
void FUN_001bb740_0x1bb740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001bb740_0x1bb740");
#endif

    switch (ctx->pc) {
        case 0x1bb794u: goto label_1bb794;
        case 0x1bb79cu: goto label_1bb79c;
        case 0x1bb7a8u: goto label_1bb7a8;
        case 0x1bb7b4u: goto label_1bb7b4;
        case 0x1bb7ccu: goto label_1bb7cc;
        case 0x1bb808u: goto label_1bb808;
        case 0x1bb814u: goto label_1bb814;
        case 0x1bb820u: goto label_1bb820;
        case 0x1bb838u: goto label_1bb838;
        case 0x1bb858u: goto label_1bb858;
        default: break;
    }

    ctx->pc = 0x1bb740u;

    // 0x1bb740: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1bb740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1bb744: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1bb744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1bb748: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1bb748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1bb74c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1bb74cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1bb750: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x1bb750u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb754: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1bb754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1bb758: 0x27d70004  addiu       $s7, $fp, 0x4
    ctx->pc = 0x1bb758u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
    // 0x1bb75c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1bb75cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1bb760: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1bb760u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb764: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1bb764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1bb768: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1bb768u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb76c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1bb76cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1bb770: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1bb770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1bb774: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bb774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bb778: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1bb778u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb77c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bb77cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bb780: 0x8cb30004  lw          $s3, 0x4($a1)
    ctx->pc = 0x1bb780u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1bb784: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x1bb784u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x1bb788: 0x1260001b  beqz        $s3, . + 4 + (0x1B << 2)
    ctx->pc = 0x1BB788u;
    {
        const bool branch_taken_0x1bb788 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB788u;
        // 0x1bb78c: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb788) {
            ctx->pc = 0x1BB7F8u;
            goto label_1bb7f8;
        }
    }
    ctx->pc = 0x1BB790u;
    // 0x1bb790: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1bb790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1bb794:
    // 0x1bb794: 0xc048880  jal         func_122200
    ctx->pc = 0x1BB794u;
    SET_GPR_U32(ctx, 31, 0x1BB79Cu);
    ctx->pc = 0x1BB798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB794u;
    // 0x1bb798: 0x260b82d  daddu       $s7, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122200u, 0x1BB794u, 0x1BB79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB79Cu;
label_1bb79c:
    // 0x1bb79c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1bb79cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb7a0: 0xc04887c  jal         func_1221F0
    ctx->pc = 0x1BB7A0u;
    SET_GPR_U32(ctx, 31, 0x1BB7A8u);
    ctx->pc = 0x1BB7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB7A0u;
    // 0x1bb7a4: 0x2664000c  addiu       $a0, $s3, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1221F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1221F0u, 0x1BB7A0u, 0x1BB7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB7A8u;
label_1bb7a8:
    // 0x1bb7a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1bb7a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb7ac: 0xc048880  jal         func_122200
    ctx->pc = 0x1BB7ACu;
    SET_GPR_U32(ctx, 31, 0x1BB7B4u);
    ctx->pc = 0x1BB7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB7ACu;
    // 0x1bb7b0: 0x2664000c  addiu       $a0, $s3, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122200u, 0x1BB7ACu, 0x1BB7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB7B4u;
label_1bb7b4:
    // 0x1bb7b4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1bb7b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb7b8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1bb7b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb7bc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1bb7bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb7c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bb7c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb7c4: 0xc048bbc  jal         func_122EF0
    ctx->pc = 0x1BB7C4u;
    SET_GPR_U32(ctx, 31, 0x1BB7CCu);
    ctx->pc = 0x1BB7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB7C4u;
    // 0x1bb7c8: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122EF0u, 0x1BB7C4u, 0x1BB7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB7CCu;
label_1bb7cc:
    // 0x1bb7cc: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BB7CCu;
    {
        const bool branch_taken_0x1bb7cc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1bb7cc) {
            ctx->pc = 0x1BB7E0u;
            goto label_1bb7e0;
        }
    }
    ctx->pc = 0x1BB7D4u;
    // 0x1bb7d4: 0x8e730000  lw          $s3, 0x0($s3)
    ctx->pc = 0x1bb7d4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1bb7d8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1BB7D8u;
    {
        const bool branch_taken_0x1bb7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB7D8u;
        // 0x1bb7dc: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb7d8) {
            ctx->pc = 0x1BB7F0u;
            goto label_1bb7f0;
        }
    }
    ctx->pc = 0x1BB7E0u;
label_1bb7e0:
    // 0x1bb7e0: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x1bb7e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb7e4: 0x8e730004  lw          $s3, 0x4($s3)
    ctx->pc = 0x1bb7e4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1bb7e8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1bb7e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb7ec: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1bb7ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bb7f0:
    // 0x1bb7f0: 0x1660ffe8  bnez        $s3, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1BB7F0u;
    {
        const bool branch_taken_0x1bb7f0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BB7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB7F0u;
        // 0x1bb7f4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb7f0) {
            ctx->pc = 0x1BB794u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bb794;
        }
    }
    ctx->pc = 0x1BB7F8u;
label_1bb7f8:
    // 0x1bb7f8: 0x12400012  beqz        $s2, . + 4 + (0x12 << 2)
    ctx->pc = 0x1BB7F8u;
    {
        const bool branch_taken_0x1bb7f8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB7F8u;
        // 0x1bb7fc: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb7f8) {
            ctx->pc = 0x1BB844u;
            goto label_1bb844;
        }
    }
    ctx->pc = 0x1BB800u;
    // 0x1bb800: 0xc048880  jal         func_122200
    ctx->pc = 0x1BB800u;
    SET_GPR_U32(ctx, 31, 0x1BB808u);
    ctx->pc = 0x1BB804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB800u;
    // 0x1bb804: 0x2644000c  addiu       $a0, $s2, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122200u, 0x1BB800u, 0x1BB808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB808u;
label_1bb808:
    // 0x1bb808: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1bb808u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb80c: 0xc04887c  jal         func_1221F0
    ctx->pc = 0x1BB80Cu;
    SET_GPR_U32(ctx, 31, 0x1BB814u);
    ctx->pc = 0x1BB810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB80Cu;
    // 0x1bb810: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1221F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1221F0u, 0x1BB80Cu, 0x1BB814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB814u;
label_1bb814:
    // 0x1bb814: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1bb814u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb818: 0xc048880  jal         func_122200
    ctx->pc = 0x1BB818u;
    SET_GPR_U32(ctx, 31, 0x1BB820u);
    ctx->pc = 0x1BB81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB818u;
    // 0x1bb81c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122200u, 0x1BB818u, 0x1BB820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB820u;
label_1bb820:
    // 0x1bb820: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1bb820u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb824: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1bb824u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb828: 0x2644000c  addiu       $a0, $s2, 0xC
    ctx->pc = 0x1bb828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x1bb82c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bb82cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb830: 0xc048bbc  jal         func_122EF0
    ctx->pc = 0x1BB830u;
    SET_GPR_U32(ctx, 31, 0x1BB838u);
    ctx->pc = 0x1BB834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB830u;
    // 0x1bb834: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122EF0u, 0x1BB830u, 0x1BB838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB838u;
label_1bb838:
    // 0x1bb838: 0x441000d  bgez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1BB838u;
    {
        const bool branch_taken_0x1bb838 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1bb838) {
            ctx->pc = 0x1BB870u;
            goto label_1bb870;
        }
    }
    ctx->pc = 0x1BB840u;
    // 0x1bb840: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1bb840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1bb844:
    // 0x1bb844: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1bb844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb848: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1bb848u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb84c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1bb84cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb850: 0xc06f06c  jal         func_1BC1B0
    ctx->pc = 0x1BB850u;
    SET_GPR_U32(ctx, 31, 0x1BB858u);
    ctx->pc = 0x1BB854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB850u;
    // 0x1bb854: 0x2a0402d  daddu       $t0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC1B0u, 0x1BB850u, 0x1BB858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB858u;
label_1bb858:
    // 0x1bb858: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x1bb858u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x1bb85c: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x1bb85cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x1bb860: 0x90233000  lbu         $v1, 0x3000($at)
    ctx->pc = 0x1bb860u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x213000u));
    // 0x1bb864: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x1bb864u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb868: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1BB868u;
    {
        const bool branch_taken_0x1bb868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB868u;
        // 0x1bb86c: 0xa2c30004  sb          $v1, 0x4($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 4), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb868) {
            ctx->pc = 0x1BB884u;
            goto label_1bb884;
        }
    }
    ctx->pc = 0x1BB870u;
label_1bb870:
    // 0x1bb870: 0xaed20000  sw          $s2, 0x0($s6)
    ctx->pc = 0x1bb870u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 18));
    // 0x1bb874: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x1bb874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x1bb878: 0x90233008  lbu         $v1, 0x3008($at)
    ctx->pc = 0x1bb878u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x213008u));
    // 0x1bb87c: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x1bb87cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb880: 0xa2c30004  sb          $v1, 0x4($s6)
    ctx->pc = 0x1bb880u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 4), (uint8_t)GPR_U32(ctx, 3));
label_1bb884:
    // 0x1bb884: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1bb884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1bb888: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1bb888u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1bb88c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1bb88cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1bb890: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1bb890u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bb894: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1bb894u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bb898: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1bb898u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bb89c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1bb89cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bb8a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bb8a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bb8a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bb8a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bb8a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bb8a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bb8ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB8ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB8ACu;
        // 0x1bb8b0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB8ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BB8B4u;
}
