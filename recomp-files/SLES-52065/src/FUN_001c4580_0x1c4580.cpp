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

// Function: FUN_001c4580
// Address: 0x1c4580 - 0x1c46f0
void FUN_001c4580_0x1c4580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c4580_0x1c4580");
#endif

    switch (ctx->pc) {
        case 0x1c45a0u: goto label_1c45a0;
        case 0x1c45acu: goto label_1c45ac;
        case 0x1c45b8u: goto label_1c45b8;
        case 0x1c45c4u: goto label_1c45c4;
        case 0x1c45e0u: goto label_1c45e0;
        case 0x1c45e8u: goto label_1c45e8;
        case 0x1c45f8u: goto label_1c45f8;
        case 0x1c4600u: goto label_1c4600;
        case 0x1c4620u: goto label_1c4620;
        case 0x1c4634u: goto label_1c4634;
        case 0x1c4644u: goto label_1c4644;
        case 0x1c4650u: goto label_1c4650;
        case 0x1c4660u: goto label_1c4660;
        case 0x1c466cu: goto label_1c466c;
        case 0x1c467cu: goto label_1c467c;
        case 0x1c4688u: goto label_1c4688;
        case 0x1c4698u: goto label_1c4698;
        case 0x1c46a4u: goto label_1c46a4;
        case 0x1c46b4u: goto label_1c46b4;
        case 0x1c46c0u: goto label_1c46c0;
        case 0x1c46d0u: goto label_1c46d0;
        case 0x1c46dcu: goto label_1c46dc;
        default: break;
    }

    ctx->pc = 0x1c4580u;

    // 0x1c4580: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c4580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c4584: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c4584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c4588: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c4588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c458c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c458cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c4590: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c4590u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4594: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1c4594u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4598: 0xc06ddd0  jal         func_1B7740
    ctx->pc = 0x1C4598u;
    SET_GPR_U32(ctx, 31, 0x1C45A0u);
    ctx->pc = 0x1C459Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4598u;
    // 0x1c459c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7740u, 0x1C4598u, 0x1C45A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C45A0u;
label_1c45a0:
    // 0x1c45a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c45a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c45a4: 0xc06e5e8  jal         func_1B97A0
    ctx->pc = 0x1C45A4u;
    SET_GPR_U32(ctx, 31, 0x1C45ACu);
    ctx->pc = 0x1C45A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C45A4u;
    // 0x1c45a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B97A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B97A0u, 0x1C45A4u, 0x1C45ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C45ACu;
label_1c45ac:
    // 0x1c45ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c45acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c45b0: 0xc06ddd0  jal         func_1B7740
    ctx->pc = 0x1C45B0u;
    SET_GPR_U32(ctx, 31, 0x1C45B8u);
    ctx->pc = 0x1C45B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C45B0u;
    // 0x1c45b4: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7740u, 0x1C45B0u, 0x1C45B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C45B8u;
label_1c45b8:
    // 0x1c45b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c45b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c45bc: 0xc06e5e8  jal         func_1B97A0
    ctx->pc = 0x1C45BCu;
    SET_GPR_U32(ctx, 31, 0x1C45C4u);
    ctx->pc = 0x1C45C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C45BCu;
    // 0x1c45c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B97A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B97A0u, 0x1C45BCu, 0x1C45C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C45C4u;
label_1c45c4:
    // 0x1c45c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c45c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c45c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c45c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c45cc: 0xae220070  sw          $v0, 0x70($s1)
    ctx->pc = 0x1c45ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 2));
    // 0x1c45d0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1c45d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c45d4: 0xae220074  sw          $v0, 0x74($s1)
    ctx->pc = 0x1c45d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
    // 0x1c45d8: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C45D8u;
    SET_GPR_U32(ctx, 31, 0x1C45E0u);
    ctx->pc = 0x1C45DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C45D8u;
    // 0x1c45dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C45D8u, 0x1C45E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C45E0u;
label_1c45e0:
    // 0x1c45e0: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1C45E0u;
    SET_GPR_U32(ctx, 31, 0x1C45E8u);
    ctx->pc = 0x1C45E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C45E0u;
    // 0x1c45e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1C45E0u, 0x1C45E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C45E8u;
label_1c45e8:
    // 0x1c45e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c45e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c45ec: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1c45ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c45f0: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C45F0u;
    SET_GPR_U32(ctx, 31, 0x1C45F8u);
    ctx->pc = 0x1C45F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C45F0u;
    // 0x1c45f4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C45F0u, 0x1C45F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C45F8u;
label_1c45f8:
    // 0x1c45f8: 0xc06e468  jal         func_1B91A0
    ctx->pc = 0x1C45F8u;
    SET_GPR_U32(ctx, 31, 0x1C4600u);
    ctx->pc = 0x1C45FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C45F8u;
    // 0x1c45fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91A0u, 0x1C45F8u, 0x1C4600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4600u;
label_1c4600:
    // 0x1c4600: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x1c4600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x1c4604: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c4604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c4608: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C4608u;
    {
        const bool branch_taken_0x1c4608 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C460Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4608u;
        // 0x1c460c: 0x3c050021  lui         $a1, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4608) {
            ctx->pc = 0x1C4628u;
            goto label_1c4628;
        }
    }
    ctx->pc = 0x1C4610u;
    // 0x1c4610: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c4610u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c4614: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1c4614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c4618: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x1C4618u;
    SET_GPR_U32(ctx, 31, 0x1C4620u);
    ctx->pc = 0x1C461Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4618u;
    // 0x1c461c: 0x24a55170  addiu       $a1, $a1, 0x5170 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x1C4618u, 0x1C4620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4620u;
