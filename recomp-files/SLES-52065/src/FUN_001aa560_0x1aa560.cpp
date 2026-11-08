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

// Function: FUN_001aa560
// Address: 0x1aa560 - 0x1aa9f0
void FUN_001aa560_0x1aa560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001aa560_0x1aa560");
#endif

    switch (ctx->pc) {
        case 0x1aa560u: goto label_1aa560;
        case 0x1aa564u: goto label_1aa564;
        case 0x1aa568u: goto label_1aa568;
        case 0x1aa56cu: goto label_1aa56c;
        case 0x1aa570u: goto label_1aa570;
        case 0x1aa574u: goto label_1aa574;
        case 0x1aa578u: goto label_1aa578;
        case 0x1aa57cu: goto label_1aa57c;
        case 0x1aa580u: goto label_1aa580;
        case 0x1aa584u: goto label_1aa584;
        case 0x1aa588u: goto label_1aa588;
        case 0x1aa58cu: goto label_1aa58c;
        case 0x1aa590u: goto label_1aa590;
        case 0x1aa594u: goto label_1aa594;
        case 0x1aa598u: goto label_1aa598;
        case 0x1aa59cu: goto label_1aa59c;
        case 0x1aa5a0u: goto label_1aa5a0;
        case 0x1aa5a4u: goto label_1aa5a4;
        case 0x1aa5a8u: goto label_1aa5a8;
        case 0x1aa5acu: goto label_1aa5ac;
        case 0x1aa5b0u: goto label_1aa5b0;
        case 0x1aa5b4u: goto label_1aa5b4;
        case 0x1aa5b8u: goto label_1aa5b8;
        case 0x1aa5bcu: goto label_1aa5bc;
        case 0x1aa5c0u: goto label_1aa5c0;
        case 0x1aa5c4u: goto label_1aa5c4;
        case 0x1aa5c8u: goto label_1aa5c8;
        case 0x1aa5ccu: goto label_1aa5cc;
        case 0x1aa5d0u: goto label_1aa5d0;
        case 0x1aa5d4u: goto label_1aa5d4;
        case 0x1aa5d8u: goto label_1aa5d8;
        case 0x1aa5dcu: goto label_1aa5dc;
        case 0x1aa5e0u: goto label_1aa5e0;
        case 0x1aa5e4u: goto label_1aa5e4;
        case 0x1aa5e8u: goto label_1aa5e8;
        case 0x1aa5ecu: goto label_1aa5ec;
        case 0x1aa5f0u: goto label_1aa5f0;
        case 0x1aa5f4u: goto label_1aa5f4;
        case 0x1aa5f8u: goto label_1aa5f8;
        case 0x1aa5fcu: goto label_1aa5fc;
        case 0x1aa600u: goto label_1aa600;
        case 0x1aa604u: goto label_1aa604;
        case 0x1aa608u: goto label_1aa608;
        case 0x1aa60cu: goto label_1aa60c;
        case 0x1aa610u: goto label_1aa610;
        case 0x1aa614u: goto label_1aa614;
        case 0x1aa618u: goto label_1aa618;
        case 0x1aa61cu: goto label_1aa61c;
        case 0x1aa620u: goto label_1aa620;
        case 0x1aa624u: goto label_1aa624;
        case 0x1aa628u: goto label_1aa628;
        case 0x1aa62cu: goto label_1aa62c;
        case 0x1aa630u: goto label_1aa630;
        case 0x1aa634u: goto label_1aa634;
        case 0x1aa638u: goto label_1aa638;
        case 0x1aa63cu: goto label_1aa63c;
        case 0x1aa640u: goto label_1aa640;
        case 0x1aa644u: goto label_1aa644;
        case 0x1aa648u: goto label_1aa648;
        case 0x1aa64cu: goto label_1aa64c;
        case 0x1aa650u: goto label_1aa650;
        case 0x1aa654u: goto label_1aa654;
        case 0x1aa658u: goto label_1aa658;
        case 0x1aa65cu: goto label_1aa65c;
        case 0x1aa660u: goto label_1aa660;
        case 0x1aa664u: goto label_1aa664;
        case 0x1aa668u: goto label_1aa668;
        case 0x1aa66cu: goto label_1aa66c;
        case 0x1aa670u: goto label_1aa670;
        case 0x1aa674u: goto label_1aa674;
        case 0x1aa678u: goto label_1aa678;
        case 0x1aa67cu: goto label_1aa67c;
        case 0x1aa680u: goto label_1aa680;
        case 0x1aa684u: goto label_1aa684;
        case 0x1aa688u: goto label_1aa688;
        case 0x1aa68cu: goto label_1aa68c;
        case 0x1aa690u: goto label_1aa690;
        case 0x1aa694u: goto label_1aa694;
        case 0x1aa698u: goto label_1aa698;
        case 0x1aa69cu: goto label_1aa69c;
        case 0x1aa6a0u: goto label_1aa6a0;
        case 0x1aa6a4u: goto label_1aa6a4;
        case 0x1aa6a8u: goto label_1aa6a8;
        case 0x1aa6acu: goto label_1aa6ac;
        case 0x1aa6b0u: goto label_1aa6b0;
        case 0x1aa6b4u: goto label_1aa6b4;
        case 0x1aa6b8u: goto label_1aa6b8;
        case 0x1aa6bcu: goto label_1aa6bc;
        case 0x1aa6c0u: goto label_1aa6c0;
        case 0x1aa6c4u: goto label_1aa6c4;
        case 0x1aa6c8u: goto label_1aa6c8;
        case 0x1aa6ccu: goto label_1aa6cc;
        case 0x1aa6d0u: goto label_1aa6d0;
        case 0x1aa6d4u: goto label_1aa6d4;
        case 0x1aa6d8u: goto label_1aa6d8;
        case 0x1aa6dcu: goto label_1aa6dc;
        case 0x1aa6e0u: goto label_1aa6e0;
        case 0x1aa6e4u: goto label_1aa6e4;
        case 0x1aa6e8u: goto label_1aa6e8;
        case 0x1aa6ecu: goto label_1aa6ec;
        case 0x1aa6f0u: goto label_1aa6f0;
        case 0x1aa6f4u: goto label_1aa6f4;
        case 0x1aa6f8u: goto label_1aa6f8;
        case 0x1aa6fcu: goto label_1aa6fc;
        case 0x1aa700u: goto label_1aa700;
        case 0x1aa704u: goto label_1aa704;
        case 0x1aa708u: goto label_1aa708;
        case 0x1aa70cu: goto label_1aa70c;
        case 0x1aa710u: goto label_1aa710;
        case 0x1aa714u: goto label_1aa714;
        case 0x1aa718u: goto label_1aa718;
        case 0x1aa71cu: goto label_1aa71c;
        case 0x1aa720u: goto label_1aa720;
        case 0x1aa724u: goto label_1aa724;
        case 0x1aa728u: goto label_1aa728;
        case 0x1aa72cu: goto label_1aa72c;
        case 0x1aa730u: goto label_1aa730;
        case 0x1aa734u: goto label_1aa734;
        case 0x1aa738u: goto label_1aa738;
        case 0x1aa73cu: goto label_1aa73c;
        case 0x1aa740u: goto label_1aa740;
        case 0x1aa744u: goto label_1aa744;
        case 0x1aa748u: goto label_1aa748;
        case 0x1aa74cu: goto label_1aa74c;
        case 0x1aa750u: goto label_1aa750;
        case 0x1aa754u: goto label_1aa754;
        case 0x1aa758u: goto label_1aa758;
        case 0x1aa75cu: goto label_1aa75c;
        case 0x1aa760u: goto label_1aa760;
        case 0x1aa764u: goto label_1aa764;
        case 0x1aa768u: goto label_1aa768;
        case 0x1aa76cu: goto label_1aa76c;
        case 0x1aa770u: goto label_1aa770;
        case 0x1aa774u: goto label_1aa774;
        case 0x1aa778u: goto label_1aa778;
        case 0x1aa77cu: goto label_1aa77c;
        case 0x1aa780u: goto label_1aa780;
        case 0x1aa784u: goto label_1aa784;
        case 0x1aa788u: goto label_1aa788;
        case 0x1aa78cu: goto label_1aa78c;
        case 0x1aa790u: goto label_1aa790;
        case 0x1aa794u: goto label_1aa794;
        case 0x1aa798u: goto label_1aa798;
        case 0x1aa79cu: goto label_1aa79c;
        case 0x1aa7a0u: goto label_1aa7a0;
        case 0x1aa7a4u: goto label_1aa7a4;
        case 0x1aa7a8u: goto label_1aa7a8;
        case 0x1aa7acu: goto label_1aa7ac;
        case 0x1aa7b0u: goto label_1aa7b0;
        case 0x1aa7b4u: goto label_1aa7b4;
        case 0x1aa7b8u: goto label_1aa7b8;
        case 0x1aa7bcu: goto label_1aa7bc;
        case 0x1aa7c0u: goto label_1aa7c0;
        case 0x1aa7c4u: goto label_1aa7c4;
        case 0x1aa7c8u: goto label_1aa7c8;
        case 0x1aa7ccu: goto label_1aa7cc;
        case 0x1aa7d0u: goto label_1aa7d0;
        case 0x1aa7d4u: goto label_1aa7d4;
        case 0x1aa7d8u: goto label_1aa7d8;
        case 0x1aa7dcu: goto label_1aa7dc;
        case 0x1aa7e0u: goto label_1aa7e0;
        case 0x1aa7e4u: goto label_1aa7e4;
        case 0x1aa7e8u: goto label_1aa7e8;
        case 0x1aa7ecu: goto label_1aa7ec;
        case 0x1aa7f0u: goto label_1aa7f0;
        case 0x1aa7f4u: goto label_1aa7f4;
        case 0x1aa7f8u: goto label_1aa7f8;
        case 0x1aa7fcu: goto label_1aa7fc;
        case 0x1aa800u: goto label_1aa800;
        case 0x1aa804u: goto label_1aa804;
        case 0x1aa808u: goto label_1aa808;
        case 0x1aa80cu: goto label_1aa80c;
        case 0x1aa810u: goto label_1aa810;
        case 0x1aa814u: goto label_1aa814;
        case 0x1aa818u: goto label_1aa818;
        case 0x1aa81cu: goto label_1aa81c;
        case 0x1aa820u: goto label_1aa820;
        case 0x1aa824u: goto label_1aa824;
        case 0x1aa828u: goto label_1aa828;
        case 0x1aa82cu: goto label_1aa82c;
        case 0x1aa830u: goto label_1aa830;
        case 0x1aa834u: goto label_1aa834;
        case 0x1aa838u: goto label_1aa838;
        case 0x1aa83cu: goto label_1aa83c;
        case 0x1aa840u: goto label_1aa840;
        case 0x1aa844u: goto label_1aa844;
        case 0x1aa848u: goto label_1aa848;
        case 0x1aa84cu: goto label_1aa84c;
        case 0x1aa850u: goto label_1aa850;
        case 0x1aa854u: goto label_1aa854;
        case 0x1aa858u: goto label_1aa858;
        case 0x1aa85cu: goto label_1aa85c;
        case 0x1aa860u: goto label_1aa860;
        case 0x1aa864u: goto label_1aa864;
        case 0x1aa868u: goto label_1aa868;
        case 0x1aa86cu: goto label_1aa86c;
        case 0x1aa870u: goto label_1aa870;
        case 0x1aa874u: goto label_1aa874;
        case 0x1aa878u: goto label_1aa878;
        case 0x1aa87cu: goto label_1aa87c;
        case 0x1aa880u: goto label_1aa880;
        case 0x1aa884u: goto label_1aa884;
        case 0x1aa888u: goto label_1aa888;
        case 0x1aa88cu: goto label_1aa88c;
        case 0x1aa890u: goto label_1aa890;
        case 0x1aa894u: goto label_1aa894;
        case 0x1aa898u: goto label_1aa898;
        case 0x1aa89cu: goto label_1aa89c;
        case 0x1aa8a0u: goto label_1aa8a0;
        case 0x1aa8a4u: goto label_1aa8a4;
        case 0x1aa8a8u: goto label_1aa8a8;
        case 0x1aa8acu: goto label_1aa8ac;
        case 0x1aa8b0u: goto label_1aa8b0;
        case 0x1aa8b4u: goto label_1aa8b4;
        case 0x1aa8b8u: goto label_1aa8b8;
        case 0x1aa8bcu: goto label_1aa8bc;
        case 0x1aa8c0u: goto label_1aa8c0;
        case 0x1aa8c4u: goto label_1aa8c4;
        case 0x1aa8c8u: goto label_1aa8c8;
        case 0x1aa8ccu: goto label_1aa8cc;
        case 0x1aa8d0u: goto label_1aa8d0;
        case 0x1aa8d4u: goto label_1aa8d4;
        case 0x1aa8d8u: goto label_1aa8d8;
        case 0x1aa8dcu: goto label_1aa8dc;
        case 0x1aa8e0u: goto label_1aa8e0;
        case 0x1aa8e4u: goto label_1aa8e4;
        case 0x1aa8e8u: goto label_1aa8e8;
        case 0x1aa8ecu: goto label_1aa8ec;
        case 0x1aa8f0u: goto label_1aa8f0;
        case 0x1aa8f4u: goto label_1aa8f4;
        case 0x1aa8f8u: goto label_1aa8f8;
        case 0x1aa8fcu: goto label_1aa8fc;
        case 0x1aa900u: goto label_1aa900;
        case 0x1aa904u: goto label_1aa904;
        case 0x1aa908u: goto label_1aa908;
        case 0x1aa90cu: goto label_1aa90c;
        case 0x1aa910u: goto label_1aa910;
        case 0x1aa914u: goto label_1aa914;
        case 0x1aa918u: goto label_1aa918;
        case 0x1aa91cu: goto label_1aa91c;
        case 0x1aa920u: goto label_1aa920;
        case 0x1aa924u: goto label_1aa924;
        case 0x1aa928u: goto label_1aa928;
        case 0x1aa92cu: goto label_1aa92c;
        case 0x1aa930u: goto label_1aa930;
        case 0x1aa934u: goto label_1aa934;
        case 0x1aa938u: goto label_1aa938;
        case 0x1aa93cu: goto label_1aa93c;
        case 0x1aa940u: goto label_1aa940;
        case 0x1aa944u: goto label_1aa944;
        case 0x1aa948u: goto label_1aa948;
        case 0x1aa94cu: goto label_1aa94c;
        case 0x1aa950u: goto label_1aa950;
        case 0x1aa954u: goto label_1aa954;
        case 0x1aa958u: goto label_1aa958;
        case 0x1aa95cu: goto label_1aa95c;
        case 0x1aa960u: goto label_1aa960;
        case 0x1aa964u: goto label_1aa964;
        case 0x1aa968u: goto label_1aa968;
        case 0x1aa96cu: goto label_1aa96c;
        case 0x1aa970u: goto label_1aa970;
        case 0x1aa974u: goto label_1aa974;
        case 0x1aa978u: goto label_1aa978;
        case 0x1aa97cu: goto label_1aa97c;
        case 0x1aa980u: goto label_1aa980;
        case 0x1aa984u: goto label_1aa984;
        case 0x1aa988u: goto label_1aa988;
        case 0x1aa98cu: goto label_1aa98c;
        case 0x1aa990u: goto label_1aa990;
        case 0x1aa994u: goto label_1aa994;
        case 0x1aa998u: goto label_1aa998;
        case 0x1aa99cu: goto label_1aa99c;
        case 0x1aa9a0u: goto label_1aa9a0;
        case 0x1aa9a4u: goto label_1aa9a4;
        case 0x1aa9a8u: goto label_1aa9a8;
        case 0x1aa9acu: goto label_1aa9ac;
        case 0x1aa9b0u: goto label_1aa9b0;
        case 0x1aa9b4u: goto label_1aa9b4;
        case 0x1aa9b8u: goto label_1aa9b8;
        case 0x1aa9bcu: goto label_1aa9bc;
        case 0x1aa9c0u: goto label_1aa9c0;
        case 0x1aa9c4u: goto label_1aa9c4;
        case 0x1aa9c8u: goto label_1aa9c8;
        case 0x1aa9ccu: goto label_1aa9cc;
        case 0x1aa9d0u: goto label_1aa9d0;
        case 0x1aa9d4u: goto label_1aa9d4;
        case 0x1aa9d8u: goto label_1aa9d8;
        case 0x1aa9dcu: goto label_1aa9dc;
        case 0x1aa9e0u: goto label_1aa9e0;
        case 0x1aa9e4u: goto label_1aa9e4;
        case 0x1aa9e8u: goto label_1aa9e8;
        case 0x1aa9ecu: goto label_1aa9ec;
        default: break;
    }

    ctx->pc = 0x1aa560u;

