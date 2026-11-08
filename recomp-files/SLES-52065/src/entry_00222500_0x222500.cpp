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

// Function: entry_00222500
// Address: 0x222500 - 0x222960
void entry_00222500_0x222500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00222500_0x222500");
#endif

    switch (ctx->pc) {
        case 0x222500u: goto label_222500;
        case 0x222504u: goto label_222504;
        case 0x222508u: goto label_222508;
        case 0x22250cu: goto label_22250c;
        case 0x222510u: goto label_222510;
        case 0x222514u: goto label_222514;
        case 0x222518u: goto label_222518;
        case 0x22251cu: goto label_22251c;
        case 0x222520u: goto label_222520;
        case 0x222524u: goto label_222524;
        case 0x222528u: goto label_222528;
        case 0x22252cu: goto label_22252c;
        case 0x222530u: goto label_222530;
        case 0x222534u: goto label_222534;
        case 0x222538u: goto label_222538;
        case 0x22253cu: goto label_22253c;
        case 0x222540u: goto label_222540;
        case 0x222544u: goto label_222544;
        case 0x222548u: goto label_222548;
        case 0x22254cu: goto label_22254c;
        case 0x222550u: goto label_222550;
        case 0x222554u: goto label_222554;
        case 0x222558u: goto label_222558;
        case 0x22255cu: goto label_22255c;
        case 0x222560u: goto label_222560;
        case 0x222564u: goto label_222564;
        case 0x222568u: goto label_222568;
        case 0x22256cu: goto label_22256c;
        case 0x222570u: goto label_222570;
        case 0x222574u: goto label_222574;
        case 0x222578u: goto label_222578;
        case 0x22257cu: goto label_22257c;
        case 0x222580u: goto label_222580;
        case 0x222584u: goto label_222584;
        case 0x222588u: goto label_222588;
        case 0x22258cu: goto label_22258c;
        case 0x222590u: goto label_222590;
        case 0x222594u: goto label_222594;
        case 0x222598u: goto label_222598;
        case 0x22259cu: goto label_22259c;
        case 0x2225a0u: goto label_2225a0;
        case 0x2225a4u: goto label_2225a4;
        case 0x2225a8u: goto label_2225a8;
        case 0x2225acu: goto label_2225ac;
        case 0x2225b0u: goto label_2225b0;
        case 0x2225b4u: goto label_2225b4;
        case 0x2225b8u: goto label_2225b8;
        case 0x2225bcu: goto label_2225bc;
        case 0x2225c0u: goto label_2225c0;
        case 0x2225c4u: goto label_2225c4;
        case 0x2225c8u: goto label_2225c8;
        case 0x2225ccu: goto label_2225cc;
        case 0x2225d0u: goto label_2225d0;
        case 0x2225d4u: goto label_2225d4;
        case 0x2225d8u: goto label_2225d8;
        case 0x2225dcu: goto label_2225dc;
        case 0x2225e0u: goto label_2225e0;
        case 0x2225e4u: goto label_2225e4;
        case 0x2225e8u: goto label_2225e8;
        case 0x2225ecu: goto label_2225ec;
        case 0x2225f0u: goto label_2225f0;
        case 0x2225f4u: goto label_2225f4;
        case 0x2225f8u: goto label_2225f8;
        case 0x2225fcu: goto label_2225fc;
        case 0x222600u: goto label_222600;
        case 0x222604u: goto label_222604;
        case 0x222608u: goto label_222608;
        case 0x22260cu: goto label_22260c;
        case 0x222610u: goto label_222610;
        case 0x222614u: goto label_222614;
        case 0x222618u: goto label_222618;
        case 0x22261cu: goto label_22261c;
        case 0x222620u: goto label_222620;
        case 0x222624u: goto label_222624;
        case 0x222628u: goto label_222628;
        case 0x22262cu: goto label_22262c;
        case 0x222630u: goto label_222630;
        case 0x222634u: goto label_222634;
        case 0x222638u: goto label_222638;
        case 0x22263cu: goto label_22263c;
        case 0x222640u: goto label_222640;
        case 0x222644u: goto label_222644;
        case 0x222648u: goto label_222648;
        case 0x22264cu: goto label_22264c;
        case 0x222650u: goto label_222650;
        case 0x222654u: goto label_222654;
        case 0x222658u: goto label_222658;
        case 0x22265cu: goto label_22265c;
        case 0x222660u: goto label_222660;
        case 0x222664u: goto label_222664;
        case 0x222668u: goto label_222668;
        case 0x22266cu: goto label_22266c;
        case 0x222670u: goto label_222670;
        case 0x222674u: goto label_222674;
        case 0x222678u: goto label_222678;
        case 0x22267cu: goto label_22267c;
        case 0x222680u: goto label_222680;
        case 0x222684u: goto label_222684;
        case 0x222688u: goto label_222688;
        case 0x22268cu: goto label_22268c;
        case 0x222690u: goto label_222690;
        case 0x222694u: goto label_222694;
        case 0x222698u: goto label_222698;
        case 0x22269cu: goto label_22269c;
        case 0x2226a0u: goto label_2226a0;
        case 0x2226a4u: goto label_2226a4;
        case 0x2226a8u: goto label_2226a8;
        case 0x2226acu: goto label_2226ac;
        case 0x2226b0u: goto label_2226b0;
        case 0x2226b4u: goto label_2226b4;
        case 0x2226b8u: goto label_2226b8;
        case 0x2226bcu: goto label_2226bc;
        case 0x2226c0u: goto label_2226c0;
        case 0x2226c4u: goto label_2226c4;
        case 0x2226c8u: goto label_2226c8;
        case 0x2226ccu: goto label_2226cc;
        case 0x2226d0u: goto label_2226d0;
        case 0x2226d4u: goto label_2226d4;
        case 0x2226d8u: goto label_2226d8;
        case 0x2226dcu: goto label_2226dc;
        case 0x2226e0u: goto label_2226e0;
        case 0x2226e4u: goto label_2226e4;
        case 0x2226e8u: goto label_2226e8;
        case 0x2226ecu: goto label_2226ec;
        case 0x2226f0u: goto label_2226f0;
        case 0x2226f4u: goto label_2226f4;
        case 0x2226f8u: goto label_2226f8;
        case 0x2226fcu: goto label_2226fc;
        case 0x222700u: goto label_222700;
        case 0x222704u: goto label_222704;
        case 0x222708u: goto label_222708;
        case 0x22270cu: goto label_22270c;
        case 0x222710u: goto label_222710;
        case 0x222714u: goto label_222714;
        case 0x222718u: goto label_222718;
        case 0x22271cu: goto label_22271c;
        case 0x222720u: goto label_222720;
        case 0x222724u: goto label_222724;
        case 0x222728u: goto label_222728;
        case 0x22272cu: goto label_22272c;
        case 0x222730u: goto label_222730;
        case 0x222734u: goto label_222734;
        case 0x222738u: goto label_222738;
        case 0x22273cu: goto label_22273c;
        case 0x222740u: goto label_222740;
        case 0x222744u: goto label_222744;
        case 0x222748u: goto label_222748;
        case 0x22274cu: goto label_22274c;
        case 0x222750u: goto label_222750;
        case 0x222754u: goto label_222754;
        case 0x222758u: goto label_222758;
        case 0x22275cu: goto label_22275c;
        case 0x222760u: goto label_222760;
        case 0x222764u: goto label_222764;
        case 0x222768u: goto label_222768;
        case 0x22276cu: goto label_22276c;
        case 0x222770u: goto label_222770;
        case 0x222774u: goto label_222774;
        case 0x222778u: goto label_222778;
        case 0x22277cu: goto label_22277c;
        case 0x222780u: goto label_222780;
        case 0x222784u: goto label_222784;
        case 0x222788u: goto label_222788;
        case 0x22278cu: goto label_22278c;
        case 0x222790u: goto label_222790;
        case 0x222794u: goto label_222794;
        case 0x222798u: goto label_222798;
        case 0x22279cu: goto label_22279c;
        case 0x2227a0u: goto label_2227a0;
        case 0x2227a4u: goto label_2227a4;
        case 0x2227a8u: goto label_2227a8;
        case 0x2227acu: goto label_2227ac;
        case 0x2227b0u: goto label_2227b0;
        case 0x2227b4u: goto label_2227b4;
        case 0x2227b8u: goto label_2227b8;
        case 0x2227bcu: goto label_2227bc;
        case 0x2227c0u: goto label_2227c0;
        case 0x2227c4u: goto label_2227c4;
        case 0x2227c8u: goto label_2227c8;
        case 0x2227ccu: goto label_2227cc;
        case 0x2227d0u: goto label_2227d0;
        case 0x2227d4u: goto label_2227d4;
        case 0x2227d8u: goto label_2227d8;
        case 0x2227dcu: goto label_2227dc;
        case 0x2227e0u: goto label_2227e0;
        case 0x2227e4u: goto label_2227e4;
        case 0x2227e8u: goto label_2227e8;
        case 0x2227ecu: goto label_2227ec;
        case 0x2227f0u: goto label_2227f0;
        case 0x2227f4u: goto label_2227f4;
        case 0x2227f8u: goto label_2227f8;
        case 0x2227fcu: goto label_2227fc;
        case 0x222800u: goto label_222800;
        case 0x222804u: goto label_222804;
        case 0x222808u: goto label_222808;
        case 0x22280cu: goto label_22280c;
        case 0x222810u: goto label_222810;
        case 0x222814u: goto label_222814;
        case 0x222818u: goto label_222818;
        case 0x22281cu: goto label_22281c;
        case 0x222820u: goto label_222820;
        case 0x222824u: goto label_222824;
        case 0x222828u: goto label_222828;
        case 0x22282cu: goto label_22282c;
        case 0x222830u: goto label_222830;
        case 0x222834u: goto label_222834;
        case 0x222838u: goto label_222838;
        case 0x22283cu: goto label_22283c;
        case 0x222840u: goto label_222840;
        case 0x222844u: goto label_222844;
        case 0x222848u: goto label_222848;
        case 0x22284cu: goto label_22284c;
        case 0x222850u: goto label_222850;
        case 0x222854u: goto label_222854;
        case 0x222858u: goto label_222858;
        case 0x22285cu: goto label_22285c;
        case 0x222860u: goto label_222860;
        case 0x222864u: goto label_222864;
        case 0x222868u: goto label_222868;
        case 0x22286cu: goto label_22286c;
        case 0x222870u: goto label_222870;
        case 0x222874u: goto label_222874;
        case 0x222878u: goto label_222878;
        case 0x22287cu: goto label_22287c;
        case 0x222880u: goto label_222880;
        case 0x222884u: goto label_222884;
        case 0x222888u: goto label_222888;
        case 0x22288cu: goto label_22288c;
        case 0x222890u: goto label_222890;
        case 0x222894u: goto label_222894;
        case 0x222898u: goto label_222898;
        case 0x22289cu: goto label_22289c;
        case 0x2228a0u: goto label_2228a0;
        case 0x2228a4u: goto label_2228a4;
        case 0x2228a8u: goto label_2228a8;
        case 0x2228acu: goto label_2228ac;
        case 0x2228b0u: goto label_2228b0;
        case 0x2228b4u: goto label_2228b4;
        case 0x2228b8u: goto label_2228b8;
        case 0x2228bcu: goto label_2228bc;
        case 0x2228c0u: goto label_2228c0;
        case 0x2228c4u: goto label_2228c4;
        case 0x2228c8u: goto label_2228c8;
        case 0x2228ccu: goto label_2228cc;
        case 0x2228d0u: goto label_2228d0;
        case 0x2228d4u: goto label_2228d4;
        case 0x2228d8u: goto label_2228d8;
        case 0x2228dcu: goto label_2228dc;
        case 0x2228e0u: goto label_2228e0;
        case 0x2228e4u: goto label_2228e4;
        case 0x2228e8u: goto label_2228e8;
        case 0x2228ecu: goto label_2228ec;
        case 0x2228f0u: goto label_2228f0;
        case 0x2228f4u: goto label_2228f4;
        case 0x2228f8u: goto label_2228f8;
        case 0x2228fcu: goto label_2228fc;
        case 0x222900u: goto label_222900;
        case 0x222904u: goto label_222904;
        case 0x222908u: goto label_222908;
        case 0x22290cu: goto label_22290c;
        case 0x222910u: goto label_222910;
        case 0x222914u: goto label_222914;
        case 0x222918u: goto label_222918;
        case 0x22291cu: goto label_22291c;
        case 0x222920u: goto label_222920;
        case 0x222924u: goto label_222924;
        case 0x222928u: goto label_222928;
        case 0x22292cu: goto label_22292c;
        case 0x222930u: goto label_222930;
        case 0x222934u: goto label_222934;
        case 0x222938u: goto label_222938;
        case 0x22293cu: goto label_22293c;
        case 0x222940u: goto label_222940;
        case 0x222944u: goto label_222944;
        case 0x222948u: goto label_222948;
        case 0x22294cu: goto label_22294c;
        case 0x222950u: goto label_222950;
        case 0x222954u: goto label_222954;
        case 0x222958u: goto label_222958;
        case 0x22295cu: goto label_22295c;
        default: break;
    }

    ctx->pc = 0x222500u;

