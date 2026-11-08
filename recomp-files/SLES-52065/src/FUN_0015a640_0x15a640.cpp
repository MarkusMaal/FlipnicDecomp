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

// Function: FUN_0015a640
// Address: 0x15a640 - 0x15a984
void FUN_0015a640_0x15a640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015a640_0x15a640");
#endif

    switch (ctx->pc) {
        case 0x15a640u: goto label_15a640;
        case 0x15a644u: goto label_15a644;
        case 0x15a648u: goto label_15a648;
        case 0x15a64cu: goto label_15a64c;
        case 0x15a650u: goto label_15a650;
        case 0x15a654u: goto label_15a654;
        case 0x15a658u: goto label_15a658;
        case 0x15a65cu: goto label_15a65c;
        case 0x15a660u: goto label_15a660;
        case 0x15a664u: goto label_15a664;
        case 0x15a668u: goto label_15a668;
        case 0x15a66cu: goto label_15a66c;
        case 0x15a670u: goto label_15a670;
        case 0x15a674u: goto label_15a674;
        case 0x15a678u: goto label_15a678;
        case 0x15a67cu: goto label_15a67c;
        case 0x15a680u: goto label_15a680;
        case 0x15a684u: goto label_15a684;
        case 0x15a688u: goto label_15a688;
        case 0x15a68cu: goto label_15a68c;
        case 0x15a690u: goto label_15a690;
        case 0x15a694u: goto label_15a694;
        case 0x15a698u: goto label_15a698;
        case 0x15a69cu: goto label_15a69c;
        case 0x15a6a0u: goto label_15a6a0;
        case 0x15a6a4u: goto label_15a6a4;
        case 0x15a6a8u: goto label_15a6a8;
        case 0x15a6acu: goto label_15a6ac;
        case 0x15a6b0u: goto label_15a6b0;
        case 0x15a6b4u: goto label_15a6b4;
        case 0x15a6b8u: goto label_15a6b8;
        case 0x15a6bcu: goto label_15a6bc;
        case 0x15a6c0u: goto label_15a6c0;
        case 0x15a6c4u: goto label_15a6c4;
        case 0x15a6c8u: goto label_15a6c8;
        case 0x15a6ccu: goto label_15a6cc;
        case 0x15a6d0u: goto label_15a6d0;
        case 0x15a6d4u: goto label_15a6d4;
        case 0x15a6d8u: goto label_15a6d8;
        case 0x15a6dcu: goto label_15a6dc;
        case 0x15a6e0u: goto label_15a6e0;
        case 0x15a6e4u: goto label_15a6e4;
        case 0x15a6e8u: goto label_15a6e8;
        case 0x15a6ecu: goto label_15a6ec;
        case 0x15a6f0u: goto label_15a6f0;
        case 0x15a6f4u: goto label_15a6f4;
        case 0x15a6f8u: goto label_15a6f8;
        case 0x15a6fcu: goto label_15a6fc;
        case 0x15a700u: goto label_15a700;
        case 0x15a704u: goto label_15a704;
        case 0x15a708u: goto label_15a708;
        case 0x15a70cu: goto label_15a70c;
        case 0x15a710u: goto label_15a710;
        case 0x15a714u: goto label_15a714;
        case 0x15a718u: goto label_15a718;
        case 0x15a71cu: goto label_15a71c;
        case 0x15a720u: goto label_15a720;
        case 0x15a724u: goto label_15a724;
        case 0x15a728u: goto label_15a728;
        case 0x15a72cu: goto label_15a72c;
        case 0x15a730u: goto label_15a730;
        case 0x15a734u: goto label_15a734;
        case 0x15a738u: goto label_15a738;
        case 0x15a73cu: goto label_15a73c;
        case 0x15a740u: goto label_15a740;
        case 0x15a744u: goto label_15a744;
        case 0x15a748u: goto label_15a748;
        case 0x15a74cu: goto label_15a74c;
        case 0x15a750u: goto label_15a750;
        case 0x15a754u: goto label_15a754;
        case 0x15a758u: goto label_15a758;
        case 0x15a75cu: goto label_15a75c;
        case 0x15a760u: goto label_15a760;
        case 0x15a764u: goto label_15a764;
        case 0x15a768u: goto label_15a768;
        case 0x15a76cu: goto label_15a76c;
        case 0x15a770u: goto label_15a770;
        case 0x15a774u: goto label_15a774;
        case 0x15a778u: goto label_15a778;
        case 0x15a77cu: goto label_15a77c;
        case 0x15a780u: goto label_15a780;
        case 0x15a784u: goto label_15a784;
        case 0x15a788u: goto label_15a788;
        case 0x15a78cu: goto label_15a78c;
        case 0x15a790u: goto label_15a790;
        case 0x15a794u: goto label_15a794;
        case 0x15a798u: goto label_15a798;
        case 0x15a79cu: goto label_15a79c;
        case 0x15a7a0u: goto label_15a7a0;
        case 0x15a7a4u: goto label_15a7a4;
        case 0x15a7a8u: goto label_15a7a8;
        case 0x15a7acu: goto label_15a7ac;
        case 0x15a7b0u: goto label_15a7b0;
        case 0x15a7b4u: goto label_15a7b4;
        case 0x15a7b8u: goto label_15a7b8;
        case 0x15a7bcu: goto label_15a7bc;
        case 0x15a7c0u: goto label_15a7c0;
        case 0x15a7c4u: goto label_15a7c4;
        case 0x15a7c8u: goto label_15a7c8;
        case 0x15a7ccu: goto label_15a7cc;
        case 0x15a7d0u: goto label_15a7d0;
        case 0x15a7d4u: goto label_15a7d4;
        case 0x15a7d8u: goto label_15a7d8;
        case 0x15a7dcu: goto label_15a7dc;
        case 0x15a7e0u: goto label_15a7e0;
        case 0x15a7e4u: goto label_15a7e4;
        case 0x15a7e8u: goto label_15a7e8;
        case 0x15a7ecu: goto label_15a7ec;
        case 0x15a7f0u: goto label_15a7f0;
        case 0x15a7f4u: goto label_15a7f4;
        case 0x15a7f8u: goto label_15a7f8;
        case 0x15a7fcu: goto label_15a7fc;
        case 0x15a800u: goto label_15a800;
        case 0x15a804u: goto label_15a804;
        case 0x15a808u: goto label_15a808;
        case 0x15a80cu: goto label_15a80c;
        case 0x15a810u: goto label_15a810;
        case 0x15a814u: goto label_15a814;
        case 0x15a818u: goto label_15a818;
        case 0x15a81cu: goto label_15a81c;
        case 0x15a820u: goto label_15a820;
        case 0x15a824u: goto label_15a824;
        case 0x15a828u: goto label_15a828;
        case 0x15a82cu: goto label_15a82c;
        case 0x15a830u: goto label_15a830;
        case 0x15a834u: goto label_15a834;
        case 0x15a838u: goto label_15a838;
        case 0x15a83cu: goto label_15a83c;
        case 0x15a840u: goto label_15a840;
        case 0x15a844u: goto label_15a844;
        case 0x15a848u: goto label_15a848;
        case 0x15a84cu: goto label_15a84c;
        case 0x15a850u: goto label_15a850;
        case 0x15a854u: goto label_15a854;
        case 0x15a858u: goto label_15a858;
        case 0x15a85cu: goto label_15a85c;
        case 0x15a860u: goto label_15a860;
        case 0x15a864u: goto label_15a864;
        case 0x15a868u: goto label_15a868;
        case 0x15a86cu: goto label_15a86c;
        case 0x15a870u: goto label_15a870;
        case 0x15a874u: goto label_15a874;
        case 0x15a878u: goto label_15a878;
        case 0x15a87cu: goto label_15a87c;
        case 0x15a880u: goto label_15a880;
        case 0x15a884u: goto label_15a884;
        case 0x15a888u: goto label_15a888;
        case 0x15a88cu: goto label_15a88c;
        case 0x15a890u: goto label_15a890;
        case 0x15a894u: goto label_15a894;
        case 0x15a898u: goto label_15a898;
        case 0x15a89cu: goto label_15a89c;
        case 0x15a8a0u: goto label_15a8a0;
        case 0x15a8a4u: goto label_15a8a4;
        case 0x15a8a8u: goto label_15a8a8;
        case 0x15a8acu: goto label_15a8ac;
        case 0x15a8b0u: goto label_15a8b0;
        case 0x15a8b4u: goto label_15a8b4;
        case 0x15a8b8u: goto label_15a8b8;
        case 0x15a8bcu: goto label_15a8bc;
        case 0x15a8c0u: goto label_15a8c0;
        case 0x15a8c4u: goto label_15a8c4;
        case 0x15a8c8u: goto label_15a8c8;
        case 0x15a8ccu: goto label_15a8cc;
        case 0x15a8d0u: goto label_15a8d0;
        case 0x15a8d4u: goto label_15a8d4;
        case 0x15a8d8u: goto label_15a8d8;
        case 0x15a8dcu: goto label_15a8dc;
        case 0x15a8e0u: goto label_15a8e0;
        case 0x15a8e4u: goto label_15a8e4;
        case 0x15a8e8u: goto label_15a8e8;
        case 0x15a8ecu: goto label_15a8ec;
        case 0x15a8f0u: goto label_15a8f0;
        case 0x15a8f4u: goto label_15a8f4;
        case 0x15a8f8u: goto label_15a8f8;
        case 0x15a8fcu: goto label_15a8fc;
        case 0x15a900u: goto label_15a900;
        case 0x15a904u: goto label_15a904;
        case 0x15a908u: goto label_15a908;
        case 0x15a90cu: goto label_15a90c;
        case 0x15a910u: goto label_15a910;
        case 0x15a914u: goto label_15a914;
        case 0x15a918u: goto label_15a918;
        case 0x15a91cu: goto label_15a91c;
        case 0x15a920u: goto label_15a920;
        case 0x15a924u: goto label_15a924;
        case 0x15a928u: goto label_15a928;
        case 0x15a92cu: goto label_15a92c;
        case 0x15a930u: goto label_15a930;
        case 0x15a934u: goto label_15a934;
        case 0x15a938u: goto label_15a938;
        case 0x15a93cu: goto label_15a93c;
        case 0x15a940u: goto label_15a940;
        case 0x15a944u: goto label_15a944;
        case 0x15a948u: goto label_15a948;
        case 0x15a94cu: goto label_15a94c;
        case 0x15a950u: goto label_15a950;
        case 0x15a954u: goto label_15a954;
        case 0x15a958u: goto label_15a958;
        case 0x15a95cu: goto label_15a95c;
        case 0x15a960u: goto label_15a960;
        case 0x15a964u: goto label_15a964;
        case 0x15a968u: goto label_15a968;
        case 0x15a96cu: goto label_15a96c;
        case 0x15a970u: goto label_15a970;
        case 0x15a974u: goto label_15a974;
        case 0x15a978u: goto label_15a978;
        case 0x15a97cu: goto label_15a97c;
        case 0x15a980u: goto label_15a980;
        default: break;
    }

    ctx->pc = 0x15a640u;

