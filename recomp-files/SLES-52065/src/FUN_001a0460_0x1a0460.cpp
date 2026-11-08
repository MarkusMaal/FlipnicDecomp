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

// Function: FUN_001a0460
// Address: 0x1a0460 - 0x1a0854
void FUN_001a0460_0x1a0460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a0460_0x1a0460");
#endif

    switch (ctx->pc) {
        case 0x1a0460u: goto label_1a0460;
        case 0x1a0464u: goto label_1a0464;
        case 0x1a0468u: goto label_1a0468;
        case 0x1a046cu: goto label_1a046c;
        case 0x1a0470u: goto label_1a0470;
        case 0x1a0474u: goto label_1a0474;
        case 0x1a0478u: goto label_1a0478;
        case 0x1a047cu: goto label_1a047c;
        case 0x1a0480u: goto label_1a0480;
        case 0x1a0484u: goto label_1a0484;
        case 0x1a0488u: goto label_1a0488;
        case 0x1a048cu: goto label_1a048c;
        case 0x1a0490u: goto label_1a0490;
        case 0x1a0494u: goto label_1a0494;
        case 0x1a0498u: goto label_1a0498;
        case 0x1a049cu: goto label_1a049c;
        case 0x1a04a0u: goto label_1a04a0;
        case 0x1a04a4u: goto label_1a04a4;
        case 0x1a04a8u: goto label_1a04a8;
        case 0x1a04acu: goto label_1a04ac;
        case 0x1a04b0u: goto label_1a04b0;
        case 0x1a04b4u: goto label_1a04b4;
        case 0x1a04b8u: goto label_1a04b8;
        case 0x1a04bcu: goto label_1a04bc;
        case 0x1a04c0u: goto label_1a04c0;
        case 0x1a04c4u: goto label_1a04c4;
        case 0x1a04c8u: goto label_1a04c8;
        case 0x1a04ccu: goto label_1a04cc;
        case 0x1a04d0u: goto label_1a04d0;
        case 0x1a04d4u: goto label_1a04d4;
        case 0x1a04d8u: goto label_1a04d8;
        case 0x1a04dcu: goto label_1a04dc;
        case 0x1a04e0u: goto label_1a04e0;
        case 0x1a04e4u: goto label_1a04e4;
        case 0x1a04e8u: goto label_1a04e8;
        case 0x1a04ecu: goto label_1a04ec;
        case 0x1a04f0u: goto label_1a04f0;
        case 0x1a04f4u: goto label_1a04f4;
        case 0x1a04f8u: goto label_1a04f8;
        case 0x1a04fcu: goto label_1a04fc;
        case 0x1a0500u: goto label_1a0500;
        case 0x1a0504u: goto label_1a0504;
        case 0x1a0508u: goto label_1a0508;
        case 0x1a050cu: goto label_1a050c;
        case 0x1a0510u: goto label_1a0510;
        case 0x1a0514u: goto label_1a0514;
        case 0x1a0518u: goto label_1a0518;
        case 0x1a051cu: goto label_1a051c;
        case 0x1a0520u: goto label_1a0520;
        case 0x1a0524u: goto label_1a0524;
        case 0x1a0528u: goto label_1a0528;
        case 0x1a052cu: goto label_1a052c;
        case 0x1a0530u: goto label_1a0530;
        case 0x1a0534u: goto label_1a0534;
        case 0x1a0538u: goto label_1a0538;
        case 0x1a053cu: goto label_1a053c;
        case 0x1a0540u: goto label_1a0540;
        case 0x1a0544u: goto label_1a0544;
        case 0x1a0548u: goto label_1a0548;
        case 0x1a054cu: goto label_1a054c;
        case 0x1a0550u: goto label_1a0550;
        case 0x1a0554u: goto label_1a0554;
        case 0x1a0558u: goto label_1a0558;
        case 0x1a055cu: goto label_1a055c;
        case 0x1a0560u: goto label_1a0560;
        case 0x1a0564u: goto label_1a0564;
        case 0x1a0568u: goto label_1a0568;
        case 0x1a056cu: goto label_1a056c;
        case 0x1a0570u: goto label_1a0570;
        case 0x1a0574u: goto label_1a0574;
        case 0x1a0578u: goto label_1a0578;
        case 0x1a057cu: goto label_1a057c;
        case 0x1a0580u: goto label_1a0580;
        case 0x1a0584u: goto label_1a0584;
        case 0x1a0588u: goto label_1a0588;
        case 0x1a058cu: goto label_1a058c;
        case 0x1a0590u: goto label_1a0590;
        case 0x1a0594u: goto label_1a0594;
        case 0x1a0598u: goto label_1a0598;
        case 0x1a059cu: goto label_1a059c;
        case 0x1a05a0u: goto label_1a05a0;
        case 0x1a05a4u: goto label_1a05a4;
        case 0x1a05a8u: goto label_1a05a8;
        case 0x1a05acu: goto label_1a05ac;
        case 0x1a05b0u: goto label_1a05b0;
        case 0x1a05b4u: goto label_1a05b4;
        case 0x1a05b8u: goto label_1a05b8;
        case 0x1a05bcu: goto label_1a05bc;
        case 0x1a05c0u: goto label_1a05c0;
        case 0x1a05c4u: goto label_1a05c4;
        case 0x1a05c8u: goto label_1a05c8;
        case 0x1a05ccu: goto label_1a05cc;
        case 0x1a05d0u: goto label_1a05d0;
        case 0x1a05d4u: goto label_1a05d4;
        case 0x1a05d8u: goto label_1a05d8;
        case 0x1a05dcu: goto label_1a05dc;
        case 0x1a05e0u: goto label_1a05e0;
        case 0x1a05e4u: goto label_1a05e4;
        case 0x1a05e8u: goto label_1a05e8;
        case 0x1a05ecu: goto label_1a05ec;
        case 0x1a05f0u: goto label_1a05f0;
        case 0x1a05f4u: goto label_1a05f4;
        case 0x1a05f8u: goto label_1a05f8;
        case 0x1a05fcu: goto label_1a05fc;
        case 0x1a0600u: goto label_1a0600;
        case 0x1a0604u: goto label_1a0604;
        case 0x1a0608u: goto label_1a0608;
        case 0x1a060cu: goto label_1a060c;
        case 0x1a0610u: goto label_1a0610;
        case 0x1a0614u: goto label_1a0614;
        case 0x1a0618u: goto label_1a0618;
        case 0x1a061cu: goto label_1a061c;
        case 0x1a0620u: goto label_1a0620;
        case 0x1a0624u: goto label_1a0624;
        case 0x1a0628u: goto label_1a0628;
        case 0x1a062cu: goto label_1a062c;
        case 0x1a0630u: goto label_1a0630;
        case 0x1a0634u: goto label_1a0634;
        case 0x1a0638u: goto label_1a0638;
        case 0x1a063cu: goto label_1a063c;
        case 0x1a0640u: goto label_1a0640;
        case 0x1a0644u: goto label_1a0644;
        case 0x1a0648u: goto label_1a0648;
        case 0x1a064cu: goto label_1a064c;
        case 0x1a0650u: goto label_1a0650;
        case 0x1a0654u: goto label_1a0654;
        case 0x1a0658u: goto label_1a0658;
        case 0x1a065cu: goto label_1a065c;
        case 0x1a0660u: goto label_1a0660;
        case 0x1a0664u: goto label_1a0664;
        case 0x1a0668u: goto label_1a0668;
        case 0x1a066cu: goto label_1a066c;
        case 0x1a0670u: goto label_1a0670;
        case 0x1a0674u: goto label_1a0674;
        case 0x1a0678u: goto label_1a0678;
        case 0x1a067cu: goto label_1a067c;
        case 0x1a0680u: goto label_1a0680;
        case 0x1a0684u: goto label_1a0684;
        case 0x1a0688u: goto label_1a0688;
        case 0x1a068cu: goto label_1a068c;
        case 0x1a0690u: goto label_1a0690;
        case 0x1a0694u: goto label_1a0694;
        case 0x1a0698u: goto label_1a0698;
        case 0x1a069cu: goto label_1a069c;
        case 0x1a06a0u: goto label_1a06a0;
        case 0x1a06a4u: goto label_1a06a4;
        case 0x1a06a8u: goto label_1a06a8;
        case 0x1a06acu: goto label_1a06ac;
        case 0x1a06b0u: goto label_1a06b0;
        case 0x1a06b4u: goto label_1a06b4;
        case 0x1a06b8u: goto label_1a06b8;
        case 0x1a06bcu: goto label_1a06bc;
        case 0x1a06c0u: goto label_1a06c0;
        case 0x1a06c4u: goto label_1a06c4;
        case 0x1a06c8u: goto label_1a06c8;
        case 0x1a06ccu: goto label_1a06cc;
        case 0x1a06d0u: goto label_1a06d0;
        case 0x1a06d4u: goto label_1a06d4;
        case 0x1a06d8u: goto label_1a06d8;
        case 0x1a06dcu: goto label_1a06dc;
        case 0x1a06e0u: goto label_1a06e0;
        case 0x1a06e4u: goto label_1a06e4;
        case 0x1a06e8u: goto label_1a06e8;
        case 0x1a06ecu: goto label_1a06ec;
        case 0x1a06f0u: goto label_1a06f0;
        case 0x1a06f4u: goto label_1a06f4;
        case 0x1a06f8u: goto label_1a06f8;
        case 0x1a06fcu: goto label_1a06fc;
        case 0x1a0700u: goto label_1a0700;
        case 0x1a0704u: goto label_1a0704;
        case 0x1a0708u: goto label_1a0708;
        case 0x1a070cu: goto label_1a070c;
        case 0x1a0710u: goto label_1a0710;
        case 0x1a0714u: goto label_1a0714;
        case 0x1a0718u: goto label_1a0718;
        case 0x1a071cu: goto label_1a071c;
        case 0x1a0720u: goto label_1a0720;
        case 0x1a0724u: goto label_1a0724;
        case 0x1a0728u: goto label_1a0728;
        case 0x1a072cu: goto label_1a072c;
        case 0x1a0730u: goto label_1a0730;
        case 0x1a0734u: goto label_1a0734;
        case 0x1a0738u: goto label_1a0738;
        case 0x1a073cu: goto label_1a073c;
        case 0x1a0740u: goto label_1a0740;
        case 0x1a0744u: goto label_1a0744;
        case 0x1a0748u: goto label_1a0748;
        case 0x1a074cu: goto label_1a074c;
        case 0x1a0750u: goto label_1a0750;
        case 0x1a0754u: goto label_1a0754;
        case 0x1a0758u: goto label_1a0758;
        case 0x1a075cu: goto label_1a075c;
        case 0x1a0760u: goto label_1a0760;
        case 0x1a0764u: goto label_1a0764;
        case 0x1a0768u: goto label_1a0768;
        case 0x1a076cu: goto label_1a076c;
        case 0x1a0770u: goto label_1a0770;
        case 0x1a0774u: goto label_1a0774;
        case 0x1a0778u: goto label_1a0778;
        case 0x1a077cu: goto label_1a077c;
        case 0x1a0780u: goto label_1a0780;
        case 0x1a0784u: goto label_1a0784;
        case 0x1a0788u: goto label_1a0788;
        case 0x1a078cu: goto label_1a078c;
        case 0x1a0790u: goto label_1a0790;
        case 0x1a0794u: goto label_1a0794;
        case 0x1a0798u: goto label_1a0798;
        case 0x1a079cu: goto label_1a079c;
        case 0x1a07a0u: goto label_1a07a0;
        case 0x1a07a4u: goto label_1a07a4;
        case 0x1a07a8u: goto label_1a07a8;
        case 0x1a07acu: goto label_1a07ac;
        case 0x1a07b0u: goto label_1a07b0;
        case 0x1a07b4u: goto label_1a07b4;
        case 0x1a07b8u: goto label_1a07b8;
        case 0x1a07bcu: goto label_1a07bc;
        case 0x1a07c0u: goto label_1a07c0;
        case 0x1a07c4u: goto label_1a07c4;
        case 0x1a07c8u: goto label_1a07c8;
        case 0x1a07ccu: goto label_1a07cc;
        case 0x1a07d0u: goto label_1a07d0;
        case 0x1a07d4u: goto label_1a07d4;
        case 0x1a07d8u: goto label_1a07d8;
        case 0x1a07dcu: goto label_1a07dc;
        case 0x1a07e0u: goto label_1a07e0;
        case 0x1a07e4u: goto label_1a07e4;
        case 0x1a07e8u: goto label_1a07e8;
        case 0x1a07ecu: goto label_1a07ec;
        case 0x1a07f0u: goto label_1a07f0;
        case 0x1a07f4u: goto label_1a07f4;
        case 0x1a07f8u: goto label_1a07f8;
        case 0x1a07fcu: goto label_1a07fc;
        case 0x1a0800u: goto label_1a0800;
        case 0x1a0804u: goto label_1a0804;
        case 0x1a0808u: goto label_1a0808;
        case 0x1a080cu: goto label_1a080c;
        case 0x1a0810u: goto label_1a0810;
        case 0x1a0814u: goto label_1a0814;
        case 0x1a0818u: goto label_1a0818;
        case 0x1a081cu: goto label_1a081c;
        case 0x1a0820u: goto label_1a0820;
        case 0x1a0824u: goto label_1a0824;
        case 0x1a0828u: goto label_1a0828;
        case 0x1a082cu: goto label_1a082c;
        case 0x1a0830u: goto label_1a0830;
        case 0x1a0834u: goto label_1a0834;
        case 0x1a0838u: goto label_1a0838;
        case 0x1a083cu: goto label_1a083c;
        case 0x1a0840u: goto label_1a0840;
        case 0x1a0844u: goto label_1a0844;
        case 0x1a0848u: goto label_1a0848;
        case 0x1a084cu: goto label_1a084c;
        case 0x1a0850u: goto label_1a0850;
        default: break;
    }

    ctx->pc = 0x1a0460u;

