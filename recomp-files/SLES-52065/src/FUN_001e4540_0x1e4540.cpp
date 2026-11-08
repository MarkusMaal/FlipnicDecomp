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

// Function: FUN_001e4540
// Address: 0x1e4540 - 0x1e4708
void FUN_001e4540_0x1e4540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e4540_0x1e4540");
#endif

    switch (ctx->pc) {
        case 0x1e4540u: goto label_1e4540;
        case 0x1e4544u: goto label_1e4544;
        case 0x1e4548u: goto label_1e4548;
        case 0x1e454cu: goto label_1e454c;
        case 0x1e4550u: goto label_1e4550;
        case 0x1e4554u: goto label_1e4554;
        case 0x1e4558u: goto label_1e4558;
        case 0x1e455cu: goto label_1e455c;
        case 0x1e4560u: goto label_1e4560;
        case 0x1e4564u: goto label_1e4564;
        case 0x1e4568u: goto label_1e4568;
        case 0x1e456cu: goto label_1e456c;
        case 0x1e4570u: goto label_1e4570;
        case 0x1e4574u: goto label_1e4574;
        case 0x1e4578u: goto label_1e4578;
        case 0x1e457cu: goto label_1e457c;
        case 0x1e4580u: goto label_1e4580;
        case 0x1e4584u: goto label_1e4584;
        case 0x1e4588u: goto label_1e4588;
        case 0x1e458cu: goto label_1e458c;
        case 0x1e4590u: goto label_1e4590;
        case 0x1e4594u: goto label_1e4594;
        case 0x1e4598u: goto label_1e4598;
        case 0x1e459cu: goto label_1e459c;
        case 0x1e45a0u: goto label_1e45a0;
        case 0x1e45a4u: goto label_1e45a4;
        case 0x1e45a8u: goto label_1e45a8;
        case 0x1e45acu: goto label_1e45ac;
        case 0x1e45b0u: goto label_1e45b0;
        case 0x1e45b4u: goto label_1e45b4;
        case 0x1e45b8u: goto label_1e45b8;
        case 0x1e45bcu: goto label_1e45bc;
        case 0x1e45c0u: goto label_1e45c0;
        case 0x1e45c4u: goto label_1e45c4;
        case 0x1e45c8u: goto label_1e45c8;
        case 0x1e45ccu: goto label_1e45cc;
        case 0x1e45d0u: goto label_1e45d0;
        case 0x1e45d4u: goto label_1e45d4;
        case 0x1e45d8u: goto label_1e45d8;
        case 0x1e45dcu: goto label_1e45dc;
        case 0x1e45e0u: goto label_1e45e0;
        case 0x1e45e4u: goto label_1e45e4;
        case 0x1e45e8u: goto label_1e45e8;
        case 0x1e45ecu: goto label_1e45ec;
        case 0x1e45f0u: goto label_1e45f0;
        case 0x1e45f4u: goto label_1e45f4;
        case 0x1e45f8u: goto label_1e45f8;
        case 0x1e45fcu: goto label_1e45fc;
        case 0x1e4600u: goto label_1e4600;
        case 0x1e4604u: goto label_1e4604;
        case 0x1e4608u: goto label_1e4608;
        case 0x1e460cu: goto label_1e460c;
        case 0x1e4610u: goto label_1e4610;
        case 0x1e4614u: goto label_1e4614;
        case 0x1e4618u: goto label_1e4618;
        case 0x1e461cu: goto label_1e461c;
        case 0x1e4620u: goto label_1e4620;
        case 0x1e4624u: goto label_1e4624;
        case 0x1e4628u: goto label_1e4628;
        case 0x1e462cu: goto label_1e462c;
        case 0x1e4630u: goto label_1e4630;
        case 0x1e4634u: goto label_1e4634;
        case 0x1e4638u: goto label_1e4638;
        case 0x1e463cu: goto label_1e463c;
        case 0x1e4640u: goto label_1e4640;
        case 0x1e4644u: goto label_1e4644;
        case 0x1e4648u: goto label_1e4648;
        case 0x1e464cu: goto label_1e464c;
        case 0x1e4650u: goto label_1e4650;
        case 0x1e4654u: goto label_1e4654;
        case 0x1e4658u: goto label_1e4658;
        case 0x1e465cu: goto label_1e465c;
        case 0x1e4660u: goto label_1e4660;
        case 0x1e4664u: goto label_1e4664;
        case 0x1e4668u: goto label_1e4668;
        case 0x1e466cu: goto label_1e466c;
        case 0x1e4670u: goto label_1e4670;
        case 0x1e4674u: goto label_1e4674;
        case 0x1e4678u: goto label_1e4678;
        case 0x1e467cu: goto label_1e467c;
        case 0x1e4680u: goto label_1e4680;
        case 0x1e4684u: goto label_1e4684;
        case 0x1e4688u: goto label_1e4688;
        case 0x1e468cu: goto label_1e468c;
        case 0x1e4690u: goto label_1e4690;
        case 0x1e4694u: goto label_1e4694;
        case 0x1e4698u: goto label_1e4698;
        case 0x1e469cu: goto label_1e469c;
        case 0x1e46a0u: goto label_1e46a0;
        case 0x1e46a4u: goto label_1e46a4;
        case 0x1e46a8u: goto label_1e46a8;
        case 0x1e46acu: goto label_1e46ac;
        case 0x1e46b0u: goto label_1e46b0;
        case 0x1e46b4u: goto label_1e46b4;
        case 0x1e46b8u: goto label_1e46b8;
        case 0x1e46bcu: goto label_1e46bc;
        case 0x1e46c0u: goto label_1e46c0;
        case 0x1e46c4u: goto label_1e46c4;
        case 0x1e46c8u: goto label_1e46c8;
        case 0x1e46ccu: goto label_1e46cc;
        case 0x1e46d0u: goto label_1e46d0;
        case 0x1e46d4u: goto label_1e46d4;
        case 0x1e46d8u: goto label_1e46d8;
        case 0x1e46dcu: goto label_1e46dc;
        case 0x1e46e0u: goto label_1e46e0;
        case 0x1e46e4u: goto label_1e46e4;
        case 0x1e46e8u: goto label_1e46e8;
        case 0x1e46ecu: goto label_1e46ec;
        case 0x1e46f0u: goto label_1e46f0;
        case 0x1e46f4u: goto label_1e46f4;
        case 0x1e46f8u: goto label_1e46f8;
        case 0x1e46fcu: goto label_1e46fc;
        case 0x1e4700u: goto label_1e4700;
        case 0x1e4704u: goto label_1e4704;
        default: break;
    }

    ctx->pc = 0x1e4540u;