label_15a640:
    // 0x15a640: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x15a640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_15a644:
    // 0x15a644: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x15a644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_15a648:
    // 0x15a648: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15a648u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15a64c:
    // 0x15a64c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15a64cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_15a650:
    // 0x15a650: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15a650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_15a654:
    // 0x15a654: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x15a654u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15a658:
    // 0x15a658: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15a658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_15a65c:
    // 0x15a65c: 0xc4a102f0  lwc1        $f1, 0x2F0($a1)
    ctx->pc = 0x15a65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15a660:
    // 0x15a660: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x15a660u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_15a664:
    // 0x15a664: 0x0  nop
    ctx->pc = 0x15a664u;
    // NOP
label_15a668:
    // 0x15a668: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_15a66c:
    if (ctx->pc == 0x15A66Cu) {
        ctx->pc = 0x15A66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A668u;
        // 0x15a66c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A670u;
        goto label_15a670;
    }
    ctx->pc = 0x15A668u;
    {
        const bool branch_taken_0x15a668 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15A66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A668u;
        // 0x15a66c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a668) {
            ctx->pc = 0x15A678u;
            goto label_15a678;
        }
    }
    ctx->pc = 0x15A670u;
label_15a670:
    // 0x15a670: 0x100000be  b           . + 4 + (0xBE << 2)