label_1aa560:
    // 0x1aa560: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1aa560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1aa564:
    // 0x1aa564: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1aa564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_1aa568:
    // 0x1aa568: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1aa568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1aa56c:
    // 0x1aa56c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1aa56cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1aa570:
    // 0x1aa570: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x1aa570u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1aa574:
    // 0x1aa574: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1aa574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1aa578:
    // 0x1aa578: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1aa578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1aa57c:
    // 0x1aa57c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1aa57cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1aa580:
    // 0x1aa580: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1aa580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1aa584:
    // 0x1aa584: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1aa584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1aa588:
    // 0x1aa588: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1aa588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1aa58c:
    // 0x1aa58c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1aa58cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1aa590:
    // 0x1aa590: 0xc063dd4  jal         func_18F750
label_1aa594:
    if (ctx->pc == 0x1AA594u) {
        ctx->pc = 0x1AA594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA590u;
        // 0x1aa594: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA598u;
        goto label_1aa598;
    }
    ctx->pc = 0x1AA590u;
    SET_GPR_U32(ctx, 31, 0x1AA598u);
    ctx->pc = 0x1AA594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA590u;
    // 0x1aa594: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F750u, 0x1AA590u, 0x1AA598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA598u;
label_1aa598:
    // 0x1aa598: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1aa598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1aa59c:
    // 0x1aa59c: 0x10430102  beq         $v0, $v1, . + 4 + (0x102 << 2)