label_1e4540:
    // 0x1e4540: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1e4540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_1e4544:
    // 0x1e4544: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1e4544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1e4548:
    // 0x1e4548: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x1e4548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
label_1e454c:
    // 0x1e454c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e454cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1e4550:
    // 0x1e4550: 0x3a0f021  addu        $fp, $sp, $zero
    ctx->pc = 0x1e4550u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 0)));
label_1e4554:
    // 0x1e4554: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e4554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1e4558:
    // 0x1e4558: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1e4558u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e455c:
    // 0x1e455c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e455cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e4560:
    // 0x1e4560: 0x27c40070  addiu       $a0, $fp, 0x70
    ctx->pc = 0x1e4560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 112));
label_1e4564:
    // 0x1e4564: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e4564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e4568:
    // 0x1e4568: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e4568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e456c:
    // 0x1e456c: 0xdcc30000  ld          $v1, 0x0($a2)
    ctx->pc = 0x1e456cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_1e4570:
    // 0x1e4570: 0xdcc20008  ld          $v0, 0x8($a2)
    ctx->pc = 0x1e4570u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 8)));
label_1e4574:
    // 0x1e4574: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x1e4574u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
label_1e4578:
    // 0x1e4578: 0xfc820008  sd          $v0, 0x8($a0)
    ctx->pc = 0x1e4578u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 2));
label_1e457c:
    // 0x1e457c: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x1e457cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_1e4580:
    // 0x1e4580: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1e4584:
    if (ctx->pc == 0x1E4584u) {
        ctx->pc = 0x1E4584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4580u;
        // 0x1e4584: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4588u;
        goto label_1e4588;
    }
    ctx->pc = 0x1E4580u;
    {
        const bool branch_taken_0x1e4580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4580u;
        // 0x1e4584: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4580) {
            ctx->pc = 0x1E459Cu;
            goto label_1e459c;
        }
    }
    ctx->pc = 0x1E4588u;
