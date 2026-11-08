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

// Function: FUN_0013c4c0
// Address: 0x13c4c0 - 0x13c7ac
void FUN_0013c4c0_0x13c4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013c4c0_0x13c4c0");
#endif

    switch (ctx->pc) {
        case 0x13c4c0u: goto label_13c4c0;
        case 0x13c4c4u: goto label_13c4c4;
        case 0x13c4c8u: goto label_13c4c8;
        case 0x13c4ccu: goto label_13c4cc;
        case 0x13c4d0u: goto label_13c4d0;
        case 0x13c4d4u: goto label_13c4d4;
        case 0x13c4d8u: goto label_13c4d8;
        case 0x13c4dcu: goto label_13c4dc;
        case 0x13c4e0u: goto label_13c4e0;
        case 0x13c4e4u: goto label_13c4e4;
        case 0x13c4e8u: goto label_13c4e8;
        case 0x13c4ecu: goto label_13c4ec;
        case 0x13c4f0u: goto label_13c4f0;
        case 0x13c4f4u: goto label_13c4f4;
        case 0x13c4f8u: goto label_13c4f8;
        case 0x13c4fcu: goto label_13c4fc;
        case 0x13c500u: goto label_13c500;
        case 0x13c504u: goto label_13c504;
        case 0x13c508u: goto label_13c508;
        case 0x13c50cu: goto label_13c50c;
        case 0x13c510u: goto label_13c510;
        case 0x13c514u: goto label_13c514;
        case 0x13c518u: goto label_13c518;
        case 0x13c51cu: goto label_13c51c;
        case 0x13c520u: goto label_13c520;
        case 0x13c524u: goto label_13c524;
        case 0x13c528u: goto label_13c528;
        case 0x13c52cu: goto label_13c52c;
        case 0x13c530u: goto label_13c530;
        case 0x13c534u: goto label_13c534;
        case 0x13c538u: goto label_13c538;
        case 0x13c53cu: goto label_13c53c;
        case 0x13c540u: goto label_13c540;
        case 0x13c544u: goto label_13c544;
        case 0x13c548u: goto label_13c548;
        case 0x13c54cu: goto label_13c54c;
        case 0x13c550u: goto label_13c550;
        case 0x13c554u: goto label_13c554;
        case 0x13c558u: goto label_13c558;
        case 0x13c55cu: goto label_13c55c;
        case 0x13c560u: goto label_13c560;
        case 0x13c564u: goto label_13c564;
        case 0x13c568u: goto label_13c568;
        case 0x13c56cu: goto label_13c56c;
        case 0x13c570u: goto label_13c570;
        case 0x13c574u: goto label_13c574;
        case 0x13c578u: goto label_13c578;
        case 0x13c57cu: goto label_13c57c;
        case 0x13c580u: goto label_13c580;
        case 0x13c584u: goto label_13c584;
        case 0x13c588u: goto label_13c588;
        case 0x13c58cu: goto label_13c58c;
        case 0x13c590u: goto label_13c590;
        case 0x13c594u: goto label_13c594;
        case 0x13c598u: goto label_13c598;
        case 0x13c59cu: goto label_13c59c;
        case 0x13c5a0u: goto label_13c5a0;
        case 0x13c5a4u: goto label_13c5a4;
        case 0x13c5a8u: goto label_13c5a8;
        case 0x13c5acu: goto label_13c5ac;
        case 0x13c5b0u: goto label_13c5b0;
        case 0x13c5b4u: goto label_13c5b4;
        case 0x13c5b8u: goto label_13c5b8;
        case 0x13c5bcu: goto label_13c5bc;
        case 0x13c5c0u: goto label_13c5c0;
        case 0x13c5c4u: goto label_13c5c4;
        case 0x13c5c8u: goto label_13c5c8;
        case 0x13c5ccu: goto label_13c5cc;
        case 0x13c5d0u: goto label_13c5d0;
        case 0x13c5d4u: goto label_13c5d4;
        case 0x13c5d8u: goto label_13c5d8;
        case 0x13c5dcu: goto label_13c5dc;
        case 0x13c5e0u: goto label_13c5e0;
        case 0x13c5e4u: goto label_13c5e4;
        case 0x13c5e8u: goto label_13c5e8;
        case 0x13c5ecu: goto label_13c5ec;
        case 0x13c5f0u: goto label_13c5f0;
        case 0x13c5f4u: goto label_13c5f4;
        case 0x13c5f8u: goto label_13c5f8;
        case 0x13c5fcu: goto label_13c5fc;
        case 0x13c600u: goto label_13c600;
        case 0x13c604u: goto label_13c604;
        case 0x13c608u: goto label_13c608;
        case 0x13c60cu: goto label_13c60c;
        case 0x13c610u: goto label_13c610;
        case 0x13c614u: goto label_13c614;
        case 0x13c618u: goto label_13c618;
        case 0x13c61cu: goto label_13c61c;
        case 0x13c620u: goto label_13c620;
        case 0x13c624u: goto label_13c624;
        case 0x13c628u: goto label_13c628;
        case 0x13c62cu: goto label_13c62c;
        case 0x13c630u: goto label_13c630;
        case 0x13c634u: goto label_13c634;
        case 0x13c638u: goto label_13c638;
        case 0x13c63cu: goto label_13c63c;
        case 0x13c640u: goto label_13c640;
        case 0x13c644u: goto label_13c644;
        case 0x13c648u: goto label_13c648;
        case 0x13c64cu: goto label_13c64c;
        case 0x13c650u: goto label_13c650;
        case 0x13c654u: goto label_13c654;
        case 0x13c658u: goto label_13c658;
        case 0x13c65cu: goto label_13c65c;
        case 0x13c660u: goto label_13c660;
        case 0x13c664u: goto label_13c664;
        case 0x13c668u: goto label_13c668;
        case 0x13c66cu: goto label_13c66c;
        case 0x13c670u: goto label_13c670;
        case 0x13c674u: goto label_13c674;
        case 0x13c678u: goto label_13c678;
        case 0x13c67cu: goto label_13c67c;
        case 0x13c680u: goto label_13c680;
        case 0x13c684u: goto label_13c684;
        case 0x13c688u: goto label_13c688;
        case 0x13c68cu: goto label_13c68c;
        case 0x13c690u: goto label_13c690;
        case 0x13c694u: goto label_13c694;
        case 0x13c698u: goto label_13c698;
        case 0x13c69cu: goto label_13c69c;
        case 0x13c6a0u: goto label_13c6a0;
        case 0x13c6a4u: goto label_13c6a4;
        case 0x13c6a8u: goto label_13c6a8;
        case 0x13c6acu: goto label_13c6ac;
        case 0x13c6b0u: goto label_13c6b0;
        case 0x13c6b4u: goto label_13c6b4;
        case 0x13c6b8u: goto label_13c6b8;
        case 0x13c6bcu: goto label_13c6bc;
        case 0x13c6c0u: goto label_13c6c0;
        case 0x13c6c4u: goto label_13c6c4;
        case 0x13c6c8u: goto label_13c6c8;
        case 0x13c6ccu: goto label_13c6cc;
        case 0x13c6d0u: goto label_13c6d0;
        case 0x13c6d4u: goto label_13c6d4;
        case 0x13c6d8u: goto label_13c6d8;
        case 0x13c6dcu: goto label_13c6dc;
        case 0x13c6e0u: goto label_13c6e0;
        case 0x13c6e4u: goto label_13c6e4;
        case 0x13c6e8u: goto label_13c6e8;
        case 0x13c6ecu: goto label_13c6ec;
        case 0x13c6f0u: goto label_13c6f0;
        case 0x13c6f4u: goto label_13c6f4;
        case 0x13c6f8u: goto label_13c6f8;
        case 0x13c6fcu: goto label_13c6fc;
        case 0x13c700u: goto label_13c700;
        case 0x13c704u: goto label_13c704;
        case 0x13c708u: goto label_13c708;
        case 0x13c70cu: goto label_13c70c;
        case 0x13c710u: goto label_13c710;
        case 0x13c714u: goto label_13c714;
        case 0x13c718u: goto label_13c718;
        case 0x13c71cu: goto label_13c71c;
        case 0x13c720u: goto label_13c720;
        case 0x13c724u: goto label_13c724;
        case 0x13c728u: goto label_13c728;
        case 0x13c72cu: goto label_13c72c;
        case 0x13c730u: goto label_13c730;
        case 0x13c734u: goto label_13c734;
        case 0x13c738u: goto label_13c738;
        case 0x13c73cu: goto label_13c73c;
        case 0x13c740u: goto label_13c740;
        case 0x13c744u: goto label_13c744;
        case 0x13c748u: goto label_13c748;
        case 0x13c74cu: goto label_13c74c;
        case 0x13c750u: goto label_13c750;
        case 0x13c754u: goto label_13c754;
        case 0x13c758u: goto label_13c758;
        case 0x13c75cu: goto label_13c75c;
        case 0x13c760u: goto label_13c760;
        case 0x13c764u: goto label_13c764;
        case 0x13c768u: goto label_13c768;
        case 0x13c76cu: goto label_13c76c;
        case 0x13c770u: goto label_13c770;
        case 0x13c774u: goto label_13c774;
        case 0x13c778u: goto label_13c778;
        case 0x13c77cu: goto label_13c77c;
        case 0x13c780u: goto label_13c780;
        case 0x13c784u: goto label_13c784;
        case 0x13c788u: goto label_13c788;
        case 0x13c78cu: goto label_13c78c;
        case 0x13c790u: goto label_13c790;
        case 0x13c794u: goto label_13c794;
        case 0x13c798u: goto label_13c798;
        case 0x13c79cu: goto label_13c79c;
        case 0x13c7a0u: goto label_13c7a0;
        case 0x13c7a4u: goto label_13c7a4;
        case 0x13c7a8u: goto label_13c7a8;
        default: break;
    }

    ctx->pc = 0x13c4c0u;

