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

// Function: FUN_0010e780
// Address: 0x10e780 - 0x10e850
void FUN_0010e780_0x10e780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010e780_0x10e780");
#endif

    switch (ctx->pc) {
        case 0x10e780u: goto label_10e780;
        case 0x10e784u: goto label_10e784;
        case 0x10e788u: goto label_10e788;
        case 0x10e78cu: goto label_10e78c;
        case 0x10e790u: goto label_10e790;
        case 0x10e794u: goto label_10e794;
        case 0x10e798u: goto label_10e798;
        case 0x10e79cu: goto label_10e79c;
        case 0x10e7a0u: goto label_10e7a0;
        case 0x10e7a4u: goto label_10e7a4;
        case 0x10e7a8u: goto label_10e7a8;
        case 0x10e7acu: goto label_10e7ac;
        case 0x10e7b0u: goto label_10e7b0;
        case 0x10e7b4u: goto label_10e7b4;
        case 0x10e7b8u: goto label_10e7b8;
        case 0x10e7bcu: goto label_10e7bc;
        case 0x10e7c0u: goto label_10e7c0;
        case 0x10e7c4u: goto label_10e7c4;
        case 0x10e7c8u: goto label_10e7c8;
        case 0x10e7ccu: goto label_10e7cc;
        case 0x10e7d0u: goto label_10e7d0;
        case 0x10e7d4u: goto label_10e7d4;
        case 0x10e7d8u: goto label_10e7d8;
        case 0x10e7dcu: goto label_10e7dc;
        case 0x10e7e0u: goto label_10e7e0;
        case 0x10e7e4u: goto label_10e7e4;
        case 0x10e7e8u: goto label_10e7e8;
        case 0x10e7ecu: goto label_10e7ec;
        case 0x10e7f0u: goto label_10e7f0;
        case 0x10e7f4u: goto label_10e7f4;
        case 0x10e7f8u: goto label_10e7f8;
        case 0x10e7fcu: goto label_10e7fc;
        case 0x10e800u: goto label_10e800;
        case 0x10e804u: goto label_10e804;
        case 0x10e808u: goto label_10e808;
        case 0x10e80cu: goto label_10e80c;
        case 0x10e810u: goto label_10e810;
        case 0x10e814u: goto label_10e814;
        case 0x10e818u: goto label_10e818;
        case 0x10e81cu: goto label_10e81c;
        case 0x10e820u: goto label_10e820;
        case 0x10e824u: goto label_10e824;
        case 0x10e828u: goto label_10e828;
        case 0x10e82cu: goto label_10e82c;
        case 0x10e830u: goto label_10e830;
        case 0x10e834u: goto label_10e834;
        case 0x10e838u: goto label_10e838;
        case 0x10e83cu: goto label_10e83c;
        case 0x10e840u: goto label_10e840;
        case 0x10e844u: goto label_10e844;
        case 0x10e848u: goto label_10e848;
        case 0x10e84cu: goto label_10e84c;
        default: break;
    }

    ctx->pc = 0x10e780u;

label_10e780:
    // 0x10e780: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10e780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_10e784:
    // 0x10e784: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10e784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_10e788:
    // 0x10e788: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x10e788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_10e78c:
    // 0x10e78c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10e78cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_10e790:
    // 0x10e790: 0x8c820234  lw          $v0, 0x234($a0)
    ctx->pc = 0x10e790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 564)));
label_10e794:
    // 0x10e794: 0x8c860224  lw          $a2, 0x224($a0)
    ctx->pc = 0x10e794u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 548)));
label_10e798:
    // 0x10e798: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x10e798u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_10e79c:
    // 0x10e79c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_10e7a0:
    if (ctx->pc == 0x10E7A0u) {
        ctx->pc = 0x10E7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E79Cu;
        // 0x10e7a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E7A4u;
        goto label_10e7a4;
    }
    ctx->pc = 0x10E79Cu;
    {
        const bool branch_taken_0x10e79c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E79Cu;
        // 0x10e7a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e79c) {
            ctx->pc = 0x10E7ACu;
            goto label_10e7ac;
        }
    }
    ctx->pc = 0x10E7A4u;
label_10e7a4:
    // 0x10e7a4: 0x10000025  b           . + 4 + (0x25 << 2)
label_10e7a8:
    if (ctx->pc == 0x10E7A8u) {
        ctx->pc = 0x10E7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E7A4u;
        // 0x10e7a8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E7ACu;
        goto label_10e7ac;
    }
    ctx->pc = 0x10E7A4u;
    {
        const bool branch_taken_0x10e7a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E7A4u;
        // 0x10e7a8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e7a4) {
            ctx->pc = 0x10E83Cu;
            goto label_10e83c;
        }
    }
    ctx->pc = 0x10E7ACu;
label_10e7ac:
    // 0x10e7ac: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x10e7acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_10e7b0:
    // 0x10e7b0: 0x1000001d  b           . + 4 + (0x1D << 2)
label_10e7b4:
    if (ctx->pc == 0x10E7B4u) {
        ctx->pc = 0x10E7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E7B0u;
        // 0x10e7b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E7B8u;
        goto label_10e7b8;
    }
    ctx->pc = 0x10E7B0u;
    {
        const bool branch_taken_0x10e7b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E7B0u;
        // 0x10e7b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e7b0) {
            ctx->pc = 0x10E828u;
            goto label_10e828;
        }
    }
    ctx->pc = 0x10E7B8u;
