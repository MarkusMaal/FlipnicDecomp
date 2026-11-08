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

// Function: FUN_001f44d8
// Address: 0x1f44d8 - 0x1f45d4
void FUN_001f44d8_0x1f44d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f44d8_0x1f44d8");
#endif

    switch (ctx->pc) {
        case 0x1f4518u: goto label_1f4518;
        case 0x1f4524u: goto label_1f4524;
        case 0x1f4534u: goto label_1f4534;
        case 0x1f4548u: goto label_1f4548;
        case 0x1f4560u: goto label_1f4560;
        case 0x1f4574u: goto label_1f4574;
        case 0x1f4590u: goto label_1f4590;
        default: break;
    }

    ctx->pc = 0x1f44d8u;

    // 0x1f44d8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1f44d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1f44dc: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1f44dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1f44e0: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1f44e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x1f44e4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1f44e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1f44e8: 0x3c15001f  lui         $s5, 0x1F
    ctx->pc = 0x1f44e8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)31 << 16));
    // 0x1f44ec: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1f44ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1f44f0: 0x3c14001f  lui         $s4, 0x1F
    ctx->pc = 0x1f44f0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)31 << 16));
    // 0x1f44f4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1f44f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1f44f8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1f44f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1f44fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f44fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f4500: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1f4500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1f4504: 0x2450aae0  addiu       $s0, $v0, -0x5520
    ctx->pc = 0x1f4504u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945504));
    // 0x1f4508: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x1f4508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x1f450c: 0x8c44aae0  lw          $a0, -0x5520($v0)
    ctx->pc = 0x1f450cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x21AAE0u));
    // 0x1f4510: 0xc07d176  jal         func_1F45D8
    ctx->pc = 0x1F4510u;
    SET_GPR_U32(ctx, 31, 0x1F4518u);
    ctx->pc = 0x1F4514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4510u;
    // 0x1f4514: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F45D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F45D8u, 0x1F4510u, 0x1F4518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4518u;
label_1f4518:
    // 0x1f4518: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1f4518u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1f451c: 0xc07d176  jal         func_1F45D8
    ctx->pc = 0x1F451Cu;
    SET_GPR_U32(ctx, 31, 0x1F4524u);
    ctx->pc = 0x1F4520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F451Cu;
    // 0x1f4520: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F45D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F45D8u, 0x1F451Cu, 0x1F4524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4524u;
label_1f4524:
    // 0x1f4524: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1f4524u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1f4528: 0x3c058008  lui         $a1, 0x8008
    ctx->pc = 0x1f4528u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32776 << 16));
    // 0x1f452c: 0xc07d124  jal         func_1F4490
    ctx->pc = 0x1F452Cu;
    SET_GPR_U32(ctx, 31, 0x1F4534u);
    ctx->pc = 0x1F4530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F452Cu;
    // 0x1f4530: 0x26a64450  addiu       $a2, $s5, 0x4450 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 17488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4490u, 0x1F452Cu, 0x1F4534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4534u;
label_1f4534:
    // 0x1f4534: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1f4534u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4538: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1f4538u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1f453c: 0x3c058008  lui         $a1, 0x8008
    ctx->pc = 0x1f453cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32776 << 16));
    // 0x1f4540: 0xc07d124  jal         func_1F4490
    ctx->pc = 0x1F4540u;
    SET_GPR_U32(ctx, 31, 0x1F4548u);
    ctx->pc = 0x1F4544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4540u;
    // 0x1f4544: 0x26864418  addiu       $a2, $s4, 0x4418 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 17432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4490u, 0x1F4540u, 0x1F4548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4548u;