label_15a674:
    if (ctx->pc == 0x15A674u) {
        ctx->pc = 0x15A674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A670u;
        // 0x15a674: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A678u;
        goto label_15a678;
    }
    ctx->pc = 0x15A670u;
    {
        const bool branch_taken_0x15a670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A670u;
        // 0x15a674: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a670) {
            ctx->pc = 0x15A96Cu;
            goto label_15a96c;
        }
    }
    ctx->pc = 0x15A678u;
label_15a678:
    // 0x15a678: 0x862201f6  lh          $v0, 0x1F6($s1)
    ctx->pc = 0x15a678u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 502)));
label_15a67c:
    // 0x15a67c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x15a67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_15a680:
    // 0x15a680: 0xa62201f6  sh          $v0, 0x1F6($s1)
    ctx->pc = 0x15a680u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 502), (uint16_t)GPR_U32(ctx, 2));
label_15a684:
    // 0x15a684: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x15a684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_15a688:
    // 0x15a688: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x15a688u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_15a68c:
    // 0x15a68c: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x15a68cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_15a690:
    // 0x15a690: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_15a694:
    if (ctx->pc == 0x15A694u) {
        ctx->pc = 0x15A694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A690u;
        // 0x15a694: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A698u;
        goto label_15a698;
    }
    ctx->pc = 0x15A690u;
    {
        const bool branch_taken_0x15a690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15A694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A690u;
        // 0x15a694: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a690) {
            ctx->pc = 0x15A6A0u;
            goto label_15a6a0;
        }
    }
    ctx->pc = 0x15A698u;
label_15a698:
    // 0x15a698: 0x100000b5  b           . + 4 + (0xB5 << 2)
label_15a69c:
    if (ctx->pc == 0x15A69Cu) {
        ctx->pc = 0x15A69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A698u;
        // 0x15a69c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A6A0u;
        goto label_15a6a0;
    }
    ctx->pc = 0x15A698u;
    {
        const bool branch_taken_0x15a698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A698u;
        // 0x15a69c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a698) {
            ctx->pc = 0x15A970u;
            goto label_15a970;
        }
    }
    ctx->pc = 0x15A6A0u;
label_15a6a0:
    // 0x15a6a0: 0x924201f6  lbu         $v0, 0x1F6($s2)
    ctx->pc = 0x15a6a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 502)));
label_15a6a4:
    // 0x15a6a4: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_15a6a8:
    if (ctx->pc == 0x15A6A8u) {
        ctx->pc = 0x15A6ACu;
        goto label_15a6ac;
    }
    ctx->pc = 0x15A6A4u;
    {
        const bool branch_taken_0x15a6a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15a6a4) {
            ctx->pc = 0x15A6F4u;
            goto label_15a6f4;
        }
    }
    ctx->pc = 0x15A6ACu;
label_15a6ac:
    // 0x15a6ac: 0x864301f4  lh          $v1, 0x1F4($s2)
    ctx->pc = 0x15a6acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 500)));
label_15a6b0:
    // 0x15a6b0: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x15a6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
label_15a6b4:
    // 0x15a6b4: 0x34425556  ori         $v0, $v0, 0x5556
    ctx->pc = 0x15a6b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