label_13c4c0:
    // 0x13c4c0: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x13c4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_13c4c4:
    // 0x13c4c4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x13c4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_13c4c8:
    // 0x13c4c8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x13c4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_13c4cc:
    // 0x13c4cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13c4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_13c4d0:
    // 0x13c4d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13c4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_13c4d4:
    // 0x13c4d4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x13c4d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13c4d8:
    // 0x13c4d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13c4d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_13c4dc:
    // 0x13c4dc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x13c4dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_13c4e0:
    // 0x13c4e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13c4e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_13c4e4:
    // 0x13c4e4: 0x26650128  addiu       $a1, $s3, 0x128
    ctx->pc = 0x13c4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 296));
label_13c4e8:
    // 0x13c4e8: 0xac9300a0  sw          $s3, 0xA0($a0)
    ctx->pc = 0x13c4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 160), GPR_U32(ctx, 19));
label_13c4ec:
    // 0x13c4ec: 0xac9300d0  sw          $s3, 0xD0($a0)
    ctx->pc = 0x13c4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 19));
label_13c4f0:
    // 0x13c4f0: 0xc080702  jal         func_201C08
label_13c4f4:
    if (ctx->pc == 0x13C4F4u) {
        ctx->pc = 0x13C4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C4F0u;
        // 0x13c4f4: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C4F8u;
        goto label_13c4f8;
    }
    ctx->pc = 0x13C4F0u;
    SET_GPR_U32(ctx, 31, 0x13C4F8u);
    ctx->pc = 0x13C4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C4F0u;
    // 0x13c4f4: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x13C4F0u, 0x13C4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C4F8u;