label_1aa5a0:
    if (ctx->pc == 0x1AA5A0u) {
        ctx->pc = 0x1AA5A4u;
        goto label_1aa5a4;
    }
    ctx->pc = 0x1AA59Cu;
    {
        const bool branch_taken_0x1aa59c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1aa59c) {
            ctx->pc = 0x1AA9A8u;
            goto label_1aa9a8;
        }
    }
    ctx->pc = 0x1AA5A4u;
label_1aa5a4:
    // 0x1aa5a4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1aa5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1aa5a8:
    // 0x1aa5a8: 0x104300b2  beq         $v0, $v1, . + 4 + (0xB2 << 2)
label_1aa5ac:
    if (ctx->pc == 0x1AA5ACu) {
        ctx->pc = 0x1AA5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA5A8u;
        // 0x1aa5ac: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA5B0u;
        goto label_1aa5b0;
    }
    ctx->pc = 0x1AA5A8u;
    {
        const bool branch_taken_0x1aa5a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1AA5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA5A8u;
        // 0x1aa5ac: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa5a8) {
            ctx->pc = 0x1AA874u;
            goto label_1aa874;
        }
    }
    ctx->pc = 0x1AA5B0u;
label_1aa5b0:
    // 0x1aa5b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1aa5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aa5b4:
    // 0x1aa5b4: 0x10430040  beq         $v0, $v1, . + 4 + (0x40 << 2)
label_1aa5b8:
    if (ctx->pc == 0x1AA5B8u) {
        ctx->pc = 0x1AA5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA5B4u;
        // 0x1aa5b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA5BCu;
        goto label_1aa5bc;
    }
    ctx->pc = 0x1AA5B4u;
    {
        const bool branch_taken_0x1aa5b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1AA5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA5B4u;
        // 0x1aa5b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa5b4) {
            ctx->pc = 0x1AA6B8u;
            goto label_1aa6b8;
        }
    }
    ctx->pc = 0x1AA5BCu;
label_1aa5bc:
    // 0x1aa5bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1aa5c0:
    if (ctx->pc == 0x1AA5C0u) {
        ctx->pc = 0x1AA5C4u;
        goto label_1aa5c4;
    }
    ctx->pc = 0x1AA5BCu;
    {
        const bool branch_taken_0x1aa5bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa5bc) {
            ctx->pc = 0x1AA5CCu;
            goto label_1aa5cc;
        }
    }
    ctx->pc = 0x1AA5C4u;
label_1aa5c4:
    // 0x1aa5c4: 0x10000100  b           . + 4 + (0x100 << 2)
label_1aa5c8:
    if (ctx->pc == 0x1AA5C8u) {
        ctx->pc = 0x1AA5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA5C4u;
        // 0x1aa5c8: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA5CCu;
        goto label_1aa5cc;
    }
    ctx->pc = 0x1AA5C4u;
    {
        const bool branch_taken_0x1aa5c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA5C4u;
        // 0x1aa5c8: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa5c4) {
            ctx->pc = 0x1AA9C8u;
            goto label_1aa9c8;
        }
    }
    ctx->pc = 0x1AA5CCu;
label_1aa5cc:
    // 0x1aa5cc: 0x8ea20664  lw          $v0, 0x664($s5)
    ctx->pc = 0x1aa5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1636)));
label_1aa5d0:
    // 0x1aa5d0: 0x8880  sll         $s1, $zero, 2
    ctx->pc = 0x1aa5d0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_1aa5d4:
    // 0x1aa5d4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1aa5d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aa5d8:
    // 0x1aa5d8: 0x1000002e  b           . + 4 + (0x2E << 2)
label_1aa5dc:
    if (ctx->pc == 0x1AA5DCu) {
        ctx->pc = 0x1AA5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA5D8u;
        // 0x1aa5dc: 0x24500040  addiu       $s0, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA5E0u;
        goto label_1aa5e0;
    }
    ctx->pc = 0x1AA5D8u;
    {
        const bool branch_taken_0x1aa5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA5D8u;
        // 0x1aa5dc: 0x24500040  addiu       $s0, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa5d8) {
            ctx->pc = 0x1AA694u;
            goto label_1aa694;
        }
    }
    ctx->pc = 0x1AA5E0u;
label_1aa5e0:
    // 0x1aa5e0: 0x92030004  lbu         $v1, 0x4($s0)
    ctx->pc = 0x1aa5e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
label_1aa5e4:
    // 0x1aa5e4: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
label_1aa5e8:
    if (ctx->pc == 0x1AA5E8u) {
        ctx->pc = 0x1AA5ECu;
        goto label_1aa5ec;
    }
    ctx->pc = 0x1AA5E4u;
    {
        const bool branch_taken_0x1aa5e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa5e4) {
            ctx->pc = 0x1AA68Cu;
            goto label_1aa68c;
        }
    }
    ctx->pc = 0x1AA5ECu;
label_1aa5ec:
    // 0x1aa5ec: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1aa5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1aa5f0:
    // 0x1aa5f0: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
label_1aa5f4:
    if (ctx->pc == 0x1AA5F4u) {
        ctx->pc = 0x1AA5F8u;
        goto label_1aa5f8;
    }
    ctx->pc = 0x1AA5F0u;
    {
        const bool branch_taken_0x1aa5f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1aa5f0) {
            ctx->pc = 0x1AA640u;
            goto label_1aa640;
        }
    }
    ctx->pc = 0x1AA5F8u;