label_15a6b8:
    // 0x15a6b8: 0x8e4401f0  lw          $a0, 0x1F0($s2)
    ctx->pc = 0x15a6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 496)));
label_15a6bc:
    // 0x15a6bc: 0xc62c01c0  lwc1        $f12, 0x1C0($s1)
    ctx->pc = 0x15a6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_15a6c0:
    // 0x15a6c0: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x15a6c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_15a6c4:
    // 0x15a6c4: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x15a6c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_15a6c8:
    // 0x15a6c8: 0x26280300  addiu       $t0, $s1, 0x300
    ctx->pc = 0x15a6c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
label_15a6cc:
    // 0x15a6cc: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x15a6ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15a6d0:
    // 0x15a6d0: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x15a6d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_15a6d4:
    // 0x15a6d4: 0x0  nop
    ctx->pc = 0x15a6d4u;
    // NOP
label_15a6d8:
    // 0x15a6d8: 0x0  nop
    ctx->pc = 0x15a6d8u;
    // NOP
label_15a6dc:
    // 0x15a6dc: 0x1010  mfhi        $v0
    ctx->pc = 0x15a6dcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_15a6e0:
    // 0x15a6e0: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x15a6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_15a6e4:
    // 0x15a6e4: 0xc054a44  jal         func_152910
label_15a6e8:
    if (ctx->pc == 0x15A6E8u) {
        ctx->pc = 0x15A6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A6E4u;
        // 0x15a6e8: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A6ECu;
        goto label_15a6ec;
    }
    ctx->pc = 0x15A6E4u;
    SET_GPR_U32(ctx, 31, 0x15A6ECu);
    ctx->pc = 0x15A6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A6E4u;
    // 0x15a6e8: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152910u, 0x15A6E4u, 0x15A6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A6ECu;
label_15a6ec:
    // 0x15a6ec: 0x10000012  b           . + 4 + (0x12 << 2)
label_15a6f0:
    if (ctx->pc == 0x15A6F0u) {
        ctx->pc = 0x15A6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A6ECu;
        // 0x15a6f0: 0xae220338  sw          $v0, 0x338($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 824), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A6F4u;
        goto label_15a6f4;
    }
    ctx->pc = 0x15A6ECu;
    {
        const bool branch_taken_0x15a6ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A6ECu;
        // 0x15a6f0: 0xae220338  sw          $v0, 0x338($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 824), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a6ec) {
            ctx->pc = 0x15A738u;
            goto label_15a738;
        }
    }
    ctx->pc = 0x15A6F4u;
label_15a6f4:
    // 0x15a6f4: 0x864301f4  lh          $v1, 0x1F4($s2)
    ctx->pc = 0x15a6f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 500)));
label_15a6f8:
    // 0x15a6f8: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x15a6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
label_15a6fc:
    // 0x15a6fc: 0x34425556  ori         $v0, $v0, 0x5556
    ctx->pc = 0x15a6fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
label_15a700:
    // 0x15a700: 0x8e4401f0  lw          $a0, 0x1F0($s2)
    ctx->pc = 0x15a700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 496)));
label_15a704:
    // 0x15a704: 0xc62c01c0  lwc1        $f12, 0x1C0($s1)
    ctx->pc = 0x15a704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_15a708:
    // 0x15a708: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x15a708u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_15a70c:
    // 0x15a70c: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x15a70cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_15a710:
    // 0x15a710: 0x26280300  addiu       $t0, $s1, 0x300
    ctx->pc = 0x15a710u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
label_15a714:
    // 0x15a714: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x15a714u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15a718:
    // 0x15a718: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x15a718u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_15a71c:
    // 0x15a71c: 0x0  nop
    ctx->pc = 0x15a71cu;
    // NOP
label_15a720:
    // 0x15a720: 0x0  nop
    ctx->pc = 0x15a720u;
    // NOP
label_15a724:
    // 0x15a724: 0x1010  mfhi        $v0
    ctx->pc = 0x15a724u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_15a728:
    // 0x15a728: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x15a728u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_15a72c:
    // 0x15a72c: 0xc054a78  jal         func_1529E0
label_15a730:
    if (ctx->pc == 0x15A730u) {
        ctx->pc = 0x15A730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A72Cu;
        // 0x15a730: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A734u;
        goto label_15a734;
    }
    ctx->pc = 0x15A72Cu;
    SET_GPR_U32(ctx, 31, 0x15A734u);
    ctx->pc = 0x15A730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A72Cu;
    // 0x15a730: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1529E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1529E0u, 0x15A72Cu, 0x15A734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A734u;
label_15a734:
    // 0x15a734: 0xae220338  sw          $v0, 0x338($s1)
    ctx->pc = 0x15a734u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 824), GPR_U32(ctx, 2));
label_15a738:
    // 0x15a738: 0x8e240338  lw          $a0, 0x338($s1)
    ctx->pc = 0x15a738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
label_15a73c:
    // 0x15a73c: 0x4800089  bltz        $a0, . + 4 + (0x89 << 2)
