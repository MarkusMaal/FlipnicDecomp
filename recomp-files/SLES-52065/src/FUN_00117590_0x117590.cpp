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

// Function: FUN_00117590
// Address: 0x117590 - 0x1178fc
void FUN_00117590_0x117590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00117590_0x117590");
#endif

    switch (ctx->pc) {
        case 0x117590u: goto label_117590;
        case 0x117594u: goto label_117594;
        case 0x117598u: goto label_117598;
        case 0x11759cu: goto label_11759c;
        case 0x1175a0u: goto label_1175a0;
        case 0x1175a4u: goto label_1175a4;
        case 0x1175a8u: goto label_1175a8;
        case 0x1175acu: goto label_1175ac;
        case 0x1175b0u: goto label_1175b0;
        case 0x1175b4u: goto label_1175b4;
        case 0x1175b8u: goto label_1175b8;
        case 0x1175bcu: goto label_1175bc;
        case 0x1175c0u: goto label_1175c0;
        case 0x1175c4u: goto label_1175c4;
        case 0x1175c8u: goto label_1175c8;
        case 0x1175ccu: goto label_1175cc;
        case 0x1175d0u: goto label_1175d0;
        case 0x1175d4u: goto label_1175d4;
        case 0x1175d8u: goto label_1175d8;
        case 0x1175dcu: goto label_1175dc;
        case 0x1175e0u: goto label_1175e0;
        case 0x1175e4u: goto label_1175e4;
        case 0x1175e8u: goto label_1175e8;
        case 0x1175ecu: goto label_1175ec;
        case 0x1175f0u: goto label_1175f0;
        case 0x1175f4u: goto label_1175f4;
        case 0x1175f8u: goto label_1175f8;
        case 0x1175fcu: goto label_1175fc;
        case 0x117600u: goto label_117600;
        case 0x117604u: goto label_117604;
        case 0x117608u: goto label_117608;
        case 0x11760cu: goto label_11760c;
        case 0x117610u: goto label_117610;
        case 0x117614u: goto label_117614;
        case 0x117618u: goto label_117618;
        case 0x11761cu: goto label_11761c;
        case 0x117620u: goto label_117620;
        case 0x117624u: goto label_117624;
        case 0x117628u: goto label_117628;
        case 0x11762cu: goto label_11762c;
        case 0x117630u: goto label_117630;
        case 0x117634u: goto label_117634;
        case 0x117638u: goto label_117638;
        case 0x11763cu: goto label_11763c;
        case 0x117640u: goto label_117640;
        case 0x117644u: goto label_117644;
        case 0x117648u: goto label_117648;
        case 0x11764cu: goto label_11764c;
        case 0x117650u: goto label_117650;
        case 0x117654u: goto label_117654;
        case 0x117658u: goto label_117658;
        case 0x11765cu: goto label_11765c;
        case 0x117660u: goto label_117660;
        case 0x117664u: goto label_117664;
        case 0x117668u: goto label_117668;
        case 0x11766cu: goto label_11766c;
        case 0x117670u: goto label_117670;
        case 0x117674u: goto label_117674;
        case 0x117678u: goto label_117678;
        case 0x11767cu: goto label_11767c;
        case 0x117680u: goto label_117680;
        case 0x117684u: goto label_117684;
        case 0x117688u: goto label_117688;
        case 0x11768cu: goto label_11768c;
        case 0x117690u: goto label_117690;
        case 0x117694u: goto label_117694;
        case 0x117698u: goto label_117698;
        case 0x11769cu: goto label_11769c;
        case 0x1176a0u: goto label_1176a0;
        case 0x1176a4u: goto label_1176a4;
        case 0x1176a8u: goto label_1176a8;
        case 0x1176acu: goto label_1176ac;
        case 0x1176b0u: goto label_1176b0;
        case 0x1176b4u: goto label_1176b4;
        case 0x1176b8u: goto label_1176b8;
        case 0x1176bcu: goto label_1176bc;
        case 0x1176c0u: goto label_1176c0;
        case 0x1176c4u: goto label_1176c4;
        case 0x1176c8u: goto label_1176c8;
        case 0x1176ccu: goto label_1176cc;
        case 0x1176d0u: goto label_1176d0;
        case 0x1176d4u: goto label_1176d4;
        case 0x1176d8u: goto label_1176d8;
        case 0x1176dcu: goto label_1176dc;
        case 0x1176e0u: goto label_1176e0;
        case 0x1176e4u: goto label_1176e4;
        case 0x1176e8u: goto label_1176e8;
        case 0x1176ecu: goto label_1176ec;
        case 0x1176f0u: goto label_1176f0;
        case 0x1176f4u: goto label_1176f4;
        case 0x1176f8u: goto label_1176f8;
        case 0x1176fcu: goto label_1176fc;
        case 0x117700u: goto label_117700;
        case 0x117704u: goto label_117704;
        case 0x117708u: goto label_117708;
        case 0x11770cu: goto label_11770c;
        case 0x117710u: goto label_117710;
        case 0x117714u: goto label_117714;
        case 0x117718u: goto label_117718;
        case 0x11771cu: goto label_11771c;
        case 0x117720u: goto label_117720;
        case 0x117724u: goto label_117724;
        case 0x117728u: goto label_117728;
        case 0x11772cu: goto label_11772c;
        case 0x117730u: goto label_117730;
        case 0x117734u: goto label_117734;
        case 0x117738u: goto label_117738;
        case 0x11773cu: goto label_11773c;
        case 0x117740u: goto label_117740;
        case 0x117744u: goto label_117744;
        case 0x117748u: goto label_117748;
        case 0x11774cu: goto label_11774c;
        case 0x117750u: goto label_117750;
        case 0x117754u: goto label_117754;
        case 0x117758u: goto label_117758;
        case 0x11775cu: goto label_11775c;
        case 0x117760u: goto label_117760;
        case 0x117764u: goto label_117764;
        case 0x117768u: goto label_117768;
        case 0x11776cu: goto label_11776c;
        case 0x117770u: goto label_117770;
        case 0x117774u: goto label_117774;
        case 0x117778u: goto label_117778;
        case 0x11777cu: goto label_11777c;
        case 0x117780u: goto label_117780;
        case 0x117784u: goto label_117784;
        case 0x117788u: goto label_117788;
        case 0x11778cu: goto label_11778c;
        case 0x117790u: goto label_117790;
        case 0x117794u: goto label_117794;
        case 0x117798u: goto label_117798;
        case 0x11779cu: goto label_11779c;
        case 0x1177a0u: goto label_1177a0;
        case 0x1177a4u: goto label_1177a4;
        case 0x1177a8u: goto label_1177a8;
        case 0x1177acu: goto label_1177ac;
        case 0x1177b0u: goto label_1177b0;
        case 0x1177b4u: goto label_1177b4;
        case 0x1177b8u: goto label_1177b8;
        case 0x1177bcu: goto label_1177bc;
        case 0x1177c0u: goto label_1177c0;
        case 0x1177c4u: goto label_1177c4;
        case 0x1177c8u: goto label_1177c8;
        case 0x1177ccu: goto label_1177cc;
        case 0x1177d0u: goto label_1177d0;
        case 0x1177d4u: goto label_1177d4;
        case 0x1177d8u: goto label_1177d8;
        case 0x1177dcu: goto label_1177dc;
        case 0x1177e0u: goto label_1177e0;
        case 0x1177e4u: goto label_1177e4;
        case 0x1177e8u: goto label_1177e8;
        case 0x1177ecu: goto label_1177ec;
        case 0x1177f0u: goto label_1177f0;
        case 0x1177f4u: goto label_1177f4;
        case 0x1177f8u: goto label_1177f8;
        case 0x1177fcu: goto label_1177fc;
        case 0x117800u: goto label_117800;
        case 0x117804u: goto label_117804;
        case 0x117808u: goto label_117808;
        case 0x11780cu: goto label_11780c;
        case 0x117810u: goto label_117810;
        case 0x117814u: goto label_117814;
        case 0x117818u: goto label_117818;
        case 0x11781cu: goto label_11781c;
        case 0x117820u: goto label_117820;
        case 0x117824u: goto label_117824;
        case 0x117828u: goto label_117828;
        case 0x11782cu: goto label_11782c;
        case 0x117830u: goto label_117830;
        case 0x117834u: goto label_117834;
        case 0x117838u: goto label_117838;
        case 0x11783cu: goto label_11783c;
        case 0x117840u: goto label_117840;
        case 0x117844u: goto label_117844;
        case 0x117848u: goto label_117848;
        case 0x11784cu: goto label_11784c;
        case 0x117850u: goto label_117850;
        case 0x117854u: goto label_117854;
        case 0x117858u: goto label_117858;
        case 0x11785cu: goto label_11785c;
        case 0x117860u: goto label_117860;
        case 0x117864u: goto label_117864;
        case 0x117868u: goto label_117868;
        case 0x11786cu: goto label_11786c;
        case 0x117870u: goto label_117870;
        case 0x117874u: goto label_117874;
        case 0x117878u: goto label_117878;
        case 0x11787cu: goto label_11787c;
        case 0x117880u: goto label_117880;
        case 0x117884u: goto label_117884;
        case 0x117888u: goto label_117888;
        case 0x11788cu: goto label_11788c;
        case 0x117890u: goto label_117890;
        case 0x117894u: goto label_117894;
        case 0x117898u: goto label_117898;
        case 0x11789cu: goto label_11789c;
        case 0x1178a0u: goto label_1178a0;
        case 0x1178a4u: goto label_1178a4;
        case 0x1178a8u: goto label_1178a8;
        case 0x1178acu: goto label_1178ac;
        case 0x1178b0u: goto label_1178b0;
        case 0x1178b4u: goto label_1178b4;
        case 0x1178b8u: goto label_1178b8;
        case 0x1178bcu: goto label_1178bc;
        case 0x1178c0u: goto label_1178c0;
        case 0x1178c4u: goto label_1178c4;
        case 0x1178c8u: goto label_1178c8;
        case 0x1178ccu: goto label_1178cc;
        case 0x1178d0u: goto label_1178d0;
        case 0x1178d4u: goto label_1178d4;
        case 0x1178d8u: goto label_1178d8;
        case 0x1178dcu: goto label_1178dc;
        case 0x1178e0u: goto label_1178e0;
        case 0x1178e4u: goto label_1178e4;
        case 0x1178e8u: goto label_1178e8;
        case 0x1178ecu: goto label_1178ec;
        case 0x1178f0u: goto label_1178f0;
        case 0x1178f4u: goto label_1178f4;
        case 0x1178f8u: goto label_1178f8;
        default: break;
    }

    ctx->pc = 0x117590u;