label_1aa5f8:
    // 0x1aa5f8: 0x24020055  addiu       $v0, $zero, 0x55
    ctx->pc = 0x1aa5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
label_1aa5fc:
    // 0x1aa5fc: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1aa600:
    if (ctx->pc == 0x1AA600u) {
        ctx->pc = 0x1AA604u;
        goto label_1aa604;
    }
    ctx->pc = 0x1AA5FCu;
    {
        const bool branch_taken_0x1aa5fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1aa5fc) {
            ctx->pc = 0x1AA60Cu;
            goto label_1aa60c;
        }
    }
    ctx->pc = 0x1AA604u;
label_1aa604:
    // 0x1aa604: 0x10000021  b           . + 4 + (0x21 << 2)
label_1aa608:
    if (ctx->pc == 0x1AA608u) {
        ctx->pc = 0x1AA60Cu;
        goto label_1aa60c;
    }
    ctx->pc = 0x1AA604u;
    {
        const bool branch_taken_0x1aa604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa604) {
            ctx->pc = 0x1AA68Cu;
            goto label_1aa68c;
        }
    }
    ctx->pc = 0x1AA60Cu;
label_1aa60c:
    // 0x1aa60c: 0x0  nop
    ctx->pc = 0x1aa60cu;
    // NOP
label_1aa610:
    // 0x1aa610: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x1aa610u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_1aa614:
    // 0x1aa614: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x1aa614u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1aa618:
    // 0x1aa618: 0xc057040  jal         func_15C100
label_1aa61c:
    if (ctx->pc == 0x1AA61Cu) {
        ctx->pc = 0x1AA61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA618u;
        // 0x1aa61c: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA620u;
        goto label_1aa620;
    }
    ctx->pc = 0x1AA618u;
    SET_GPR_U32(ctx, 31, 0x1AA620u);
    ctx->pc = 0x1AA61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA618u;
    // 0x1aa61c: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x1AA618u, 0x1AA620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA620u;
label_1aa620:
    // 0x1aa620: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x1aa620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1aa624:
    // 0x1aa624: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x1aa624u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1aa628:
    // 0x1aa628: 0x2b11021  addu        $v0, $s5, $s1
    ctx->pc = 0x1aa628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
label_1aa62c:
    // 0x1aa62c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1aa62cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_1aa630:
    // 0x1aa630: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1aa630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1aa634:
    // 0x1aa634: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x1aa634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_1aa638:
    // 0x1aa638: 0x10000014  b           . + 4 + (0x14 << 2)
label_1aa63c:
    if (ctx->pc == 0x1AA63Cu) {
        ctx->pc = 0x1AA63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA638u;
        // 0x1aa63c: 0xac430670  sw          $v1, 0x670($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1648), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA640u;
        goto label_1aa640;
    }
    ctx->pc = 0x1AA638u;
    {
        const bool branch_taken_0x1aa638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA638u;
        // 0x1aa63c: 0xac430670  sw          $v1, 0x670($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1648), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa638) {
            ctx->pc = 0x1AA68Cu;
            goto label_1aa68c;
        }
    }
    ctx->pc = 0x1AA640u;
label_1aa640:
    // 0x1aa640: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1aa640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1aa644:
    // 0x1aa644: 0x2b23821  addu        $a3, $s5, $s2
    ctx->pc = 0x1aa644u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
label_1aa648:
    // 0x1aa648: 0x26040028  addiu       $a0, $s0, 0x28
    ctx->pc = 0x1aa648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
label_1aa64c:
    // 0x1aa64c: 0x24e8067c  addiu       $t0, $a3, 0x67C
    ctx->pc = 0x1aa64cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 1660));
label_1aa650:
    // 0x1aa650: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aa650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aa654:
    // 0x1aa654: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1aa654u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aa658:
    // 0x1aa658: 0x10000007  b           . + 4 + (0x7 << 2)
label_1aa65c:
    if (ctx->pc == 0x1AA65Cu) {
        ctx->pc = 0x1AA65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA658u;
        // 0x1aa65c: 0xace2067c  sw          $v0, 0x67C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 1660), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA660u;
        goto label_1aa660;
    }
    ctx->pc = 0x1AA658u;
    {
        const bool branch_taken_0x1aa658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA658u;
        // 0x1aa65c: 0xace2067c  sw          $v0, 0x67C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 1660), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa658) {
            ctx->pc = 0x1AA678u;
            goto label_1aa678;
        }
    }
    ctx->pc = 0x1AA660u;
label_1aa660:
    // 0x1aa660: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x1aa660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_1aa664:
    // 0x1aa664: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1aa664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1aa668:
    // 0x1aa668: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1aa668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1aa66c:
    // 0x1aa66c: 0xe61021  addu        $v0, $a3, $a2
    ctx->pc = 0x1aa66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_1aa670:
    // 0x1aa670: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1aa670u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_1aa674:
    // 0x1aa674: 0xac430680  sw          $v1, 0x680($v0)
    ctx->pc = 0x1aa674u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1664), GPR_U32(ctx, 3));
label_1aa678:
    // 0x1aa678: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1aa678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1aa67c:
    // 0x1aa67c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1aa67cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1aa680:
    // 0x1aa680: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_1aa684:
    if (ctx->pc == 0x1AA684u) {
        ctx->pc = 0x1AA688u;
        goto label_1aa688;
    }
    ctx->pc = 0x1AA680u;
    {
        const bool branch_taken_0x1aa680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aa680) {
            ctx->pc = 0x1AA660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aa660;
        }
    }
    ctx->pc = 0x1AA688u;
label_1aa688:
    // 0x1aa688: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x1aa688u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_1aa68c:
    // 0x1aa68c: 0x0  nop
    ctx->pc = 0x1aa68cu;
    // NOP
label_1aa690:
    // 0x1aa690: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x1aa690u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_1aa694:
    // 0x1aa694: 0x0  nop
    ctx->pc = 0x1aa694u;
    // NOP
label_1aa698:
    // 0x1aa698: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1aa698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1aa69c:
    // 0x1aa69c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1aa69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1aa6a0:
    // 0x1aa6a0: 0x1062ffcf  beq         $v1, $v0, . + 4 + (-0x31 << 2)
label_1aa6a4:
    if (ctx->pc == 0x1AA6A4u) {
        ctx->pc = 0x1AA6A8u;
        goto label_1aa6a8;
    }
    ctx->pc = 0x1AA6A0u;
    {
        const bool branch_taken_0x1aa6a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1aa6a0) {
            ctx->pc = 0x1AA5E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aa5e0;
        }
    }
    ctx->pc = 0x1AA6A8u;
label_1aa6a8:
    // 0x1aa6a8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1aa6a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1aa6ac:
    // 0x1aa6ac: 0xc063e14  jal         func_18F850
label_1aa6b0:
    if (ctx->pc == 0x1AA6B0u) {
        ctx->pc = 0x1AA6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA6ACu;
        // 0x1aa6b0: 0xaea0070c  sw          $zero, 0x70C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 1804), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA6B4u;
        goto label_1aa6b4;
    }
    ctx->pc = 0x1AA6ACu;
    SET_GPR_U32(ctx, 31, 0x1AA6B4u);
    ctx->pc = 0x1AA6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA6ACu;
    // 0x1aa6b0: 0xaea0070c  sw          $zero, 0x70C($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 1804), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1AA6ACu, 0x1AA6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA6B4u;
label_1aa6b4:
    // 0x1aa6b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aa6b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aa6b8:
    // 0x1aa6b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1aa6b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aa6bc:
    // 0x1aa6bc: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1aa6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_1aa6c0:
    // 0x1aa6c0: 0x2484e090  addiu       $a0, $a0, -0x1F70
    ctx->pc = 0x1aa6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959248));