label_13c4f8:
    // 0x13c4f8: 0xc080d98  jal         func_203660
label_13c4fc:
    if (ctx->pc == 0x13C4FCu) {
        ctx->pc = 0x13C4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C4F8u;
        // 0x13c4fc: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C500u;
        goto label_13c500;
    }
    ctx->pc = 0x13C4F8u;
    SET_GPR_U32(ctx, 31, 0x13C500u);
    ctx->pc = 0x13C4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C4F8u;
    // 0x13c4fc: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203660u, 0x13C4F8u, 0x13C500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C500u;
label_13c500:
    // 0x13c500: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x13c500u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_13c504:
    // 0x13c504: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x13c504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_13c508:
    // 0x13c508: 0x24a5efd8  addiu       $a1, $a1, -0x1028
    ctx->pc = 0x13c508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963160));
label_13c50c:
    // 0x13c50c: 0xc080874  jal         func_2021D0
label_13c510:
    if (ctx->pc == 0x13C510u) {
        ctx->pc = 0x13C510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C50Cu;
        // 0x13c510: 0xa2600189  sb          $zero, 0x189($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 393), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C514u;
        goto label_13c514;
    }
    ctx->pc = 0x13C50Cu;
    SET_GPR_U32(ctx, 31, 0x13C514u);
    ctx->pc = 0x13C510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C50Cu;
    // 0x13c510: 0xa2600189  sb          $zero, 0x189($s3) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 19), 393), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2021D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2021D0u, 0x13C50Cu, 0x13C514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C514u;
label_13c514:
    // 0x13c514: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_13c518:
    if (ctx->pc == 0x13C518u) {
        ctx->pc = 0x13C518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C514u;
        // 0x13c518: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C51Cu;
        goto label_13c51c;
    }
    ctx->pc = 0x13C514u;
    {
        const bool branch_taken_0x13c514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C514u;
        // 0x13c518: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c514) {
            ctx->pc = 0x13C528u;
            goto label_13c528;
        }
    }
    ctx->pc = 0x13C51Cu;
label_13c51c:
    // 0x13c51c: 0x82620189  lb          $v0, 0x189($s3)
    ctx->pc = 0x13c51cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 393)));
label_13c520:
    // 0x13c520: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x13c520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_13c524:
    // 0x13c524: 0xa2620189  sb          $v0, 0x189($s3)
    ctx->pc = 0x13c524u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 393), (uint8_t)GPR_U32(ctx, 2));
label_13c528:
    // 0x13c528: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x13c528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_13c52c:
    // 0x13c52c: 0xc080874  jal         func_2021D0
label_13c530:
    if (ctx->pc == 0x13C530u) {
        ctx->pc = 0x13C530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C52Cu;
        // 0x13c530: 0x24a5efe8  addiu       $a1, $a1, -0x1018 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C534u;
        goto label_13c534;
    }
    ctx->pc = 0x13C52Cu;
    SET_GPR_U32(ctx, 31, 0x13C534u);
    ctx->pc = 0x13C530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C52Cu;
    // 0x13c530: 0x24a5efe8  addiu       $a1, $a1, -0x1018 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2021D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2021D0u, 0x13C52Cu, 0x13C534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C534u;
label_13c534:
    // 0x13c534: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_13c538:
    if (ctx->pc == 0x13C538u) {
        ctx->pc = 0x13C538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C534u;
        // 0x13c538: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C53Cu;
        goto label_13c53c;
    }
    ctx->pc = 0x13C534u;
    {
        const bool branch_taken_0x13c534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C534u;
        // 0x13c538: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c534) {
            ctx->pc = 0x13C548u;
            goto label_13c548;
        }
    }
    ctx->pc = 0x13C53Cu;
label_13c53c:
    // 0x13c53c: 0x82620189  lb          $v0, 0x189($s3)
    ctx->pc = 0x13c53cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 393)));
label_13c540:
    // 0x13c540: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x13c540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_13c544:
    // 0x13c544: 0xa2620189  sb          $v0, 0x189($s3)
    ctx->pc = 0x13c544u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 393), (uint8_t)GPR_U32(ctx, 2));
label_13c548:
    // 0x13c548: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x13c548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_13c54c:
    // 0x13c54c: 0xc080874  jal         func_2021D0
label_13c550:
    if (ctx->pc == 0x13C550u) {
        ctx->pc = 0x13C550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C54Cu;
        // 0x13c550: 0x24a5eff8  addiu       $a1, $a1, -0x1008 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C554u;
        goto label_13c554;
    }
    ctx->pc = 0x13C54Cu;
    SET_GPR_U32(ctx, 31, 0x13C554u);
    ctx->pc = 0x13C550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C54Cu;
    // 0x13c550: 0x24a5eff8  addiu       $a1, $a1, -0x1008 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2021D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2021D0u, 0x13C54Cu, 0x13C554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C554u;
label_13c554:
    // 0x13c554: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_13c558:
    if (ctx->pc == 0x13C558u) {
        ctx->pc = 0x13C55Cu;
        goto label_13c55c;
    }
    ctx->pc = 0x13C554u;
    {
        const bool branch_taken_0x13c554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c554) {
            ctx->pc = 0x13C568u;
            goto label_13c568;
        }
    }
    ctx->pc = 0x13C55Cu;