label_1a0460:
    // 0x1a0460: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a0460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1a0464:
    // 0x1a0464: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a0464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1a0468:
    // 0x1a0468: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a0468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1a046c:
    // 0x1a046c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a046cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1a0470:
    // 0x1a0470: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a0470u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a0474:
    // 0x1a0474: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a0474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1a0478:
    // 0x1a0478: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a0478u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a047c:
    // 0x1a047c: 0x8f85838c  lw          $a1, -0x7C74($gp)
    ctx->pc = 0x1a047cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935436)));
label_1a0480:
    // 0x1a0480: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a0480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a0484:
    // 0x1a0484: 0x8f828318  lw          $v0, -0x7CE8($gp)
    ctx->pc = 0x1a0484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935320)));
label_1a0488:
    // 0x1a0488: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x1a0488u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_1a048c:
    // 0x1a048c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1a048cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1a0490:
    // 0x1a0490: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1a0490u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1a0494:
    // 0x1a0494: 0xc063dd4  jal         func_18F750
label_1a0498:
    if (ctx->pc == 0x1A0498u) {
        ctx->pc = 0x1A0498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0494u;
        // 0x1a0498: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A049Cu;
        goto label_1a049c;
    }
    ctx->pc = 0x1A0494u;
    SET_GPR_U32(ctx, 31, 0x1A049Cu);
    ctx->pc = 0x1A0498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0494u;
    // 0x1a0498: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F750u, 0x1A0494u, 0x1A049Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A049Cu;