label_117590:
    // 0x117590: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x117590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_117594:
    // 0x117594: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x117594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_117598:
    // 0x117598: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x117598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_11759c:
    // 0x11759c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x11759cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1175a0:
    // 0x1175a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1175a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1175a4:
    // 0x1175a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1175a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1175a8:
    // 0x1175a8: 0xc062d50  jal         func_18B540
label_1175ac:
    if (ctx->pc == 0x1175ACu) {
        ctx->pc = 0x1175ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1175A8u;
        // 0x1175ac: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1175B0u;
        goto label_1175b0;
    }
    ctx->pc = 0x1175A8u;
    SET_GPR_U32(ctx, 31, 0x1175B0u);
    ctx->pc = 0x1175ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1175A8u;
    // 0x1175ac: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1175A8u, 0x1175B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1175B0u;
label_1175b0:
    // 0x1175b0: 0xc062d4c  jal         func_18B530
label_1175b4:
    if (ctx->pc == 0x1175B4u) {
        ctx->pc = 0x1175B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1175B0u;
        // 0x1175b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1175B8u;
        goto label_1175b8;
    }
    ctx->pc = 0x1175B0u;
    SET_GPR_U32(ctx, 31, 0x1175B8u);
    ctx->pc = 0x1175B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1175B0u;
    // 0x1175b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B530u, 0x1175B0u, 0x1175B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1175B8u;