label_222500:
    // 0x222500: 0x0  nop
    ctx->pc = 0x222500u;
    // NOP
label_222504:
    // 0x222504: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x222504u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_222508:
    // 0x222508: 0x0  nop
    ctx->pc = 0x222508u;
    // NOP
label_22250c:
    // 0x22250c: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x22250cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_222510:
    // 0x222510: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x222510u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_222514:
    // 0x222514: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x222514u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_222518:
    // 0x222518: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x222518u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_22251c:
    // 0x22251c: 0x8  jr          $zero
label_222520:
    if (ctx->pc == 0x222520u) {
        ctx->pc = 0x222520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22251Cu;
        // 0x222520: 0x4  sllv        $zero, $zero, $zero (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x222524u;
        goto label_222524;
    }
    ctx->pc = 0x22251Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x222520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22251Cu;
        // 0x222520: 0x4  sllv        $zero, $zero, $zero (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22251Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x222524u;
label_222524:
    // 0x222524: 0x9  jalr        $zero, $zero
label_222528:
    if (ctx->pc == 0x222528u) {
        ctx->pc = 0x22252Cu;
        goto label_22252c;
    }
    ctx->pc = 0x222524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222524u, 0x22252Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22252Cu;
label_22252c:
    // 0x22252c: 0x9  jalr        $zero, $zero
label_222530:
    if (ctx->pc == 0x222530u) {
        ctx->pc = 0x222534u;
        goto label_222534;
    }
    ctx->pc = 0x22252Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22252Cu, 0x222534u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x222534u;
label_222534:
    // 0x222534: 0x0  nop
    ctx->pc = 0x222534u;
    // NOP
label_222538:
    // 0x222538: 0x0  nop
    ctx->pc = 0x222538u;
    // NOP
label_22253c:
    // 0x22253c: 0x0  nop
    ctx->pc = 0x22253cu;
    // NOP
label_222540:
    // 0x222540: 0x74537453  .word       0x74537453                   # INVALID     $v0, $s3, 0x7453 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x222540u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x222540 raw=0x74537453");
label_222544:
    // 0x222544: 0x73757461  .word       0x73757461                   # maddu1      $t6, $k1, $s5 # 00000440 <InstrIdType: R5900_MMI>
    ctx->pc = 0x222544u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); uint64_t prod = (uint64_t)GPR_U32(ctx, 27) * (uint64_t)GPR_U32(ctx, 21); uint64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_222548:
    // 0x222548: 0x6c6d2e46  ldr         $t5, 0x2E46($v1)
    ctx->pc = 0x222548u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 11846); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
label_22254c:
    // 0x22254c: 0x6e552f62  ldr         $s5, 0x2F62($s2)
    ctx->pc = 0x22254cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 12130); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
label_222550:
    // 0x222550: 0x73537669  .word       0x73537669                   # INVALID     $k0, $s3, 0x7669 # 00000000 <InstrIdType: R5900_MMI_3>
    ctx->pc = 0x222550u;
    throw std::runtime_error("Unhandled MMI3 instruction: function 0x19 at 0x222550 raw=0x73537669");
label_222554:
    // 0x222554: 0x46  .word       0x00000046                   # srlv        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x222554u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_222558:
    // 0x222558: 0x0  nop
    ctx->pc = 0x222558u;
    // NOP
label_22255c:
    // 0x22255c: 0x0  nop
    ctx->pc = 0x22255cu;
    // NOP
label_222560:
    // 0x222560: 0x74537453  .word       0x74537453                   # INVALID     $v0, $s3, 0x7453 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x222560u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x222560 raw=0x74537453");