label_1f4548:
    // 0x1f4548: 0x2671fdf4  addiu       $s1, $s3, -0x20C
    ctx->pc = 0x1f4548u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966772));
    // 0x1f454c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1f454cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4550: 0x2650fe98  addiu       $s0, $s2, -0x168
    ctx->pc = 0x1f4550u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294966936));
    // 0x1f4554: 0x12300014  beq         $s1, $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1F4554u;
    {
        const bool branch_taken_0x1f4554 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x1F4558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4554u;
        // 0x1f4558: 0x3c160022  lui         $s6, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4554) {
            ctx->pc = 0x1F45A8u;
            goto label_1f45a8;
        }
    }
    ctx->pc = 0x1F455Cu;
    // 0x1f455c: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x1f455cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_1f4560:
    // 0x1f4560: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F4560u;
    {
        const bool branch_taken_0x1f4560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4560u;
        // 0x1f4564: 0x26640004  addiu       $a0, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4560) {
            ctx->pc = 0x1F4580u;
            goto label_1f4580;
        }
    }
    ctx->pc = 0x1F4568u;
    // 0x1f4568: 0x3c058008  lui         $a1, 0x8008
    ctx->pc = 0x1f4568u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32776 << 16));
    // 0x1f456c: 0xc07d124  jal         func_1F4490
    ctx->pc = 0x1F456Cu;
    SET_GPR_U32(ctx, 31, 0x1F4574u);
    ctx->pc = 0x1F4570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F456Cu;
    // 0x1f4570: 0x26a64450  addiu       $a2, $s5, 0x4450 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 17488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4490u, 0x1F456Cu, 0x1F4574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4574u;
label_1f4574:
    // 0x1f4574: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1f4574u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4578: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1F4578u;
    {
        const bool branch_taken_0x1f4578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F457Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4578u;
        // 0x1f457c: 0x2671fdf4  addiu       $s1, $s3, -0x20C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966772));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4578) {
            ctx->pc = 0x1F4598u;
            goto label_1f4598;
        }
    }
    ctx->pc = 0x1F4580u;
label_1f4580:
    // 0x1f4580: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x1f4580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1f4584: 0x3c058008  lui         $a1, 0x8008
    ctx->pc = 0x1f4584u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32776 << 16));
    // 0x1f4588: 0xc07d124  jal         func_1F4490
    ctx->pc = 0x1F4588u;
    SET_GPR_U32(ctx, 31, 0x1F4590u);
    ctx->pc = 0x1F458Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4588u;
    // 0x1f458c: 0x26864418  addiu       $a2, $s4, 0x4418 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 17432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4490u, 0x1F4588u, 0x1F4590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4590u;
label_1f4590:
    // 0x1f4590: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1f4590u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4594: 0x2650fe98  addiu       $s0, $s2, -0x168
    ctx->pc = 0x1f4594u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294966936));
label_1f4598:
    // 0x1f4598: 0x1630fff1  bne         $s1, $s0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1F4598u;
    {
        const bool branch_taken_0x1f4598 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        ctx->pc = 0x1F459Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4598u;
        // 0x1f459c: 0x230102b  sltu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4598) {
            ctx->pc = 0x1F4560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f4560;
        }
    }
    ctx->pc = 0x1F45A0u;
    // 0x1f45a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F45A0u;
    {
        const bool branch_taken_0x1f45a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F45A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F45A0u;
        // 0x1f45a4: 0xaed1aad8  sw          $s1, -0x5528($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4294945496), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f45a0) {
            ctx->pc = 0x1F45ACu;
            goto label_1f45ac;
        }
    }
    ctx->pc = 0x1F45A8u;
label_1f45a8:
    // 0x1f45a8: 0xaed1aad8  sw          $s1, -0x5528($s6)
    ctx->pc = 0x1f45a8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4294945496), GPR_U32(ctx, 17));
label_1f45ac:
    // 0x1f45ac: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1f45acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f45b0: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x1f45b0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f45b4: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1f45b4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f45b8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1f45b8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f45bc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1f45bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f45c0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1f45c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f45c4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1f45c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f45c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f45c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f45cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F45CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F45D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F45CCu;
        // 0x1f45d0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F45CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F45D4u;
}