label_1a049c:
    // 0x1a049c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1a049cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_1a04a0:
    // 0x1a04a0: 0x34640002  ori         $a0, $v1, 0x2
    ctx->pc = 0x1a04a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_1a04a4:
    // 0x1a04a4: 0x104400e5  beq         $v0, $a0, . + 4 + (0xE5 << 2)
label_1a04a8:
    if (ctx->pc == 0x1A04A8u) {
        ctx->pc = 0x1A04ACu;
        goto label_1a04ac;
    }
    ctx->pc = 0x1A04A4u;
    {
        const bool branch_taken_0x1a04a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x1a04a4) {
            ctx->pc = 0x1A083Cu;
            goto label_1a083c;
        }
    }
    ctx->pc = 0x1A04ACu;
label_1a04ac:
    // 0x1a04ac: 0x104300e3  beq         $v0, $v1, . + 4 + (0xE3 << 2)
label_1a04b0:
    if (ctx->pc == 0x1A04B0u) {
        ctx->pc = 0x1A04B4u;
        goto label_1a04b4;
    }
    ctx->pc = 0x1A04ACu;
    {
        const bool branch_taken_0x1a04ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a04ac) {
            ctx->pc = 0x1A083Cu;
            goto label_1a083c;
        }
    }
    ctx->pc = 0x1A04B4u;
label_1a04b4:
    // 0x1a04b4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1a04b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a04b8:
    // 0x1a04b8: 0x104300d9  beq         $v0, $v1, . + 4 + (0xD9 << 2)
label_1a04bc:
    if (ctx->pc == 0x1A04BCu) {
        ctx->pc = 0x1A04C0u;
        goto label_1a04c0;
    }
    ctx->pc = 0x1A04B8u;
    {
        const bool branch_taken_0x1a04b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a04b8) {
            ctx->pc = 0x1A0820u;
            goto label_1a0820;
        }
    }
    ctx->pc = 0x1A04C0u;
label_1a04c0:
    // 0x1a04c0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1a04c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a04c4:
    // 0x1a04c4: 0x104300a5  beq         $v0, $v1, . + 4 + (0xA5 << 2)
label_1a04c8:
    if (ctx->pc == 0x1A04C8u) {
        ctx->pc = 0x1A04CCu;
        goto label_1a04cc;
    }
    ctx->pc = 0x1A04C4u;
    {
        const bool branch_taken_0x1a04c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a04c4) {
            ctx->pc = 0x1A075Cu;
            goto label_1a075c;
        }
    }
    ctx->pc = 0x1A04CCu;
label_1a04cc:
    // 0x1a04cc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a04ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a04d0:
    // 0x1a04d0: 0x10430064  beq         $v0, $v1, . + 4 + (0x64 << 2)
label_1a04d4:
    if (ctx->pc == 0x1A04D4u) {
        ctx->pc = 0x1A04D8u;
        goto label_1a04d8;
    }
    ctx->pc = 0x1A04D0u;
    {
        const bool branch_taken_0x1a04d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a04d0) {
            ctx->pc = 0x1A0664u;
            goto label_1a0664;
        }
    }
    ctx->pc = 0x1A04D8u;
label_1a04d8:
    // 0x1a04d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a04d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a04dc:
    // 0x1a04dc: 0x10430034  beq         $v0, $v1, . + 4 + (0x34 << 2)
label_1a04e0:
    if (ctx->pc == 0x1A04E0u) {
        ctx->pc = 0x1A04E4u;
        goto label_1a04e4;
    }
    ctx->pc = 0x1A04DCu;
    {
        const bool branch_taken_0x1a04dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a04dc) {
            ctx->pc = 0x1A05B0u;
            goto label_1a05b0;
        }
    }
    ctx->pc = 0x1A04E4u;
label_1a04e4:
    // 0x1a04e4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1a04e8:
    if (ctx->pc == 0x1A04E8u) {
        ctx->pc = 0x1A04ECu;
        goto label_1a04ec;
    }
    ctx->pc = 0x1A04E4u;
    {
        const bool branch_taken_0x1a04e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a04e4) {
            ctx->pc = 0x1A04F4u;
            goto label_1a04f4;
        }
    }
    ctx->pc = 0x1A04ECu;
label_1a04ec:
    // 0x1a04ec: 0x100000d4  b           . + 4 + (0xD4 << 2)
label_1a04f0:
    if (ctx->pc == 0x1A04F0u) {
        ctx->pc = 0x1A04F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A04ECu;
        // 0x1a04f0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A04F4u;
        goto label_1a04f4;
    }
    ctx->pc = 0x1A04ECu;
    {
        const bool branch_taken_0x1a04ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A04F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A04ECu;
        // 0x1a04f0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a04ec) {
            ctx->pc = 0x1A0840u;
            goto label_1a0840;
        }
    }
    ctx->pc = 0x1A04F4u;
label_1a04f4:
    // 0x1a04f4: 0x8e430664  lw          $v1, 0x664($s2)
    ctx->pc = 0x1a04f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1636)));
label_1a04f8:
    // 0x1a04f8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1a04f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1a04fc:
    // 0x1a04fc: 0x24700040  addiu       $s0, $v1, 0x40
    ctx->pc = 0x1a04fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_1a0500:
    // 0x1a0500: 0x8c630040  lw          $v1, 0x40($v1)
    ctx->pc = 0x1a0500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_1a0504:
    // 0x1a0504: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
label_1a0508:
    if (ctx->pc == 0x1A0508u) {
        ctx->pc = 0x1A050Cu;
        goto label_1a050c;
    }
    ctx->pc = 0x1A0504u;
    {
        const bool branch_taken_0x1a0504 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a0504) {
            ctx->pc = 0x1A0540u;
            goto label_1a0540;
        }
    }
    ctx->pc = 0x1A050Cu;
label_1a050c:
    // 0x1a050c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a050cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a0510:
    // 0x1a0510: 0xc064918  jal         func_192460
label_1a0514:
    if (ctx->pc == 0x1A0514u) {
        ctx->pc = 0x1A0514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0510u;
        // 0x1a0514: 0x26050004  addiu       $a1, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0518u;
        goto label_1a0518;
    }
    ctx->pc = 0x1A0510u;
    SET_GPR_U32(ctx, 31, 0x1A0518u);
    ctx->pc = 0x1A0514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0510u;
    // 0x1a0514: 0x26050004  addiu       $a1, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192460u, 0x1A0510u, 0x1A0518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0518u;
label_1a0518:
    // 0x1a0518: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1a051c:
    if (ctx->pc == 0x1A051Cu) {
        ctx->pc = 0x1A051Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0518u;
        // 0x1a051c: 0x26050004  addiu       $a1, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0520u;
        goto label_1a0520;
    }
    ctx->pc = 0x1A0518u;
    {
        const bool branch_taken_0x1a0518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A051Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0518u;
        // 0x1a051c: 0x26050004  addiu       $a1, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0518) {
            ctx->pc = 0x1A0538u;
            goto label_1a0538;
        }
    }
    ctx->pc = 0x1A0520u;
label_1a0520:
    // 0x1a0520: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a0520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a0524:
    // 0x1a0524: 0xc063e08  jal         func_18F820