label_222564:
    // 0x222564: 0x73757461  .word       0x73757461                   # maddu1      $t6, $k1, $s5 # 00000440 <InstrIdType: R5900_MMI>
    ctx->pc = 0x222564u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); uint64_t prod = (uint64_t)GPR_U32(ctx, 27) * (uint64_t)GPR_U32(ctx, 21); uint64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_222568:
    // 0x222568: 0x6c6d2e46  ldr         $t5, 0x2E46($v1)
    ctx->pc = 0x222568u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 11846); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
label_22256c:
    // 0x22256c: 0x74532f62  .word       0x74532F62                   # INVALID     $v0, $s3, 0x2F62 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x22256cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x22256C raw=0x74532F62");
label_222570:
    // 0x222570: 0x53656761  beql        $k1, $a1, . + 4 + (0x6761 << 2)
label_222574:
    if (ctx->pc == 0x222574u) {
        ctx->pc = 0x222574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222570u;
        // 0x222574: 0x75746174  .word       0x75746174                   # INVALID     $t3, $s4, 0x6174 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        throw std::runtime_error("Unhandled opcode: 0x1D at 0x222574 raw=0x75746174");
        ctx->in_delay_slot = false;
        ctx->pc = 0x222578u;
        goto label_222578;
    }
    ctx->pc = 0x222570u;
    {
        const bool branch_taken_0x222570 = (GPR_U64(ctx, 27) == GPR_U64(ctx, 5));
        if (branch_taken_0x222570) {
            ctx->pc = 0x222574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x222570u;
            // 0x222574: 0x75746174  .word       0x75746174                   # INVALID     $t3, $s4, 0x6174 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x1D at 0x222574 raw=0x75746174");
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C2F8u;
            return;
        }
    }
    ctx->pc = 0x222578u;
label_222578:
    // 0x222578: 0x4673  tltu        $zero, $zero, 281
    ctx->pc = 0x222578u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_22257c:
    // 0x22257c: 0x0  nop
    ctx->pc = 0x22257cu;
    // NOP
label_222580:
    // 0x222580: 0x74537453  .word       0x74537453                   # INVALID     $v0, $s3, 0x7453 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x222580u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x222580 raw=0x74537453");
label_222584:
    // 0x222584: 0x73757461  .word       0x73757461                   # maddu1      $t6, $k1, $s5 # 00000440 <InstrIdType: R5900_MMI>
    ctx->pc = 0x222584u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); uint64_t prod = (uint64_t)GPR_U32(ctx, 27) * (uint64_t)GPR_U32(ctx, 21); uint64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_222588:
    // 0x222588: 0x6c6d2e46  ldr         $t5, 0x2E46($v1)
    ctx->pc = 0x222588u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 11846); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
label_22258c:
    // 0x22258c: 0x73532f62  .word       0x73532F62                   # INVALID     $k0, $s3, 0x2F62 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x22258cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x22 at 0x22258C raw=0x73532F62");
label_222590:
    // 0x222590: 0x746c6543  .word       0x746C6543                   # INVALID     $v1, $t4, 0x6543 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x222590u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x222590 raw=0x746C6543");
label_222594:
    // 0x222594: 0x747865  .word       0x00747865                   # or          $t7, $v1, $s4 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x222594u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 3) | GPR_U64(ctx, 20));
label_222598:
    // 0x222598: 0x0  nop
    ctx->pc = 0x222598u;
    // NOP
label_22259c:
    // 0x22259c: 0x0  nop
    ctx->pc = 0x22259cu;
    // NOP
label_2225a0:
    // 0x2225a0: 0x74537453  .word       0x74537453                   # INVALID     $v0, $s3, 0x7453 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2225a0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x2225A0 raw=0x74537453");
label_2225a4:
    // 0x2225a4: 0x73757461  .word       0x73757461                   # maddu1      $t6, $k1, $s5 # 00000440 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2225a4u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); uint64_t prod = (uint64_t)GPR_U32(ctx, 27) * (uint64_t)GPR_U32(ctx, 21); uint64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_2225a8:
    // 0x2225a8: 0x6c6d2e46  ldr         $t5, 0x2E46($v1)
    ctx->pc = 0x2225a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 11846); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
label_2225ac:
    // 0x2225ac: 0x73532f62  .word       0x73532F62                   # INVALID     $k0, $s3, 0x2F62 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2225acu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x22 at 0x2225AC raw=0x73532F62");
label_2225b0:
    // 0x2225b0: 0x706f5446  .word       0x706F5446                   # INVALID     $v1, $t7, 0x5446 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2225b0u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x6 at 0x2225B0 raw=0x706F5446");
label_2225b4:
    // 0x2225b4: 0x69426369  ldl         $v0, 0x6369($t2)
    ctx->pc = 0x2225b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 25449); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_2225b8:
    // 0x2225b8: 0x676f6c6f  daddiu      $t7, $k1, 0x6C6F
    ctx->pc = 0x2225b8u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)27759);
label_2225bc:
    // 0x2225bc: 0x79  .word       0x00000079                   # INVALID     $zero, $zero, 0x79 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2225bcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x2225BC raw=0x00000079");
label_2225c0:
    // 0x2225c0: 0x74537453  .word       0x74537453                   # INVALID     $v0, $s3, 0x7453 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2225c0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x2225C0 raw=0x74537453");
label_2225c4:
    // 0x2225c4: 0x73757461  .word       0x73757461                   # maddu1      $t6, $k1, $s5 # 00000440 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2225c4u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); uint64_t prod = (uint64_t)GPR_U32(ctx, 27) * (uint64_t)GPR_U32(ctx, 21); uint64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_2225c8:
    // 0x2225c8: 0x6c6d2e46  ldr         $t5, 0x2E46($v1)
    ctx->pc = 0x2225c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 11846); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
label_2225cc:
    // 0x2225cc: 0x73532f62  .word       0x73532F62                   # INVALID     $k0, $s3, 0x2F62 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2225ccu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x22 at 0x2225CC raw=0x73532F62");
label_2225d0:
    // 0x2225d0: 0x706f5446  .word       0x706F5446                   # INVALID     $v1, $t7, 0x5446 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2225d0u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x6 at 0x2225D0 raw=0x706F5446");
label_2225d4:
    // 0x2225d4: 0x654d6369  daddiu      $t5, $t2, 0x6369
    ctx->pc = 0x2225d4u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)25449);
label_2225d8:
    // 0x2225d8: 0x6c6c6174  ldr         $t4, 0x6174($v1)
    ctx->pc = 0x2225d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24948); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_2225dc:
    // 0x2225dc: 0x796775  .word       0x00796775                   # INVALID     $v1, $t9, 0x6775 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2225dcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2225DC raw=0x00796775");
label_2225e0:
    // 0x2225e0: 0x74537453  .word       0x74537453                   # INVALID     $v0, $s3, 0x7453 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2225e0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x2225E0 raw=0x74537453");
label_2225e4:
    // 0x2225e4: 0x73757461  .word       0x73757461                   # maddu1      $t6, $k1, $s5 # 00000440 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2225e4u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); uint64_t prod = (uint64_t)GPR_U32(ctx, 27) * (uint64_t)GPR_U32(ctx, 21); uint64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_2225e8:
    // 0x2225e8: 0x6c6d2e46  ldr         $t5, 0x2E46($v1)
    ctx->pc = 0x2225e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 11846); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
label_2225ec:
    // 0x2225ec: 0x73532f62  .word       0x73532F62                   # INVALID     $k0, $s3, 0x2F62 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2225ecu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x22 at 0x2225EC raw=0x73532F62");
label_2225f0:
    // 0x2225f0: 0x706f5446  .word       0x706F5446                   # INVALID     $v1, $t7, 0x5446 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2225f0u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x6 at 0x2225F0 raw=0x706F5446");
label_2225f4:
    // 0x2225f4: 0x704f6369  .word       0x704F6369                   # pdivuw      $v0, $t7 # 00006000 <InstrIdType: R5900_MMI_3>
    ctx->pc = 0x2225f4u;
    { uint32_t rs0 = GPR_U32(ctx, 2); uint32_t rt0 = GPR_U32(ctx, 15); 
   if (rt0 != 0) { ctx->lo = rs0 / rt0; ctx->hi = rs0 % rt0; } 
   else { ctx->lo = 0xFFFFFFFF; ctx->hi = rs0; } 
   SET_GPR_U32(ctx, 12, ctx->lo); }