label_1175b8:
    // 0x1175b8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1175b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1175bc:
    // 0x1175bc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1175bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1175c0:
    // 0x1175c0: 0x8f828318  lw          $v0, -0x7CE8($gp)
    ctx->pc = 0x1175c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935320)));
label_1175c4:
    // 0x1175c4: 0xc04b0e8  jal         func_12C3A0
label_1175c8:
    if (ctx->pc == 0x1175C8u) {
        ctx->pc = 0x1175C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1175C4u;
        // 0x1175c8: 0x522021  addu        $a0, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1175CCu;
        goto label_1175cc;
    }
    ctx->pc = 0x1175C4u;
    SET_GPR_U32(ctx, 31, 0x1175CCu);
    ctx->pc = 0x1175C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1175C4u;
    // 0x1175c8: 0x522021  addu        $a0, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C3A0u, 0x1175C4u, 0x1175CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1175CCu;
label_1175cc:
    // 0x1175cc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1175ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1175d0:
    // 0x1175d0: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x1175d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_1175d4:
    // 0x1175d4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_1175d8:
    if (ctx->pc == 0x1175D8u) {
        ctx->pc = 0x1175D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1175D4u;
        // 0x1175d8: 0x26520078  addiu       $s2, $s2, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1175DCu;
        goto label_1175dc;
    }
    ctx->pc = 0x1175D4u;
    {
        const bool branch_taken_0x1175d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1175D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1175D4u;
        // 0x1175d8: 0x26520078  addiu       $s2, $s2, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1175d4) {
            ctx->pc = 0x1175C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1175c0;
        }
    }
    ctx->pc = 0x1175DCu;
label_1175dc:
    // 0x1175dc: 0x8f838348  lw          $v1, -0x7CB8($gp)
    ctx->pc = 0x1175dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935368)));
label_1175e0:
    // 0x1175e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1175e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1175e4:
    // 0x1175e4: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_1175e8:
    if (ctx->pc == 0x1175E8u) {
        ctx->pc = 0x1175E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1175E4u;
        // 0x1175e8: 0x3c040023  lui         $a0, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)35 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1175ECu;
        goto label_1175ec;
    }
    ctx->pc = 0x1175E4u;
    {
        const bool branch_taken_0x1175e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1175E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1175E4u;
        // 0x1175e8: 0x3c040023  lui         $a0, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)35 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1175e4) {
            ctx->pc = 0x11760Cu;
            goto label_11760c;
        }
    }
    ctx->pc = 0x1175ECu;
label_1175ec:
    // 0x1175ec: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1175f0:
    if (ctx->pc == 0x1175F0u) {
        ctx->pc = 0x1175F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1175ECu;
        // 0x1175f0: 0x3c040023  lui         $a0, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)35 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1175F4u;
        goto label_1175f4;
    }
    ctx->pc = 0x1175ECu;
    {
        const bool branch_taken_0x1175ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1175F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1175ECu;
        // 0x1175f0: 0x3c040023  lui         $a0, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)35 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1175ec) {
            ctx->pc = 0x1175FCu;
            goto label_1175fc;
        }
    }
    ctx->pc = 0x1175F4u;
label_1175f4:
    // 0x1175f4: 0x10000008  b           . + 4 + (0x8 << 2)
label_1175f8:
    if (ctx->pc == 0x1175F8u) {
        ctx->pc = 0x1175F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1175F4u;
        // 0x1175f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1175FCu;
        goto label_1175fc;
    }
    ctx->pc = 0x1175F4u;
    {
        const bool branch_taken_0x1175f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1175F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1175F4u;
        // 0x1175f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1175f4) {
            ctx->pc = 0x117618u;
            goto label_117618;
        }
    }
    ctx->pc = 0x1175FCu;
label_1175fc:
    // 0x1175fc: 0xc0828ce  jal         func_20A338
label_117600:
    if (ctx->pc == 0x117600u) {
        ctx->pc = 0x117600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1175FCu;
        // 0x117600: 0x2484d8c0  addiu       $a0, $a0, -0x2740 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117604u;
        goto label_117604;
    }
    ctx->pc = 0x1175FCu;
    SET_GPR_U32(ctx, 31, 0x117604u);
    ctx->pc = 0x117600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1175FCu;
    // 0x117600: 0x2484d8c0  addiu       $a0, $a0, -0x2740 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A338u, 0x1175FCu, 0x117604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117604u;
label_117604:
    // 0x117604: 0x10000003  b           . + 4 + (0x3 << 2)
label_117608:
    if (ctx->pc == 0x117608u) {
        ctx->pc = 0x11760Cu;
        goto label_11760c;
    }
    ctx->pc = 0x117604u;
    {
        const bool branch_taken_0x117604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x117604) {
            ctx->pc = 0x117614u;
            goto label_117614;
        }
    }
    ctx->pc = 0x11760Cu;