label_1e4588:
    // 0x1e4588: 0x30f200ff  andi        $s2, $a3, 0xFF
    ctx->pc = 0x1e4588u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_1e458c:
    // 0x1e458c: 0x32420018  andi        $v0, $s2, 0x18
    ctx->pc = 0x1e458cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)24);
label_1e4590:
    // 0x1e4590: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e4590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1e4594:
    // 0x1e4594: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1e4598:
    if (ctx->pc == 0x1E4598u) {
        ctx->pc = 0x1E459Cu;
        goto label_1e459c;
    }
    ctx->pc = 0x1E4594u;
    {
        const bool branch_taken_0x1e4594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e4594) {
            ctx->pc = 0x1E45B0u;
            goto label_1e45b0;
        }
    }
    ctx->pc = 0x1E459Cu;
label_1e459c:
    // 0x1e459c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e459cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e45a0:
    // 0x1e45a0: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1e45a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1e45a4:
    // 0x1e45a4: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x1e45a4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
label_1e45a8:
    // 0x1e45a8: 0x1000004d  b           . + 4 + (0x4D << 2)
label_1e45ac:
    if (ctx->pc == 0x1E45ACu) {
        ctx->pc = 0x1E45ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E45A8u;
        // 0x1e45ac: 0xae800008  sw          $zero, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E45B0u;
        goto label_1e45b0;
    }
    ctx->pc = 0x1E45A8u;
    {
        const bool branch_taken_0x1e45a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E45ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E45A8u;
        // 0x1e45ac: 0xae800008  sw          $zero, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e45a8) {
            ctx->pc = 0x1E46E0u;
            goto label_1e46e0;
        }
    }
    ctx->pc = 0x1E45B0u;
label_1e45b0:
    // 0x1e45b0: 0x8e64002c  lw          $a0, 0x2C($s3)
    ctx->pc = 0x1e45b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_1e45b4:
    // 0x1e45b4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e45b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e45b8:
    // 0x1e45b8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1e45b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1e45bc:
    // 0x1e45bc: 0x320f809  jalr        $t9
label_1e45c0:
    if (ctx->pc == 0x1E45C0u) {
        ctx->pc = 0x1E45C4u;
        goto label_1e45c4;
    }
    ctx->pc = 0x1E45BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E45C4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E45BCu, 0x1E45C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E45C4u;
label_1e45c4:
    // 0x1e45c4: 0x1000000b  b           . + 4 + (0xB << 2)
label_1e45c8:
    if (ctx->pc == 0x1E45C8u) {
        ctx->pc = 0x1E45C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E45C4u;
        // 0x1e45c8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E45CCu;
        goto label_1e45cc;
    }
    ctx->pc = 0x1E45C4u;
    {
        const bool branch_taken_0x1e45c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E45C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E45C4u;
        // 0x1e45c8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e45c4) {
            ctx->pc = 0x1E45F4u;
            goto label_1e45f4;
        }
    }
    ctx->pc = 0x1E45CCu;
label_1e45cc:
    // 0x1e45cc: 0xc07a704  jal         func_1E9C10
label_1e45d0:
    if (ctx->pc == 0x1E45D0u) {
        ctx->pc = 0x1E45D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E45CCu;
        // 0x1e45d0: 0x27c40080  addiu       $a0, $fp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E45D4u;
        goto label_1e45d4;
    }
    ctx->pc = 0x1E45CCu;
    SET_GPR_U32(ctx, 31, 0x1E45D4u);
    ctx->pc = 0x1E45D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E45CCu;
    // 0x1e45d0: 0x27c40080  addiu       $a0, $fp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9C10u, 0x1E45CCu, 0x1E45D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E45D4u;
label_1e45d4:
    // 0x1e45d4: 0x0  nop
    ctx->pc = 0x1e45d4u;
    // NOP
label_1e45d8:
    // 0x1e45d8: 0x0  nop
    ctx->pc = 0x1e45d8u;
    // NOP
label_1e45dc:
    // 0x1e45dc: 0x0  nop
    ctx->pc = 0x1e45dcu;
    // NOP