label_1a0528:
    if (ctx->pc == 0x1A0528u) {
        ctx->pc = 0x1A0528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0524u;
        // 0x1a0528: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A052Cu;
        goto label_1a052c;
    }
    ctx->pc = 0x1A0524u;
    SET_GPR_U32(ctx, 31, 0x1A052Cu);
    ctx->pc = 0x1A0528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0524u;
    // 0x1a0528: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1A0524u, 0x1A052Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A052Cu;
label_1a052c:
    // 0x1a052c: 0x100000c3  b           . + 4 + (0xC3 << 2)
label_1a0530:
    if (ctx->pc == 0x1A0530u) {
        ctx->pc = 0x1A0534u;
        goto label_1a0534;
    }
    ctx->pc = 0x1A052Cu;
    {
        const bool branch_taken_0x1a052c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a052c) {
            ctx->pc = 0x1A083Cu;
            goto label_1a083c;
        }
    }
    ctx->pc = 0x1A0534u;
label_1a0534:
    // 0x1a0534: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x1a0534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1a0538:
    // 0x1a0538: 0xc063dc0  jal         func_18F700
label_1a053c:
    if (ctx->pc == 0x1A053Cu) {
        ctx->pc = 0x1A053Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0538u;
        // 0x1a053c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0540u;
        goto label_1a0540;
    }
    ctx->pc = 0x1A0538u;
    SET_GPR_U32(ctx, 31, 0x1A0540u);
    ctx->pc = 0x1A053Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0538u;
    // 0x1a053c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F700u, 0x1A0538u, 0x1A0540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0540u;
label_1a0540:
    // 0x1a0540: 0x8e420664  lw          $v0, 0x664($s2)
    ctx->pc = 0x1a0540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1636)));
label_1a0544:
    // 0x1a0544: 0x26500664  addiu       $s0, $s2, 0x664
    ctx->pc = 0x1a0544u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1636));
label_1a0548:
    // 0x1a0548: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a0548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a054c:
    // 0x1a054c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1a054cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a0550:
    // 0x1a0550: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x1a0550u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_1a0554:
    // 0x1a0554: 0x8c46002c  lw          $a2, 0x2C($v0)
    ctx->pc = 0x1a0554u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_1a0558:
    // 0x1a0558: 0xc064f7c  jal         func_193DF0
label_1a055c:
    if (ctx->pc == 0x1A055Cu) {
        ctx->pc = 0x1A055Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0558u;
        // 0x1a055c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0560u;
        goto label_1a0560;
    }
    ctx->pc = 0x1A0558u;
    SET_GPR_U32(ctx, 31, 0x1A0560u);
    ctx->pc = 0x1A055Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0558u;
    // 0x1a055c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193DF0u, 0x1A0558u, 0x1A0560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0560u;
label_1a0560:
    // 0x1a0560: 0xc04bf44  jal         func_12FD10
label_1a0564:
    if (ctx->pc == 0x1A0564u) {
        ctx->pc = 0x1A0564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0560u;
        // 0x1a0564: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0568u;
        goto label_1a0568;
    }
    ctx->pc = 0x1A0560u;
    SET_GPR_U32(ctx, 31, 0x1A0568u);
    ctx->pc = 0x1A0564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0560u;
    // 0x1a0564: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FD10u, 0x1A0560u, 0x1A0568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0568u;
label_1a0568:
    // 0x1a0568: 0xae420670  sw          $v0, 0x670($s2)
    ctx->pc = 0x1a0568u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1648), GPR_U32(ctx, 2));
label_1a056c:
    // 0x1a056c: 0x8e440670  lw          $a0, 0x670($s2)
    ctx->pc = 0x1a056cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1648)));
label_1a0570:
    // 0x1a0570: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a0570u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a0574:
    // 0x1a0574: 0x8f3900bc  lw          $t9, 0xBC($t9)
    ctx->pc = 0x1a0574u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 188)));
label_1a0578:
    // 0x1a0578: 0x320f809  jalr        $t9
label_1a057c:
    if (ctx->pc == 0x1A057Cu) {
        ctx->pc = 0x1A057Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0578u;
        // 0x1a057c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0580u;
        goto label_1a0580;
    }
    ctx->pc = 0x1A0578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A0580u);
        ctx->pc = 0x1A057Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0578u;
        // 0x1a057c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0578u, 0x1A0580u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A0580u;
label_1a0580:
    // 0x1a0580: 0x8e440670  lw          $a0, 0x670($s2)
    ctx->pc = 0x1a0580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1648)));
label_1a0584:
    // 0x1a0584: 0x8e420664  lw          $v0, 0x664($s2)
    ctx->pc = 0x1a0584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1636)));
label_1a0588:
    // 0x1a0588: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a0588u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a058c:
    // 0x1a058c: 0x8c450034  lw          $a1, 0x34($v0)
    ctx->pc = 0x1a058cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1a0590:
    // 0x1a0590: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1a0590u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1a0594:
    // 0x1a0594: 0x320f809  jalr        $t9
label_1a0598:
    if (ctx->pc == 0x1A0598u) {
        ctx->pc = 0x1A0598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0594u;
        // 0x1a0598: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A059Cu;
        goto label_1a059c;
    }
    ctx->pc = 0x1A0594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A059Cu);
        ctx->pc = 0x1A0598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0594u;
        // 0x1a0598: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0594u, 0x1A059Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A059Cu;
label_1a059c:
    // 0x1a059c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a059cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a05a0:
    // 0x1a05a0: 0xc063e14  jal         func_18F850
label_1a05a4:
    if (ctx->pc == 0x1A05A4u) {
        ctx->pc = 0x1A05A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A05A0u;
        // 0x1a05a4: 0xae400328  sw          $zero, 0x328($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 808), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A05A8u;
        goto label_1a05a8;
    }
    ctx->pc = 0x1A05A0u;
    SET_GPR_U32(ctx, 31, 0x1A05A8u);
    ctx->pc = 0x1A05A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A05A0u;
    // 0x1a05a4: 0xae400328  sw          $zero, 0x328($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 808), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1A05A0u, 0x1A05A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A05A8u;
label_1a05a8:
    // 0x1a05a8: 0x100000a4  b           . + 4 + (0xA4 << 2)
label_1a05ac:
    if (ctx->pc == 0x1A05ACu) {
        ctx->pc = 0x1A05B0u;
        goto label_1a05b0;
    }
    ctx->pc = 0x1A05A8u;
    {
        const bool branch_taken_0x1a05a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a05a8) {
            ctx->pc = 0x1A083Cu;
            goto label_1a083c;
        }
    }
    ctx->pc = 0x1A05B0u;
label_1a05b0:
    // 0x1a05b0: 0x8e440670  lw          $a0, 0x670($s2)
    ctx->pc = 0x1a05b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1648)));
label_1a05b4:
    // 0x1a05b4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a05b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a05b8:
    // 0x1a05b8: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1a05b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1a05bc:
    // 0x1a05bc: 0x320f809  jalr        $t9
label_1a05c0:
    if (ctx->pc == 0x1A05C0u) {
        ctx->pc = 0x1A05C4u;
        goto label_1a05c4;
    }
    ctx->pc = 0x1A05BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A05C4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A05BCu, 0x1A05C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A05C4u;
label_1a05c4:
    // 0x1a05c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a05c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a05c8:
    // 0x1a05c8: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_1a05cc:
    if (ctx->pc == 0x1A05CCu) {
        ctx->pc = 0x1A05D0u;
        goto label_1a05d0;
    }
    ctx->pc = 0x1A05C8u;
    {
        const bool branch_taken_0x1a05c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a05c8) {
            ctx->pc = 0x1A05E0u;
            goto label_1a05e0;
        }
    }
    ctx->pc = 0x1A05D0u;
label_1a05d0:
    // 0x1a05d0: 0xc063e14  jal         func_18F850