label_11760c:
    // 0x11760c: 0xc0828ce  jal         func_20A338
label_117610:
    if (ctx->pc == 0x117610u) {
        ctx->pc = 0x117610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11760Cu;
        // 0x117610: 0x2484d8f0  addiu       $a0, $a0, -0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957296));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117614u;
        goto label_117614;
    }
    ctx->pc = 0x11760Cu;
    SET_GPR_U32(ctx, 31, 0x117614u);
    ctx->pc = 0x117610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11760Cu;
    // 0x117610: 0x2484d8f0  addiu       $a0, $a0, -0x2710 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A338u, 0x11760Cu, 0x117614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117614u;
label_117614:
    // 0x117614: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x117614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_117618:
    // 0x117618: 0xc082b0a  jal         func_20AC28
label_11761c:
    if (ctx->pc == 0x11761Cu) {
        ctx->pc = 0x11761Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117618u;
        // 0x11761c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117620u;
        goto label_117620;
    }
    ctx->pc = 0x117618u;
    SET_GPR_U32(ctx, 31, 0x117620u);
    ctx->pc = 0x11761Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117618u;
    // 0x11761c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20AC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AC28u, 0x117618u, 0x117620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117620u;
label_117620:
    // 0x117620: 0x8f83833c  lw          $v1, -0x7CC4($gp)
    ctx->pc = 0x117620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935356)));
label_117624:
    // 0x117624: 0x24020070  addiu       $v0, $zero, 0x70
    ctx->pc = 0x117624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_117628:
    // 0x117628: 0x8f848334  lw          $a0, -0x7CCC($gp)
    ctx->pc = 0x117628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935348)));
label_11762c:
    // 0x11762c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x11762cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_117630:
    // 0x117630: 0xaf83833c  sw          $v1, -0x7CC4($gp)
    ctx->pc = 0x117630u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935356), GPR_U32(ctx, 3));
label_117634:
    // 0x117634: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x117634u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
label_117638:
    // 0x117638: 0xa0820003  sb          $v0, 0x3($a0)
    ctx->pc = 0x117638u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
label_11763c:
    // 0x11763c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x11763cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_117640:
    // 0x117640: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x117640u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
label_117644:
    // 0x117644: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x117644u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_117648:
    // 0x117648: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x117648u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_11764c:
    // 0x11764c: 0x8f828334  lw          $v0, -0x7CCC($gp)
    ctx->pc = 0x11764cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935348)));
label_117650:
    // 0x117650: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x117650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_117654:
    // 0x117654: 0xc045f24  jal         func_117C90
label_117658:
    if (ctx->pc == 0x117658u) {
        ctx->pc = 0x117658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117654u;
        // 0x117658: 0xaf828334  sw          $v0, -0x7CCC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935348), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11765Cu;
        goto label_11765c;
    }
    ctx->pc = 0x117654u;
    SET_GPR_U32(ctx, 31, 0x11765Cu);
    ctx->pc = 0x117658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117654u;
    // 0x117658: 0xaf828334  sw          $v0, -0x7CCC($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935348), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117C90u, 0x117654u, 0x11765Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11765Cu;
label_11765c:
    // 0x11765c: 0xc045f34  jal         func_117CD0
label_117660:
    if (ctx->pc == 0x117660u) {
        ctx->pc = 0x117660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11765Cu;
        // 0x117660: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117664u;
        goto label_117664;
    }
    ctx->pc = 0x11765Cu;
    SET_GPR_U32(ctx, 31, 0x117664u);
    ctx->pc = 0x117660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11765Cu;
    // 0x117660: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117CD0u, 0x11765Cu, 0x117664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117664u;
label_117664:
    // 0x117664: 0xaf918338  sw          $s1, -0x7CC8($gp)
    ctx->pc = 0x117664u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935352), GPR_U32(ctx, 17));
label_117668:
    // 0x117668: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x117668u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
label_11766c:
    // 0x11766c: 0xac209020  sw          $zero, -0x6FE0($at)
    ctx->pc = 0x11766cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938656), GPR_U32(ctx, 0));
label_117670:
    // 0x117670: 0x27838328  addiu       $v1, $gp, -0x7CD8
    ctx->pc = 0x117670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935336));
label_117674:
    // 0x117674: 0x8f858330  lw          $a1, -0x7CD0($gp)
    ctx->pc = 0x117674u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935344)));
label_117678:
    // 0x117678: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x117678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
label_11767c:
    // 0x11767c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x11767cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_117680:
    // 0x117680: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x117680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_117684:
    // 0x117684: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x117684u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_117688:
    // 0x117688: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x117688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_11768c:
    // 0x11768c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x11768cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_117690:
    // 0x117690: 0x3193c  dsll32      $v1, $v1, 4
    ctx->pc = 0x117690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 4));
label_117694:
    // 0x117694: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x117694u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
label_117698:
    // 0x117698: 0xac239030  sw          $v1, -0x6FD0($at)
    ctx->pc = 0x117698u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938672), GPR_U32(ctx, 3));
label_11769c:
    // 0x11769c: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x11769cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
label_1176a0:
    // 0x1176a0: 0xc07ae28  jal         func_1EB8A0
label_1176a4:
    if (ctx->pc == 0x1176A4u) {
        ctx->pc = 0x1176A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1176A0u;
        // 0x1176a4: 0xac22e010  sw          $v0, -0x1FF0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294959120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1176A8u;
        goto label_1176a8;
    }
    ctx->pc = 0x1176A0u;
    SET_GPR_U32(ctx, 31, 0x1176A8u);
    ctx->pc = 0x1176A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1176A0u;
    // 0x1176a4: 0xac22e010  sw          $v0, -0x1FF0($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959120), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB8A0u, 0x1176A0u, 0x1176A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1176A8u;