label_1e45e0:
    // 0x1e45e0: 0x0  nop
    ctx->pc = 0x1e45e0u;
    // NOP
label_1e45e4:
    // 0x1e45e4: 0x0  nop
    ctx->pc = 0x1e45e4u;
    // NOP
label_1e45e8:
    // 0x1e45e8: 0x0  nop
    ctx->pc = 0x1e45e8u;
    // NOP
label_1e45ec:
    // 0x1e45ec: 0x1000fff9  b           . + 4 + (-0x7 << 2)
label_1e45f0:
    if (ctx->pc == 0x1E45F0u) {
        ctx->pc = 0x1E45F4u;
        goto label_1e45f4;
    }
    ctx->pc = 0x1E45ECu;
    {
        const bool branch_taken_0x1e45ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e45ec) {
            ctx->pc = 0x1E45D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e45d4;
        }
    }
    ctx->pc = 0x1E45F4u;
label_1e45f4:
    // 0x1e45f4: 0x0  nop
    ctx->pc = 0x1e45f4u;
    // NOP
label_1e45f8:
    // 0x1e45f8: 0x8e630014  lw          $v1, 0x14($s3)
    ctx->pc = 0x1e45f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_1e45fc:
    // 0x1e45fc: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x1e45fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_1e4600:
    // 0x1e4600: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x1e4600u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1e4604:
    // 0x1e4604: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_1e4608:
    if (ctx->pc == 0x1E4608u) {
        ctx->pc = 0x1E4608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4604u;
        // 0x1e4608: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E460Cu;
        goto label_1e460c;
    }
    ctx->pc = 0x1E4604u;
    {
        const bool branch_taken_0x1e4604 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4604u;
        // 0x1e4608: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4604) {
            ctx->pc = 0x1E4630u;
            goto label_1e4630;
        }
    }
    ctx->pc = 0x1E460Cu;
label_1e460c:
    // 0x1e460c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x1e460cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1e4610:
    // 0x1e4610: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1e4610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e4614:
    // 0x1e4614: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x1e4614u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_1e4618:
    // 0x1e4618: 0x320f809  jalr        $t9
label_1e461c:
    if (ctx->pc == 0x1E461Cu) {
        ctx->pc = 0x1E461Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4618u;
        // 0x1e461c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4620u;
        goto label_1e4620;
    }
    ctx->pc = 0x1E4618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E4620u);
        ctx->pc = 0x1E461Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4618u;
        // 0x1e461c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4618u, 0x1E4620u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E4620u;
label_1e4620:
    // 0x1e4620: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e4620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e4624:
    // 0x1e4624: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_1e4628:
    if (ctx->pc == 0x1E4628u) {
        ctx->pc = 0x1E462Cu;
        goto label_1e462c;
    }
    ctx->pc = 0x1E4624u;
    {
        const bool branch_taken_0x1e4624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e4624) {
            ctx->pc = 0x1E4630u;
            goto label_1e4630;
        }
    }
    ctx->pc = 0x1E462Cu;
label_1e462c:
    // 0x1e462c: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x1e462cu;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_1e4630:
    // 0x1e4630: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_1e4634:
    if (ctx->pc == 0x1E4634u) {
        ctx->pc = 0x1E4634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4630u;
        // 0x1e4634: 0x32420010  andi        $v0, $s2, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4638u;
        goto label_1e4638;
    }
    ctx->pc = 0x1E4630u;
    {
        const bool branch_taken_0x1e4630 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4630u;
        // 0x1e4634: 0x32420010  andi        $v0, $s2, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4630) {
            ctx->pc = 0x1E464Cu;
            goto label_1e464c;
        }
    }
    ctx->pc = 0x1E4638u;
label_1e4638:
    // 0x1e4638: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e4638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e463c:
    // 0x1e463c: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1e463cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1e4640:
    // 0x1e4640: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x1e4640u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
label_1e4644:
    // 0x1e4644: 0x10000026  b           . + 4 + (0x26 << 2)
label_1e4648:
    if (ctx->pc == 0x1E4648u) {
        ctx->pc = 0x1E4648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4644u;
        // 0x1e4648: 0xae800008  sw          $zero, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E464Cu;
        goto label_1e464c;
    }
    ctx->pc = 0x1E4644u;
    {
        const bool branch_taken_0x1e4644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4644u;
        // 0x1e4648: 0xae800008  sw          $zero, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4644) {
            ctx->pc = 0x1E46E0u;
            goto label_1e46e0;
        }
    }
    ctx->pc = 0x1E464Cu;