label_13c55c:
    // 0x13c55c: 0x82630189  lb          $v1, 0x189($s3)
    ctx->pc = 0x13c55cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 393)));
label_13c560:
    // 0x13c560: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x13c560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
label_13c564:
    // 0x13c564: 0xa2630189  sb          $v1, 0x189($s3)
    ctx->pc = 0x13c564u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 393), (uint8_t)GPR_U32(ctx, 3));
label_13c568:
    // 0x13c568: 0x96440000  lhu         $a0, 0x0($s2)
    ctx->pc = 0x13c568u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_13c56c:
    // 0x13c56c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x13c56cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_13c570:
    // 0x13c570: 0x14830086  bne         $a0, $v1, . + 4 + (0x86 << 2)
label_13c574:
    if (ctx->pc == 0x13C574u) {
        ctx->pc = 0x13C574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C570u;
        // 0x13c574: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C578u;
        goto label_13c578;
    }
    ctx->pc = 0x13C570u;
    {
        const bool branch_taken_0x13c570 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x13C574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C570u;
        // 0x13c574: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c570) {
            ctx->pc = 0x13C78Cu;
            goto label_13c78c;
        }
    }
    ctx->pc = 0x13C578u;
label_13c578:
    // 0x13c578: 0x27a40168  addiu       $a0, $sp, 0x168
    ctx->pc = 0x13c578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
label_13c57c:
    // 0x13c57c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x13c57cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_13c580:
    // 0x13c580: 0xc07fdfe  jal         func_1FF7F8
label_13c584:
    if (ctx->pc == 0x13C584u) {
        ctx->pc = 0x13C584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C580u;
        // 0x13c584: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C588u;
        goto label_13c588;
    }
    ctx->pc = 0x13C580u;
    SET_GPR_U32(ctx, 31, 0x13C588u);
    ctx->pc = 0x13C584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C580u;
    // 0x13c584: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x13C580u, 0x13C588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C588u;
label_13c588:
    // 0x13c588: 0x27a4016c  addiu       $a0, $sp, 0x16C
    ctx->pc = 0x13c588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 364));
label_13c58c:
    // 0x13c58c: 0x26450004  addiu       $a1, $s2, 0x4
    ctx->pc = 0x13c58cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_13c590:
    // 0x13c590: 0xc07fdfe  jal         func_1FF7F8
label_13c594:
    if (ctx->pc == 0x13C594u) {
        ctx->pc = 0x13C594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C590u;
        // 0x13c594: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C598u;
        goto label_13c598;
    }
    ctx->pc = 0x13C590u;
    SET_GPR_U32(ctx, 31, 0x13C598u);
    ctx->pc = 0x13C594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C590u;
    // 0x13c594: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x13C590u, 0x13C598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C598u;
label_13c598:
    // 0x13c598: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x13c598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_13c59c:
    // 0x13c59c: 0x26450008  addiu       $a1, $s2, 0x8
    ctx->pc = 0x13c59cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_13c5a0:
    // 0x13c5a0: 0xc07fdfe  jal         func_1FF7F8
label_13c5a4:
    if (ctx->pc == 0x13C5A4u) {
        ctx->pc = 0x13C5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C5A0u;
        // 0x13c5a4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C5A8u;
        goto label_13c5a8;
    }
    ctx->pc = 0x13C5A0u;
    SET_GPR_U32(ctx, 31, 0x13C5A8u);
    ctx->pc = 0x13C5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C5A0u;
    // 0x13c5a4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x13C5A0u, 0x13C5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C5A8u;
label_13c5a8:
    // 0x13c5a8: 0x27a40174  addiu       $a0, $sp, 0x174
    ctx->pc = 0x13c5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 372));
label_13c5ac:
    // 0x13c5ac: 0x2645000c  addiu       $a1, $s2, 0xC
    ctx->pc = 0x13c5acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_13c5b0:
    // 0x13c5b0: 0xc07fdfe  jal         func_1FF7F8
label_13c5b4:
    if (ctx->pc == 0x13C5B4u) {
        ctx->pc = 0x13C5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C5B0u;
        // 0x13c5b4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C5B8u;
        goto label_13c5b8;
    }
    ctx->pc = 0x13C5B0u;
    SET_GPR_U32(ctx, 31, 0x13C5B8u);
    ctx->pc = 0x13C5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C5B0u;
    // 0x13c5b4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x13C5B0u, 0x13C5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C5B8u;
label_13c5b8:
    // 0x13c5b8: 0x27a4017c  addiu       $a0, $sp, 0x17C
    ctx->pc = 0x13c5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 380));
label_13c5bc:
    // 0x13c5bc: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x13c5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_13c5c0:
    // 0x13c5c0: 0xc07fdfe  jal         func_1FF7F8
label_13c5c4:
    if (ctx->pc == 0x13C5C4u) {
        ctx->pc = 0x13C5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C5C0u;
        // 0x13c5c4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C5C8u;
        goto label_13c5c8;
    }
    ctx->pc = 0x13C5C0u;
    SET_GPR_U32(ctx, 31, 0x13C5C8u);
    ctx->pc = 0x13C5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C5C0u;
    // 0x13c5c4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x13C5C0u, 0x13C5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C5C8u;
label_13c5c8:
    // 0x13c5c8: 0x93a2017c  lbu         $v0, 0x17C($sp)
    ctx->pc = 0x13c5c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 380)));
label_13c5cc:
    // 0x13c5cc: 0x27a4017d  addiu       $a0, $sp, 0x17D
    ctx->pc = 0x13c5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 381));