label_1176a8:
    // 0x1176a8: 0x240301c5  addiu       $v1, $zero, 0x1C5
    ctx->pc = 0x1176a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 453));
label_1176ac:
    // 0x1176ac: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x1176acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
label_1176b0:
    // 0x1176b0: 0xac239000  sw          $v1, -0x7000($at)
    ctx->pc = 0x1176b0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938624), GPR_U32(ctx, 3));
label_1176b4:
    // 0x1176b4: 0x27858328  addiu       $a1, $gp, -0x7CD8
    ctx->pc = 0x1176b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935336));
label_1176b8:
    // 0x1176b8: 0x8f868330  lw          $a2, -0x7CD0($gp)
    ctx->pc = 0x1176b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935344)));
label_1176bc:
    // 0x1176bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1176bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1176c0:
    // 0x1176c0: 0x8f848348  lw          $a0, -0x7CB8($gp)
    ctx->pc = 0x1176c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935368)));
label_1176c4:
    // 0x1176c4: 0x6302b  sltu        $a2, $zero, $a2
    ctx->pc = 0x1176c4u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_1176c8:
    // 0x1176c8: 0x38c60001  xori        $a2, $a2, 0x1
    ctx->pc = 0x1176c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)1);
label_1176cc:
    // 0x1176cc: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x1176ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_1176d0:
    // 0x1176d0: 0xaf868330  sw          $a2, -0x7CD0($gp)
    ctx->pc = 0x1176d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935344), GPR_U32(ctx, 6));
label_1176d4:
    // 0x1176d4: 0x8f868330  lw          $a2, -0x7CD0($gp)
    ctx->pc = 0x1176d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935344)));
label_1176d8:
    // 0x1176d8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1176d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1176dc:
    // 0x1176dc: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1176dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1176e0:
    // 0x1176e0: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1176e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1176e4:
    // 0x1176e4: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
label_1176e8:
    if (ctx->pc == 0x1176E8u) {
        ctx->pc = 0x1176E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1176E4u;
        // 0x1176e8: 0xaf858334  sw          $a1, -0x7CCC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935348), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1176ECu;
        goto label_1176ec;
    }
    ctx->pc = 0x1176E4u;
    {
        const bool branch_taken_0x1176e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1176E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1176E4u;
        // 0x1176e8: 0xaf858334  sw          $a1, -0x7CCC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935348), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1176e4) {
            ctx->pc = 0x11771Cu;
            goto label_11771c;
        }
    }
    ctx->pc = 0x1176ECu;
label_1176ec:
    // 0x1176ec: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_1176f0:
    if (ctx->pc == 0x1176F0u) {
        ctx->pc = 0x1176F4u;
        goto label_1176f4;
    }
    ctx->pc = 0x1176ECu;
    {
        const bool branch_taken_0x1176ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1176ec) {
            ctx->pc = 0x1176FCu;
            goto label_1176fc;
        }
    }
    ctx->pc = 0x1176F4u;
label_1176f4:
    // 0x1176f4: 0x10000010  b           . + 4 + (0x10 << 2)
label_1176f8:
    if (ctx->pc == 0x1176F8u) {
        ctx->pc = 0x1176F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1176F4u;
        // 0x1176f8: 0x8f83831c  lw          $v1, -0x7CE4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935324)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1176FCu;
        goto label_1176fc;
    }
    ctx->pc = 0x1176F4u;
    {
        const bool branch_taken_0x1176f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1176F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1176F4u;
        // 0x1176f8: 0x8f83831c  lw          $v1, -0x7CE4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1176f4) {
            ctx->pc = 0x117738u;
            goto label_117738;
        }
    }
    ctx->pc = 0x1176FCu;
label_1176fc:
    // 0x1176fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1176fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_117700:
    // 0x117700: 0xc045e78  jal         func_1179E0
label_117704:
    if (ctx->pc == 0x117704u) {
        ctx->pc = 0x117704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117700u;
        // 0x117704: 0x27858334  addiu       $a1, $gp, -0x7CCC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935348));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117708u;
        goto label_117708;
    }
    ctx->pc = 0x117700u;
    SET_GPR_U32(ctx, 31, 0x117708u);
    ctx->pc = 0x117704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117700u;
    // 0x117704: 0x27858334  addiu       $a1, $gp, -0x7CCC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935348));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1179E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1179E0u, 0x117700u, 0x117708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117708u;
label_117708:
    // 0x117708: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x117708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11770c:
    // 0x11770c: 0xc045eac  jal         func_117AB0
label_117710:
    if (ctx->pc == 0x117710u) {
        ctx->pc = 0x117710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11770Cu;
        // 0x117710: 0x27858334  addiu       $a1, $gp, -0x7CCC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935348));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117714u;
        goto label_117714;
    }
    ctx->pc = 0x11770Cu;
    SET_GPR_U32(ctx, 31, 0x117714u);
    ctx->pc = 0x117710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11770Cu;
    // 0x117710: 0x27858334  addiu       $a1, $gp, -0x7CCC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935348));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117AB0u, 0x11770Cu, 0x117714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117714u;
label_117714:
    // 0x117714: 0x10000007  b           . + 4 + (0x7 << 2)
label_117718:
    if (ctx->pc == 0x117718u) {
        ctx->pc = 0x11771Cu;
        goto label_11771c;
    }
    ctx->pc = 0x117714u;
    {
        const bool branch_taken_0x117714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x117714) {
            ctx->pc = 0x117734u;
            goto label_117734;
        }
    }
    ctx->pc = 0x11771Cu;
label_11771c:
    // 0x11771c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11771cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_117720:
    // 0x117720: 0xc045ecc  jal         func_117B30