label_2225f8:
    // 0x2225f8: 0x73636974  .word       0x73636974                   # psllh       $t5, $v1, 5 # 03600000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2225f8u;
    SET_GPR_VEC(ctx, 13, _mm_slli_epi16(GPR_VEC(ctx, 3), 5));
label_2225fc:
    // 0x2225fc: 0x0  nop
    ctx->pc = 0x2225fcu;
    // NOP
label_222600:
    // 0x222600: 0x74537453  .word       0x74537453                   # INVALID     $v0, $s3, 0x7453 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x222600u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x222600 raw=0x74537453");
label_222604:
    // 0x222604: 0x73757461  .word       0x73757461                   # maddu1      $t6, $k1, $s5 # 00000440 <InstrIdType: R5900_MMI>
    ctx->pc = 0x222604u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); uint64_t prod = (uint64_t)GPR_U32(ctx, 27) * (uint64_t)GPR_U32(ctx, 21); uint64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_222608:
    // 0x222608: 0x6c6d2e46  ldr         $t5, 0x2E46($v1)
    ctx->pc = 0x222608u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 11846); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
label_22260c:
    // 0x22260c: 0x73532f62  .word       0x73532F62                   # INVALID     $k0, $s3, 0x2F62 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x22260cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x22 at 0x22260C raw=0x73532F62");
label_222610:
    // 0x222610: 0x706f5446  .word       0x706F5446                   # INVALID     $v1, $t7, 0x5446 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x222610u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x6 at 0x222610 raw=0x706F5446");
label_222614:
    // 0x222614: 0x65476369  daddiu      $a3, $t2, 0x6369
    ctx->pc = 0x222614u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)25449);
label_222618:
    // 0x222618: 0x74656d6f  .word       0x74656D6F                   # INVALID     $v1, $a1, 0x6D6F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x222618u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x222618 raw=0x74656D6F");
label_22261c:
    // 0x22261c: 0x7972  tlt         $zero, $zero, 485
    ctx->pc = 0x22261cu;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_222620:
    // 0x222620: 0x74537453  .word       0x74537453                   # INVALID     $v0, $s3, 0x7453 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x222620u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x222620 raw=0x74537453");
label_222624:
    // 0x222624: 0x73757461  .word       0x73757461                   # maddu1      $t6, $k1, $s5 # 00000440 <InstrIdType: R5900_MMI>
    ctx->pc = 0x222624u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); uint64_t prod = (uint64_t)GPR_U32(ctx, 27) * (uint64_t)GPR_U32(ctx, 21); uint64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_222628:
    // 0x222628: 0x6c6d2e46  ldr         $t5, 0x2E46($v1)
    ctx->pc = 0x222628u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 11846); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
label_22262c:
    // 0x22262c: 0x73532f62  .word       0x73532F62                   # INVALID     $k0, $s3, 0x2F62 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x22262cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x22 at 0x22262C raw=0x73532F62");
label_222630:
    // 0x222630: 0x66694446  daddiu      $t1, $s3, 0x4446
    ctx->pc = 0x222630u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)17478);
label_222634:
    // 0x222634: 0x75636966  .word       0x75636966                   # INVALID     $t3, $v1, 0x6966 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x222634u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x222634 raw=0x75636966");
label_222638:
    // 0x222638: 0x746c  .word       0x0000746C                   # dadd        $t6, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x222638u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, r); }
label_22263c:
    // 0x22263c: 0x0  nop
    ctx->pc = 0x22263cu;
    // NOP
label_222640:
    // 0x222640: 0x74537453  .word       0x74537453                   # INVALID     $v0, $s3, 0x7453 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x222640u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x222640 raw=0x74537453");
label_222644:
    // 0x222644: 0x73757461  .word       0x73757461                   # maddu1      $t6, $k1, $s5 # 00000440 <InstrIdType: R5900_MMI>
    ctx->pc = 0x222644u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); uint64_t prod = (uint64_t)GPR_U32(ctx, 27) * (uint64_t)GPR_U32(ctx, 21); uint64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_222648:
    // 0x222648: 0x6c6d2e46  ldr         $t5, 0x2E46($v1)
    ctx->pc = 0x222648u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 11846); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
label_22264c:
    // 0x22264c: 0x73532f62  .word       0x73532F62                   # INVALID     $k0, $s3, 0x2F62 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x22264cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x22 at 0x22264C raw=0x73532F62");
label_222650:
    // 0x222650: 0x61724646  daddi       $s2, $t3, 0x4646
    ctx->pc = 0x222650u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)17990; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_222654:
    // 0x222654: 0x6d65  .word       0x00006D65                   # move        $t5, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x222654u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_222658:
    // 0x222658: 0x0  nop
    ctx->pc = 0x222658u;
    // NOP
label_22265c:
    // 0x22265c: 0x0  nop
    ctx->pc = 0x22265cu;
    // NOP
label_222660:
    // 0x222660: 0x74537453  .word       0x74537453                   # INVALID     $v0, $s3, 0x7453 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x222660u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x222660 raw=0x74537453");
label_222664:
    // 0x222664: 0x73757461  .word       0x73757461                   # maddu1      $t6, $k1, $s5 # 00000440 <InstrIdType: R5900_MMI>
    ctx->pc = 0x222664u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); uint64_t prod = (uint64_t)GPR_U32(ctx, 27) * (uint64_t)GPR_U32(ctx, 21); uint64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_222668:
    // 0x222668: 0x6c6d2e46  ldr         $t5, 0x2E46($v1)
    ctx->pc = 0x222668u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 11846); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
label_22266c:
    // 0x22266c: 0x73532f62  .word       0x73532F62                   # INVALID     $k0, $s3, 0x2F62 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x22266cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x22 at 0x22266C raw=0x73532F62");
label_222670:
    // 0x222670: 0x6f634946  ldr         $v1, 0x4946($k1)
    ctx->pc = 0x222670u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 18758); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_222674:
    // 0x222674: 0x6e  .word       0x0000006E                   # dsub        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x222674u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_222678:
    // 0x222678: 0x0  nop
    ctx->pc = 0x222678u;
    // NOP
label_22267c:
    // 0x22267c: 0x0  nop
    ctx->pc = 0x22267cu;
    // NOP
label_222680:
    // 0x222680: 0x74537453  .word       0x74537453                   # INVALID     $v0, $s3, 0x7453 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x222680u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x222680 raw=0x74537453");
label_222684:
    // 0x222684: 0x73757461  .word       0x73757461                   # maddu1      $t6, $k1, $s5 # 00000440 <InstrIdType: R5900_MMI>
    ctx->pc = 0x222684u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); uint64_t prod = (uint64_t)GPR_U32(ctx, 27) * (uint64_t)GPR_U32(ctx, 21); uint64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_222688:
    // 0x222688: 0x6c6d2e46  ldr         $t5, 0x2E46($v1)
    ctx->pc = 0x222688u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 11846); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
label_22268c:
    // 0x22268c: 0x73532f62  .word       0x73532F62                   # INVALID     $k0, $s3, 0x2F62 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x22268cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x22 at 0x22268C raw=0x73532F62");
label_222690:
    // 0x222690: 0x6f634946  ldr         $v1, 0x4946($k1)
    ctx->pc = 0x222690u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 18758); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_222694:
    // 0x222694: 0x6c6f436e  ldr         $t7, 0x436E($v1)
    ctx->pc = 0x222694u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 17262); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_222698:
    // 0x222698: 0x0  nop
    ctx->pc = 0x222698u;
    // NOP
label_22269c:
    // 0x22269c: 0x0  nop
    ctx->pc = 0x22269cu;
    // NOP
label_2226a0:
    // 0x2226a0: 0x74537453  .word       0x74537453                   # INVALID     $v0, $s3, 0x7453 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2226a0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x2226A0 raw=0x74537453");
label_2226a4:
    // 0x2226a4: 0x73757461  .word       0x73757461                   # maddu1      $t6, $k1, $s5 # 00000440 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2226a4u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); uint64_t prod = (uint64_t)GPR_U32(ctx, 27) * (uint64_t)GPR_U32(ctx, 21); uint64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_2226a8:
    // 0x2226a8: 0x6c6d2e46  ldr         $t5, 0x2E46($v1)
    ctx->pc = 0x2226a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 11846); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