label_13c5d0:
    // 0x13c5d0: 0x26450011  addiu       $a1, $s2, 0x11
    ctx->pc = 0x13c5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 17));
label_13c5d4:
    // 0x13c5d4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x13c5d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13c5d8:
    // 0x13c5d8: 0xc07fdfe  jal         func_1FF7F8
label_13c5dc:
    if (ctx->pc == 0x13C5DCu) {
        ctx->pc = 0x13C5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C5D8u;
        // 0x13c5dc: 0xa2620188  sb          $v0, 0x188($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 392), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C5E0u;
        goto label_13c5e0;
    }
    ctx->pc = 0x13C5D8u;
    SET_GPR_U32(ctx, 31, 0x13C5E0u);
    ctx->pc = 0x13C5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C5D8u;
    // 0x13c5dc: 0xa2620188  sb          $v0, 0x188($s3) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 19), 392), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x13C5D8u, 0x13C5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C5E0u;
label_13c5e0:
    // 0x13c5e0: 0x27a4017e  addiu       $a0, $sp, 0x17E
    ctx->pc = 0x13c5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 382));
label_13c5e4:
    // 0x13c5e4: 0x26450012  addiu       $a1, $s2, 0x12
    ctx->pc = 0x13c5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 18));
label_13c5e8:
    // 0x13c5e8: 0xc07fdfe  jal         func_1FF7F8
label_13c5ec:
    if (ctx->pc == 0x13C5ECu) {
        ctx->pc = 0x13C5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C5E8u;
        // 0x13c5ec: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C5F0u;
        goto label_13c5f0;
    }
    ctx->pc = 0x13C5E8u;
    SET_GPR_U32(ctx, 31, 0x13C5F0u);
    ctx->pc = 0x13C5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C5E8u;
    // 0x13c5ec: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x13C5E8u, 0x13C5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C5F0u;
label_13c5f0:
    // 0x13c5f0: 0x93a2017e  lbu         $v0, 0x17E($sp)
    ctx->pc = 0x13c5f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 382)));
label_13c5f4:
    // 0x13c5f4: 0x27a4017f  addiu       $a0, $sp, 0x17F
    ctx->pc = 0x13c5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 383));
label_13c5f8:
    // 0x13c5f8: 0x26450013  addiu       $a1, $s2, 0x13
    ctx->pc = 0x13c5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 19));
label_13c5fc:
    // 0x13c5fc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x13c5fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13c600:
    // 0x13c600: 0xc07fdfe  jal         func_1FF7F8
label_13c604:
    if (ctx->pc == 0x13C604u) {
        ctx->pc = 0x13C604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C600u;
        // 0x13c604: 0xa262018a  sb          $v0, 0x18A($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 394), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C608u;
        goto label_13c608;
    }
    ctx->pc = 0x13C600u;
    SET_GPR_U32(ctx, 31, 0x13C608u);
    ctx->pc = 0x13C604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C600u;
    // 0x13c604: 0xa262018a  sb          $v0, 0x18A($s3) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 19), 394), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x13C600u, 0x13C608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C608u;
label_13c608:
    // 0x13c608: 0x93a2017f  lbu         $v0, 0x17F($sp)
    ctx->pc = 0x13c608u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 383)));
label_13c60c:
    // 0x13c60c: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x13c60cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_13c610:
    // 0x13c610: 0x2512821  addu        $a1, $s2, $s1
    ctx->pc = 0x13c610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_13c614:
    // 0x13c614: 0xae6201b8  sw          $v0, 0x1B8($s3)
    ctx->pc = 0x13c614u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 440), GPR_U32(ctx, 2));
label_13c618:
    // 0x13c618: 0x8fa60174  lw          $a2, 0x174($sp)
    ctx->pc = 0x13c618u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
label_13c61c:
    // 0x13c61c: 0xc05099c  jal         func_142670
label_13c620:
    if (ctx->pc == 0x13C620u) {
        ctx->pc = 0x13C620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C61Cu;
        // 0x13c620: 0x266400b0  addiu       $a0, $s3, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C624u;
        goto label_13c624;
    }
    ctx->pc = 0x13C61Cu;
    SET_GPR_U32(ctx, 31, 0x13C624u);
    ctx->pc = 0x13C620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C61Cu;
    // 0x13c620: 0x266400b0  addiu       $a0, $s3, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x142670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142670u, 0x13C61Cu, 0x13C624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C624u;
label_13c624:
    // 0x13c624: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x13c624u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_13c628:
    // 0x13c628: 0x93a2017d  lbu         $v0, 0x17D($sp)
    ctx->pc = 0x13c628u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 381)));
label_13c62c:
    // 0x13c62c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_13c630:
    if (ctx->pc == 0x13C630u) {
        ctx->pc = 0x13C634u;
        goto label_13c634;
    }
    ctx->pc = 0x13C62Cu;
    {
        const bool branch_taken_0x13c62c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c62c) {
            ctx->pc = 0x13C640u;
            goto label_13c640;
        }
    }
    ctx->pc = 0x13C634u;
label_13c634:
    // 0x13c634: 0x2511021  addu        $v0, $s2, $s1
    ctx->pc = 0x13c634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_13c638:
    // 0x13c638: 0xae620084  sw          $v0, 0x84($s3)
    ctx->pc = 0x13c638u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 2));
label_13c63c:
    // 0x13c63c: 0x26310080  addiu       $s1, $s1, 0x80
    ctx->pc = 0x13c63cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
label_13c640:
    // 0x13c640: 0x92630188  lbu         $v1, 0x188($s3)
    ctx->pc = 0x13c640u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 392)));