label_15a740:
    if (ctx->pc == 0x15A740u) {
        ctx->pc = 0x15A740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A73Cu;
        // 0x15a740: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A744u;
        goto label_15a744;
    }
    ctx->pc = 0x15A73Cu;
    {
        const bool branch_taken_0x15a73c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x15A740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A73Cu;
        // 0x15a740: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a73c) {
            ctx->pc = 0x15A964u;
            goto label_15a964;
        }
    }
    ctx->pc = 0x15A744u;
label_15a744:
    // 0x15a744: 0x8e4201f0  lw          $v0, 0x1F0($s2)
    ctx->pc = 0x15a744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 496)));
label_15a748:
    // 0x15a748: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x15a748u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_15a74c:
    // 0x15a74c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15a74cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15a750:
    // 0x15a750: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x15a750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_15a754:
    // 0x15a754: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15a754u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15a758:
    // 0x15a758: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x15a758u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_15a75c:
    // 0x15a75c: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x15a75cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_15a760:
    // 0x15a760: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15a760u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15a764:
    // 0x15a764: 0x26290300  addiu       $t1, $s1, 0x300
    ctx->pc = 0x15a764u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
label_15a768:
    // 0x15a768: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x15a768u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15a76c:
    // 0x15a76c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15a76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15a770:
    // 0x15a770: 0xae22033c  sw          $v0, 0x33C($s1)
    ctx->pc = 0x15a770u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 828), GPR_U32(ctx, 2));
label_15a774:
    // 0x15a774: 0x8e24033c  lw          $a0, 0x33C($s1)
    ctx->pc = 0x15a774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 828)));
label_15a778:
    // 0x15a778: 0xc054c30  jal         func_1530C0
label_15a77c:
    if (ctx->pc == 0x15A77Cu) {
        ctx->pc = 0x15A77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A778u;
        // 0x15a77c: 0x27ab0040  addiu       $t3, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A780u;
        goto label_15a780;
    }
    ctx->pc = 0x15A778u;
    SET_GPR_U32(ctx, 31, 0x15A780u);
    ctx->pc = 0x15A77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A778u;
    // 0x15a77c: 0x27ab0040  addiu       $t3, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1530C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1530C0u, 0x15A778u, 0x15A780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A780u;
label_15a780:
    // 0x15a780: 0xc62201c0  lwc1        $f2, 0x1C0($s1)
    ctx->pc = 0x15a780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_15a784:
    // 0x15a784: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x15a784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
label_15a788:
    // 0x15a788: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x15a788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
label_15a78c:
    // 0x15a78c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15a78cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_15a790:
    // 0x15a790: 0x0  nop
    ctx->pc = 0x15a790u;
    // NOP
label_15a794:
    // 0x15a794: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x15a794u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_15a798:
    // 0x15a798: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x15a798u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_15a79c:
    // 0x15a79c: 0x0  nop
    ctx->pc = 0x15a79cu;
    // NOP
label_15a7a0:
    // 0x15a7a0: 0x45000025  bc1f        . + 4 + (0x25 << 2)
label_15a7a4:
    if (ctx->pc == 0x15A7A4u) {
        ctx->pc = 0x15A7A8u;
        goto label_15a7a8;
    }
    ctx->pc = 0x15A7A0u;
    {
        const bool branch_taken_0x15a7a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15a7a0) {
            ctx->pc = 0x15A838u;
            goto label_15a838;
        }
    }
    ctx->pc = 0x15A7A8u;
label_15a7a8:
    // 0x15a7a8: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x15a7a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_15a7ac:
    // 0x15a7ac: 0x0  nop
    ctx->pc = 0x15a7acu;
    // NOP
label_15a7b0:
    // 0x15a7b0: 0x46001832  c.eq.s      $f3, $f0
    ctx->pc = 0x15a7b0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_15a7b4:
    // 0x15a7b4: 0x0  nop
    ctx->pc = 0x15a7b4u;
    // NOP
label_15a7b8:
    // 0x15a7b8: 0x4501001f  bc1t        . + 4 + (0x1F << 2)
label_15a7bc:
    if (ctx->pc == 0x15A7BCu) {
        ctx->pc = 0x15A7C0u;
        goto label_15a7c0;
    }
    ctx->pc = 0x15A7B8u;
    {
        const bool branch_taken_0x15a7b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15a7b8) {
            ctx->pc = 0x15A838u;
            goto label_15a838;
        }
    }
    ctx->pc = 0x15A7C0u;
label_15a7c0:
    // 0x15a7c0: 0x0  nop
    ctx->pc = 0x15a7c0u;
    // NOP
label_15a7c4:
    // 0x15a7c4: 0x0  nop
    ctx->pc = 0x15a7c4u;
    // NOP
label_15a7c8:
    // 0x15a7c8: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x15a7c8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
label_15a7cc:
    // 0x15a7cc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15a7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_15a7d0:
    // 0x15a7d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15a7d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15a7d4:
    // 0x15a7d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15a7d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15a7d8:
    // 0x15a7d8: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x15a7d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_15a7dc:
    // 0x15a7dc: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x15a7dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_15a7e0:
    // 0x15a7e0: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x15a7e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_15a7e4:
    // 0x15a7e4: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x15a7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15a7e8:
    // 0x15a7e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15a7e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_15a7ec:
    // 0x15a7ec: 0x0  nop
    ctx->pc = 0x15a7ecu;
    // NOP