label_1a05d4:
    if (ctx->pc == 0x1A05D4u) {
        ctx->pc = 0x1A05D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A05D0u;
        // 0x1a05d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A05D8u;
        goto label_1a05d8;
    }
    ctx->pc = 0x1A05D0u;
    SET_GPR_U32(ctx, 31, 0x1A05D8u);
    ctx->pc = 0x1A05D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A05D0u;
    // 0x1a05d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1A05D0u, 0x1A05D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A05D8u;
label_1a05d8:
    // 0x1a05d8: 0x10000098  b           . + 4 + (0x98 << 2)
label_1a05dc:
    if (ctx->pc == 0x1A05DCu) {
        ctx->pc = 0x1A05E0u;
        goto label_1a05e0;
    }
    ctx->pc = 0x1A05D8u;
    {
        const bool branch_taken_0x1a05d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a05d8) {
            ctx->pc = 0x1A083Cu;
            goto label_1a083c;
        }
    }
    ctx->pc = 0x1A05E0u;
label_1a05e0:
    // 0x1a05e0: 0x8e450664  lw          $a1, 0x664($s2)
    ctx->pc = 0x1a05e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1636)));
label_1a05e4:
    // 0x1a05e4: 0x8ca4003c  lw          $a0, 0x3C($a1)
    ctx->pc = 0x1a05e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
label_1a05e8:
    // 0x1a05e8: 0x10800094  beqz        $a0, . + 4 + (0x94 << 2)
label_1a05ec:
    if (ctx->pc == 0x1A05ECu) {
        ctx->pc = 0x1A05F0u;
        goto label_1a05f0;
    }
    ctx->pc = 0x1A05E8u;
    {
        const bool branch_taken_0x1a05e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a05e8) {
            ctx->pc = 0x1A083Cu;
            goto label_1a083c;
        }
    }
    ctx->pc = 0x1A05F0u;
label_1a05f0:
    // 0x1a05f0: 0x93838488  lbu         $v1, -0x7B78($gp)
    ctx->pc = 0x1a05f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935688)));
label_1a05f4:
    // 0x1a05f4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_1a05f8:
    if (ctx->pc == 0x1A05F8u) {
        ctx->pc = 0x1A05FCu;
        goto label_1a05fc;
    }
    ctx->pc = 0x1A05F4u;
    {
        const bool branch_taken_0x1a05f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a05f4) {
            ctx->pc = 0x1A0610u;
            goto label_1a0610;
        }
    }
    ctx->pc = 0x1A05FCu;
label_1a05fc:
    // 0x1a05fc: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x1a05fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
label_1a0600:
    // 0x1a0600: 0x24632eb0  addiu       $v1, $v1, 0x2EB0
    ctx->pc = 0x1a0600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11952));
label_1a0604:
    // 0x1a0604: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a0604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1a0608:
    // 0x1a0608: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x1a0608u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1a060c:
    // 0x1a060c: 0x0  nop
    ctx->pc = 0x1a060cu;
    // NOP
label_1a0610:
    // 0x1a0610: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
label_1a0614:
    if (ctx->pc == 0x1A0614u) {
        ctx->pc = 0x1A0614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0610u;
        // 0x1a0614: 0x41840  sll         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0618u;
        goto label_1a0618;
    }
    ctx->pc = 0x1A0610u;
    {
        const bool branch_taken_0x1a0610 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1A0614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0610u;
        // 0x1a0614: 0x41840  sll         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0610) {
            ctx->pc = 0x1A0624u;
            goto label_1a0624;
        }
    }
    ctx->pc = 0x1A0618u;
label_1a0618:
    // 0x1a0618: 0x1000000a  b           . + 4 + (0xA << 2)
label_1a061c:
    if (ctx->pc == 0x1A061Cu) {
        ctx->pc = 0x1A061Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0618u;
        // 0x1a061c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0620u;
        goto label_1a0620;
    }
    ctx->pc = 0x1A0618u;
    {
        const bool branch_taken_0x1a0618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A061Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0618u;
        // 0x1a061c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0618) {
            ctx->pc = 0x1A0644u;
            goto label_1a0644;
        }
    }
    ctx->pc = 0x1A0620u;
label_1a0620:
    // 0x1a0620: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1a0620u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1a0624:
    // 0x1a0624: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a0624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1a0628:
    // 0x1a0628: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a0628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a062c:
    // 0x1a062c: 0x84630004  lh          $v1, 0x4($v1)
    ctx->pc = 0x1a062cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_1a0630:
    // 0x1a0630: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
label_1a0634:
    if (ctx->pc == 0x1A0634u) {
        ctx->pc = 0x1A0638u;
        goto label_1a0638;
    }
    ctx->pc = 0x1A0630u;
    {
        const bool branch_taken_0x1a0630 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1a0630) {
            ctx->pc = 0x1A0640u;
            goto label_1a0640;
        }
    }
    ctx->pc = 0x1A0638u;
label_1a0638:
    // 0x1a0638: 0x10000002  b           . + 4 + (0x2 << 2)
label_1a063c:
    if (ctx->pc == 0x1A063Cu) {
        ctx->pc = 0x1A0640u;
        goto label_1a0640;
    }
    ctx->pc = 0x1A0638u;
    {
        const bool branch_taken_0x1a0638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0638) {
            ctx->pc = 0x1A0644u;
            goto label_1a0644;
        }
    }
    ctx->pc = 0x1A0640u;
label_1a0640:
    // 0x1a0640: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a0640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a0644:
    // 0x1a0644: 0x1080007d  beqz        $a0, . + 4 + (0x7D << 2)
label_1a0648:
    if (ctx->pc == 0x1A0648u) {
        ctx->pc = 0x1A064Cu;
        goto label_1a064c;
    }
    ctx->pc = 0x1A0644u;
    {
        const bool branch_taken_0x1a0644 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0644) {
            ctx->pc = 0x1A083Cu;
            goto label_1a083c;
        }
    }
    ctx->pc = 0x1A064Cu;
label_1a064c:
    // 0x1a064c: 0x8ca20030  lw          $v0, 0x30($a1)
    ctx->pc = 0x1a064cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_1a0650:
    // 0x1a0650: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a0650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a0654:
    // 0x1a0654: 0xc063e14  jal         func_18F850
label_1a0658:
    if (ctx->pc == 0x1A0658u) {
        ctx->pc = 0x1A0658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0654u;
        // 0x1a0658: 0xae420328  sw          $v0, 0x328($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 808), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A065Cu;
        goto label_1a065c;
    }
    ctx->pc = 0x1A0654u;
    SET_GPR_U32(ctx, 31, 0x1A065Cu);
    ctx->pc = 0x1A0658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0654u;
    // 0x1a0658: 0xae420328  sw          $v0, 0x328($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 808), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1A0654u, 0x1A065Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A065Cu;
label_1a065c:
    // 0x1a065c: 0x10000077  b           . + 4 + (0x77 << 2)
label_1a0660:
    if (ctx->pc == 0x1A0660u) {
        ctx->pc = 0x1A0664u;
        goto label_1a0664;
    }
    ctx->pc = 0x1A065Cu;
    {
        const bool branch_taken_0x1a065c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a065c) {
            ctx->pc = 0x1A083Cu;
            goto label_1a083c;
        }
    }
    ctx->pc = 0x1A0664u;
label_1a0664:
    // 0x1a0664: 0x8e450664  lw          $a1, 0x664($s2)
    ctx->pc = 0x1a0664u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1636)));
label_1a0668:
    // 0x1a0668: 0x8ca4003c  lw          $a0, 0x3C($a1)
    ctx->pc = 0x1a0668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