label_13c644:
    // 0x13c644: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13c644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13c648:
    // 0x13c648: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
label_13c64c:
    if (ctx->pc == 0x13C64Cu) {
        ctx->pc = 0x13C64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C648u;
        // 0x13c64c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C650u;
        goto label_13c650;
    }
    ctx->pc = 0x13C648u;
    {
        const bool branch_taken_0x13c648 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x13C64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C648u;
        // 0x13c64c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c648) {
            ctx->pc = 0x13C684u;
            goto label_13c684;
        }
    }
    ctx->pc = 0x13C650u;
label_13c650:
    // 0x13c650: 0xc0401bc  jal         func_1006F0
label_13c654:
    if (ctx->pc == 0x13C654u) {
        ctx->pc = 0x13C654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C650u;
        // 0x13c654: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C658u;
        goto label_13c658;
    }
    ctx->pc = 0x13C650u;
    SET_GPR_U32(ctx, 31, 0x13C658u);
    ctx->pc = 0x13C654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C650u;
    // 0x13c654: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x13C650u, 0x13C658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C658u;
label_13c658:
    // 0x13c658: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_13c65c:
    if (ctx->pc == 0x13C65Cu) {
        ctx->pc = 0x13C65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C658u;
        // 0x13c65c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C660u;
        goto label_13c660;
    }
    ctx->pc = 0x13C658u;
    {
        const bool branch_taken_0x13c658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C658u;
        // 0x13c65c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c658) {
            ctx->pc = 0x13C674u;
            goto label_13c674;
        }
    }
    ctx->pc = 0x13C660u;
label_13c660:
    // 0x13c660: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13c660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13c664:
    // 0x13c664: 0xc049dd8  jal         func_127760
label_13c668:
    if (ctx->pc == 0x13C668u) {
        ctx->pc = 0x13C668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C664u;
        // 0x13c668: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C66Cu;
        goto label_13c66c;
    }
    ctx->pc = 0x13C664u;
    SET_GPR_U32(ctx, 31, 0x13C66Cu);
    ctx->pc = 0x13C668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C664u;
    // 0x13c668: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127760u, 0x13C664u, 0x13C66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C66Cu;
label_13c66c:
    // 0x13c66c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x13c66cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_13c670:
    // 0x13c670: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x13c670u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_13c674:
    // 0x13c674: 0x266400b0  addiu       $a0, $s3, 0xB0
    ctx->pc = 0x13c674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 176));
label_13c678:
    // 0x13c678: 0xc0509a4  jal         func_142690
label_13c67c:
    if (ctx->pc == 0x13C67Cu) {
        ctx->pc = 0x13C67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C678u;
        // 0x13c67c: 0xae70011c  sw          $s0, 0x11C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 284), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C680u;
        goto label_13c680;
    }
    ctx->pc = 0x13C678u;
    SET_GPR_U32(ctx, 31, 0x13C680u);
    ctx->pc = 0x13C67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C678u;
    // 0x13c67c: 0xae70011c  sw          $s0, 0x11C($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 284), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x142690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142690u, 0x13C678u, 0x13C680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C680u;
label_13c680:
    // 0x13c680: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x13c680u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13c684:
    // 0x13c684: 0x10000031  b           . + 4 + (0x31 << 2)
label_13c688:
    if (ctx->pc == 0x13C688u) {
        ctx->pc = 0x13C68Cu;
        goto label_13c68c;
    }
    ctx->pc = 0x13C684u;
    {
        const bool branch_taken_0x13c684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c684) {
            ctx->pc = 0x13C74Cu;
            goto label_13c74c;
        }
    }
    ctx->pc = 0x13C68Cu;
label_13c68c:
    // 0x13c68c: 0xc0509a8  jal         func_1426A0
label_13c690:
    if (ctx->pc == 0x13C690u) {
        ctx->pc = 0x13C690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C68Cu;
        // 0x13c690: 0x266400b0  addiu       $a0, $s3, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C694u;
        goto label_13c694;
    }
    ctx->pc = 0x13C68Cu;
    SET_GPR_U32(ctx, 31, 0x13C694u);
    ctx->pc = 0x13C690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C68Cu;
    // 0x13c690: 0x266400b0  addiu       $a0, $s3, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1426A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1426A0u, 0x13C68Cu, 0x13C694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C694u;
label_13c694:
    // 0x13c694: 0xc0401bc  jal         func_1006F0
label_13c698:
    if (ctx->pc == 0x13C698u) {
        ctx->pc = 0x13C698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C694u;
        // 0x13c698: 0x240400b0  addiu       $a0, $zero, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C69Cu;
        goto label_13c69c;
    }
    ctx->pc = 0x13C694u;
    SET_GPR_U32(ctx, 31, 0x13C69Cu);
    ctx->pc = 0x13C698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C694u;
    // 0x13c698: 0x240400b0  addiu       $a0, $zero, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x13C694u, 0x13C69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C69Cu;
label_13c69c:
    // 0x13c69c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_13c6a0:
    if (ctx->pc == 0x13C6A0u) {
        ctx->pc = 0x13C6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C69Cu;
        // 0x13c6a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C6A4u;
        goto label_13c6a4;
    }
    ctx->pc = 0x13C69Cu;
    {
        const bool branch_taken_0x13c69c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C69Cu;
        // 0x13c6a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c69c) {
            ctx->pc = 0x13C6ACu;
            goto label_13c6ac;
        }
    }
    ctx->pc = 0x13C6A4u;
label_13c6a4:
    // 0x13c6a4: 0xc04d0f0  jal         func_1343C0