label_15a7f0:
    // 0x15a7f0: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x15a7f0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_15a7f4:
    // 0x15a7f4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x15a7f4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_15a7f8:
    // 0x15a7f8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x15a7f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_15a7fc:
    // 0x15a7fc: 0xe62002e8  swc1        $f0, 0x2E8($s1)
    ctx->pc = 0x15a7fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 744), bits); }
label_15a800:
    // 0x15a800: 0xc056a64  jal         func_15A990
label_15a804:
    if (ctx->pc == 0x15A804u) {
        ctx->pc = 0x15A804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A800u;
        // 0x15a804: 0xe62302e8  swc1        $f3, 0x2E8($s1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 744), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A808u;
        goto label_15a808;
    }
    ctx->pc = 0x15A800u;
    SET_GPR_U32(ctx, 31, 0x15A808u);
    ctx->pc = 0x15A804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A800u;
    // 0x15a804: 0xe62302e8  swc1        $f3, 0x2E8($s1) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 744), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A990u, 0x15A800u, 0x15A808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A808u;
label_15a808:
    // 0x15a808: 0x8e590008  lw          $t9, 0x8($s2)
    ctx->pc = 0x15a808u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_15a80c:
    // 0x15a80c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15a80cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15a810:
    // 0x15a810: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x15a810u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_15a814:
    // 0x15a814: 0x320f809  jalr        $t9
label_15a818:
    if (ctx->pc == 0x15A818u) {
        ctx->pc = 0x15A818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A814u;
        // 0x15a818: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A81Cu;
        goto label_15a81c;
    }
    ctx->pc = 0x15A814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15A81Cu);
        ctx->pc = 0x15A818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A814u;
        // 0x15a818: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A814u, 0x15A81Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15A81Cu;
label_15a81c:
    // 0x15a81c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x15a81cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15a820:
    // 0x15a820: 0x14500003  bne         $v0, $s0, . + 4 + (0x3 << 2)
label_15a824:
    if (ctx->pc == 0x15A824u) {
        ctx->pc = 0x15A828u;
        goto label_15a828;
    }
    ctx->pc = 0x15A820u;
    {
        const bool branch_taken_0x15a820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x15a820) {
            ctx->pc = 0x15A830u;
            goto label_15a830;
        }
    }
    ctx->pc = 0x15A828u;
label_15a828:
    // 0x15a828: 0x10000050  b           . + 4 + (0x50 << 2)
label_15a82c:
    if (ctx->pc == 0x15A82Cu) {
        ctx->pc = 0x15A82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A828u;
        // 0x15a82c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A830u;
        goto label_15a830;
    }
    ctx->pc = 0x15A828u;
    {
        const bool branch_taken_0x15a828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A828u;
        // 0x15a82c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a828) {
            ctx->pc = 0x15A96Cu;
            goto label_15a96c;
        }
    }
    ctx->pc = 0x15A830u;
label_15a830:
    // 0x15a830: 0x1000004d  b           . + 4 + (0x4D << 2)
label_15a834:
    if (ctx->pc == 0x15A834u) {
        ctx->pc = 0x15A834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A830u;
        // 0x15a834: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A838u;
        goto label_15a838;
    }
    ctx->pc = 0x15A830u;
    {
        const bool branch_taken_0x15a830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A830u;
        // 0x15a834: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a830) {
            ctx->pc = 0x15A968u;
            goto label_15a968;
        }
    }
    ctx->pc = 0x15A838u;
label_15a838:
    // 0x15a838: 0xa62001e8  sh          $zero, 0x1E8($s1)
    ctx->pc = 0x15a838u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 488), (uint16_t)GPR_U32(ctx, 0));
label_15a83c:
    // 0x15a83c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15a83cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_15a840:
    // 0x15a840: 0xc62201c0  lwc1        $f2, 0x1C0($s1)
    ctx->pc = 0x15a840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_15a844:
    // 0x15a844: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x15a844u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_15a848:
    // 0x15a848: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x15a848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15a84c:
    // 0x15a84c: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x15a84cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
label_15a850:
    // 0x15a850: 0x46001881  sub.s       $f2, $f3, $f0
    ctx->pc = 0x15a850u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_15a854:
    // 0x15a854: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x15a854u;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
label_15a858:
    // 0x15a858: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x15a858u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_15a85c:
    // 0x15a85c: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x15a85cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_15a860:
    // 0x15a860: 0x0  nop
    ctx->pc = 0x15a860u;
    // NOP
label_15a864:
    // 0x15a864: 0x45000040  bc1f        . + 4 + (0x40 << 2)
label_15a868:
    if (ctx->pc == 0x15A868u) {
        ctx->pc = 0x15A868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A864u;
        // 0x15a868: 0xe62002e8  swc1        $f0, 0x2E8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 744), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A86Cu;
        goto label_15a86c;
    }
    ctx->pc = 0x15A864u;
    {
        const bool branch_taken_0x15a864 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15A868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A864u;
        // 0x15a868: 0xe62002e8  swc1        $f0, 0x2E8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 744), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a864) {
            ctx->pc = 0x15A968u;
            goto label_15a968;
        }
    }
    ctx->pc = 0x15A86Cu;
label_15a86c:
    // 0x15a86c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x15a86cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_15a870:
    // 0x15a870: 0x0  nop
    ctx->pc = 0x15a870u;
    // NOP