label_1a066c:
    // 0x1a066c: 0x1080001a  beqz        $a0, . + 4 + (0x1A << 2)
label_1a0670:
    if (ctx->pc == 0x1A0670u) {
        ctx->pc = 0x1A0674u;
        goto label_1a0674;
    }
    ctx->pc = 0x1A066Cu;
    {
        const bool branch_taken_0x1a066c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a066c) {
            ctx->pc = 0x1A06D8u;
            goto label_1a06d8;
        }
    }
    ctx->pc = 0x1A0674u;
label_1a0674:
    // 0x1a0674: 0x93838488  lbu         $v1, -0x7B78($gp)
    ctx->pc = 0x1a0674u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935688)));
label_1a0678:
    // 0x1a0678: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_1a067c:
    if (ctx->pc == 0x1A067Cu) {
        ctx->pc = 0x1A0680u;
        goto label_1a0680;
    }
    ctx->pc = 0x1A0678u;
    {
        const bool branch_taken_0x1a0678 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0678) {
            ctx->pc = 0x1A0694u;
            goto label_1a0694;
        }
    }
    ctx->pc = 0x1A0680u;
label_1a0680:
    // 0x1a0680: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x1a0680u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
label_1a0684:
    // 0x1a0684: 0x24632eb0  addiu       $v1, $v1, 0x2EB0
    ctx->pc = 0x1a0684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11952));
label_1a0688:
    // 0x1a0688: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a0688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1a068c:
    // 0x1a068c: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x1a068cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1a0690:
    // 0x1a0690: 0x0  nop
    ctx->pc = 0x1a0690u;
    // NOP
label_1a0694:
    // 0x1a0694: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
label_1a0698:
    if (ctx->pc == 0x1A0698u) {
        ctx->pc = 0x1A0698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0694u;
        // 0x1a0698: 0x41840  sll         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A069Cu;
        goto label_1a069c;
    }
    ctx->pc = 0x1A0694u;
    {
        const bool branch_taken_0x1a0694 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1A0698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0694u;
        // 0x1a0698: 0x41840  sll         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0694) {
            ctx->pc = 0x1A06A8u;
            goto label_1a06a8;
        }
    }
    ctx->pc = 0x1A069Cu;
label_1a069c:
    // 0x1a069c: 0x1000000a  b           . + 4 + (0xA << 2)
label_1a06a0:
    if (ctx->pc == 0x1A06A0u) {
        ctx->pc = 0x1A06A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A069Cu;
        // 0x1a06a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A06A4u;
        goto label_1a06a4;
    }
    ctx->pc = 0x1A069Cu;
    {
        const bool branch_taken_0x1a069c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A06A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A069Cu;
        // 0x1a06a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a069c) {
            ctx->pc = 0x1A06C8u;
            goto label_1a06c8;
        }
    }
    ctx->pc = 0x1A06A4u;
label_1a06a4:
    // 0x1a06a4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1a06a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1a06a8:
    // 0x1a06a8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a06a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1a06ac:
    // 0x1a06ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a06acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a06b0:
    // 0x1a06b0: 0x84630004  lh          $v1, 0x4($v1)
    ctx->pc = 0x1a06b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_1a06b4:
    // 0x1a06b4: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
label_1a06b8:
    if (ctx->pc == 0x1A06B8u) {
        ctx->pc = 0x1A06BCu;
        goto label_1a06bc;
    }
    ctx->pc = 0x1A06B4u;
    {
        const bool branch_taken_0x1a06b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1a06b4) {
            ctx->pc = 0x1A06C4u;
            goto label_1a06c4;
        }
    }
    ctx->pc = 0x1A06BCu;
label_1a06bc:
    // 0x1a06bc: 0x10000002  b           . + 4 + (0x2 << 2)
label_1a06c0:
    if (ctx->pc == 0x1A06C0u) {
        ctx->pc = 0x1A06C4u;
        goto label_1a06c4;
    }
    ctx->pc = 0x1A06BCu;
    {
        const bool branch_taken_0x1a06bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a06bc) {
            ctx->pc = 0x1A06C8u;
            goto label_1a06c8;
        }
    }
    ctx->pc = 0x1A06C4u;
label_1a06c4:
    // 0x1a06c4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a06c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a06c8:
    // 0x1a06c8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_1a06cc:
    if (ctx->pc == 0x1A06CCu) {
        ctx->pc = 0x1A06D0u;
        goto label_1a06d0;
    }
    ctx->pc = 0x1A06C8u;
    {
        const bool branch_taken_0x1a06c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a06c8) {
            ctx->pc = 0x1A06D8u;
            goto label_1a06d8;
        }
    }
    ctx->pc = 0x1A06D0u;
label_1a06d0:
    // 0x1a06d0: 0x8ca30030  lw          $v1, 0x30($a1)
    ctx->pc = 0x1a06d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_1a06d4:
    // 0x1a06d4: 0xae430328  sw          $v1, 0x328($s2)
    ctx->pc = 0x1a06d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 808), GPR_U32(ctx, 3));
label_1a06d8:
    // 0x1a06d8: 0x8e430328  lw          $v1, 0x328($s2)
    ctx->pc = 0x1a06d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 808)));
label_1a06dc:
    // 0x1a06dc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a06dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1a06e0:
    // 0x1a06e0: 0xae430328  sw          $v1, 0x328($s2)
    ctx->pc = 0x1a06e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 808), GPR_U32(ctx, 3));
label_1a06e4:
    // 0x1a06e4: 0x8e450664  lw          $a1, 0x664($s2)
    ctx->pc = 0x1a06e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1636)));
label_1a06e8:
    // 0x1a06e8: 0x8e440328  lw          $a0, 0x328($s2)
    ctx->pc = 0x1a06e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 808)));
label_1a06ec:
    // 0x1a06ec: 0x8ca30030  lw          $v1, 0x30($a1)
    ctx->pc = 0x1a06ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_1a06f0:
    // 0x1a06f0: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x1a06f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1a06f4:
    // 0x1a06f4: 0x10200051  beqz        $at, . + 4 + (0x51 << 2)
label_1a06f8:
    if (ctx->pc == 0x1A06F8u) {
        ctx->pc = 0x1A06FCu;
        goto label_1a06fc;
    }
    ctx->pc = 0x1A06F4u;
    {
        const bool branch_taken_0x1a06f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a06f4) {
            ctx->pc = 0x1A083Cu;
            goto label_1a083c;
        }
    }
    ctx->pc = 0x1A06FCu;
label_1a06fc:
    // 0x1a06fc: 0x8ca50038  lw          $a1, 0x38($a1)
    ctx->pc = 0x1a06fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
label_1a0700:
    // 0x1a0700: 0x4a0000f  bltz        $a1, . + 4 + (0xF << 2)
label_1a0704:
    if (ctx->pc == 0x1A0704u) {
        ctx->pc = 0x1A0708u;
        goto label_1a0708;
    }
    ctx->pc = 0x1A0700u;
    {
        const bool branch_taken_0x1a0700 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x1a0700) {
            ctx->pc = 0x1A0740u;
            goto label_1a0740;
        }
    }
    ctx->pc = 0x1A0708u;
label_1a0708:
    // 0x1a0708: 0x8e440670  lw          $a0, 0x670($s2)
    ctx->pc = 0x1a0708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1648)));
label_1a070c:
    // 0x1a070c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a070cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a0710:
    // 0x1a0710: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1a0710u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1a0714:
    // 0x1a0714: 0x320f809  jalr        $t9