label_117724:
    if (ctx->pc == 0x117724u) {
        ctx->pc = 0x117724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117720u;
        // 0x117724: 0x27858334  addiu       $a1, $gp, -0x7CCC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935348));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117728u;
        goto label_117728;
    }
    ctx->pc = 0x117720u;
    SET_GPR_U32(ctx, 31, 0x117728u);
    ctx->pc = 0x117724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117720u;
    // 0x117724: 0x27858334  addiu       $a1, $gp, -0x7CCC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935348));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117B30u, 0x117720u, 0x117728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117728u;
label_117728:
    // 0x117728: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x117728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11772c:
    // 0x11772c: 0xc045f00  jal         func_117C00
label_117730:
    if (ctx->pc == 0x117730u) {
        ctx->pc = 0x117730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11772Cu;
        // 0x117730: 0x27858334  addiu       $a1, $gp, -0x7CCC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935348));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117734u;
        goto label_117734;
    }
    ctx->pc = 0x11772Cu;
    SET_GPR_U32(ctx, 31, 0x117734u);
    ctx->pc = 0x117730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11772Cu;
    // 0x117730: 0x27858334  addiu       $a1, $gp, -0x7CCC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935348));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117C00u, 0x11772Cu, 0x117734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117734u;
label_117734:
    // 0x117734: 0x8f83831c  lw          $v1, -0x7CE4($gp)
    ctx->pc = 0x117734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935324)));
label_117738:
    // 0x117738: 0x14600069  bnez        $v1, . + 4 + (0x69 << 2)
label_11773c:
    if (ctx->pc == 0x11773Cu) {
        ctx->pc = 0x11773Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117738u;
        // 0x11773c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117740u;
        goto label_117740;
    }
    ctx->pc = 0x117738u;
    {
        const bool branch_taken_0x117738 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11773Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117738u;
        // 0x11773c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117738) {
            ctx->pc = 0x1178E0u;
            goto label_1178e0;
        }
    }
    ctx->pc = 0x117740u;
label_117740:
    // 0x117740: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x117740u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_117744:
    // 0x117744: 0x8f828318  lw          $v0, -0x7CE8($gp)
    ctx->pc = 0x117744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935320)));
label_117748:
    // 0x117748: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x117748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11774c:
    // 0x11774c: 0x8e19000c  lw          $t9, 0xC($s0)
    ctx->pc = 0x11774cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_117750:
    // 0x117750: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x117750u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_117754:
    // 0x117754: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x117754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_117758:
    // 0x117758: 0x84450004  lh          $a1, 0x4($v0)
    ctx->pc = 0x117758u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_11775c:
    // 0x11775c: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x11775cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_117760:
    // 0x117760: 0x320f809  jalr        $t9
label_117764:
    if (ctx->pc == 0x117764u) {
        ctx->pc = 0x117764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117760u;
        // 0x117764: 0x24520004  addiu       $s2, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117768u;
        goto label_117768;
    }
    ctx->pc = 0x117760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x117768u);
        ctx->pc = 0x117764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117760u;
        // 0x117764: 0x24520004  addiu       $s2, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117760u, 0x117768u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x117768u;
label_117768:
    // 0x117768: 0x8e19000c  lw          $t9, 0xC($s0)
    ctx->pc = 0x117768u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_11776c:
    // 0x11776c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11776cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_117770:
    // 0x117770: 0x86450002  lh          $a1, 0x2($s2)
    ctx->pc = 0x117770u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_117774:
    // 0x117774: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x117774u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_117778:
    // 0x117778: 0x320f809  jalr        $t9
label_11777c:
    if (ctx->pc == 0x11777Cu) {
        ctx->pc = 0x11777Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117778u;
        // 0x11777c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117780u;
        goto label_117780;
    }
    ctx->pc = 0x117778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x117780u);
        ctx->pc = 0x11777Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117778u;
        // 0x11777c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117778u, 0x117780u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x117780u;
label_117780:
    // 0x117780: 0x8e19000c  lw          $t9, 0xC($s0)
    ctx->pc = 0x117780u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_117784:
    // 0x117784: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x117784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_117788:
    // 0x117788: 0x86450004  lh          $a1, 0x4($s2)
    ctx->pc = 0x117788u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
label_11778c:
    // 0x11778c: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x11778cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_117790:
    // 0x117790: 0x320f809  jalr        $t9
label_117794:
    if (ctx->pc == 0x117794u) {
        ctx->pc = 0x117794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117790u;
        // 0x117794: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117798u;
        goto label_117798;
    }
    ctx->pc = 0x117790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x117798u);
        ctx->pc = 0x117794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117790u;
        // 0x117794: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117790u, 0x117798u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x117798u;
label_117798:
    // 0x117798: 0x8e19000c  lw          $t9, 0xC($s0)
    ctx->pc = 0x117798u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_11779c:
    // 0x11779c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11779cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1177a0:
    // 0x1177a0: 0x86450006  lh          $a1, 0x6($s2)
    ctx->pc = 0x1177a0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
label_1177a4:
    // 0x1177a4: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x1177a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_1177a8:
    // 0x1177a8: 0x320f809  jalr        $t9
label_1177ac:
    if (ctx->pc == 0x1177ACu) {
        ctx->pc = 0x1177ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1177A8u;
        // 0x1177ac: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1177B0u;
        goto label_1177b0;
    }
    ctx->pc = 0x1177A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1177B0u);
        ctx->pc = 0x1177ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1177A8u;
        // 0x1177ac: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1177A8u, 0x1177B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1177B0u;