label_15a874:
    // 0x15a874: 0x460d0034  c.lt.s      $f0, $f13
    ctx->pc = 0x15a874u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_15a878:
    // 0x15a878: 0x0  nop
    ctx->pc = 0x15a878u;
    // NOP
label_15a87c:
    // 0x15a87c: 0x4501003a  bc1t        . + 4 + (0x3A << 2)
label_15a880:
    if (ctx->pc == 0x15A880u) {
        ctx->pc = 0x15A880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A87Cu;
        // 0x15a880: 0x26230300  addiu       $v1, $s1, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A884u;
        goto label_15a884;
    }
    ctx->pc = 0x15A87Cu;
    {
        const bool branch_taken_0x15a87c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x15A880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A87Cu;
        // 0x15a880: 0x26230300  addiu       $v1, $s1, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a87c) {
            ctx->pc = 0x15A968u;
            goto label_15a968;
        }
    }
    ctx->pc = 0x15A884u;
label_15a884:
    // 0x15a884: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x15a884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_15a888:
    // 0x15a888: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x15a888u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_15a88c:
    // 0x15a88c: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x15a88cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_15a890:
    // 0x15a890: 0x4bc5216a  vmul.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x15a890u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_15a894:
    // 0x15a894: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x15a894u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_15a898:
    // 0x15a898: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x15a898u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_15a89c:
    // 0x15a89c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x15a89cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_15a8a0:
    // 0x15a8a0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x15a8a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_15a8a4:
    // 0x15a8a4: 0xc62102f0  lwc1        $f1, 0x2F0($s1)
    ctx->pc = 0x15a8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15a8a8:
    // 0x15a8a8: 0xc78080b4  lwc1        $f0, -0x7F4C($gp)
    ctx->pc = 0x15a8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15a8ac:
    // 0x15a8ac: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x15a8acu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
label_15a8b0:
    // 0x15a8b0: 0x0  nop
    ctx->pc = 0x15a8b0u;
    // NOP
label_15a8b4:
    // 0x15a8b4: 0x0  nop
    ctx->pc = 0x15a8b4u;
    // NOP
label_15a8b8:
    // 0x15a8b8: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x15a8b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_15a8bc:
    // 0x15a8bc: 0x0  nop
    ctx->pc = 0x15a8bcu;
    // NOP
label_15a8c0:
    // 0x15a8c0: 0x45000012  bc1f        . + 4 + (0x12 << 2)
label_15a8c4:
    if (ctx->pc == 0x15A8C4u) {
        ctx->pc = 0x15A8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A8C0u;
        // 0x15a8c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A8C8u;
        goto label_15a8c8;
    }
    ctx->pc = 0x15A8C0u;
    {
        const bool branch_taken_0x15a8c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15A8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A8C0u;
        // 0x15a8c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a8c0) {
            ctx->pc = 0x15A90Cu;
            goto label_15a90c;
        }
    }
    ctx->pc = 0x15A8C8u;
label_15a8c8:
    // 0x15a8c8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x15a8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_15a8cc:
    // 0x15a8cc: 0xc4600054  lwc1        $f0, 0x54($v1)
    ctx->pc = 0x15a8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15a8d0:
    // 0x15a8d0: 0x460d0034  c.lt.s      $f0, $f13
    ctx->pc = 0x15a8d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_15a8d4:
    // 0x15a8d4: 0x0  nop
    ctx->pc = 0x15a8d4u;
    // NOP
label_15a8d8:
    // 0x15a8d8: 0x4501000b  bc1t        . + 4 + (0xB << 2)
label_15a8dc:
    if (ctx->pc == 0x15A8DCu) {
        ctx->pc = 0x15A8E0u;
        goto label_15a8e0;
    }
    ctx->pc = 0x15A8D8u;
    {
        const bool branch_taken_0x15a8d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15a8d8) {
            ctx->pc = 0x15A908u;
            goto label_15a908;
        }
    }
    ctx->pc = 0x15A8E0u;
label_15a8e0:
    // 0x15a8e0: 0xc7828020  lwc1        $f2, -0x7FE0($gp)
    ctx->pc = 0x15a8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_15a8e4:
    // 0x15a8e4: 0xc78080bc  lwc1        $f0, -0x7F44($gp)
    ctx->pc = 0x15a8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15a8e8:
    // 0x15a8e8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x15a8e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_15a8ec:
    // 0x15a8ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x15a8ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_15a8f0:
    // 0x15a8f0: 0x0  nop
    ctx->pc = 0x15a8f0u;
    // NOP
label_15a8f4:
    // 0x15a8f4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_15a8f8:
    if (ctx->pc == 0x15A8F8u) {
        ctx->pc = 0x15A8FCu;
        goto label_15a8fc;
    }
    ctx->pc = 0x15A8F4u;
    {
        const bool branch_taken_0x15a8f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15a8f4) {
            ctx->pc = 0x15A908u;
            goto label_15a908;
        }
    }
    ctx->pc = 0x15A8FCu;
label_15a8fc:
    // 0x15a8fc: 0x862201f8  lh          $v0, 0x1F8($s1)
    ctx->pc = 0x15a8fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 504)));