label_10e7b8:
    // 0x10e7b8: 0x8e040220  lw          $a0, 0x220($s0)
    ctx->pc = 0x10e7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
label_10e7bc:
    // 0x10e7bc: 0x8e020210  lw          $v0, 0x210($s0)
    ctx->pc = 0x10e7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
label_10e7c0:
    // 0x10e7c0: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x10e7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_10e7c4:
    // 0x10e7c4: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x10e7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_10e7c8:
    // 0x10e7c8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x10e7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_10e7cc:
    // 0x10e7cc: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x10e7ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_10e7d0:
    // 0x10e7d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10e7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_10e7d4:
    // 0x10e7d4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x10e7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_10e7d8:
    // 0x10e7d8: 0x8c512cd8  lw          $s1, 0x2CD8($v0)
    ctx->pc = 0x10e7d8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_10e7dc:
    // 0x10e7dc: 0x8e2201d4  lw          $v0, 0x1D4($s1)
    ctx->pc = 0x10e7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 468)));
label_10e7e0:
    // 0x10e7e0: 0x1c400010  bgtz        $v0, . + 4 + (0x10 << 2)
label_10e7e4:
    if (ctx->pc == 0x10E7E4u) {
        ctx->pc = 0x10E7E8u;
        goto label_10e7e8;
    }
    ctx->pc = 0x10E7E0u;
    {
        const bool branch_taken_0x10e7e0 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x10e7e0) {
            ctx->pc = 0x10E824u;
            goto label_10e824;
        }
    }
    ctx->pc = 0x10E7E8u;
label_10e7e8:
    // 0x10e7e8: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x10e7e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_10e7ec:
    // 0x10e7ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10e7ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10e7f0:
    // 0x10e7f0: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x10e7f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_10e7f4:
    // 0x10e7f4: 0x320f809  jalr        $t9
label_10e7f8:
    if (ctx->pc == 0x10E7F8u) {
        ctx->pc = 0x10E7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E7F4u;
        // 0x10e7f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E7FCu;
        goto label_10e7fc;
    }
    ctx->pc = 0x10E7F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10E7FCu);
        ctx->pc = 0x10E7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E7F4u;
        // 0x10e7f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E7F4u, 0x10E7FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10E7FCu;
label_10e7fc:
    // 0x10e7fc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x10e7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_10e800:
    // 0x10e800: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10e800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10e804:
    // 0x10e804: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x10e804u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_10e808:
    // 0x10e808: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10e808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10e80c:
    // 0x10e80c: 0xc042584  jal         func_109610
label_10e810:
    if (ctx->pc == 0x10E810u) {
        ctx->pc = 0x10E810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E80Cu;
        // 0x10e810: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E814u;
        goto label_10e814;
    }
    ctx->pc = 0x10E80Cu;
    SET_GPR_U32(ctx, 31, 0x10E814u);
    ctx->pc = 0x10E810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E80Cu;
    // 0x10e810: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109610u, 0x10E80Cu, 0x10E814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E814u;
label_10e814:
    // 0x10e814: 0x8e020234  lw          $v0, 0x234($s0)
    ctx->pc = 0x10e814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 564)));
label_10e818:
    // 0x10e818: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10e818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_10e81c:
    // 0x10e81c: 0x10000005  b           . + 4 + (0x5 << 2)
label_10e820:
    if (ctx->pc == 0x10E820u) {
        ctx->pc = 0x10E820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E81Cu;
        // 0x10e820: 0xae020234  sw          $v0, 0x234($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 564), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E824u;
        goto label_10e824;
    }
    ctx->pc = 0x10E81Cu;
    {
        const bool branch_taken_0x10e81c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E81Cu;
        // 0x10e820: 0xae020234  sw          $v0, 0x234($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 564), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e81c) {
            ctx->pc = 0x10E834u;
            goto label_10e834;
        }
    }
    ctx->pc = 0x10E824u;
label_10e824:
    // 0x10e824: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x10e824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_10e828:
    // 0x10e828: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x10e828u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_10e82c:
    // 0x10e82c: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
label_10e830:
    if (ctx->pc == 0x10E830u) {
        ctx->pc = 0x10E834u;
        goto label_10e834;
    }
    ctx->pc = 0x10E82Cu;
    {
        const bool branch_taken_0x10e82c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10e82c) {
            ctx->pc = 0x10E7B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10e7b8;
        }
    }
    ctx->pc = 0x10E834u;
label_10e834:
    // 0x10e834: 0x0  nop
    ctx->pc = 0x10e834u;
    // NOP
label_10e838:
    // 0x10e838: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10e838u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10e83c:
    // 0x10e83c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10e83cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_10e840:
    // 0x10e840: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10e840u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_10e844:
    // 0x10e844: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10e844u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_10e848:
    // 0x10e848: 0x3e00008  jr          $ra
label_10e84c:
    if (ctx->pc == 0x10E84Cu) {
        ctx->pc = 0x10E84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E848u;
        // 0x10e84c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E850u;
        goto label_fallthrough_0x10e848;
    }
    ctx->pc = 0x10E848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E848u;
        // 0x10e84c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E848u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10e848:
    ctx->pc = 0x10E850u;
}