label_13c6a8:
    if (ctx->pc == 0x13C6A8u) {
        ctx->pc = 0x13C6ACu;
        goto label_13c6ac;
    }
    ctx->pc = 0x13C6A4u;
    SET_GPR_U32(ctx, 31, 0x13C6ACu);
    ctx->pc = 0x1343C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1343C0u, 0x13C6A4u, 0x13C6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C6ACu;
label_13c6ac:
    // 0x13c6ac: 0x0  nop
    ctx->pc = 0x13c6acu;
    // NOP
label_13c6b0:
    // 0x13c6b0: 0xafa20178  sw          $v0, 0x178($sp)
    ctx->pc = 0x13c6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 2));
label_13c6b4:
    // 0x13c6b4: 0x8e6300a0  lw          $v1, 0xA0($s3)
    ctx->pc = 0x13c6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_13c6b8:
    // 0x13c6b8: 0xac4300a0  sw          $v1, 0xA0($v0)
    ctx->pc = 0x13c6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 160), GPR_U32(ctx, 3));
label_13c6bc:
    // 0x13c6bc: 0x8fa50178  lw          $a1, 0x178($sp)
    ctx->pc = 0x13c6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
label_13c6c0:
    // 0x13c6c0: 0xc04c558  jal         func_131560
label_13c6c4:
    if (ctx->pc == 0x13C6C4u) {
        ctx->pc = 0x13C6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C6C0u;
        // 0x13c6c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C6C8u;
        goto label_13c6c8;
    }
    ctx->pc = 0x13C6C0u;
    SET_GPR_U32(ctx, 31, 0x13C6C8u);
    ctx->pc = 0x13C6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C6C0u;
    // 0x13c6c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131560u, 0x13C6C0u, 0x13C6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C6C8u;
label_13c6c8:
    // 0x13c6c8: 0x8fa40178  lw          $a0, 0x178($sp)
    ctx->pc = 0x13c6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
label_13c6cc:
    // 0x13c6cc: 0xc04d130  jal         func_1344C0
label_13c6d0:
    if (ctx->pc == 0x13C6D0u) {
        ctx->pc = 0x13C6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C6CCu;
        // 0x13c6d0: 0x2512821  addu        $a1, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C6D4u;
        goto label_13c6d4;
    }
    ctx->pc = 0x13C6CCu;
    SET_GPR_U32(ctx, 31, 0x13C6D4u);
    ctx->pc = 0x13C6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C6CCu;
    // 0x13c6d0: 0x2512821  addu        $a1, $s2, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1344C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1344C0u, 0x13C6CCu, 0x13C6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C6D4u;
label_13c6d4:
    // 0x13c6d4: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x13c6d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_13c6d8:
    // 0x13c6d8: 0x92620188  lbu         $v0, 0x188($s3)
    ctx->pc = 0x13c6d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 392)));
label_13c6dc:
    // 0x13c6dc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_13c6e0:
    if (ctx->pc == 0x13C6E0u) {
        ctx->pc = 0x13C6E4u;
        goto label_13c6e4;
    }
    ctx->pc = 0x13C6DCu;
    {
        const bool branch_taken_0x13c6dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c6dc) {
            ctx->pc = 0x13C700u;
            goto label_13c700;
        }
    }
    ctx->pc = 0x13C6E4u;
label_13c6e4:
    // 0x13c6e4: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_13c6e8:
    if (ctx->pc == 0x13C6E8u) {
        ctx->pc = 0x13C6ECu;
        goto label_13c6ec;
    }
    ctx->pc = 0x13C6E4u;
    {
        const bool branch_taken_0x13c6e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c6e4) {
            ctx->pc = 0x13C700u;
            goto label_13c700;
        }
    }
    ctx->pc = 0x13C6ECu;
label_13c6ec:
    // 0x13c6ec: 0x8fa40178  lw          $a0, 0x178($sp)
    ctx->pc = 0x13c6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
label_13c6f0:
    // 0x13c6f0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x13c6f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13c6f4:
    // 0x13c6f4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x13c6f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_13c6f8:
    // 0x13c6f8: 0x320f809  jalr        $t9
label_13c6fc:
    if (ctx->pc == 0x13C6FCu) {
        ctx->pc = 0x13C6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C6F8u;
        // 0x13c6fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C700u;
        goto label_13c700;
    }
    ctx->pc = 0x13C6F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13C700u);
        ctx->pc = 0x13C6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C6F8u;
        // 0x13c6fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C6F8u, 0x13C700u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13C700u;
label_13c700:
    // 0x13c700: 0x92630188  lbu         $v1, 0x188($s3)
    ctx->pc = 0x13c700u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 392)));
label_13c704:
    // 0x13c704: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13c704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13c708:
    // 0x13c708: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
label_13c70c:
    if (ctx->pc == 0x13C70Cu) {
        ctx->pc = 0x13C710u;
        goto label_13c710;
    }
    ctx->pc = 0x13C708u;
    {
        const bool branch_taken_0x13c708 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13c708) {
            ctx->pc = 0x13C73Cu;
            goto label_13c73c;
        }
    }
    ctx->pc = 0x13C710u;
label_13c710:
    // 0x13c710: 0x8e74011c  lw          $s4, 0x11C($s3)
    ctx->pc = 0x13c710u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 284)));
label_13c714:
    // 0x13c714: 0xc049ed0  jal         func_127B40