label_1177b0:
    // 0x1177b0: 0x8e19000c  lw          $t9, 0xC($s0)
    ctx->pc = 0x1177b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1177b4:
    // 0x1177b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1177b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1177b8:
    // 0x1177b8: 0x86450008  lh          $a1, 0x8($s2)
    ctx->pc = 0x1177b8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
label_1177bc:
    // 0x1177bc: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x1177bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_1177c0:
    // 0x1177c0: 0x320f809  jalr        $t9
label_1177c4:
    if (ctx->pc == 0x1177C4u) {
        ctx->pc = 0x1177C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1177C0u;
        // 0x1177c4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1177C8u;
        goto label_1177c8;
    }
    ctx->pc = 0x1177C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1177C8u);
        ctx->pc = 0x1177C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1177C0u;
        // 0x1177c4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1177C0u, 0x1177C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1177C8u;
label_1177c8:
    // 0x1177c8: 0x8e19000c  lw          $t9, 0xC($s0)
    ctx->pc = 0x1177c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1177cc:
    // 0x1177cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1177ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1177d0:
    // 0x1177d0: 0x8645000a  lh          $a1, 0xA($s2)
    ctx->pc = 0x1177d0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
label_1177d4:
    // 0x1177d4: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1177d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1177d8:
    // 0x1177d8: 0x320f809  jalr        $t9
label_1177dc:
    if (ctx->pc == 0x1177DCu) {
        ctx->pc = 0x1177DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1177D8u;
        // 0x1177dc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1177E0u;
        goto label_1177e0;
    }
    ctx->pc = 0x1177D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1177E0u);
        ctx->pc = 0x1177DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1177D8u;
        // 0x1177dc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1177D8u, 0x1177E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1177E0u;
label_1177e0:
    // 0x1177e0: 0x8e19000c  lw          $t9, 0xC($s0)
    ctx->pc = 0x1177e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1177e4:
    // 0x1177e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1177e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1177e8:
    // 0x1177e8: 0x8645000c  lh          $a1, 0xC($s2)
    ctx->pc = 0x1177e8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 12)));
label_1177ec:
    // 0x1177ec: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1177ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1177f0:
    // 0x1177f0: 0x320f809  jalr        $t9
label_1177f4:
    if (ctx->pc == 0x1177F4u) {
        ctx->pc = 0x1177F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1177F0u;
        // 0x1177f4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1177F8u;
        goto label_1177f8;
    }
    ctx->pc = 0x1177F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1177F8u);
        ctx->pc = 0x1177F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1177F0u;
        // 0x1177f4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1177F0u, 0x1177F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1177F8u;
label_1177f8:
    // 0x1177f8: 0x8e19000c  lw          $t9, 0xC($s0)
    ctx->pc = 0x1177f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1177fc:
    // 0x1177fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1177fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_117800:
    // 0x117800: 0x8645000e  lh          $a1, 0xE($s2)
    ctx->pc = 0x117800u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
label_117804:
    // 0x117804: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x117804u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_117808:
    // 0x117808: 0x320f809  jalr        $t9
label_11780c:
    if (ctx->pc == 0x11780Cu) {
        ctx->pc = 0x11780Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117808u;
        // 0x11780c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117810u;
        goto label_117810;
    }
    ctx->pc = 0x117808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x117810u);
        ctx->pc = 0x11780Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117808u;
        // 0x11780c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117808u, 0x117810u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x117810u;
label_117810:
    // 0x117810: 0x8e19000c  lw          $t9, 0xC($s0)
    ctx->pc = 0x117810u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_117814:
    // 0x117814: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x117814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_117818:
    // 0x117818: 0x86450010  lh          $a1, 0x10($s2)
    ctx->pc = 0x117818u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
label_11781c:
    // 0x11781c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x11781cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_117820:
    // 0x117820: 0x320f809  jalr        $t9
label_117824:
    if (ctx->pc == 0x117824u) {
        ctx->pc = 0x117824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117820u;
        // 0x117824: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117828u;
        goto label_117828;
    }
    ctx->pc = 0x117820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x117828u);
        ctx->pc = 0x117824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117820u;
        // 0x117824: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117820u, 0x117828u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x117828u;
label_117828:
    // 0x117828: 0x8e19000c  lw          $t9, 0xC($s0)
    ctx->pc = 0x117828u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_11782c:
    // 0x11782c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11782cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_117830:
    // 0x117830: 0x86450012  lh          $a1, 0x12($s2)
    ctx->pc = 0x117830u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
label_117834:
    // 0x117834: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x117834u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_117838:
    // 0x117838: 0x320f809  jalr        $t9
label_11783c:
    if (ctx->pc == 0x11783Cu) {
        ctx->pc = 0x11783Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117838u;
        // 0x11783c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117840u;
        goto label_117840;
    }
    ctx->pc = 0x117838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x117840u);
        ctx->pc = 0x11783Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117838u;
        // 0x11783c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117838u, 0x117840u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x117840u;
label_117840:
    // 0x117840: 0x8e19000c  lw          $t9, 0xC($s0)
    ctx->pc = 0x117840u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_117844:
    // 0x117844: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x117844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_117848:
    // 0x117848: 0x86450014  lh          $a1, 0x14($s2)
    ctx->pc = 0x117848u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 20)));
label_11784c:
    // 0x11784c: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x11784cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_117850:
    // 0x117850: 0x320f809  jalr        $t9
label_117854:
    if (ctx->pc == 0x117854u) {
        ctx->pc = 0x117854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117850u;
        // 0x117854: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117858u;
        goto label_117858;
    }
    ctx->pc = 0x117850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x117858u);
        ctx->pc = 0x117854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117850u;
        // 0x117854: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117850u, 0x117858u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x117858u;