label_1e464c:
    // 0x1e464c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e464cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1e4650:
    // 0x1e4650: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1e4654:
    if (ctx->pc == 0x1E4654u) {
        ctx->pc = 0x1E4658u;
        goto label_1e4658;
    }
    ctx->pc = 0x1E4650u;
    {
        const bool branch_taken_0x1e4650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4650) {
            ctx->pc = 0x1E468Cu;
            goto label_1e468c;
        }
    }
    ctx->pc = 0x1E4658u;
label_1e4658:
    // 0x1e4658: 0x92620050  lbu         $v0, 0x50($s3)
    ctx->pc = 0x1e4658u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 80)));
label_1e465c:
    // 0x1e465c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1e4660:
    if (ctx->pc == 0x1E4660u) {
        ctx->pc = 0x1E4664u;
        goto label_1e4664;
    }
    ctx->pc = 0x1E465Cu;
    {
        const bool branch_taken_0x1e465c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e465c) {
            ctx->pc = 0x1E468Cu;
            goto label_1e468c;
        }
    }
    ctx->pc = 0x1E4664u;
label_1e4664:
    // 0x1e4664: 0x6010009  bgez        $s0, . + 4 + (0x9 << 2)
label_1e4668:
    if (ctx->pc == 0x1E4668u) {
        ctx->pc = 0x1E4668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4664u;
        // 0x1e4668: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E466Cu;
        goto label_1e466c;
    }
    ctx->pc = 0x1E4664u;
    {
        const bool branch_taken_0x1e4664 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1E4668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4664u;
        // 0x1e4668: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4664) {
            ctx->pc = 0x1E468Cu;
            goto label_1e468c;
        }
    }
    ctx->pc = 0x1E466Cu;
label_1e466c:
    // 0x1e466c: 0xc079948  jal         func_1E6520
label_1e4670:
    if (ctx->pc == 0x1E4670u) {
        ctx->pc = 0x1E4674u;
        goto label_1e4674;
    }
    ctx->pc = 0x1E466Cu;
    SET_GPR_U32(ctx, 31, 0x1E4674u);
    ctx->pc = 0x1E6520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6520u, 0x1E466Cu, 0x1E4674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4674u;
label_1e4674:
    // 0x1e4674: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1e4678:
    if (ctx->pc == 0x1E4678u) {
        ctx->pc = 0x1E4678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4674u;
        // 0x1e4678: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E467Cu;
        goto label_1e467c;
    }
    ctx->pc = 0x1E4674u;
    {
        const bool branch_taken_0x1e4674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E4678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4674u;
        // 0x1e4678: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4674) {
            ctx->pc = 0x1E468Cu;
            goto label_1e468c;
        }
    }
    ctx->pc = 0x1E467Cu;
label_1e467c:
    // 0x1e467c: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1e467cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1e4680:
    // 0x1e4680: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x1e4680u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
label_1e4684:
    // 0x1e4684: 0x10000016  b           . + 4 + (0x16 << 2)
label_1e4688:
    if (ctx->pc == 0x1E4688u) {
        ctx->pc = 0x1E4688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4684u;
        // 0x1e4688: 0xae800008  sw          $zero, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E468Cu;
        goto label_1e468c;
    }
    ctx->pc = 0x1E4684u;
    {
        const bool branch_taken_0x1e4684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4684u;
        // 0x1e4688: 0xae800008  sw          $zero, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4684) {
            ctx->pc = 0x1E46E0u;
            goto label_1e46e0;
        }
    }
    ctx->pc = 0x1E468Cu;
label_1e468c:
    // 0x1e468c: 0x8e640024  lw          $a0, 0x24($s3)
    ctx->pc = 0x1e468cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_1e4690:
    // 0x1e4690: 0xdfc50070  ld          $a1, 0x70($fp)
    ctx->pc = 0x1e4690u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 30), 112)));
label_1e4694:
    // 0x1e4694: 0xc07f74e  jal         func_1FDD38