label_1aa6c4:
    // 0x1aa6c4: 0x863821  addu        $a3, $a0, $a2
    ctx->pc = 0x1aa6c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_1aa6c8:
    // 0x1aa6c8: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x1aa6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1aa6cc:
    // 0x1aa6cc: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x1aa6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
label_1aa6d0:
    // 0x1aa6d0: 0x24a30002  addiu       $v1, $a1, 0x2
    ctx->pc = 0x1aa6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
label_1aa6d4:
    // 0x1aa6d4: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x1aa6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
label_1aa6d8:
    // 0x1aa6d8: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x1aa6d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
label_1aa6dc:
    // 0x1aa6dc: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x1aa6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
label_1aa6e0:
    // 0x1aa6e0: 0x24a20003  addiu       $v0, $a1, 0x3
    ctx->pc = 0x1aa6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
label_1aa6e4:
    // 0x1aa6e4: 0xace2000c  sw          $v0, 0xC($a3)
    ctx->pc = 0x1aa6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
label_1aa6e8:
    // 0x1aa6e8: 0x24a30004  addiu       $v1, $a1, 0x4
    ctx->pc = 0x1aa6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_1aa6ec:
    // 0x1aa6ec: 0xace30010  sw          $v1, 0x10($a3)
    ctx->pc = 0x1aa6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 3));
label_1aa6f0:
    // 0x1aa6f0: 0x24a20005  addiu       $v0, $a1, 0x5
    ctx->pc = 0x1aa6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 5));
label_1aa6f4:
    // 0x1aa6f4: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x1aa6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_1aa6f8:
    // 0x1aa6f8: 0x24a30006  addiu       $v1, $a1, 0x6
    ctx->pc = 0x1aa6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
label_1aa6fc:
    // 0x1aa6fc: 0x24a20007  addiu       $v0, $a1, 0x7
    ctx->pc = 0x1aa6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
label_1aa700:
    // 0x1aa700: 0xace30018  sw          $v1, 0x18($a3)
    ctx->pc = 0x1aa700u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
label_1aa704:
    // 0x1aa704: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1aa704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_1aa708:
    // 0x1aa708: 0x18a0ffee  blez        $a1, . + 4 + (-0x12 << 2)
label_1aa70c:
    if (ctx->pc == 0x1AA70Cu) {
        ctx->pc = 0x1AA70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA708u;
        // 0x1aa70c: 0xace2001c  sw          $v0, 0x1C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA710u;
        goto label_1aa710;
    }
    ctx->pc = 0x1AA708u;
    {
        const bool branch_taken_0x1aa708 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1AA70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA708u;
        // 0x1aa70c: 0xace2001c  sw          $v0, 0x1C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa708) {
            ctx->pc = 0x1AA6C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aa6c4;
        }
    }
    ctx->pc = 0x1AA710u;
label_1aa710:
    // 0x1aa710: 0x28a10009  slti        $at, $a1, 0x9
    ctx->pc = 0x1aa710u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)9) ? 1 : 0);
label_1aa714:
    // 0x1aa714: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_1aa718:
    if (ctx->pc == 0x1AA718u) {
        ctx->pc = 0x1AA71Cu;
        goto label_1aa71c;
    }
    ctx->pc = 0x1AA714u;
    {
        const bool branch_taken_0x1aa714 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa714) {
            ctx->pc = 0x1AA744u;
            goto label_1aa744;
        }
    }
    ctx->pc = 0x1AA71Cu;
label_1aa71c:
    // 0x1aa71c: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x1aa71cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1aa720:
    // 0x1aa720: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1aa720u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_1aa724:
    // 0x1aa724: 0x2463e090  addiu       $v1, $v1, -0x1F70
    ctx->pc = 0x1aa724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959248));
label_1aa728:
    // 0x1aa728: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x1aa728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1aa72c:
    // 0x1aa72c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1aa72cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_1aa730:
    // 0x1aa730: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1aa730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_1aa734:
    // 0x1aa734: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1aa734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1aa738:
    // 0x1aa738: 0x28a20009  slti        $v0, $a1, 0x9
    ctx->pc = 0x1aa738u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)9) ? 1 : 0);
label_1aa73c:
    // 0x1aa73c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_1aa740:
    if (ctx->pc == 0x1AA740u) {
        ctx->pc = 0x1AA744u;
        goto label_1aa744;
    }
    ctx->pc = 0x1AA73Cu;
    {
        const bool branch_taken_0x1aa73c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aa73c) {
            ctx->pc = 0x1AA728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aa728;
        }
    }
    ctx->pc = 0x1AA744u;
label_1aa744:
    // 0x1aa744: 0x0  nop
    ctx->pc = 0x1aa744u;
    // NOP
label_1aa748:
    // 0x1aa748: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1aa748u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aa74c:
    // 0x1aa74c: 0x1000003e  b           . + 4 + (0x3E << 2)
label_1aa750:
    if (ctx->pc == 0x1AA750u) {
        ctx->pc = 0x1AA750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA74Cu;
        // 0x1aa750: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA754u;
        goto label_1aa754;
    }
    ctx->pc = 0x1AA74Cu;
    {
        const bool branch_taken_0x1aa74c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA74Cu;
        // 0x1aa750: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa74c) {
            ctx->pc = 0x1AA848u;
            goto label_1aa848;
        }
    }
    ctx->pc = 0x1AA754u;
label_1aa754:
    // 0x1aa754: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1aa754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1aa758:
    // 0x1aa758: 0x50b023  subu        $s6, $v0, $s0
    ctx->pc = 0x1aa758u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1aa75c:
    // 0x1aa75c: 0xc045ae8  jal         func_116BA0
label_1aa760:
    if (ctx->pc == 0x1AA760u) {
        ctx->pc = 0x1AA760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA75Cu;
        // 0x1aa760: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA764u;
        goto label_1aa764;
    }
    ctx->pc = 0x1AA75Cu;
    SET_GPR_U32(ctx, 31, 0x1AA764u);
    ctx->pc = 0x1AA760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA75Cu;
    // 0x1aa760: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116BA0u, 0x1AA75Cu, 0x1AA764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA764u;
label_1aa764:
    // 0x1aa764: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1aa764u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aa768:
    // 0x1aa768: 0x2b31021  addu        $v0, $s5, $s3
    ctx->pc = 0x1aa768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
label_1aa76c:
    // 0x1aa76c: 0x8c440670  lw          $a0, 0x670($v0)
    ctx->pc = 0x1aa76cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1648)));
label_1aa770:
    // 0x1aa770: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x1aa770u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1aa774:
    // 0x1aa774: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x1aa774u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_1aa778:
    // 0x1aa778: 0x320f809  jalr        $t9
label_1aa77c:
    if (ctx->pc == 0x1AA77Cu) {
        ctx->pc = 0x1AA77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA778u;
        // 0x1aa77c: 0x24540670  addiu       $s4, $v0, 0x670 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 1648));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA780u;
        goto label_1aa780;
    }
    ctx->pc = 0x1AA778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AA780u);
        ctx->pc = 0x1AA77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA778u;
        // 0x1aa77c: 0x24540670  addiu       $s4, $v0, 0x670 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 1648));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA778u, 0x1AA780u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AA780u;
label_1aa780:
    // 0x1aa780: 0x8ea4070c  lw          $a0, 0x70C($s5)
    ctx->pc = 0x1aa780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1804)));
label_1aa784:
    // 0x1aa784: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1aa784u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
label_1aa788:
    // 0x1aa788: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1aa788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1aa78c:
    // 0x1aa78c: 0x24630870  addiu       $v1, $v1, 0x870
    ctx->pc = 0x1aa78cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2160));
label_1aa790:
    // 0x1aa790: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1aa790u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1aa794:
    // 0x1aa794: 0x2a42821  addu        $a1, $s5, $a0
    ctx->pc = 0x1aa794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
label_1aa798:
    // 0x1aa798: 0x24440260  addiu       $a0, $v0, 0x260
    ctx->pc = 0x1aa798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 608));