label_13c718:
    if (ctx->pc == 0x13C718u) {
        ctx->pc = 0x13C718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C714u;
        // 0x13c718: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C71Cu;
        goto label_13c71c;
    }
    ctx->pc = 0x13C714u;
    SET_GPR_U32(ctx, 31, 0x13C71Cu);
    ctx->pc = 0x13C718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C714u;
    // 0x13c718: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B40u, 0x13C714u, 0x13C71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C71Cu;
label_13c71c:
    // 0x13c71c: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x13c71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_13c720:
    // 0x13c720: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x13c720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_13c724:
    // 0x13c724: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13c724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13c728:
    // 0x13c728: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x13c728u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13c72c:
    // 0x13c72c: 0x27a70178  addiu       $a3, $sp, 0x178
    ctx->pc = 0x13c72cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
label_13c730:
    // 0x13c730: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13c730u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_13c734:
    // 0x13c734: 0xc0484ec  jal         func_1213B0
label_13c738:
    if (ctx->pc == 0x13C738u) {
        ctx->pc = 0x13C738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C734u;
        // 0x13c738: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C73Cu;
        goto label_13c73c;
    }
    ctx->pc = 0x13C734u;
    SET_GPR_U32(ctx, 31, 0x13C73Cu);
    ctx->pc = 0x13C738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C734u;
    // 0x13c738: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1213B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1213B0u, 0x13C734u, 0x13C73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C73Cu;
label_13c73c:
    // 0x13c73c: 0x0  nop
    ctx->pc = 0x13c73cu;
    // NOP
label_13c740:
    // 0x13c740: 0xc0509bc  jal         func_1426F0
label_13c744:
    if (ctx->pc == 0x13C744u) {
        ctx->pc = 0x13C744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C740u;
        // 0x13c744: 0x266400b0  addiu       $a0, $s3, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C748u;
        goto label_13c748;
    }
    ctx->pc = 0x13C740u;
    SET_GPR_U32(ctx, 31, 0x13C748u);
    ctx->pc = 0x13C744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C740u;
    // 0x13c744: 0x266400b0  addiu       $a0, $s3, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1426F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1426F0u, 0x13C740u, 0x13C748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C748u;
label_13c748:
    // 0x13c748: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x13c748u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_13c74c:
    // 0x13c74c: 0x0  nop
    ctx->pc = 0x13c74cu;
    // NOP
label_13c750:
    // 0x13c750: 0x8fa2016c  lw          $v0, 0x16C($sp)
    ctx->pc = 0x13c750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
label_13c754:
    // 0x13c754: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x13c754u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_13c758:
    // 0x13c758: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
label_13c75c:
    if (ctx->pc == 0x13C75Cu) {
        ctx->pc = 0x13C75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C758u;
        // 0x13c75c: 0x266400b0  addiu       $a0, $s3, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C760u;
        goto label_13c760;
    }
    ctx->pc = 0x13C758u;
    {
        const bool branch_taken_0x13c758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13C75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C758u;
        // 0x13c75c: 0x266400b0  addiu       $a0, $s3, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c758) {
            ctx->pc = 0x13C68Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13c68c;
        }
    }
    ctx->pc = 0x13C760u;
label_13c760:
    // 0x13c760: 0xc050910  jal         func_142440
label_13c764:
    if (ctx->pc == 0x13C764u) {
        ctx->pc = 0x13C768u;
        goto label_13c768;
    }
    ctx->pc = 0x13C760u;
    SET_GPR_U32(ctx, 31, 0x13C768u);
    ctx->pc = 0x142440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142440u, 0x13C760u, 0x13C768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C768u;
label_13c768:
    // 0x13c768: 0x266400b0  addiu       $a0, $s3, 0xB0
    ctx->pc = 0x13c768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 176));
label_13c76c:
    // 0x13c76c: 0xc050be0  jal         func_142F80
label_13c770:
    if (ctx->pc == 0x13C770u) {
        ctx->pc = 0x13C770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C76Cu;
        // 0x13c770: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C774u;
        goto label_13c774;
    }
    ctx->pc = 0x13C76Cu;
    SET_GPR_U32(ctx, 31, 0x13C774u);
    ctx->pc = 0x13C770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C76Cu;
    // 0x13c770: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x142F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142F80u, 0x13C76Cu, 0x13C774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C774u;
label_13c774:
    // 0x13c774: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x13c774u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_13c778:
    // 0x13c778: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x13c778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_13c77c:
    // 0x13c77c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13c77cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13c780:
    // 0x13c780: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x13c780u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_13c784:
    // 0x13c784: 0x320f809  jalr        $t9
label_13c788:
    if (ctx->pc == 0x13C788u) {
        ctx->pc = 0x13C788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C784u;
        // 0x13c788: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C78Cu;
        goto label_13c78c;
    }
    ctx->pc = 0x13C784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13C78Cu);
        ctx->pc = 0x13C788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C784u;
        // 0x13c788: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C784u, 0x13C78Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13C78Cu;
label_13c78c:
    // 0x13c78c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x13c78cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_13c790:
    // 0x13c790: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x13c790u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_13c794:
    // 0x13c794: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13c794u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_13c798:
    // 0x13c798: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13c798u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_13c79c:
    // 0x13c79c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13c79cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13c7a0:
    // 0x13c7a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13c7a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_13c7a4:
    // 0x13c7a4: 0x3e00008  jr          $ra
label_13c7a8:
    if (ctx->pc == 0x13C7A8u) {
        ctx->pc = 0x13C7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C7A4u;
        // 0x13c7a8: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C7ACu;
        goto label_fallthrough_0x13c7a4;
    }
    ctx->pc = 0x13C7A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C7A4u;
        // 0x13c7a8: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C7A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13c7a4:
    ctx->pc = 0x13C7ACu;
}