label_1e4698:
    if (ctx->pc == 0x1E4698u) {
        ctx->pc = 0x1E4698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4694u;
        // 0x1e4698: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E469Cu;
        goto label_1e469c;
    }
    ctx->pc = 0x1E4694u;
    SET_GPR_U32(ctx, 31, 0x1E469Cu);
    ctx->pc = 0x1E4698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4694u;
    // 0x1e4698: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDD38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDD38u, 0x1E4694u, 0x1E469Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E469Cu;
label_1e469c:
    // 0x1e469c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1e46a0:
    if (ctx->pc == 0x1E46A0u) {
        ctx->pc = 0x1E46A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E469Cu;
        // 0x1e46a0: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E46A4u;
        goto label_1e46a4;
    }
    ctx->pc = 0x1E469Cu;
    {
        const bool branch_taken_0x1e469c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E46A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E469Cu;
        // 0x1e46a0: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e469c) {
            ctx->pc = 0x1E46B4u;
            goto label_1e46b4;
        }
    }
    ctx->pc = 0x1E46A4u;
label_1e46a4:
    // 0x1e46a4: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1e46a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1e46a8:
    // 0x1e46a8: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x1e46a8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
label_1e46ac:
    // 0x1e46ac: 0x1000000c  b           . + 4 + (0xC << 2)
label_1e46b0:
    if (ctx->pc == 0x1E46B0u) {
        ctx->pc = 0x1E46B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E46ACu;
        // 0x1e46b0: 0xae800008  sw          $zero, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E46B4u;
        goto label_1e46b4;
    }
    ctx->pc = 0x1E46ACu;
    {
        const bool branch_taken_0x1e46ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E46B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E46ACu;
        // 0x1e46b0: 0xae800008  sw          $zero, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e46ac) {
            ctx->pc = 0x1E46E0u;
            goto label_1e46e0;
        }
    }
    ctx->pc = 0x1E46B4u;
label_1e46b4:
    // 0x1e46b4: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x1e46b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_1e46b8:
    // 0x1e46b8: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x1e46b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
label_1e46bc:
    // 0x1e46bc: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x1e46bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
label_1e46c0:
    // 0x1e46c0: 0xae600014  sw          $zero, 0x14($s3)
    ctx->pc = 0x1e46c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
label_1e46c4:
    // 0x1e46c4: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x1e46c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
label_1e46c8:
    // 0x1e46c8: 0xae600018  sw          $zero, 0x18($s3)
    ctx->pc = 0x1e46c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 0));
label_1e46cc:
    // 0x1e46cc: 0xa2600050  sb          $zero, 0x50($s3)
    ctx->pc = 0x1e46ccu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 80), (uint8_t)GPR_U32(ctx, 0));
label_1e46d0:
    // 0x1e46d0: 0xdfc30070  ld          $v1, 0x70($fp)
    ctx->pc = 0x1e46d0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 30), 112)));
label_1e46d4:
    // 0x1e46d4: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x1e46d4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
label_1e46d8:
    // 0x1e46d8: 0x8fc30078  lw          $v1, 0x78($fp)
    ctx->pc = 0x1e46d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 120)));
label_1e46dc:
    // 0x1e46dc: 0xae830008  sw          $v1, 0x8($s4)
    ctx->pc = 0x1e46dcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
label_1e46e0:
    // 0x1e46e0: 0x3c0e821  addu        $sp, $fp, $zero
    ctx->pc = 0x1e46e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 0)));
label_1e46e4:
    // 0x1e46e4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1e46e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1e46e8:
    // 0x1e46e8: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x1e46e8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1e46ec:
    // 0x1e46ec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e46ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e46f0:
    // 0x1e46f0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e46f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e46f4:
    // 0x1e46f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e46f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e46f8:
    // 0x1e46f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e46f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e46fc:
    // 0x1e46fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e46fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e4700:
    // 0x1e4700: 0x3e00008  jr          $ra
label_1e4704:
    if (ctx->pc == 0x1E4704u) {
        ctx->pc = 0x1E4704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4700u;
        // 0x1e4704: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4708u;
        goto label_fallthrough_0x1e4700;
    }
    ctx->pc = 0x1E4700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4700u;
        // 0x1e4704: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e4700:
    ctx->pc = 0x1E4708u;
}