label_2226ac:
    // 0x2226ac: 0x73532f62  .word       0x73532F62                   # INVALID     $k0, $s3, 0x2F62 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2226acu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x22 at 0x2226AC raw=0x73532F62");
label_2226b0:
    // 0x2226b0: 0x6f634946  ldr         $v1, 0x4946($k1)
    ctx->pc = 0x2226b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 18758); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_2226b4:
    // 0x2226b4: 0x6c6f436e  ldr         $t7, 0x436E($v1)
    ctx->pc = 0x2226b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 17262); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_2226b8:
    // 0x2226b8: 0x41  .word       0x00000041                   # INVALID     $zero, $zero, 0x41 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2226b8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2226B8 raw=0x00000041");
label_2226bc:
    // 0x2226bc: 0x0  nop
    ctx->pc = 0x2226bcu;
    // NOP
label_2226c0:
    // 0x2226c0: 0x74537453  .word       0x74537453                   # INVALID     $v0, $s3, 0x7453 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2226c0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x2226C0 raw=0x74537453");
label_2226c4:
    // 0x2226c4: 0x73757461  .word       0x73757461                   # maddu1      $t6, $k1, $s5 # 00000440 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2226c4u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); uint64_t prod = (uint64_t)GPR_U32(ctx, 27) * (uint64_t)GPR_U32(ctx, 21); uint64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_2226c8:
    // 0x2226c8: 0x6c6d2e46  ldr         $t5, 0x2E46($v1)
    ctx->pc = 0x2226c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 11846); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
label_2226cc:
    // 0x2226cc: 0x73532f62  .word       0x73532F62                   # INVALID     $k0, $s3, 0x2F62 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2226ccu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x22 at 0x2226CC raw=0x73532F62");
label_2226d0:
    // 0x2226d0: 0x6f634946  ldr         $v1, 0x4946($k1)
    ctx->pc = 0x2226d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 18758); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_2226d4:
    // 0x2226d4: 0x6c6f436e  ldr         $t7, 0x436E($v1)
    ctx->pc = 0x2226d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 17262); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_2226d8:
    // 0x2226d8: 0x42  srl         $zero, $zero, 1
    ctx->pc = 0x2226d8u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 1));
label_2226dc:
    // 0x2226dc: 0x0  nop
    ctx->pc = 0x2226dcu;
    // NOP
label_2226e0:
    // 0x2226e0: 0x74537453  .word       0x74537453                   # INVALID     $v0, $s3, 0x7453 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2226e0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x2226E0 raw=0x74537453");
label_2226e4:
    // 0x2226e4: 0x73757461  .word       0x73757461                   # maddu1      $t6, $k1, $s5 # 00000440 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2226e4u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); uint64_t prod = (uint64_t)GPR_U32(ctx, 27) * (uint64_t)GPR_U32(ctx, 21); uint64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_2226e8:
    // 0x2226e8: 0x6c6d2e46  ldr         $t5, 0x2E46($v1)
    ctx->pc = 0x2226e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 11846); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
label_2226ec:
    // 0x2226ec: 0x73532f62  .word       0x73532F62                   # INVALID     $k0, $s3, 0x2F62 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2226ecu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x22 at 0x2226EC raw=0x73532F62");
label_2226f0:
    // 0x2226f0: 0x6f634946  ldr         $v1, 0x4946($k1)
    ctx->pc = 0x2226f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 18758); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_2226f4:
    // 0x2226f4: 0x6c6f436e  ldr         $t7, 0x436E($v1)
    ctx->pc = 0x2226f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 17262); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_2226f8:
    // 0x2226f8: 0x3241  .word       0x00003241                   # INVALID     $zero, $zero, 0x3241 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2226f8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2226F8 raw=0x00003241");
label_2226fc:
    // 0x2226fc: 0x0  nop
    ctx->pc = 0x2226fcu;
    // NOP
label_222700:
    // 0x222700: 0x74537453  .word       0x74537453                   # INVALID     $v0, $s3, 0x7453 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x222700u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x222700 raw=0x74537453");
label_222704:
    // 0x222704: 0x73757461  .word       0x73757461                   # maddu1      $t6, $k1, $s5 # 00000440 <InstrIdType: R5900_MMI>
    ctx->pc = 0x222704u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); uint64_t prod = (uint64_t)GPR_U32(ctx, 27) * (uint64_t)GPR_U32(ctx, 21); uint64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_222708:
    // 0x222708: 0x6c6d2e46  ldr         $t5, 0x2E46($v1)
    ctx->pc = 0x222708u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 11846); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
label_22270c:
    // 0x22270c: 0x73532f62  .word       0x73532F62                   # INVALID     $k0, $s3, 0x2F62 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x22270cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x22 at 0x22270C raw=0x73532F62");
label_222710:
    // 0x222710: 0x6f634946  ldr         $v1, 0x4946($k1)
    ctx->pc = 0x222710u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 18758); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_222714:
    // 0x222714: 0x6c6f436e  ldr         $t7, 0x436E($v1)
    ctx->pc = 0x222714u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 17262); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_222718:
    // 0x222718: 0x3242  srl         $a2, $zero, 9
    ctx->pc = 0x222718u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 0), 9));
label_22271c:
    // 0x22271c: 0x0  nop
    ctx->pc = 0x22271cu;
    // NOP
label_222720:
    // 0x222720: 0x74537453  .word       0x74537453                   # INVALID     $v0, $s3, 0x7453 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x222720u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x222720 raw=0x74537453");
label_222724:
    // 0x222724: 0x73757461  .word       0x73757461                   # maddu1      $t6, $k1, $s5 # 00000440 <InstrIdType: R5900_MMI>
    ctx->pc = 0x222724u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); uint64_t prod = (uint64_t)GPR_U32(ctx, 27) * (uint64_t)GPR_U32(ctx, 21); uint64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_222728:
    // 0x222728: 0x6c6d2e46  ldr         $t5, 0x2E46($v1)
    ctx->pc = 0x222728u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 11846); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
label_22272c:
    // 0x22272c: 0x73532f62  .word       0x73532F62                   # INVALID     $k0, $s3, 0x2F62 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x22272cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x22 at 0x22272C raw=0x73532F62");
label_222730:
    // 0x222730: 0x78655446  lq          $a1, 0x5446($v1)
    ctx->pc = 0x222730u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 21574)));
label_222734:
    // 0x222734: 0x44455274  .word       0x44455274                   # cfc1        $a1, $10 # 00000274 <InstrIdType: R5900_COP1>
    ctx->pc = 0x222734u;
    SET_GPR_U32(ctx, 5, 0); // Unimplemented FCR10
label_222738:
    // 0x222738: 0x0  nop
    ctx->pc = 0x222738u;
    // NOP
label_22273c:
    // 0x22273c: 0x0  nop
    ctx->pc = 0x22273cu;
    // NOP
label_222740:
    // 0x222740: 0xa736c25  j           func_9CDB094
label_222744:
    if (ctx->pc == 0x222744u) {
        ctx->pc = 0x222748u;
        goto label_222748;
    }
    ctx->pc = 0x222740u;
    ctx->pc = 0x9CDB094u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x9CDB094u, 0x222740u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x222748u;
label_222748:
    // 0x222748: 0x252f6425  addiu       $t7, $t1, 0x6425
    ctx->pc = 0x222748u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 9), 25637));
label_22274c:
    // 0x22274c: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x22274cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_222750:
    // 0x222750: 0x6c707845  ldr         $s0, 0x7845($v1)
    ctx->pc = 0x222750u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 30789); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
label_222754:
    // 0x222754: 0x2e6e6961  sltiu       $t6, $s3, 0x6961
    ctx->pc = 0x222754u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)26977) ? 1 : 0);
label_222758:
    // 0x222758: 0x2f626c6d  sltiu       $v0, $k1, 0x6C6D
    ctx->pc = 0x222758u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)27757) ? 1 : 0);
label_22275c:
    // 0x22275c: 0x76696e55  .word       0x76696E55                   # INVALID     $s3, $t1, 0x6E55 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x22275cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x22275C raw=0x76696E55");
label_222760:
    // 0x222760: 0x707845  .word       0x00707845                   # INVALID     $v1, $s0, 0x7845 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x222760u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x222760 raw=0x00707845");
label_222764:
    // 0x222764: 0x0  nop
    ctx->pc = 0x222764u;
    // NOP
label_222768:
    // 0x222768: 0x0  nop
    ctx->pc = 0x222768u;
    // NOP