label_1aa79c:
    // 0x1aa79c: 0xb31021  addu        $v0, $a1, $s3
    ctx->pc = 0x1aa79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
label_1aa7a0:
    // 0x1aa7a0: 0x8c510680  lw          $s1, 0x680($v0)
    ctx->pc = 0x1aa7a0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1664)));
label_1aa7a4:
    // 0x1aa7a4: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1aa7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_1aa7a8:
    // 0x1aa7a8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1aa7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1aa7ac:
    // 0x1aa7ac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1aa7acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1aa7b0:
    // 0x1aa7b0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1aa7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1aa7b4:
    // 0x1aa7b4: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1aa7b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1aa7b8:
    // 0x1aa7b8: 0x8c470008  lw          $a3, 0x8($v0)
    ctx->pc = 0x1aa7b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1aa7bc:
    // 0x1aa7bc: 0xc042c0c  jal         func_10B030
label_1aa7c0:
    if (ctx->pc == 0x1AA7C0u) {
        ctx->pc = 0x1AA7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA7BCu;
        // 0x1aa7c0: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA7C4u;
        goto label_1aa7c4;
    }
    ctx->pc = 0x1AA7BCu;
    SET_GPR_U32(ctx, 31, 0x1AA7C4u);
    ctx->pc = 0x1AA7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA7BCu;
    // 0x1aa7c0: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B030u, 0x1AA7BCu, 0x1AA7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA7C4u;
label_1aa7c4:
    // 0x1aa7c4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1aa7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1aa7c8:
    // 0x1aa7c8: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1aa7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_1aa7cc:
    // 0x1aa7cc: 0x2442e090  addiu       $v0, $v0, -0x1F70
    ctx->pc = 0x1aa7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959248));
label_1aa7d0:
    // 0x1aa7d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1aa7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1aa7d4:
    // 0x1aa7d4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1aa7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1aa7d8:
    // 0x1aa7d8: 0xc0432f0  jal         func_10CBC0
label_1aa7dc:
    if (ctx->pc == 0x1AA7DCu) {
        ctx->pc = 0x1AA7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA7D8u;
        // 0x1aa7dc: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA7E0u;
        goto label_1aa7e0;
    }
    ctx->pc = 0x1AA7D8u;
    SET_GPR_U32(ctx, 31, 0x1AA7E0u);
    ctx->pc = 0x1AA7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA7D8u;
    // 0x1aa7dc: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CBC0u, 0x1AA7D8u, 0x1AA7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA7E0u;
label_1aa7e0:
    // 0x1aa7e0: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1aa7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_1aa7e4:
    // 0x1aa7e4: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x1aa7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_1aa7e8:
    // 0x1aa7e8: 0x244208a0  addiu       $v0, $v0, 0x8A0
    ctx->pc = 0x1aa7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2208));
label_1aa7ec:
    // 0x1aa7ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1aa7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1aa7f0:
    // 0x1aa7f0: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x1aa7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1aa7f4:
    // 0x1aa7f4: 0xc44d0004  lwc1        $f13, 0x4($v0)
    ctx->pc = 0x1aa7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1aa7f8:
    // 0x1aa7f8: 0xc043288  jal         func_10CA20
label_1aa7fc:
    if (ctx->pc == 0x1AA7FCu) {
        ctx->pc = 0x1AA7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA7F8u;
        // 0x1aa7fc: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA800u;
        goto label_1aa800;
    }
    ctx->pc = 0x1AA7F8u;
    SET_GPR_U32(ctx, 31, 0x1AA800u);
    ctx->pc = 0x1AA7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA7F8u;
    // 0x1aa7fc: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CA20u, 0x1AA7F8u, 0x1AA800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA800u;
label_1aa800:
    // 0x1aa800: 0x26c5ffff  addiu       $a1, $s6, -0x1
    ctx->pc = 0x1aa800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
label_1aa804:
    // 0x1aa804: 0x245082a  slt         $at, $s2, $a1
    ctx->pc = 0x1aa804u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_1aa808:
    // 0x1aa808: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
label_1aa80c:
    if (ctx->pc == 0x1AA80Cu) {
        ctx->pc = 0x1AA810u;
        goto label_1aa810;
    }
    ctx->pc = 0x1AA808u;
    {
        const bool branch_taken_0x1aa808 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa808) {
            ctx->pc = 0x1AA83Cu;
            goto label_1aa83c;
        }
    }
    ctx->pc = 0x1AA810u;
label_1aa810:
    // 0x1aa810: 0x123080  sll         $a2, $s2, 2
    ctx->pc = 0x1aa810u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_1aa814:
    // 0x1aa814: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1aa814u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_1aa818:
    // 0x1aa818: 0x2484e090  addiu       $a0, $a0, -0x1F70
    ctx->pc = 0x1aa818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959248));
label_1aa81c:
    // 0x1aa81c: 0x0  nop
    ctx->pc = 0x1aa81cu;
    // NOP
label_1aa820:
    // 0x1aa820: 0x863821  addu        $a3, $a0, $a2
    ctx->pc = 0x1aa820u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_1aa824:
    // 0x1aa824: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x1aa824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_1aa828:
    // 0x1aa828: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1aa828u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1aa82c:
    // 0x1aa82c: 0x245102a  slt         $v0, $s2, $a1
    ctx->pc = 0x1aa82cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_1aa830:
    // 0x1aa830: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1aa830u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_1aa834:
    // 0x1aa834: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1aa838:
    if (ctx->pc == 0x1AA838u) {
        ctx->pc = 0x1AA838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA834u;
        // 0x1aa838: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA83Cu;
        goto label_1aa83c;
    }
    ctx->pc = 0x1AA834u;
    {
        const bool branch_taken_0x1aa834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AA838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA834u;
        // 0x1aa838: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa834) {
            ctx->pc = 0x1AA81Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aa81c;
        }
    }
    ctx->pc = 0x1AA83Cu;
label_1aa83c:
    // 0x1aa83c: 0x0  nop
    ctx->pc = 0x1aa83cu;
    // NOP
label_1aa840:
    // 0x1aa840: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1aa840u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_1aa844:
    // 0x1aa844: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1aa844u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1aa848:
    // 0x1aa848: 0x8ea2070c  lw          $v0, 0x70C($s5)
    ctx->pc = 0x1aa848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1804)));
label_1aa84c:
    // 0x1aa84c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1aa84cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1aa850:
    // 0x1aa850: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1aa850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_1aa854:
    // 0x1aa854: 0x8c42067c  lw          $v0, 0x67C($v0)
    ctx->pc = 0x1aa854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1660)));
label_1aa858:
    // 0x1aa858: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1aa858u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1aa85c:
    // 0x1aa85c: 0x1440ffbe  bnez        $v0, . + 4 + (-0x42 << 2)
label_1aa860:
    if (ctx->pc == 0x1AA860u) {
        ctx->pc = 0x1AA860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA85Cu;
        // 0x1aa860: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA864u;
        goto label_1aa864;
    }
    ctx->pc = 0x1AA85Cu;
    {
        const bool branch_taken_0x1aa85c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AA860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA85Cu;
        // 0x1aa860: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa85c) {
            ctx->pc = 0x1AA758u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aa758;
        }
    }
    ctx->pc = 0x1AA864u;
label_1aa864:
    // 0x1aa864: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1aa864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1aa868:
    // 0x1aa868: 0xc063e14  jal         func_18F850
label_1aa86c:
    if (ctx->pc == 0x1AA86Cu) {
        ctx->pc = 0x1AA86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA868u;
        // 0x1aa86c: 0xaea00714  sw          $zero, 0x714($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 1812), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA870u;
        goto label_1aa870;
    }
    ctx->pc = 0x1AA868u;
    SET_GPR_U32(ctx, 31, 0x1AA870u);
    ctx->pc = 0x1AA86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA868u;
    // 0x1aa86c: 0xaea00714  sw          $zero, 0x714($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 1812), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1AA868u, 0x1AA870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA870u;