label_1a0718:
    if (ctx->pc == 0x1A0718u) {
        ctx->pc = 0x1A0718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0714u;
        // 0x1a0718: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A071Cu;
        goto label_1a071c;
    }
    ctx->pc = 0x1A0714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A071Cu);
        ctx->pc = 0x1A0718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0714u;
        // 0x1a0718: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0714u, 0x1A071Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A071Cu;
label_1a071c:
    // 0x1a071c: 0x8e440670  lw          $a0, 0x670($s2)
    ctx->pc = 0x1a071cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1648)));
label_1a0720:
    // 0x1a0720: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a0720u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a0724:
    // 0x1a0724: 0x8f3900bc  lw          $t9, 0xBC($t9)
    ctx->pc = 0x1a0724u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 188)));
label_1a0728:
    // 0x1a0728: 0x320f809  jalr        $t9
label_1a072c:
    if (ctx->pc == 0x1A072Cu) {
        ctx->pc = 0x1A072Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0728u;
        // 0x1a072c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0730u;
        goto label_1a0730;
    }
    ctx->pc = 0x1A0728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A0730u);
        ctx->pc = 0x1A072Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0728u;
        // 0x1a072c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0728u, 0x1A0730u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A0730u;
label_1a0730:
    // 0x1a0730: 0xc063e14  jal         func_18F850
label_1a0734:
    if (ctx->pc == 0x1A0734u) {
        ctx->pc = 0x1A0734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0730u;
        // 0x1a0734: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0738u;
        goto label_1a0738;
    }
    ctx->pc = 0x1A0730u;
    SET_GPR_U32(ctx, 31, 0x1A0738u);
    ctx->pc = 0x1A0734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0730u;
    // 0x1a0734: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1A0730u, 0x1A0738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0738u;
label_1a0738:
    // 0x1a0738: 0x10000040  b           . + 4 + (0x40 << 2)
label_1a073c:
    if (ctx->pc == 0x1A073Cu) {
        ctx->pc = 0x1A0740u;
        goto label_1a0740;
    }
    ctx->pc = 0x1A0738u;
    {
        const bool branch_taken_0x1a0738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0738) {
            ctx->pc = 0x1A083Cu;
            goto label_1a083c;
        }
    }
    ctx->pc = 0x1A0740u;
label_1a0740:
    // 0x1a0740: 0xc04be08  jal         func_12F820
label_1a0744:
    if (ctx->pc == 0x1A0744u) {
        ctx->pc = 0x1A0744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0740u;
        // 0x1a0744: 0x8e440670  lw          $a0, 0x670($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1648)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0748u;
        goto label_1a0748;
    }
    ctx->pc = 0x1A0740u;
    SET_GPR_U32(ctx, 31, 0x1A0748u);
    ctx->pc = 0x1A0744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0740u;
    // 0x1a0744: 0x8e440670  lw          $a0, 0x670($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1648)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F820u, 0x1A0740u, 0x1A0748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0748u;
label_1a0748:
    // 0x1a0748: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a0748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a074c:
    // 0x1a074c: 0xc063e08  jal         func_18F820
label_1a0750:
    if (ctx->pc == 0x1A0750u) {
        ctx->pc = 0x1A0750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A074Cu;
        // 0x1a0750: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0754u;
        goto label_1a0754;
    }
    ctx->pc = 0x1A074Cu;
    SET_GPR_U32(ctx, 31, 0x1A0754u);
    ctx->pc = 0x1A0750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A074Cu;
    // 0x1a0750: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1A074Cu, 0x1A0754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0754u;
label_1a0754:
    // 0x1a0754: 0x10000039  b           . + 4 + (0x39 << 2)
label_1a0758:
    if (ctx->pc == 0x1A0758u) {
        ctx->pc = 0x1A075Cu;
        goto label_1a075c;
    }
    ctx->pc = 0x1A0754u;
    {
        const bool branch_taken_0x1a0754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0754) {
            ctx->pc = 0x1A083Cu;
            goto label_1a083c;
        }
    }
    ctx->pc = 0x1A075Cu;
label_1a075c:
    // 0x1a075c: 0x8e440670  lw          $a0, 0x670($s2)
    ctx->pc = 0x1a075cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1648)));
label_1a0760:
    // 0x1a0760: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a0760u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a0764:
    // 0x1a0764: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1a0764u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1a0768:
    // 0x1a0768: 0x320f809  jalr        $t9
label_1a076c:
    if (ctx->pc == 0x1A076Cu) {
        ctx->pc = 0x1A0770u;
        goto label_1a0770;
    }
    ctx->pc = 0x1A0768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A0770u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0768u, 0x1A0770u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A0770u;
label_1a0770:
    // 0x1a0770: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a0770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a0774:
    // 0x1a0774: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
label_1a0778:
    if (ctx->pc == 0x1A0778u) {
        ctx->pc = 0x1A077Cu;
        goto label_1a077c;
    }
    ctx->pc = 0x1A0774u;
    {
        const bool branch_taken_0x1a0774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a0774) {
            ctx->pc = 0x1A0798u;
            goto label_1a0798;
        }
    }
    ctx->pc = 0x1A077Cu;
label_1a077c:
    // 0x1a077c: 0xc04be08  jal         func_12F820
label_1a0780:
    if (ctx->pc == 0x1A0780u) {
        ctx->pc = 0x1A0780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A077Cu;
        // 0x1a0780: 0x8e440670  lw          $a0, 0x670($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1648)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0784u;
        goto label_1a0784;
    }
    ctx->pc = 0x1A077Cu;
    SET_GPR_U32(ctx, 31, 0x1A0784u);
    ctx->pc = 0x1A0780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A077Cu;
    // 0x1a0780: 0x8e440670  lw          $a0, 0x670($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1648)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F820u, 0x1A077Cu, 0x1A0784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0784u;
label_1a0784:
    // 0x1a0784: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a0784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a0788:
    // 0x1a0788: 0xc063e08  jal         func_18F820
label_1a078c:
    if (ctx->pc == 0x1A078Cu) {
        ctx->pc = 0x1A078Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0788u;
        // 0x1a078c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0790u;
        goto label_1a0790;
    }
    ctx->pc = 0x1A0788u;
    SET_GPR_U32(ctx, 31, 0x1A0790u);
    ctx->pc = 0x1A078Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0788u;
    // 0x1a078c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1A0788u, 0x1A0790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0790u;
label_1a0790:
    // 0x1a0790: 0x1000002a  b           . + 4 + (0x2A << 2)
label_1a0794:
    if (ctx->pc == 0x1A0794u) {
        ctx->pc = 0x1A0798u;
        goto label_1a0798;
    }
    ctx->pc = 0x1A0790u;
    {
        const bool branch_taken_0x1a0790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0790) {
            ctx->pc = 0x1A083Cu;
            goto label_1a083c;
        }
    }
    ctx->pc = 0x1A0798u;
label_1a0798:
    // 0x1a0798: 0x8e430664  lw          $v1, 0x664($s2)
    ctx->pc = 0x1a0798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1636)));
label_1a079c:
    // 0x1a079c: 0x8c64003c  lw          $a0, 0x3C($v1)
    ctx->pc = 0x1a079cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_1a07a0:
    // 0x1a07a0: 0x10800026  beqz        $a0, . + 4 + (0x26 << 2)
label_1a07a4:
    if (ctx->pc == 0x1A07A4u) {
        ctx->pc = 0x1A07A8u;
        goto label_1a07a8;
    }
    ctx->pc = 0x1A07A0u;
    {
        const bool branch_taken_0x1a07a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a07a0) {
            ctx->pc = 0x1A083Cu;
            goto label_1a083c;
        }
    }
    ctx->pc = 0x1A07A8u;
label_1a07a8:
    // 0x1a07a8: 0x93838488  lbu         $v1, -0x7B78($gp)
    ctx->pc = 0x1a07a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935688)));