label_22276c:
    // 0x22276c: 0x0  nop
    ctx->pc = 0x22276cu;
    // NOP
label_222770:
    // 0x222770: 0x6c707845  ldr         $s0, 0x7845($v1)
    ctx->pc = 0x222770u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 30789); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
label_222774:
    // 0x222774: 0x2e6e6961  sltiu       $t6, $s3, 0x6961
    ctx->pc = 0x222774u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)26977) ? 1 : 0);
label_222778:
    // 0x222778: 0x2f626c6d  sltiu       $v0, $k1, 0x6C6D
    ctx->pc = 0x222778u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)27757) ? 1 : 0);
label_22277c:
    // 0x22277c: 0x6c707845  ldr         $s0, 0x7845($v1)
    ctx->pc = 0x22277cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 30789); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
label_222780:
    // 0x222780: 0x6e6961  .word       0x006E6961                   # addu        $t5, $v1, $t6 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x222780u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
label_222784:
    // 0x222784: 0x0  nop
    ctx->pc = 0x222784u;
    // NOP
label_222788:
    // 0x222788: 0x0  nop
    ctx->pc = 0x222788u;
    // NOP
label_22278c:
    // 0x22278c: 0x0  nop
    ctx->pc = 0x22278cu;
    // NOP
label_222790:
    // 0x222790: 0x6c707845  ldr         $s0, 0x7845($v1)
    ctx->pc = 0x222790u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 30789); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
label_222794:
    // 0x222794: 0x2e6e6961  sltiu       $t6, $s3, 0x6961
    ctx->pc = 0x222794u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)26977) ? 1 : 0);
label_222798:
    // 0x222798: 0x2f626c6d  sltiu       $v0, $k1, 0x6C6D
    ctx->pc = 0x222798u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)27757) ? 1 : 0);
label_22279c:
    // 0x22279c: 0x49707845  .word       0x49707845                   # INVALID     $t3, $s0, 0x7845 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x22279cu;
    throw std::runtime_error("Unhandled COP2 format: 0xB at 0x22279C raw=0x49707845");
label_2227a0:
    // 0x2227a0: 0x6e6f63  .word       0x006E6F63                   # subu        $t5, $v1, $t6 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2227a0u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
label_2227a4:
    // 0x2227a4: 0x0  nop
    ctx->pc = 0x2227a4u;
    // NOP
label_2227a8:
    // 0x2227a8: 0x0  nop
    ctx->pc = 0x2227a8u;
    // NOP
label_2227ac:
    // 0x2227ac: 0x0  nop
    ctx->pc = 0x2227acu;
    // NOP
label_2227b0:
    // 0x2227b0: 0x6c707845  ldr         $s0, 0x7845($v1)
    ctx->pc = 0x2227b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 30789); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
label_2227b4:
    // 0x2227b4: 0x2e6e6961  sltiu       $t6, $s3, 0x6961
    ctx->pc = 0x2227b4u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)26977) ? 1 : 0);
label_2227b8:
    // 0x2227b8: 0x2f626c6d  sltiu       $v0, $k1, 0x6C6D
    ctx->pc = 0x2227b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)27757) ? 1 : 0);
label_2227bc:
    // 0x2227bc: 0x49707845  .word       0x49707845                   # INVALID     $t3, $s0, 0x7845 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2227bcu;
    throw std::runtime_error("Unhandled COP2 format: 0xB at 0x2227BC raw=0x49707845");
label_2227c0:
    // 0x2227c0: 0x436e6f63  .word       0x436E6F63                   # INVALID     $k1, $t6, 0x6F63 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2227c0u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x2227C0 raw=0x436E6F63");
label_2227c4:
    // 0x2227c4: 0x6c6f  .word       0x00006C6F                   # dsubu       $t5, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2227c4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_2227c8:
    // 0x2227c8: 0x0  nop
    ctx->pc = 0x2227c8u;
    // NOP
label_2227cc:
    // 0x2227cc: 0x0  nop
    ctx->pc = 0x2227ccu;
    // NOP
label_2227d0:
    // 0x2227d0: 0x6c707845  ldr         $s0, 0x7845($v1)
    ctx->pc = 0x2227d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 30789); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
label_2227d4:
    // 0x2227d4: 0x2e6e6961  sltiu       $t6, $s3, 0x6961
    ctx->pc = 0x2227d4u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)26977) ? 1 : 0);
label_2227d8:
    // 0x2227d8: 0x2f626c6d  sltiu       $v0, $k1, 0x6C6D
    ctx->pc = 0x2227d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)27757) ? 1 : 0);
label_2227dc:
    // 0x2227dc: 0x54707845  bnel        $v1, $s0, . + 4 + (0x7845 << 2)
label_2227e0:
    if (ctx->pc == 0x2227E0u) {
        ctx->pc = 0x2227E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2227DCu;
        // 0x2227e0: 0x747865  .word       0x00747865                   # or          $t7, $v1, $s4 # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 3) | GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2227E4u;
        goto label_2227e4;
    }
    ctx->pc = 0x2227DCu;
    {
        const bool branch_taken_0x2227dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x2227dc) {
            ctx->pc = 0x2227E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2227DCu;
            // 0x2227e0: 0x747865  .word       0x00747865                   # or          $t7, $v1, $s4 # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            SET_GPR_U64(ctx, 15, GPR_U64(ctx, 3) | GPR_U64(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2408F4u;
            return;
        }
    }
    ctx->pc = 0x2227E4u;
label_2227e4:
    // 0x2227e4: 0x0  nop
    ctx->pc = 0x2227e4u;
    // NOP
label_2227e8:
    // 0x2227e8: 0x0  nop
    ctx->pc = 0x2227e8u;
    // NOP
label_2227ec:
    // 0x2227ec: 0x0  nop
    ctx->pc = 0x2227ecu;
    // NOP
label_2227f0:
    // 0x2227f0: 0x6c707845  ldr         $s0, 0x7845($v1)
    ctx->pc = 0x2227f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 30789); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
label_2227f4:
    // 0x2227f4: 0x2e6e6961  sltiu       $t6, $s3, 0x6961
    ctx->pc = 0x2227f4u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)26977) ? 1 : 0);
label_2227f8:
    // 0x2227f8: 0x2f626c6d  sltiu       $v0, $k1, 0x6C6D
    ctx->pc = 0x2227f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)27757) ? 1 : 0);
label_2227fc:
    // 0x2227fc: 0x68747845  ldl         $s4, 0x7845($v1)
    ctx->pc = 0x2227fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 30789); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_222800:
    // 0x222800: 0x626d75  .word       0x00626D75                   # INVALID     $v1, $v0, 0x6D75 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x222800u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x222800 raw=0x00626D75");
label_222804:
    // 0x222804: 0x0  nop
    ctx->pc = 0x222804u;
    // NOP
label_222808:
    // 0x222808: 0x0  nop
    ctx->pc = 0x222808u;
    // NOP
label_22280c:
    // 0x22280c: 0x0  nop
    ctx->pc = 0x22280cu;
    // NOP
label_222810:
    // 0x222810: 0x6974704f  ldl         $s4, 0x704F($t3)
    ctx->pc = 0x222810u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28751); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_222814:
    // 0x222814: 0x6d2e6e6f  ldr         $t6, 0x6E6F($t1)
    ctx->pc = 0x222814u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 28271); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
label_222818:
    // 0x222818: 0x552f626c  bnel        $t1, $t7, . + 4 + (0x626C << 2)
label_22281c:
    if (ctx->pc == 0x22281Cu) {
        ctx->pc = 0x22281Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222818u;
        // 0x22281c: 0x4f76696e  .word       0x4F76696E                   # INVALID     $k1, $s6, 0x696E # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        throw std::runtime_error("Unhandled opcode: 0x13 at 0x22281C raw=0x4F76696E");
        ctx->in_delay_slot = false;
        ctx->pc = 0x222820u;
        goto label_222820;
    }
    ctx->pc = 0x222818u;
    {
        const bool branch_taken_0x222818 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 15));
        if (branch_taken_0x222818) {
            ctx->pc = 0x22281Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x222818u;
            // 0x22281c: 0x4f76696e  .word       0x4F76696E                   # INVALID     $k1, $s6, 0x696E # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x13 at 0x22281C raw=0x4F76696E");
            ctx->in_delay_slot = false;
            ctx->pc = 0x23B1CCu;
            return;
        }
    }
    ctx->pc = 0x222820u;