label_117858:
    // 0x117858: 0x8e19000c  lw          $t9, 0xC($s0)
    ctx->pc = 0x117858u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_11785c:
    // 0x11785c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11785cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_117860:
    // 0x117860: 0x86450016  lh          $a1, 0x16($s2)
    ctx->pc = 0x117860u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 22)));
label_117864:
    // 0x117864: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x117864u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_117868:
    // 0x117868: 0x320f809  jalr        $t9
label_11786c:
    if (ctx->pc == 0x11786Cu) {
        ctx->pc = 0x11786Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117868u;
        // 0x11786c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117870u;
        goto label_117870;
    }
    ctx->pc = 0x117868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x117870u);
        ctx->pc = 0x11786Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117868u;
        // 0x11786c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117868u, 0x117870u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x117870u;
label_117870:
    // 0x117870: 0x8e19000c  lw          $t9, 0xC($s0)
    ctx->pc = 0x117870u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_117874:
    // 0x117874: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x117874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_117878:
    // 0x117878: 0x86450018  lh          $a1, 0x18($s2)
    ctx->pc = 0x117878u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
label_11787c:
    // 0x11787c: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x11787cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_117880:
    // 0x117880: 0x320f809  jalr        $t9
label_117884:
    if (ctx->pc == 0x117884u) {
        ctx->pc = 0x117884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117880u;
        // 0x117884: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117888u;
        goto label_117888;
    }
    ctx->pc = 0x117880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x117888u);
        ctx->pc = 0x117884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117880u;
        // 0x117884: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117880u, 0x117888u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x117888u;
label_117888:
    // 0x117888: 0x8e19000c  lw          $t9, 0xC($s0)
    ctx->pc = 0x117888u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_11788c:
    // 0x11788c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11788cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_117890:
    // 0x117890: 0x8645001a  lh          $a1, 0x1A($s2)
    ctx->pc = 0x117890u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 26)));
label_117894:
    // 0x117894: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x117894u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_117898:
    // 0x117898: 0x320f809  jalr        $t9
label_11789c:
    if (ctx->pc == 0x11789Cu) {
        ctx->pc = 0x11789Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117898u;
        // 0x11789c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1178A0u;
        goto label_1178a0;
    }
    ctx->pc = 0x117898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1178A0u);
        ctx->pc = 0x11789Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117898u;
        // 0x11789c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117898u, 0x1178A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1178A0u;
label_1178a0:
    // 0x1178a0: 0x8e19000c  lw          $t9, 0xC($s0)
    ctx->pc = 0x1178a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1178a4:
    // 0x1178a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1178a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1178a8:
    // 0x1178a8: 0x8645001c  lh          $a1, 0x1C($s2)
    ctx->pc = 0x1178a8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 28)));
label_1178ac:
    // 0x1178ac: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x1178acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_1178b0:
    // 0x1178b0: 0x320f809  jalr        $t9
label_1178b4:
    if (ctx->pc == 0x1178B4u) {
        ctx->pc = 0x1178B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1178B0u;
        // 0x1178b4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1178B8u;
        goto label_1178b8;
    }
    ctx->pc = 0x1178B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1178B8u);
        ctx->pc = 0x1178B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1178B0u;
        // 0x1178b4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1178B0u, 0x1178B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1178B8u;
label_1178b8:
    // 0x1178b8: 0x8e19000c  lw          $t9, 0xC($s0)
    ctx->pc = 0x1178b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1178bc:
    // 0x1178bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1178bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1178c0:
    // 0x1178c0: 0x8645001e  lh          $a1, 0x1E($s2)
    ctx->pc = 0x1178c0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 30)));
label_1178c4:
    // 0x1178c4: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x1178c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_1178c8:
    // 0x1178c8: 0x320f809  jalr        $t9
label_1178cc:
    if (ctx->pc == 0x1178CCu) {
        ctx->pc = 0x1178CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1178C8u;
        // 0x1178cc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1178D0u;
        goto label_1178d0;
    }
    ctx->pc = 0x1178C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1178D0u);
        ctx->pc = 0x1178CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1178C8u;
        // 0x1178cc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1178C8u, 0x1178D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1178D0u;
label_1178d0:
    // 0x1178d0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1178d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1178d4:
    // 0x1178d4: 0x2a230002  slti        $v1, $s1, 0x2
    ctx->pc = 0x1178d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_1178d8:
    // 0x1178d8: 0x1460ff9a  bnez        $v1, . + 4 + (-0x66 << 2)
label_1178dc:
    if (ctx->pc == 0x1178DCu) {
        ctx->pc = 0x1178DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1178D8u;
        // 0x1178dc: 0x26730078  addiu       $s3, $s3, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1178E0u;
        goto label_1178e0;
    }
    ctx->pc = 0x1178D8u;
    {
        const bool branch_taken_0x1178d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1178DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1178D8u;
        // 0x1178dc: 0x26730078  addiu       $s3, $s3, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1178d8) {
            ctx->pc = 0x117744u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_117744;
        }
    }
    ctx->pc = 0x1178E0u;
label_1178e0:
    // 0x1178e0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1178e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1178e4:
    // 0x1178e4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1178e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1178e8:
    // 0x1178e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1178e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1178ec:
    // 0x1178ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1178ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1178f0:
    // 0x1178f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1178f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1178f4:
    // 0x1178f4: 0x3e00008  jr          $ra
label_1178f8:
    if (ctx->pc == 0x1178F8u) {
        ctx->pc = 0x1178F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1178F4u;
        // 0x1178f8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1178FCu;
        goto label_fallthrough_0x1178f4;
    }
    ctx->pc = 0x1178F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1178F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1178F4u;
        // 0x1178f8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1178F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1178f4:
    ctx->pc = 0x1178FCu;
}