label_1a07ac:
    // 0x1a07ac: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_1a07b0:
    if (ctx->pc == 0x1A07B0u) {
        ctx->pc = 0x1A07B4u;
        goto label_1a07b4;
    }
    ctx->pc = 0x1A07ACu;
    {
        const bool branch_taken_0x1a07ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a07ac) {
            ctx->pc = 0x1A07C8u;
            goto label_1a07c8;
        }
    }
    ctx->pc = 0x1A07B4u;
label_1a07b4:
    // 0x1a07b4: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x1a07b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
label_1a07b8:
    // 0x1a07b8: 0x24632eb0  addiu       $v1, $v1, 0x2EB0
    ctx->pc = 0x1a07b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11952));
label_1a07bc:
    // 0x1a07bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a07bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1a07c0:
    // 0x1a07c0: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x1a07c0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1a07c4:
    // 0x1a07c4: 0x0  nop
    ctx->pc = 0x1a07c4u;
    // NOP
label_1a07c8:
    // 0x1a07c8: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
label_1a07cc:
    if (ctx->pc == 0x1A07CCu) {
        ctx->pc = 0x1A07CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A07C8u;
        // 0x1a07cc: 0x41840  sll         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A07D0u;
        goto label_1a07d0;
    }
    ctx->pc = 0x1A07C8u;
    {
        const bool branch_taken_0x1a07c8 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1A07CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A07C8u;
        // 0x1a07cc: 0x41840  sll         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a07c8) {
            ctx->pc = 0x1A07DCu;
            goto label_1a07dc;
        }
    }
    ctx->pc = 0x1A07D0u;
label_1a07d0:
    // 0x1a07d0: 0x1000000a  b           . + 4 + (0xA << 2)
label_1a07d4:
    if (ctx->pc == 0x1A07D4u) {
        ctx->pc = 0x1A07D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A07D0u;
        // 0x1a07d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A07D8u;
        goto label_1a07d8;
    }
    ctx->pc = 0x1A07D0u;
    {
        const bool branch_taken_0x1a07d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A07D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A07D0u;
        // 0x1a07d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a07d0) {
            ctx->pc = 0x1A07FCu;
            goto label_1a07fc;
        }
    }
    ctx->pc = 0x1A07D8u;
label_1a07d8:
    // 0x1a07d8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1a07d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1a07dc:
    // 0x1a07dc: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a07dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1a07e0:
    // 0x1a07e0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a07e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a07e4:
    // 0x1a07e4: 0x84630004  lh          $v1, 0x4($v1)
    ctx->pc = 0x1a07e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_1a07e8:
    // 0x1a07e8: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
label_1a07ec:
    if (ctx->pc == 0x1A07ECu) {
        ctx->pc = 0x1A07F0u;
        goto label_1a07f0;
    }
    ctx->pc = 0x1A07E8u;
    {
        const bool branch_taken_0x1a07e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1a07e8) {
            ctx->pc = 0x1A07F8u;
            goto label_1a07f8;
        }
    }
    ctx->pc = 0x1A07F0u;
label_1a07f0:
    // 0x1a07f0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1a07f4:
    if (ctx->pc == 0x1A07F4u) {
        ctx->pc = 0x1A07F8u;
        goto label_1a07f8;
    }
    ctx->pc = 0x1A07F0u;
    {
        const bool branch_taken_0x1a07f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a07f0) {
            ctx->pc = 0x1A07FCu;
            goto label_1a07fc;
        }
    }
    ctx->pc = 0x1A07F8u;
label_1a07f8:
    // 0x1a07f8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a07f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a07fc:
    // 0x1a07fc: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
label_1a0800:
    if (ctx->pc == 0x1A0800u) {
        ctx->pc = 0x1A0804u;
        goto label_1a0804;
    }
    ctx->pc = 0x1A07FCu;
    {
        const bool branch_taken_0x1a07fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a07fc) {
            ctx->pc = 0x1A083Cu;
            goto label_1a083c;
        }
    }
    ctx->pc = 0x1A0804u;
label_1a0804:
    // 0x1a0804: 0xc04be08  jal         func_12F820
label_1a0808:
    if (ctx->pc == 0x1A0808u) {
        ctx->pc = 0x1A0808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0804u;
        // 0x1a0808: 0x8e440670  lw          $a0, 0x670($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1648)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A080Cu;
        goto label_1a080c;
    }
    ctx->pc = 0x1A0804u;
    SET_GPR_U32(ctx, 31, 0x1A080Cu);
    ctx->pc = 0x1A0808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0804u;
    // 0x1a0808: 0x8e440670  lw          $a0, 0x670($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1648)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F820u, 0x1A0804u, 0x1A080Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A080Cu;
label_1a080c:
    // 0x1a080c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a080cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a0810:
    // 0x1a0810: 0xc063e08  jal         func_18F820
label_1a0814:
    if (ctx->pc == 0x1A0814u) {
        ctx->pc = 0x1A0814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0810u;
        // 0x1a0814: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0818u;
        goto label_1a0818;
    }
    ctx->pc = 0x1A0810u;
    SET_GPR_U32(ctx, 31, 0x1A0818u);
    ctx->pc = 0x1A0814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0810u;
    // 0x1a0814: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1A0810u, 0x1A0818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0818u;
label_1a0818:
    // 0x1a0818: 0x10000008  b           . + 4 + (0x8 << 2)
label_1a081c:
    if (ctx->pc == 0x1A081Cu) {
        ctx->pc = 0x1A0820u;
        goto label_1a0820;
    }
    ctx->pc = 0x1A0818u;
    {
        const bool branch_taken_0x1a0818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0818) {
            ctx->pc = 0x1A083Cu;
            goto label_1a083c;
        }
    }
    ctx->pc = 0x1A0820u;
label_1a0820:
    // 0x1a0820: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
label_1a0824:
    if (ctx->pc == 0x1A0824u) {
        ctx->pc = 0x1A0828u;
        goto label_1a0828;
    }
    ctx->pc = 0x1A0820u;
    {
        const bool branch_taken_0x1a0820 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0820) {
            ctx->pc = 0x1A083Cu;
            goto label_1a083c;
        }
    }
    ctx->pc = 0x1A0828u;
label_1a0828:
    // 0x1a0828: 0x8e59031c  lw          $t9, 0x31C($s2)
    ctx->pc = 0x1a0828u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 796)));
label_1a082c:
    // 0x1a082c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a082cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a0830:
    // 0x1a0830: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1a0830u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1a0834:
    // 0x1a0834: 0x320f809  jalr        $t9
label_1a0838:
    if (ctx->pc == 0x1A0838u) {
        ctx->pc = 0x1A0838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0834u;
        // 0x1a0838: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A083Cu;
        goto label_1a083c;
    }
    ctx->pc = 0x1A0834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A083Cu);
        ctx->pc = 0x1A0838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0834u;
        // 0x1a0838: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0834u, 0x1A083Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A083Cu;
label_1a083c:
    // 0x1a083c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a083cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a0840:
    // 0x1a0840: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a0840u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a0844:
    // 0x1a0844: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a0844u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a0848:
    // 0x1a0848: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a0848u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1a084c:
    // 0x1a084c: 0x3e00008  jr          $ra
label_1a0850:
    if (ctx->pc == 0x1A0850u) {
        ctx->pc = 0x1A0850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A084Cu;
        // 0x1a0850: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0854u;
        goto label_fallthrough_0x1a084c;
    }
    ctx->pc = 0x1A084Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A084Cu;
        // 0x1a0850: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A084Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a084c:
    ctx->pc = 0x1A0854u;
}