label_222820:
    // 0x222820: 0x70  tge         $zero, $zero, 1
    ctx->pc = 0x222820u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_222824:
    // 0x222824: 0x0  nop
    ctx->pc = 0x222824u;
    // NOP
label_222828:
    // 0x222828: 0x0  nop
    ctx->pc = 0x222828u;
    // NOP
label_22282c:
    // 0x22282c: 0x0  nop
    ctx->pc = 0x22282cu;
    // NOP
label_222830:
    // 0x222830: 0x6974704f  ldl         $s4, 0x704F($t3)
    ctx->pc = 0x222830u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28751); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_222834:
    // 0x222834: 0x6d2e6e6f  ldr         $t6, 0x6E6F($t1)
    ctx->pc = 0x222834u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 28271); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
label_222838:
    // 0x222838: 0x4f2f626c  .word       0x4F2F626C                   # INVALID     $t9, $t7, 0x626C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x222838u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x222838 raw=0x4F2F626C");
label_22283c:
    // 0x22283c: 0x6f697470  ldr         $t1, 0x7470($k1)
    ctx->pc = 0x22283cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29808); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_222840:
    // 0x222840: 0x6e  .word       0x0000006E                   # dsub        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x222840u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_222844:
    // 0x222844: 0x0  nop
    ctx->pc = 0x222844u;
    // NOP
label_222848:
    // 0x222848: 0x0  nop
    ctx->pc = 0x222848u;
    // NOP
label_22284c:
    // 0x22284c: 0x0  nop
    ctx->pc = 0x22284cu;
    // NOP
label_222850:
    // 0x222850: 0x6974704f  ldl         $s4, 0x704F($t3)
    ctx->pc = 0x222850u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28751); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_222854:
    // 0x222854: 0x6d2e6e6f  ldr         $t6, 0x6E6F($t1)
    ctx->pc = 0x222854u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 28271); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
label_222858:
    // 0x222858: 0x4f2f626c  .word       0x4F2F626C                   # INVALID     $t9, $t7, 0x626C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x222858u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x222858 raw=0x4F2F626C");
label_22285c:
    // 0x22285c: 0x6f634970  ldr         $v1, 0x4970($k1)
    ctx->pc = 0x22285cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 18800); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_222860:
    // 0x222860: 0x6e  .word       0x0000006E                   # dsub        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x222860u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_222864:
    // 0x222864: 0x0  nop
    ctx->pc = 0x222864u;
    // NOP
label_222868:
    // 0x222868: 0x0  nop
    ctx->pc = 0x222868u;
    // NOP
label_22286c:
    // 0x22286c: 0x0  nop
    ctx->pc = 0x22286cu;
    // NOP
label_222870:
    // 0x222870: 0x6974704f  ldl         $s4, 0x704F($t3)
    ctx->pc = 0x222870u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28751); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_222874:
    // 0x222874: 0x6d2e6e6f  ldr         $t6, 0x6E6F($t1)
    ctx->pc = 0x222874u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 28271); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
label_222878:
    // 0x222878: 0x4f2f626c  .word       0x4F2F626C                   # INVALID     $t9, $t7, 0x626C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x222878u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x222878 raw=0x4F2F626C");
label_22287c:
    // 0x22287c: 0x6f634970  ldr         $v1, 0x4970($k1)
    ctx->pc = 0x22287cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 18800); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_222880:
    // 0x222880: 0x6c6f436e  ldr         $t7, 0x436E($v1)
    ctx->pc = 0x222880u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 17262); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_222884:
    // 0x222884: 0x0  nop
    ctx->pc = 0x222884u;
    // NOP
label_222888:
    // 0x222888: 0x0  nop
    ctx->pc = 0x222888u;
    // NOP
label_22288c:
    // 0x22288c: 0x0  nop
    ctx->pc = 0x22288cu;
    // NOP
label_222890:
    // 0x222890: 0x6974704f  ldl         $s4, 0x704F($t3)
    ctx->pc = 0x222890u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28751); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_222894:
    // 0x222894: 0x6d2e6e6f  ldr         $t6, 0x6E6F($t1)
    ctx->pc = 0x222894u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 28271); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
label_222898:
    // 0x222898: 0x4f2f626c  .word       0x4F2F626C                   # INVALID     $t9, $t7, 0x626C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x222898u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x222898 raw=0x4F2F626C");
label_22289c:
    // 0x22289c: 0x6c6f5670  ldr         $t7, 0x5670($v1)
    ctx->pc = 0x22289cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 22128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_2228a0:
    // 0x2228a0: 0x0  nop
    ctx->pc = 0x2228a0u;
    // NOP
label_2228a4:
    // 0x2228a4: 0x0  nop
    ctx->pc = 0x2228a4u;
    // NOP
label_2228a8:
    // 0x2228a8: 0x0  nop
    ctx->pc = 0x2228a8u;
    // NOP
label_2228ac:
    // 0x2228ac: 0x0  nop
    ctx->pc = 0x2228acu;
    // NOP
label_2228b0:
    // 0x2228b0: 0x6974704f  ldl         $s4, 0x704F($t3)
    ctx->pc = 0x2228b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28751); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_2228b4:
    // 0x2228b4: 0x6d2e6e6f  ldr         $t6, 0x6E6F($t1)
    ctx->pc = 0x2228b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 28271); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
label_2228b8:
    // 0x2228b8: 0x4f2f626c  .word       0x4F2F626C                   # INVALID     $t9, $t7, 0x626C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2228b8u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x2228B8 raw=0x4F2F626C");
label_2228bc:
    // 0x2228bc: 0x78655470  lq          $a1, 0x5470($v1)
    ctx->pc = 0x2228bcu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 21616)));
label_2228c0:
    // 0x2228c0: 0x74  teq         $zero, $zero, 1
    ctx->pc = 0x2228c0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2228c4:
    // 0x2228c4: 0x0  nop
    ctx->pc = 0x2228c4u;
    // NOP
label_2228c8:
    // 0x2228c8: 0x50414843  beql        $v0, $at, . + 4 + (0x4843 << 2)
label_2228cc:
    if (ctx->pc == 0x2228CCu) {
        ctx->pc = 0x2228CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2228C8u;
        // 0x2228cc: 0x502e3130  beql        $at, $t6, . + 4 + (0x3130 << 2) (Delay Slot)
        // Likely branch instruction at 0x2228CC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2228D0u;
        goto label_2228d0;
    }
    ctx->pc = 0x2228C8u;
    {
        const bool branch_taken_0x2228c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 1));
        if (branch_taken_0x2228c8) {
            ctx->pc = 0x2228CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2228C8u;
            // 0x2228cc: 0x502e3130  beql        $at, $t6, . + 4 + (0x3130 << 2) (Delay Slot)
            // Likely branch instruction at 0x2228CC - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2349D8u;
            return;
        }
    }
    ctx->pc = 0x2228D0u;
label_2228d0:
    // 0x2228d0: 0x5353  .word       0x00005353                   # mtlo        $zero # 00005340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2228d0u;
    ctx->lo = GPR_U64(ctx, 0);
label_2228d4:
    // 0x2228d4: 0x0  nop
    ctx->pc = 0x2228d4u;
    // NOP
label_2228d8:
    // 0x2228d8: 0x50414843  beql        $v0, $at, . + 4 + (0x4843 << 2)
label_2228dc:
    if (ctx->pc == 0x2228DCu) {
        ctx->pc = 0x2228DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2228D8u;
        // 0x2228dc: 0x502e3230  beql        $at, $t6, . + 4 + (0x3230 << 2) (Delay Slot)
        // Likely branch instruction at 0x2228DC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2228E0u;
        goto label_2228e0;
    }
    ctx->pc = 0x2228D8u;
    {
        const bool branch_taken_0x2228d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 1));
        if (branch_taken_0x2228d8) {
            ctx->pc = 0x2228DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2228D8u;
            // 0x2228dc: 0x502e3230  beql        $at, $t6, . + 4 + (0x3230 << 2) (Delay Slot)
            // Likely branch instruction at 0x2228DC - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2349E8u;
            return;
        }
    }
    ctx->pc = 0x2228E0u;
label_2228e0:
    // 0x2228e0: 0x5353  .word       0x00005353                   # mtlo        $zero # 00005340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2228e0u;
    ctx->lo = GPR_U64(ctx, 0);