label_1c4620:
    // 0x1c4620: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1C4620u;
    {
        const bool branch_taken_0x1c4620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4620u;
        // 0x1c4624: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4620) {
            ctx->pc = 0x1C4638u;
            goto label_1c4638;
        }
    }
    ctx->pc = 0x1C4628u;
label_1c4628:
    // 0x1c4628: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1c4628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c462c: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x1C462Cu;
    SET_GPR_U32(ctx, 31, 0x1C4634u);
    ctx->pc = 0x1C4630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C462Cu;
    // 0x1c4630: 0x24a55140  addiu       $a1, $a1, 0x5140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x1C462Cu, 0x1C4634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4634u;
label_1c4634:
    // 0x1c4634: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c4634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c4638:
    // 0x1c4638: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c4638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c463c: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C463Cu;
    SET_GPR_U32(ctx, 31, 0x1C4644u);
    ctx->pc = 0x1C4640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C463Cu;
    // 0x1c4640: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C463Cu, 0x1C4644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4644u;
label_1c4644:
    // 0x1c4644: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c4644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4648: 0xc06e738  jal         func_1B9CE0
    ctx->pc = 0x1C4648u;
    SET_GPR_U32(ctx, 31, 0x1C4650u);
    ctx->pc = 0x1C464Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4648u;
    // 0x1c464c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9CE0u, 0x1C4648u, 0x1C4650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4650u;
label_1c4650:
    // 0x1c4650: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c4650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4654: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c4654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c4658: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C4658u;
    SET_GPR_U32(ctx, 31, 0x1C4660u);
    ctx->pc = 0x1C465Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4658u;
    // 0x1c465c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C4658u, 0x1C4660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4660u;
label_1c4660:
    // 0x1c4660: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c4660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4664: 0xc06e738  jal         func_1B9CE0
    ctx->pc = 0x1C4664u;
    SET_GPR_U32(ctx, 31, 0x1C466Cu);
    ctx->pc = 0x1C4668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4664u;
    // 0x1c4668: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9CE0u, 0x1C4664u, 0x1C466Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C466Cu;
label_1c466c:
    // 0x1c466c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c466cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c4670: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c4670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4674: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C4674u;
    SET_GPR_U32(ctx, 31, 0x1C467Cu);
    ctx->pc = 0x1C4678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4674u;
    // 0x1c4678: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C4674u, 0x1C467Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C467Cu;
label_1c467c:
    // 0x1c467c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c467cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4680: 0xc06e738  jal         func_1B9CE0
    ctx->pc = 0x1C4680u;
    SET_GPR_U32(ctx, 31, 0x1C4688u);
    ctx->pc = 0x1C4684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4680u;
    // 0x1c4684: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9CE0u, 0x1C4680u, 0x1C4688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4688u;
label_1c4688:
    // 0x1c4688: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c4688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c468c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c468cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c4690: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C4690u;
    SET_GPR_U32(ctx, 31, 0x1C4698u);
    ctx->pc = 0x1C4694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4690u;
    // 0x1c4694: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C4690u, 0x1C4698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4698u;
label_1c4698:
    // 0x1c4698: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c4698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c469c: 0xc06e738  jal         func_1B9CE0
    ctx->pc = 0x1C469Cu;
    SET_GPR_U32(ctx, 31, 0x1C46A4u);
    ctx->pc = 0x1C46A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C469Cu;
    // 0x1c46a0: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9CE0u, 0x1C469Cu, 0x1C46A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C46A4u;
label_1c46a4:
    // 0x1c46a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c46a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c46a8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c46a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c46ac: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C46ACu;
    SET_GPR_U32(ctx, 31, 0x1C46B4u);
    ctx->pc = 0x1C46B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C46ACu;
    // 0x1c46b0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C46ACu, 0x1C46B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C46B4u;
label_1c46b4:
    // 0x1c46b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c46b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c46b8: 0xc06e738  jal         func_1B9CE0
    ctx->pc = 0x1C46B8u;
    SET_GPR_U32(ctx, 31, 0x1C46C0u);
    ctx->pc = 0x1C46BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C46B8u;
    // 0x1c46bc: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9CE0u, 0x1C46B8u, 0x1C46C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C46C0u;
label_1c46c0:
    // 0x1c46c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c46c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c46c4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c46c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c46c8: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C46C8u;
    SET_GPR_U32(ctx, 31, 0x1C46D0u);
    ctx->pc = 0x1C46CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C46C8u;
    // 0x1c46cc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C46C8u, 0x1C46D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C46D0u;
label_1c46d0:
    // 0x1c46d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c46d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c46d4: 0xc06e738  jal         func_1B9CE0
    ctx->pc = 0x1C46D4u;
    SET_GPR_U32(ctx, 31, 0x1C46DCu);
    ctx->pc = 0x1C46D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C46D4u;
    // 0x1c46d8: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9CE0u, 0x1C46D4u, 0x1C46DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C46DCu;
label_1c46dc:
    // 0x1c46dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c46dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c46e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c46e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c46e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c46e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c46e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C46E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C46ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C46E8u;
        // 0x1c46ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C46E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C46F0u;
}