label_1aa870:
    // 0x1aa870: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1aa870u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aa874:
    // 0x1aa874: 0x10000013  b           . + 4 + (0x13 << 2)
label_1aa878:
    if (ctx->pc == 0x1AA878u) {
        ctx->pc = 0x1AA878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA874u;
        // 0x1aa878: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA87Cu;
        goto label_1aa87c;
    }
    ctx->pc = 0x1AA874u;
    {
        const bool branch_taken_0x1aa874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA874u;
        // 0x1aa878: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa874) {
            ctx->pc = 0x1AA8C4u;
            goto label_1aa8c4;
        }
    }
    ctx->pc = 0x1AA87Cu;
label_1aa87c:
    // 0x1aa87c: 0x2b11021  addu        $v0, $s5, $s1
    ctx->pc = 0x1aa87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
label_1aa880:
    // 0x1aa880: 0x8c440670  lw          $a0, 0x670($v0)
    ctx->pc = 0x1aa880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1648)));
label_1aa884:
    // 0x1aa884: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x1aa884u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1aa888:
    // 0x1aa888: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x1aa888u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_1aa88c:
    // 0x1aa88c: 0x320f809  jalr        $t9
label_1aa890:
    if (ctx->pc == 0x1AA890u) {
        ctx->pc = 0x1AA894u;
        goto label_1aa894;
    }
    ctx->pc = 0x1AA88Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AA894u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA88Cu, 0x1AA894u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AA894u;
label_1aa894:
    // 0x1aa894: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1aa898:
    if (ctx->pc == 0x1AA898u) {
        ctx->pc = 0x1AA89Cu;
        goto label_1aa89c;
    }
    ctx->pc = 0x1AA894u;
    {
        const bool branch_taken_0x1aa894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa894) {
            ctx->pc = 0x1AA8A8u;
            goto label_1aa8a8;
        }
    }
    ctx->pc = 0x1AA89Cu;
label_1aa89c:
    // 0x1aa89c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1aa89cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aa8a0:
    // 0x1aa8a0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1aa8a4:
    if (ctx->pc == 0x1AA8A4u) {
        ctx->pc = 0x1AA8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA8A0u;
        // 0x1aa8a4: 0x2032004  sllv        $a0, $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 16) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA8A8u;
        goto label_1aa8a8;
    }
    ctx->pc = 0x1AA8A0u;
    {
        const bool branch_taken_0x1aa8a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA8A0u;
        // 0x1aa8a4: 0x2032004  sllv        $a0, $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 16) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa8a0) {
            ctx->pc = 0x1AA8ACu;
            goto label_1aa8ac;
        }
    }
    ctx->pc = 0x1AA8A8u;
label_1aa8a8:
    // 0x1aa8a8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1aa8a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aa8ac:
    // 0x1aa8ac: 0x0  nop
    ctx->pc = 0x1aa8acu;
    // NOP
label_1aa8b0:
    // 0x1aa8b0: 0x8ea30714  lw          $v1, 0x714($s5)
    ctx->pc = 0x1aa8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1812)));
label_1aa8b4:
    // 0x1aa8b4: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1aa8b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_1aa8b8:
    // 0x1aa8b8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1aa8b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1aa8bc:
    // 0x1aa8bc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1aa8bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1aa8c0:
    // 0x1aa8c0: 0xaea30714  sw          $v1, 0x714($s5)
    ctx->pc = 0x1aa8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1812), GPR_U32(ctx, 3));
label_1aa8c4:
    // 0x1aa8c4: 0x0  nop
    ctx->pc = 0x1aa8c4u;
    // NOP
label_1aa8c8:
    // 0x1aa8c8: 0x8ea3070c  lw          $v1, 0x70C($s5)
    ctx->pc = 0x1aa8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1804)));
label_1aa8cc:
    // 0x1aa8cc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1aa8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1aa8d0:
    // 0x1aa8d0: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x1aa8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_1aa8d4:
    // 0x1aa8d4: 0x8c64067c  lw          $a0, 0x67C($v1)
    ctx->pc = 0x1aa8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1660)));
label_1aa8d8:
    // 0x1aa8d8: 0x204182a  slt         $v1, $s0, $a0
    ctx->pc = 0x1aa8d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1aa8dc:
    // 0x1aa8dc: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
label_1aa8e0:
    if (ctx->pc == 0x1AA8E0u) {
        ctx->pc = 0x1AA8E4u;
        goto label_1aa8e4;
    }
    ctx->pc = 0x1AA8DCu;
    {
        const bool branch_taken_0x1aa8dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aa8dc) {
            ctx->pc = 0x1AA87Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aa87c;
        }
    }
    ctx->pc = 0x1AA8E4u;
label_1aa8e4:
    // 0x1aa8e4: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x1aa8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
label_1aa8e8:
    // 0x1aa8e8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1aa8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1aa8ec:
    // 0x1aa8ec: 0x24632cb0  addiu       $v1, $v1, 0x2CB0
    ctx->pc = 0x1aa8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11440));
label_1aa8f0:
    // 0x1aa8f0: 0x8ea50714  lw          $a1, 0x714($s5)
    ctx->pc = 0x1aa8f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1812)));
label_1aa8f4:
    // 0x1aa8f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1aa8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1aa8f8:
    // 0x1aa8f8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1aa8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1aa8fc:
    // 0x1aa8fc: 0x14a30031  bne         $a1, $v1, . + 4 + (0x31 << 2)
label_1aa900:
    if (ctx->pc == 0x1AA900u) {
        ctx->pc = 0x1AA904u;
        goto label_1aa904;
    }
    ctx->pc = 0x1AA8FCu;
    {
        const bool branch_taken_0x1aa8fc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x1aa8fc) {
            ctx->pc = 0x1AA9C4u;
            goto label_1aa9c4;
        }
    }
    ctx->pc = 0x1AA904u;
label_1aa904:
    // 0x1aa904: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1aa904u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aa908:
    // 0x1aa908: 0x10000006  b           . + 4 + (0x6 << 2)
label_1aa90c:
    if (ctx->pc == 0x1AA90Cu) {
        ctx->pc = 0x1AA90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA908u;
        // 0x1aa90c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA910u;
        goto label_1aa910;
    }
    ctx->pc = 0x1AA908u;
    {
        const bool branch_taken_0x1aa908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA908u;
        // 0x1aa90c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa908) {
            ctx->pc = 0x1AA924u;
            goto label_1aa924;
        }
    }
    ctx->pc = 0x1AA910u;
label_1aa910:
    // 0x1aa910: 0x2b11021  addu        $v0, $s5, $s1
    ctx->pc = 0x1aa910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
label_1aa914:
    // 0x1aa914: 0xc0433ec  jal         func_10CFB0
label_1aa918:
    if (ctx->pc == 0x1AA918u) {
        ctx->pc = 0x1AA918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA914u;
        // 0x1aa918: 0x8c440670  lw          $a0, 0x670($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1648)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA91Cu;
        goto label_1aa91c;
    }
    ctx->pc = 0x1AA914u;
    SET_GPR_U32(ctx, 31, 0x1AA91Cu);
    ctx->pc = 0x1AA918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA914u;
    // 0x1aa918: 0x8c440670  lw          $a0, 0x670($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1648)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CFB0u, 0x1AA914u, 0x1AA91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA91Cu;
label_1aa91c:
    // 0x1aa91c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1aa91cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_1aa920:
    // 0x1aa920: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1aa920u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1aa924:
    // 0x1aa924: 0x0  nop
    ctx->pc = 0x1aa924u;
    // NOP
label_1aa928:
    // 0x1aa928: 0x8ea4070c  lw          $a0, 0x70C($s5)
    ctx->pc = 0x1aa928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1804)));