label_2228e4:
    // 0x2228e4: 0x0  nop
    ctx->pc = 0x2228e4u;
    // NOP
label_2228e8:
    // 0x2228e8: 0x50414843  beql        $v0, $at, . + 4 + (0x4843 << 2)
label_2228ec:
    if (ctx->pc == 0x2228ECu) {
        ctx->pc = 0x2228ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2228E8u;
        // 0x2228ec: 0x502e3330  beql        $at, $t6, . + 4 + (0x3330 << 2) (Delay Slot)
        // Likely branch instruction at 0x2228EC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2228F0u;
        goto label_2228f0;
    }
    ctx->pc = 0x2228E8u;
    {
        const bool branch_taken_0x2228e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 1));
        if (branch_taken_0x2228e8) {
            ctx->pc = 0x2228ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2228E8u;
            // 0x2228ec: 0x502e3330  beql        $at, $t6, . + 4 + (0x3330 << 2) (Delay Slot)
            // Likely branch instruction at 0x2228EC - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2349F8u;
            return;
        }
    }
    ctx->pc = 0x2228F0u;
label_2228f0:
    // 0x2228f0: 0x5353  .word       0x00005353                   # mtlo        $zero # 00005340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2228f0u;
    ctx->lo = GPR_U64(ctx, 0);
label_2228f4:
    // 0x2228f4: 0x0  nop
    ctx->pc = 0x2228f4u;
    // NOP
label_2228f8:
    // 0x2228f8: 0x50414843  beql        $v0, $at, . + 4 + (0x4843 << 2)
label_2228fc:
    if (ctx->pc == 0x2228FCu) {
        ctx->pc = 0x2228FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2228F8u;
        // 0x2228fc: 0x502e3430  beql        $at, $t6, . + 4 + (0x3430 << 2) (Delay Slot)
        // Likely branch instruction at 0x2228FC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x222900u;
        goto label_222900;
    }
    ctx->pc = 0x2228F8u;
    {
        const bool branch_taken_0x2228f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 1));
        if (branch_taken_0x2228f8) {
            ctx->pc = 0x2228FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2228F8u;
            // 0x2228fc: 0x502e3430  beql        $at, $t6, . + 4 + (0x3430 << 2) (Delay Slot)
            // Likely branch instruction at 0x2228FC - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x234A08u;
            return;
        }
    }
    ctx->pc = 0x222900u;
label_222900:
    // 0x222900: 0x5353  .word       0x00005353                   # mtlo        $zero # 00005340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x222900u;
    ctx->lo = GPR_U64(ctx, 0);
label_222904:
    // 0x222904: 0x0  nop
    ctx->pc = 0x222904u;
    // NOP
label_222908:
    // 0x222908: 0x50414843  beql        $v0, $at, . + 4 + (0x4843 << 2)
label_22290c:
    if (ctx->pc == 0x22290Cu) {
        ctx->pc = 0x22290Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222908u;
        // 0x22290c: 0x502e3530  beql        $at, $t6, . + 4 + (0x3530 << 2) (Delay Slot)
        // Likely branch instruction at 0x22290C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x222910u;
        goto label_222910;
    }
    ctx->pc = 0x222908u;
    {
        const bool branch_taken_0x222908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 1));
        if (branch_taken_0x222908) {
            ctx->pc = 0x22290Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x222908u;
            // 0x22290c: 0x502e3530  beql        $at, $t6, . + 4 + (0x3530 << 2) (Delay Slot)
            // Likely branch instruction at 0x22290C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x234A18u;
            return;
        }
    }
    ctx->pc = 0x222910u;
label_222910:
    // 0x222910: 0x5353  .word       0x00005353                   # mtlo        $zero # 00005340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x222910u;
    ctx->lo = GPR_U64(ctx, 0);
label_222914:
    // 0x222914: 0x0  nop
    ctx->pc = 0x222914u;
    // NOP
label_222918:
    // 0x222918: 0x50414843  beql        $v0, $at, . + 4 + (0x4843 << 2)
label_22291c:
    if (ctx->pc == 0x22291Cu) {
        ctx->pc = 0x22291Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222918u;
        // 0x22291c: 0x502e3630  beql        $at, $t6, . + 4 + (0x3630 << 2) (Delay Slot)
        // Likely branch instruction at 0x22291C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x222920u;
        goto label_222920;
    }
    ctx->pc = 0x222918u;
    {
        const bool branch_taken_0x222918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 1));
        if (branch_taken_0x222918) {
            ctx->pc = 0x22291Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x222918u;
            // 0x22291c: 0x502e3630  beql        $at, $t6, . + 4 + (0x3630 << 2) (Delay Slot)
            // Likely branch instruction at 0x22291C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x234A28u;
            return;
        }
    }
    ctx->pc = 0x222920u;
label_222920:
    // 0x222920: 0x5353  .word       0x00005353                   # mtlo        $zero # 00005340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x222920u;
    ctx->lo = GPR_U64(ctx, 0);
label_222924:
    // 0x222924: 0x0  nop
    ctx->pc = 0x222924u;
    // NOP
label_222928:
    // 0x222928: 0x50414843  beql        $v0, $at, . + 4 + (0x4843 << 2)
label_22292c:
    if (ctx->pc == 0x22292Cu) {
        ctx->pc = 0x22292Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222928u;
        // 0x22292c: 0x502e3730  beql        $at, $t6, . + 4 + (0x3730 << 2) (Delay Slot)
        // Likely branch instruction at 0x22292C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x222930u;
        goto label_222930;
    }
    ctx->pc = 0x222928u;
    {
        const bool branch_taken_0x222928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 1));
        if (branch_taken_0x222928) {
            ctx->pc = 0x22292Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x222928u;
            // 0x22292c: 0x502e3730  beql        $at, $t6, . + 4 + (0x3730 << 2) (Delay Slot)
            // Likely branch instruction at 0x22292C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x234A38u;
            return;
        }
    }
    ctx->pc = 0x222930u;
label_222930:
    // 0x222930: 0x5353  .word       0x00005353                   # mtlo        $zero # 00005340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x222930u;
    ctx->lo = GPR_U64(ctx, 0);
label_222934:
    // 0x222934: 0x0  nop
    ctx->pc = 0x222934u;
    // NOP
label_222938:
    // 0x222938: 0x0  nop
    ctx->pc = 0x222938u;
    // NOP
label_22293c:
    // 0x22293c: 0x0  nop
    ctx->pc = 0x22293cu;
    // NOP
label_222940:
    // 0x222940: 0x2228c8  .word       0x002228C8                   # jr          $at # 000228C0 <InstrIdType: CPU_SPECIAL>
label_222944:
    if (ctx->pc == 0x222944u) {
        ctx->pc = 0x222944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222940u;
        // 0x222944: 0x2228d8  .word       0x002228D8                   # mult        $a1, $at, $v0 # 000000C0 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x222948u;
        goto label_222948;
    }
    ctx->pc = 0x222940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x222944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222940u;
        // 0x222944: 0x2228d8  .word       0x002228D8                   # mult        $a1, $at, $v0 # 000000C0 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222940u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x222948u;
label_222948:
    // 0x222948: 0x2228e8  .word       0x002228E8                   # mfsa        $a1 # 002200C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x222948u;
    SET_GPR_U32(ctx, 5, ctx->sa);
label_22294c:
    // 0x22294c: 0x2228f8  .word       0x002228F8                   # dsll        $a1, $v0, 3 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x22294cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << 3);
label_222950:
    // 0x222950: 0x222908  .word       0x00222908                   # jr          $at # 00022900 <InstrIdType: CPU_SPECIAL>
label_222954:
    if (ctx->pc == 0x222954u) {
        ctx->pc = 0x222954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222950u;
        // 0x222954: 0x222918  .word       0x00222918                   # mult        $a1, $at, $v0 # 00000100 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x222958u;
        goto label_222958;
    }
    ctx->pc = 0x222950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x222954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222950u;
        // 0x222954: 0x222918  .word       0x00222918                   # mult        $a1, $at, $v0 # 00000100 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222950u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x222958u;
label_222958:
    // 0x222958: 0x222928  .word       0x00222928                   # mfsa        $a1 # 00220100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x222958u;
    SET_GPR_U32(ctx, 5, ctx->sa);
label_22295c:
    // 0x22295c: 0x0  nop
    ctx->pc = 0x22295cu;
    // NOP
    ctx->pc = 0x222960u;
}