label_15a900:
    // 0x15a900: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_15a904:
    if (ctx->pc == 0x15A904u) {
        ctx->pc = 0x15A908u;
        goto label_15a908;
    }
    ctx->pc = 0x15A900u;
    {
        const bool branch_taken_0x15a900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a900) {
            ctx->pc = 0x15A928u;
            goto label_15a928;
        }
    }
    ctx->pc = 0x15A908u;
label_15a908:
    // 0x15a908: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15a908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15a90c:
    // 0x15a90c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15a90cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15a910:
    // 0x15a910: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x15a910u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_15a914:
    // 0x15a914: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x15a914u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_15a918:
    // 0x15a918: 0xc0564fc  jal         func_1593F0
label_15a91c:
    if (ctx->pc == 0x15A91Cu) {
        ctx->pc = 0x15A91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A918u;
        // 0x15a91c: 0x27a80060  addiu       $t0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A920u;
        goto label_15a920;
    }
    ctx->pc = 0x15A918u;
    SET_GPR_U32(ctx, 31, 0x15A920u);
    ctx->pc = 0x15A91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A918u;
    // 0x15a91c: 0x27a80060  addiu       $t0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1593F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1593F0u, 0x15A918u, 0x15A920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A920u;
label_15a920:
    // 0x15a920: 0x10000006  b           . + 4 + (0x6 << 2)
label_15a924:
    if (ctx->pc == 0x15A924u) {
        ctx->pc = 0x15A924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A920u;
        // 0x15a924: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A928u;
        goto label_15a928;
    }
    ctx->pc = 0x15A920u;
    {
        const bool branch_taken_0x15a920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A920u;
        // 0x15a924: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a920) {
            ctx->pc = 0x15A93Cu;
            goto label_15a93c;
        }
    }
    ctx->pc = 0x15A928u;
label_15a928:
    // 0x15a928: 0xc46c004c  lwc1        $f12, 0x4C($v1)
    ctx->pc = 0x15a928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_15a92c:
    // 0x15a92c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15a92cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15a930:
    // 0x15a930: 0xc0566b8  jal         func_159AE0
label_15a934:
    if (ctx->pc == 0x15A934u) {
        ctx->pc = 0x15A934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A930u;
        // 0x15a934: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A938u;
        goto label_15a938;
    }
    ctx->pc = 0x15A930u;
    SET_GPR_U32(ctx, 31, 0x15A938u);
    ctx->pc = 0x15A934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A930u;
    // 0x15a934: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x159AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159AE0u, 0x15A930u, 0x15A938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A938u;
label_15a938:
    // 0x15a938: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x15a938u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15a93c:
    // 0x15a93c: 0x8e590008  lw          $t9, 0x8($s2)
    ctx->pc = 0x15a93cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_15a940:
    // 0x15a940: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15a940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15a944:
    // 0x15a944: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x15a944u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_15a948:
    // 0x15a948: 0x320f809  jalr        $t9
label_15a94c:
    if (ctx->pc == 0x15A94Cu) {
        ctx->pc = 0x15A94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A948u;
        // 0x15a94c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A950u;
        goto label_15a950;
    }
    ctx->pc = 0x15A948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15A950u);
        ctx->pc = 0x15A94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A948u;
        // 0x15a94c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A948u, 0x15A950u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15A950u;
label_15a950:
    // 0x15a950: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15a950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15a954:
    // 0x15a954: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_15a958:
    if (ctx->pc == 0x15A958u) {
        ctx->pc = 0x15A95Cu;
        goto label_15a95c;
    }
    ctx->pc = 0x15A954u;
    {
        const bool branch_taken_0x15a954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x15a954) {
            ctx->pc = 0x15A968u;
            goto label_15a968;
        }
    }
    ctx->pc = 0x15A95Cu;
label_15a95c:
    // 0x15a95c: 0x10000002  b           . + 4 + (0x2 << 2)
label_15a960:
    if (ctx->pc == 0x15A960u) {
        ctx->pc = 0x15A960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A95Cu;
        // 0x15a960: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A964u;
        goto label_15a964;
    }
    ctx->pc = 0x15A95Cu;
    {
        const bool branch_taken_0x15a95c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A95Cu;
        // 0x15a960: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a95c) {
            ctx->pc = 0x15A968u;
            goto label_15a968;
        }
    }
    ctx->pc = 0x15A964u;
label_15a964:
    // 0x15a964: 0xa62001e8  sh          $zero, 0x1E8($s1)
    ctx->pc = 0x15a964u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 488), (uint16_t)GPR_U32(ctx, 0));
label_15a968:
    // 0x15a968: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x15a968u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15a96c:
    // 0x15a96c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x15a96cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_15a970:
    // 0x15a970: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15a970u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15a974:
    // 0x15a974: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15a974u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15a978:
    // 0x15a978: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15a978u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_15a97c:
    // 0x15a97c: 0x3e00008  jr          $ra
label_15a980:
    if (ctx->pc == 0x15A980u) {
        ctx->pc = 0x15A980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A97Cu;
        // 0x15a980: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A984u;
        goto label_fallthrough_0x15a97c;
    }
    ctx->pc = 0x15A97Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A97Cu;
        // 0x15a980: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A97Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x15a97c:
    ctx->pc = 0x15A984u;
}