label_1aa92c:
    // 0x1aa92c: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1aa92cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1aa930:
    // 0x1aa930: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x1aa930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_1aa934:
    // 0x1aa934: 0x8c63067c  lw          $v1, 0x67C($v1)
    ctx->pc = 0x1aa934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1660)));
label_1aa938:
    // 0x1aa938: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x1aa938u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1aa93c:
    // 0x1aa93c: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
label_1aa940:
    if (ctx->pc == 0x1AA940u) {
        ctx->pc = 0x1AA944u;
        goto label_1aa944;
    }
    ctx->pc = 0x1AA93Cu;
    {
        const bool branch_taken_0x1aa93c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aa93c) {
            ctx->pc = 0x1AA910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aa910;
        }
    }
    ctx->pc = 0x1AA944u;
label_1aa944:
    // 0x1aa944: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1aa944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1aa948:
    // 0x1aa948: 0x28610006  slti        $at, $v1, 0x6
    ctx->pc = 0x1aa948u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
label_1aa94c:
    // 0x1aa94c: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_1aa950:
    if (ctx->pc == 0x1AA950u) {
        ctx->pc = 0x1AA950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA94Cu;
        // 0x1aa950: 0xaea3070c  sw          $v1, 0x70C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 1804), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA954u;
        goto label_1aa954;
    }
    ctx->pc = 0x1AA94Cu;
    {
        const bool branch_taken_0x1aa94c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA94Cu;
        // 0x1aa950: 0xaea3070c  sw          $v1, 0x70C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 1804), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa94c) {
            ctx->pc = 0x1AA984u;
            goto label_1aa984;
        }
    }
    ctx->pc = 0x1AA954u;
label_1aa954:
    // 0x1aa954: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1aa954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1aa958:
    // 0x1aa958: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1aa958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_1aa95c:
    // 0x1aa95c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1aa95cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1aa960:
    // 0x1aa960: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1aa960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1aa964:
    // 0x1aa964: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1aa964u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1aa968:
    // 0x1aa968: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1aa968u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1aa96c:
    // 0x1aa96c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1aa96cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1aa970:
    // 0x1aa970: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1aa970u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1aa974:
    // 0x1aa974: 0xc063e14  jal         func_18F850
label_1aa978:
    if (ctx->pc == 0x1AA978u) {
        ctx->pc = 0x1AA978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA974u;
        // 0x1aa978: 0xaea20710  sw          $v0, 0x710($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 1808), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA97Cu;
        goto label_1aa97c;
    }
    ctx->pc = 0x1AA974u;
    SET_GPR_U32(ctx, 31, 0x1AA97Cu);
    ctx->pc = 0x1AA978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA974u;
    // 0x1aa978: 0xaea20710  sw          $v0, 0x710($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 1808), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1AA974u, 0x1AA97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA97Cu;
label_1aa97c:
    // 0x1aa97c: 0x10000011  b           . + 4 + (0x11 << 2)
label_1aa980:
    if (ctx->pc == 0x1AA980u) {
        ctx->pc = 0x1AA984u;
        goto label_1aa984;
    }
    ctx->pc = 0x1AA97Cu;
    {
        const bool branch_taken_0x1aa97c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa97c) {
            ctx->pc = 0x1AA9C4u;
            goto label_1aa9c4;
        }
    }
    ctx->pc = 0x1AA984u;
label_1aa984:
    // 0x1aa984: 0x12a0000f  beqz        $s5, . + 4 + (0xF << 2)
label_1aa988:
    if (ctx->pc == 0x1AA988u) {
        ctx->pc = 0x1AA98Cu;
        goto label_1aa98c;
    }
    ctx->pc = 0x1AA984u;
    {
        const bool branch_taken_0x1aa984 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa984) {
            ctx->pc = 0x1AA9C4u;
            goto label_1aa9c4;
        }
    }
    ctx->pc = 0x1AA98Cu;
label_1aa98c:
    // 0x1aa98c: 0x8eb9031c  lw          $t9, 0x31C($s5)
    ctx->pc = 0x1aa98cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 796)));
label_1aa990:
    // 0x1aa990: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aa990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1aa994:
    // 0x1aa994: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1aa994u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1aa998:
    // 0x1aa998: 0x320f809  jalr        $t9
label_1aa99c:
    if (ctx->pc == 0x1AA99Cu) {
        ctx->pc = 0x1AA99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA998u;
        // 0x1aa99c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA9A0u;
        goto label_1aa9a0;
    }
    ctx->pc = 0x1AA998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AA9A0u);
        ctx->pc = 0x1AA99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA998u;
        // 0x1aa99c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA998u, 0x1AA9A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AA9A0u;
label_1aa9a0:
    // 0x1aa9a0: 0x10000008  b           . + 4 + (0x8 << 2)
label_1aa9a4:
    if (ctx->pc == 0x1AA9A4u) {
        ctx->pc = 0x1AA9A8u;
        goto label_1aa9a8;
    }
    ctx->pc = 0x1AA9A0u;
    {
        const bool branch_taken_0x1aa9a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa9a0) {
            ctx->pc = 0x1AA9C4u;
            goto label_1aa9c4;
        }
    }
    ctx->pc = 0x1AA9A8u;
label_1aa9a8:
    // 0x1aa9a8: 0x8ea30710  lw          $v1, 0x710($s5)
    ctx->pc = 0x1aa9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1808)));
label_1aa9ac:
    // 0x1aa9ac: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1aa9acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1aa9b0:
    // 0x1aa9b0: 0x1c600004  bgtz        $v1, . + 4 + (0x4 << 2)
label_1aa9b4:
    if (ctx->pc == 0x1AA9B4u) {
        ctx->pc = 0x1AA9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA9B0u;
        // 0x1aa9b4: 0xaea30710  sw          $v1, 0x710($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 1808), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA9B8u;
        goto label_1aa9b8;
    }
    ctx->pc = 0x1AA9B0u;
    {
        const bool branch_taken_0x1aa9b0 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1AA9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA9B0u;
        // 0x1aa9b4: 0xaea30710  sw          $v1, 0x710($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 1808), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa9b0) {
            ctx->pc = 0x1AA9C4u;
            goto label_1aa9c4;
        }
    }
    ctx->pc = 0x1AA9B8u;
label_1aa9b8:
    // 0x1aa9b8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1aa9b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1aa9bc:
    // 0x1aa9bc: 0xc063e08  jal         func_18F820
label_1aa9c0:
    if (ctx->pc == 0x1AA9C0u) {
        ctx->pc = 0x1AA9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA9BCu;
        // 0x1aa9c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA9C4u;
        goto label_1aa9c4;
    }
    ctx->pc = 0x1AA9BCu;
    SET_GPR_U32(ctx, 31, 0x1AA9C4u);
    ctx->pc = 0x1AA9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA9BCu;
    // 0x1aa9c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1AA9BCu, 0x1AA9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA9C4u;
label_1aa9c4:
    // 0x1aa9c4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1aa9c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1aa9c8:
    // 0x1aa9c8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1aa9c8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1aa9cc:
    // 0x1aa9cc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1aa9ccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1aa9d0:
    // 0x1aa9d0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1aa9d0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1aa9d4:
    // 0x1aa9d4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1aa9d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1aa9d8:
    // 0x1aa9d8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1aa9d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1aa9dc:
    // 0x1aa9dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1aa9dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1aa9e0:
    // 0x1aa9e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1aa9e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1aa9e4:
    // 0x1aa9e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1aa9e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1aa9e8:
    // 0x1aa9e8: 0x3e00008  jr          $ra
label_1aa9ec:
    if (ctx->pc == 0x1AA9ECu) {
        ctx->pc = 0x1AA9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA9E8u;
        // 0x1aa9ec: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA9F0u;
        goto label_fallthrough_0x1aa9e8;
    }
    ctx->pc = 0x1AA9E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA9E8u;
        // 0x1aa9ec: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA9E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1aa9e8:
    ctx->pc = 0x1AA9F0u;
}
