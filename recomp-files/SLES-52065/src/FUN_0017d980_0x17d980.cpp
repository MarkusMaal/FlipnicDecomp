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

// Function: FUN_0017d980
// Address: 0x17d980 - 0x17dcc4
void FUN_0017d980_0x17d980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017d980_0x17d980");
#endif

    switch (ctx->pc) {
        case 0x17d980u: goto label_17d980;
        case 0x17d984u: goto label_17d984;
        case 0x17d988u: goto label_17d988;
        case 0x17d98cu: goto label_17d98c;
        case 0x17d990u: goto label_17d990;
        case 0x17d994u: goto label_17d994;
        case 0x17d998u: goto label_17d998;
        case 0x17d99cu: goto label_17d99c;
        case 0x17d9a0u: goto label_17d9a0;
        case 0x17d9a4u: goto label_17d9a4;
        case 0x17d9a8u: goto label_17d9a8;
        case 0x17d9acu: goto label_17d9ac;
        case 0x17d9b0u: goto label_17d9b0;
        case 0x17d9b4u: goto label_17d9b4;
        case 0x17d9b8u: goto label_17d9b8;
        case 0x17d9bcu: goto label_17d9bc;
        case 0x17d9c0u: goto label_17d9c0;
        case 0x17d9c4u: goto label_17d9c4;
        case 0x17d9c8u: goto label_17d9c8;
        case 0x17d9ccu: goto label_17d9cc;
        case 0x17d9d0u: goto label_17d9d0;
        case 0x17d9d4u: goto label_17d9d4;
        case 0x17d9d8u: goto label_17d9d8;
        case 0x17d9dcu: goto label_17d9dc;
        case 0x17d9e0u: goto label_17d9e0;
        case 0x17d9e4u: goto label_17d9e4;
        case 0x17d9e8u: goto label_17d9e8;
        case 0x17d9ecu: goto label_17d9ec;
        case 0x17d9f0u: goto label_17d9f0;
        case 0x17d9f4u: goto label_17d9f4;
        case 0x17d9f8u: goto label_17d9f8;
        case 0x17d9fcu: goto label_17d9fc;
        case 0x17da00u: goto label_17da00;
        case 0x17da04u: goto label_17da04;
        case 0x17da08u: goto label_17da08;
        case 0x17da0cu: goto label_17da0c;
        case 0x17da10u: goto label_17da10;
        case 0x17da14u: goto label_17da14;
        case 0x17da18u: goto label_17da18;
        case 0x17da1cu: goto label_17da1c;
        case 0x17da20u: goto label_17da20;
        case 0x17da24u: goto label_17da24;
        case 0x17da28u: goto label_17da28;
        case 0x17da2cu: goto label_17da2c;
        case 0x17da30u: goto label_17da30;
        case 0x17da34u: goto label_17da34;
        case 0x17da38u: goto label_17da38;
        case 0x17da3cu: goto label_17da3c;
        case 0x17da40u: goto label_17da40;
        case 0x17da44u: goto label_17da44;
        case 0x17da48u: goto label_17da48;
        case 0x17da4cu: goto label_17da4c;
        case 0x17da50u: goto label_17da50;
        case 0x17da54u: goto label_17da54;
        case 0x17da58u: goto label_17da58;
        case 0x17da5cu: goto label_17da5c;
        case 0x17da60u: goto label_17da60;
        case 0x17da64u: goto label_17da64;
        case 0x17da68u: goto label_17da68;
        case 0x17da6cu: goto label_17da6c;
        case 0x17da70u: goto label_17da70;
        case 0x17da74u: goto label_17da74;
        case 0x17da78u: goto label_17da78;
        case 0x17da7cu: goto label_17da7c;
        case 0x17da80u: goto label_17da80;
        case 0x17da84u: goto label_17da84;
        case 0x17da88u: goto label_17da88;
        case 0x17da8cu: goto label_17da8c;
        case 0x17da90u: goto label_17da90;
        case 0x17da94u: goto label_17da94;
        case 0x17da98u: goto label_17da98;
        case 0x17da9cu: goto label_17da9c;
        case 0x17daa0u: goto label_17daa0;
        case 0x17daa4u: goto label_17daa4;
        case 0x17daa8u: goto label_17daa8;
        case 0x17daacu: goto label_17daac;
        case 0x17dab0u: goto label_17dab0;
        case 0x17dab4u: goto label_17dab4;
        case 0x17dab8u: goto label_17dab8;
        case 0x17dabcu: goto label_17dabc;
        case 0x17dac0u: goto label_17dac0;
        case 0x17dac4u: goto label_17dac4;
        case 0x17dac8u: goto label_17dac8;
        case 0x17daccu: goto label_17dacc;
        case 0x17dad0u: goto label_17dad0;
        case 0x17dad4u: goto label_17dad4;
        case 0x17dad8u: goto label_17dad8;
        case 0x17dadcu: goto label_17dadc;
        case 0x17dae0u: goto label_17dae0;
        case 0x17dae4u: goto label_17dae4;
        case 0x17dae8u: goto label_17dae8;
        case 0x17daecu: goto label_17daec;
        case 0x17daf0u: goto label_17daf0;
        case 0x17daf4u: goto label_17daf4;
        case 0x17daf8u: goto label_17daf8;
        case 0x17dafcu: goto label_17dafc;
        case 0x17db00u: goto label_17db00;
        case 0x17db04u: goto label_17db04;
        case 0x17db08u: goto label_17db08;
        case 0x17db0cu: goto label_17db0c;
        case 0x17db10u: goto label_17db10;
        case 0x17db14u: goto label_17db14;
        case 0x17db18u: goto label_17db18;
        case 0x17db1cu: goto label_17db1c;
        case 0x17db20u: goto label_17db20;
        case 0x17db24u: goto label_17db24;
        case 0x17db28u: goto label_17db28;
        case 0x17db2cu: goto label_17db2c;
        case 0x17db30u: goto label_17db30;
        case 0x17db34u: goto label_17db34;
        case 0x17db38u: goto label_17db38;
        case 0x17db3cu: goto label_17db3c;
        case 0x17db40u: goto label_17db40;
        case 0x17db44u: goto label_17db44;
        case 0x17db48u: goto label_17db48;
        case 0x17db4cu: goto label_17db4c;
        case 0x17db50u: goto label_17db50;
        case 0x17db54u: goto label_17db54;
        case 0x17db58u: goto label_17db58;
        case 0x17db5cu: goto label_17db5c;
        case 0x17db60u: goto label_17db60;
        case 0x17db64u: goto label_17db64;
        case 0x17db68u: goto label_17db68;
        case 0x17db6cu: goto label_17db6c;
        case 0x17db70u: goto label_17db70;
        case 0x17db74u: goto label_17db74;
        case 0x17db78u: goto label_17db78;
        case 0x17db7cu: goto label_17db7c;
        case 0x17db80u: goto label_17db80;
        case 0x17db84u: goto label_17db84;
        case 0x17db88u: goto label_17db88;
        case 0x17db8cu: goto label_17db8c;
        case 0x17db90u: goto label_17db90;
        case 0x17db94u: goto label_17db94;
        case 0x17db98u: goto label_17db98;
        case 0x17db9cu: goto label_17db9c;
        case 0x17dba0u: goto label_17dba0;
        case 0x17dba4u: goto label_17dba4;
        case 0x17dba8u: goto label_17dba8;
        case 0x17dbacu: goto label_17dbac;
        case 0x17dbb0u: goto label_17dbb0;
        case 0x17dbb4u: goto label_17dbb4;
        case 0x17dbb8u: goto label_17dbb8;
        case 0x17dbbcu: goto label_17dbbc;
        case 0x17dbc0u: goto label_17dbc0;
        case 0x17dbc4u: goto label_17dbc4;
        case 0x17dbc8u: goto label_17dbc8;
        case 0x17dbccu: goto label_17dbcc;
        case 0x17dbd0u: goto label_17dbd0;
        case 0x17dbd4u: goto label_17dbd4;
        case 0x17dbd8u: goto label_17dbd8;
        case 0x17dbdcu: goto label_17dbdc;
        case 0x17dbe0u: goto label_17dbe0;
        case 0x17dbe4u: goto label_17dbe4;
        case 0x17dbe8u: goto label_17dbe8;
        case 0x17dbecu: goto label_17dbec;
        case 0x17dbf0u: goto label_17dbf0;
        case 0x17dbf4u: goto label_17dbf4;
        case 0x17dbf8u: goto label_17dbf8;
        case 0x17dbfcu: goto label_17dbfc;
        case 0x17dc00u: goto label_17dc00;
        case 0x17dc04u: goto label_17dc04;
        case 0x17dc08u: goto label_17dc08;
        case 0x17dc0cu: goto label_17dc0c;
        case 0x17dc10u: goto label_17dc10;
        case 0x17dc14u: goto label_17dc14;
        case 0x17dc18u: goto label_17dc18;
        case 0x17dc1cu: goto label_17dc1c;
        case 0x17dc20u: goto label_17dc20;
        case 0x17dc24u: goto label_17dc24;
        case 0x17dc28u: goto label_17dc28;
        case 0x17dc2cu: goto label_17dc2c;
        case 0x17dc30u: goto label_17dc30;
        case 0x17dc34u: goto label_17dc34;
        case 0x17dc38u: goto label_17dc38;
        case 0x17dc3cu: goto label_17dc3c;
        case 0x17dc40u: goto label_17dc40;
        case 0x17dc44u: goto label_17dc44;
        case 0x17dc48u: goto label_17dc48;
        case 0x17dc4cu: goto label_17dc4c;
        case 0x17dc50u: goto label_17dc50;
        case 0x17dc54u: goto label_17dc54;
        case 0x17dc58u: goto label_17dc58;
        case 0x17dc5cu: goto label_17dc5c;
        case 0x17dc60u: goto label_17dc60;
        case 0x17dc64u: goto label_17dc64;
        case 0x17dc68u: goto label_17dc68;
        case 0x17dc6cu: goto label_17dc6c;
        case 0x17dc70u: goto label_17dc70;
        case 0x17dc74u: goto label_17dc74;
        case 0x17dc78u: goto label_17dc78;
        case 0x17dc7cu: goto label_17dc7c;
        case 0x17dc80u: goto label_17dc80;
        case 0x17dc84u: goto label_17dc84;
        case 0x17dc88u: goto label_17dc88;
        case 0x17dc8cu: goto label_17dc8c;
        case 0x17dc90u: goto label_17dc90;
        case 0x17dc94u: goto label_17dc94;
        case 0x17dc98u: goto label_17dc98;
        case 0x17dc9cu: goto label_17dc9c;
        case 0x17dca0u: goto label_17dca0;
        case 0x17dca4u: goto label_17dca4;
        case 0x17dca8u: goto label_17dca8;
        case 0x17dcacu: goto label_17dcac;
        case 0x17dcb0u: goto label_17dcb0;
        case 0x17dcb4u: goto label_17dcb4;
        case 0x17dcb8u: goto label_17dcb8;
        case 0x17dcbcu: goto label_17dcbc;
        case 0x17dcc0u: goto label_17dcc0;
        default: break;
    }

    ctx->pc = 0x17d980u;

label_17d980:
    // 0x17d980: 0x27bdfba0  addiu       $sp, $sp, -0x460
    ctx->pc = 0x17d980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966176));
label_17d984:
    // 0x17d984: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x17d984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_17d988:
    // 0x17d988: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17d988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_17d98c:
    // 0x17d98c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17d98cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_17d990:
    // 0x17d990: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x17d990u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17d994:
    // 0x17d994: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17d994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_17d998:
    // 0x17d998: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x17d998u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17d99c:
    // 0x17d99c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17d99cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_17d9a0:
    // 0x17d9a0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x17d9a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_17d9a4:
    // 0x17d9a4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x17d9a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_17d9a8:
    // 0x17d9a8: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x17d9a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_17d9ac:
    // 0x17d9ac: 0x27a40458  addiu       $a0, $sp, 0x458
    ctx->pc = 0x17d9acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1112));
label_17d9b0:
    // 0x17d9b0: 0x24a5f8c8  addiu       $a1, $a1, -0x738
    ctx->pc = 0x17d9b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965448));
label_17d9b4:
    // 0x17d9b4: 0xc04889c  jal         func_122270
label_17d9b8:
    if (ctx->pc == 0x17D9B8u) {
        ctx->pc = 0x17D9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D9B4u;
        // 0x17d9b8: 0x27a6045c  addiu       $a2, $sp, 0x45C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1116));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D9BCu;
        goto label_17d9bc;
    }
    ctx->pc = 0x17D9B4u;
    SET_GPR_U32(ctx, 31, 0x17D9BCu);
    ctx->pc = 0x17D9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D9B4u;
    // 0x17d9b8: 0x27a6045c  addiu       $a2, $sp, 0x45C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1116));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x17D9B4u, 0x17D9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D9BCu;
label_17d9bc:
    // 0x17d9bc: 0x1600000f  bnez        $s0, . + 4 + (0xF << 2)
label_17d9c0:
    if (ctx->pc == 0x17D9C0u) {
        ctx->pc = 0x17D9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D9BCu;
        // 0x17d9c0: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D9C4u;
        goto label_17d9c4;
    }
    ctx->pc = 0x17D9BCu;
    {
        const bool branch_taken_0x17d9bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D9BCu;
        // 0x17d9c0: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d9bc) {
            ctx->pc = 0x17D9FCu;
            goto label_17d9fc;
        }
    }
    ctx->pc = 0x17D9C4u;
label_17d9c4:
    // 0x17d9c4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x17d9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_17d9c8:
    // 0x17d9c8: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x17d9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_17d9cc:
    // 0x17d9cc: 0x24a5f8d0  addiu       $a1, $a1, -0x730
    ctx->pc = 0x17d9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965456));
label_17d9d0:
    // 0x17d9d0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x17d9d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_17d9d4:
    // 0x17d9d4: 0xc0805c8  jal         func_201720
label_17d9d8:
    if (ctx->pc == 0x17D9D8u) {
        ctx->pc = 0x17D9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D9D4u;
        // 0x17d9d8: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D9DCu;
        goto label_17d9dc;
    }
    ctx->pc = 0x17D9D4u;
    SET_GPR_U32(ctx, 31, 0x17D9DCu);
    ctx->pc = 0x17D9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D9D4u;
    // 0x17d9d8: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x17D9D4u, 0x17D9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D9DCu;
label_17d9dc:
    // 0x17d9dc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x17d9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_17d9e0:
    // 0x17d9e0: 0x27a40350  addiu       $a0, $sp, 0x350
    ctx->pc = 0x17d9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
label_17d9e4:
    // 0x17d9e4: 0x24a5f8d0  addiu       $a1, $a1, -0x730
    ctx->pc = 0x17d9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965456));
label_17d9e8:
    // 0x17d9e8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x17d9e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_17d9ec:
    // 0x17d9ec: 0xc0805c8  jal         func_201720
label_17d9f0:
    if (ctx->pc == 0x17D9F0u) {
        ctx->pc = 0x17D9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D9ECu;
        // 0x17d9f0: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D9F4u;
        goto label_17d9f4;
    }
    ctx->pc = 0x17D9ECu;
    SET_GPR_U32(ctx, 31, 0x17D9F4u);
    ctx->pc = 0x17D9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D9ECu;
    // 0x17d9f0: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x17D9ECu, 0x17D9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D9F4u;
label_17d9f4:
    // 0x17d9f4: 0x1000000e  b           . + 4 + (0xE << 2)
label_17d9f8:
    if (ctx->pc == 0x17D9F8u) {
        ctx->pc = 0x17D9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D9F4u;
        // 0x17d9f8: 0x8f82864c  lw          $v0, -0x79B4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936140)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D9FCu;
        goto label_17d9fc;
    }
    ctx->pc = 0x17D9F4u;
    {
        const bool branch_taken_0x17d9f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D9F4u;
        // 0x17d9f8: 0x8f82864c  lw          $v0, -0x79B4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d9f4) {
            ctx->pc = 0x17DA30u;
            goto label_17da30;
        }
    }
    ctx->pc = 0x17D9FCu;
label_17d9fc:
    // 0x17d9fc: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x17d9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_17da00:
    // 0x17da00: 0x24a5f8e0  addiu       $a1, $a1, -0x720
    ctx->pc = 0x17da00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965472));
label_17da04:
    // 0x17da04: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x17da04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_17da08:
    // 0x17da08: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x17da08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17da0c:
    // 0x17da0c: 0xc0805c8  jal         func_201720
label_17da10:
    if (ctx->pc == 0x17DA10u) {
        ctx->pc = 0x17DA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DA0Cu;
        // 0x17da10: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DA14u;
        goto label_17da14;
    }
    ctx->pc = 0x17DA0Cu;
    SET_GPR_U32(ctx, 31, 0x17DA14u);
    ctx->pc = 0x17DA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DA0Cu;
    // 0x17da10: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x17DA0Cu, 0x17DA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DA14u;
label_17da14:
    // 0x17da14: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x17da14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_17da18:
    // 0x17da18: 0x27a40350  addiu       $a0, $sp, 0x350
    ctx->pc = 0x17da18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
label_17da1c:
    // 0x17da1c: 0x24a5f8d0  addiu       $a1, $a1, -0x730
    ctx->pc = 0x17da1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965456));
label_17da20:
    // 0x17da20: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x17da20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_17da24:
    // 0x17da24: 0xc0805c8  jal         func_201720
label_17da28:
    if (ctx->pc == 0x17DA28u) {
        ctx->pc = 0x17DA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DA24u;
        // 0x17da28: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DA2Cu;
        goto label_17da2c;
    }
    ctx->pc = 0x17DA24u;
    SET_GPR_U32(ctx, 31, 0x17DA2Cu);
    ctx->pc = 0x17DA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DA24u;
    // 0x17da28: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x17DA24u, 0x17DA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DA2Cu;
label_17da2c:
    // 0x17da2c: 0x8f82864c  lw          $v0, -0x79B4($gp)
    ctx->pc = 0x17da2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936140)));
label_17da30:
    // 0x17da30: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_17da34:
    if (ctx->pc == 0x17DA34u) {
        ctx->pc = 0x17DA38u;
        goto label_17da38;
    }
    ctx->pc = 0x17DA30u;
    {
        const bool branch_taken_0x17da30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17da30) {
            ctx->pc = 0x17DA78u;
            goto label_17da78;
        }
    }
    ctx->pc = 0x17DA38u;
label_17da38:
    // 0x17da38: 0x8fa20458  lw          $v0, 0x458($sp)
    ctx->pc = 0x17da38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1112)));
label_17da3c:
    // 0x17da3c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x17da3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_17da40:
    // 0x17da40: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x17da40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_17da44:
    // 0x17da44: 0x24a5f8f0  addiu       $a1, $a1, -0x710
    ctx->pc = 0x17da44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965488));
label_17da48:
    // 0x17da48: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x17da48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_17da4c:
    // 0x17da4c: 0xc0805c8  jal         func_201720
label_17da50:
    if (ctx->pc == 0x17DA50u) {
        ctx->pc = 0x17DA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DA4Cu;
        // 0x17da50: 0x27a70150  addiu       $a3, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DA54u;
        goto label_17da54;
    }
    ctx->pc = 0x17DA4Cu;
    SET_GPR_U32(ctx, 31, 0x17DA54u);
    ctx->pc = 0x17DA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DA4Cu;
    // 0x17da50: 0x27a70150  addiu       $a3, $sp, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x17DA4Cu, 0x17DA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DA54u;
label_17da54:
    // 0x17da54: 0x8fa20458  lw          $v0, 0x458($sp)
    ctx->pc = 0x17da54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1112)));
label_17da58:
    // 0x17da58: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x17da58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_17da5c:
    // 0x17da5c: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x17da5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_17da60:
    // 0x17da60: 0x24a5f8f0  addiu       $a1, $a1, -0x710
    ctx->pc = 0x17da60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965488));
label_17da64:
    // 0x17da64: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x17da64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_17da68:
    // 0x17da68: 0xc0805c8  jal         func_201720
label_17da6c:
    if (ctx->pc == 0x17DA6Cu) {
        ctx->pc = 0x17DA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DA68u;
        // 0x17da6c: 0x27a70350  addiu       $a3, $sp, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DA70u;
        goto label_17da70;
    }
    ctx->pc = 0x17DA68u;
    SET_GPR_U32(ctx, 31, 0x17DA70u);
    ctx->pc = 0x17DA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DA68u;
    // 0x17da6c: 0x27a70350  addiu       $a3, $sp, 0x350 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x17DA68u, 0x17DA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DA70u;
label_17da70:
    // 0x17da70: 0x10000010  b           . + 4 + (0x10 << 2)
label_17da74:
    if (ctx->pc == 0x17DA74u) {
        ctx->pc = 0x17DA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DA70u;
        // 0x17da74: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DA78u;
        goto label_17da78;
    }
    ctx->pc = 0x17DA70u;
    {
        const bool branch_taken_0x17da70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DA70u;
        // 0x17da74: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17da70) {
            ctx->pc = 0x17DAB4u;
            goto label_17dab4;
        }
    }
    ctx->pc = 0x17DA78u;
label_17da78:
    // 0x17da78: 0x8fa20458  lw          $v0, 0x458($sp)
    ctx->pc = 0x17da78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1112)));
label_17da7c:
    // 0x17da7c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x17da7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_17da80:
    // 0x17da80: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x17da80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_17da84:
    // 0x17da84: 0x24a5f900  addiu       $a1, $a1, -0x700
    ctx->pc = 0x17da84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965504));
label_17da88:
    // 0x17da88: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x17da88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_17da8c:
    // 0x17da8c: 0xc0805c8  jal         func_201720
label_17da90:
    if (ctx->pc == 0x17DA90u) {
        ctx->pc = 0x17DA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DA8Cu;
        // 0x17da90: 0x27a70150  addiu       $a3, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DA94u;
        goto label_17da94;
    }
    ctx->pc = 0x17DA8Cu;
    SET_GPR_U32(ctx, 31, 0x17DA94u);
    ctx->pc = 0x17DA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DA8Cu;
    // 0x17da90: 0x27a70150  addiu       $a3, $sp, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x17DA8Cu, 0x17DA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DA94u;
label_17da94:
    // 0x17da94: 0x8fa20458  lw          $v0, 0x458($sp)
    ctx->pc = 0x17da94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1112)));
label_17da98:
    // 0x17da98: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x17da98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_17da9c:
    // 0x17da9c: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x17da9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_17daa0:
    // 0x17daa0: 0x24a5f900  addiu       $a1, $a1, -0x700
    ctx->pc = 0x17daa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965504));
label_17daa4:
    // 0x17daa4: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x17daa4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_17daa8:
    // 0x17daa8: 0xc0805c8  jal         func_201720
label_17daac:
    if (ctx->pc == 0x17DAACu) {
        ctx->pc = 0x17DAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DAA8u;
        // 0x17daac: 0x27a70350  addiu       $a3, $sp, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DAB0u;
        goto label_17dab0;
    }
    ctx->pc = 0x17DAA8u;
    SET_GPR_U32(ctx, 31, 0x17DAB0u);
    ctx->pc = 0x17DAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DAA8u;
    // 0x17daac: 0x27a70350  addiu       $a3, $sp, 0x350 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x17DAA8u, 0x17DAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DAB0u;
label_17dab0:
    // 0x17dab0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x17dab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_17dab4:
    // 0x17dab4: 0xc04c0e0  jal         func_130380
label_17dab8:
    if (ctx->pc == 0x17DAB8u) {
        ctx->pc = 0x17DABCu;
        goto label_17dabc;
    }
    ctx->pc = 0x17DAB4u;
    SET_GPR_U32(ctx, 31, 0x17DABCu);
    ctx->pc = 0x130380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130380u, 0x17DAB4u, 0x17DABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DABCu;
label_17dabc:
    // 0x17dabc: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x17dabcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_17dac0:
    // 0x17dac0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x17dac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_17dac4:
    // 0x17dac4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_17dac8:
    if (ctx->pc == 0x17DAC8u) {
        ctx->pc = 0x17DAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DAC4u;
        // 0x17dac8: 0x27a40250  addiu       $a0, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DACCu;
        goto label_17dacc;
    }
    ctx->pc = 0x17DAC4u;
    {
        const bool branch_taken_0x17dac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17DAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DAC4u;
        // 0x17dac8: 0x27a40250  addiu       $a0, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dac4) {
            ctx->pc = 0x17DAD8u;
            goto label_17dad8;
        }
    }
    ctx->pc = 0x17DACCu;
label_17dacc:
    // 0x17dacc: 0xc04c0e0  jal         func_130380
label_17dad0:
    if (ctx->pc == 0x17DAD0u) {
        ctx->pc = 0x17DAD4u;
        goto label_17dad4;
    }
    ctx->pc = 0x17DACCu;
    SET_GPR_U32(ctx, 31, 0x17DAD4u);
    ctx->pc = 0x130380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130380u, 0x17DACCu, 0x17DAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DAD4u;
label_17dad4:
    // 0x17dad4: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x17dad4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_17dad8:
    // 0x17dad8: 0x8fa20458  lw          $v0, 0x458($sp)
    ctx->pc = 0x17dad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1112)));
label_17dadc:
    // 0x17dadc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x17dadcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_17dae0:
    // 0x17dae0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x17dae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_17dae4:
    // 0x17dae4: 0x24a5f910  addiu       $a1, $a1, -0x6F0
    ctx->pc = 0x17dae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965520));
label_17dae8:
    // 0x17dae8: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x17dae8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_17daec:
    // 0x17daec: 0xc0805c8  jal         func_201720
label_17daf0:
    if (ctx->pc == 0x17DAF0u) {
        ctx->pc = 0x17DAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DAECu;
        // 0x17daf0: 0x27a70150  addiu       $a3, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DAF4u;
        goto label_17daf4;
    }
    ctx->pc = 0x17DAECu;
    SET_GPR_U32(ctx, 31, 0x17DAF4u);
    ctx->pc = 0x17DAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DAECu;
    // 0x17daf0: 0x27a70150  addiu       $a3, $sp, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x17DAECu, 0x17DAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DAF4u;
label_17daf4:
    // 0x17daf4: 0x8fa20458  lw          $v0, 0x458($sp)
    ctx->pc = 0x17daf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1112)));
label_17daf8:
    // 0x17daf8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x17daf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_17dafc:
    // 0x17dafc: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x17dafcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_17db00:
    // 0x17db00: 0x24a5f910  addiu       $a1, $a1, -0x6F0
    ctx->pc = 0x17db00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965520));
label_17db04:
    // 0x17db04: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x17db04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_17db08:
    // 0x17db08: 0xc0805c8  jal         func_201720
label_17db0c:
    if (ctx->pc == 0x17DB0Cu) {
        ctx->pc = 0x17DB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DB08u;
        // 0x17db0c: 0x27a70350  addiu       $a3, $sp, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DB10u;
        goto label_17db10;
    }
    ctx->pc = 0x17DB08u;
    SET_GPR_U32(ctx, 31, 0x17DB10u);
    ctx->pc = 0x17DB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DB08u;
    // 0x17db0c: 0x27a70350  addiu       $a3, $sp, 0x350 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x17DB08u, 0x17DB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DB10u;
label_17db10:
    // 0x17db10: 0xc04ce5c  jal         func_133970
label_17db14:
    if (ctx->pc == 0x17DB14u) {
        ctx->pc = 0x17DB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DB10u;
        // 0x17db14: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DB18u;
        goto label_17db18;
    }
    ctx->pc = 0x17DB10u;
    SET_GPR_U32(ctx, 31, 0x17DB18u);
    ctx->pc = 0x17DB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DB10u;
    // 0x17db14: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133970u, 0x17DB10u, 0x17DB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DB18u;
label_17db18:
    // 0x17db18: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x17db18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_17db1c:
    // 0x17db1c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x17db1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_17db20:
    // 0x17db20: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_17db24:
    if (ctx->pc == 0x17DB24u) {
        ctx->pc = 0x17DB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DB20u;
        // 0x17db24: 0x27a40250  addiu       $a0, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DB28u;
        goto label_17db28;
    }
    ctx->pc = 0x17DB20u;
    {
        const bool branch_taken_0x17db20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17DB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DB20u;
        // 0x17db24: 0x27a40250  addiu       $a0, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17db20) {
            ctx->pc = 0x17DB34u;
            goto label_17db34;
        }
    }
    ctx->pc = 0x17DB28u;
label_17db28:
    // 0x17db28: 0xc04ce5c  jal         func_133970
label_17db2c:
    if (ctx->pc == 0x17DB2Cu) {
        ctx->pc = 0x17DB30u;
        goto label_17db30;
    }
    ctx->pc = 0x17DB28u;
    SET_GPR_U32(ctx, 31, 0x17DB30u);
    ctx->pc = 0x133970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133970u, 0x17DB28u, 0x17DB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DB30u;
label_17db30:
    // 0x17db30: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x17db30u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_17db34:
    // 0x17db34: 0x8fa20458  lw          $v0, 0x458($sp)
    ctx->pc = 0x17db34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1112)));
label_17db38:
    // 0x17db38: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x17db38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_17db3c:
    // 0x17db3c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x17db3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_17db40:
    // 0x17db40: 0x24a5f920  addiu       $a1, $a1, -0x6E0
    ctx->pc = 0x17db40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965536));
label_17db44:
    // 0x17db44: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x17db44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_17db48:
    // 0x17db48: 0xc0805c8  jal         func_201720
label_17db4c:
    if (ctx->pc == 0x17DB4Cu) {
        ctx->pc = 0x17DB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DB48u;
        // 0x17db4c: 0x27a70150  addiu       $a3, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DB50u;
        goto label_17db50;
    }
    ctx->pc = 0x17DB48u;
    SET_GPR_U32(ctx, 31, 0x17DB50u);
    ctx->pc = 0x17DB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DB48u;
    // 0x17db4c: 0x27a70150  addiu       $a3, $sp, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x17DB48u, 0x17DB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DB50u;
label_17db50:
    // 0x17db50: 0x8fa20458  lw          $v0, 0x458($sp)
    ctx->pc = 0x17db50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1112)));
label_17db54:
    // 0x17db54: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x17db54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_17db58:
    // 0x17db58: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x17db58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_17db5c:
    // 0x17db5c: 0x24a5f920  addiu       $a1, $a1, -0x6E0
    ctx->pc = 0x17db5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965536));
label_17db60:
    // 0x17db60: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x17db60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_17db64:
    // 0x17db64: 0xc0805c8  jal         func_201720
label_17db68:
    if (ctx->pc == 0x17DB68u) {
        ctx->pc = 0x17DB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DB64u;
        // 0x17db68: 0x27a70350  addiu       $a3, $sp, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DB6Cu;
        goto label_17db6c;
    }
    ctx->pc = 0x17DB64u;
    SET_GPR_U32(ctx, 31, 0x17DB6Cu);
    ctx->pc = 0x17DB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DB64u;
    // 0x17db68: 0x27a70350  addiu       $a3, $sp, 0x350 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x17DB64u, 0x17DB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DB6Cu;
label_17db6c:
    // 0x17db6c: 0xc0401bc  jal         func_1006F0
label_17db70:
    if (ctx->pc == 0x17DB70u) {
        ctx->pc = 0x17DB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DB6Cu;
        // 0x17db70: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DB74u;
        goto label_17db74;
    }
    ctx->pc = 0x17DB6Cu;
    SET_GPR_U32(ctx, 31, 0x17DB74u);
    ctx->pc = 0x17DB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DB6Cu;
    // 0x17db70: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x17DB6Cu, 0x17DB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DB74u;
label_17db74:
    // 0x17db74: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_17db78:
    if (ctx->pc == 0x17DB78u) {
        ctx->pc = 0x17DB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DB74u;
        // 0x17db78: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DB7Cu;
        goto label_17db7c;
    }
    ctx->pc = 0x17DB74u;
    {
        const bool branch_taken_0x17db74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DB74u;
        // 0x17db78: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17db74) {
            ctx->pc = 0x17DB84u;
            goto label_17db84;
        }
    }
    ctx->pc = 0x17DB7Cu;
label_17db7c:
    // 0x17db7c: 0xc05f380  jal         func_17CE00
label_17db80:
    if (ctx->pc == 0x17DB80u) {
        ctx->pc = 0x17DB84u;
        goto label_17db84;
    }
    ctx->pc = 0x17DB7Cu;
    SET_GPR_U32(ctx, 31, 0x17DB84u);
    ctx->pc = 0x17CE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CE00u, 0x17DB7Cu, 0x17DB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DB84u;
label_17db84:
    // 0x17db84: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x17db84u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
label_17db88:
    // 0x17db88: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x17db88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_17db8c:
    // 0x17db8c: 0xc05f3dc  jal         func_17CF70
label_17db90:
    if (ctx->pc == 0x17DB90u) {
        ctx->pc = 0x17DB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DB8Cu;
        // 0x17db90: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DB94u;
        goto label_17db94;
    }
    ctx->pc = 0x17DB8Cu;
    SET_GPR_U32(ctx, 31, 0x17DB94u);
    ctx->pc = 0x17DB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DB8Cu;
    // 0x17db90: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CF70u, 0x17DB8Cu, 0x17DB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DB94u;
label_17db94:
    // 0x17db94: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_17db98:
    if (ctx->pc == 0x17DB98u) {
        ctx->pc = 0x17DB9Cu;
        goto label_17db9c;
    }
    ctx->pc = 0x17DB94u;
    {
        const bool branch_taken_0x17db94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17db94) {
            ctx->pc = 0x17DBB0u;
            goto label_17dbb0;
        }
    }
    ctx->pc = 0x17DB9Cu;
label_17db9c:
    // 0x17db9c: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x17db9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_17dba0:
    // 0x17dba0: 0xc05f3dc  jal         func_17CF70
label_17dba4:
    if (ctx->pc == 0x17DBA4u) {
        ctx->pc = 0x17DBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DBA0u;
        // 0x17dba4: 0x27a50250  addiu       $a1, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DBA8u;
        goto label_17dba8;
    }
    ctx->pc = 0x17DBA0u;
    SET_GPR_U32(ctx, 31, 0x17DBA8u);
    ctx->pc = 0x17DBA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DBA0u;
    // 0x17dba4: 0x27a50250  addiu       $a1, $sp, 0x250 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CF70u, 0x17DBA0u, 0x17DBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DBA8u;
label_17dba8:
    // 0x17dba8: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x17dba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_17dbac:
    // 0x17dbac: 0xa0400034  sb          $zero, 0x34($v0)
    ctx->pc = 0x17dbacu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 52), (uint8_t)GPR_U32(ctx, 0));
label_17dbb0:
    // 0x17dbb0: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x17dbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_17dbb4:
    // 0x17dbb4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_17dbb8:
    if (ctx->pc == 0x17DBB8u) {
        ctx->pc = 0x17DBBCu;
        goto label_17dbbc;
    }
    ctx->pc = 0x17DBB4u;
    {
        const bool branch_taken_0x17dbb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17dbb4) {
            ctx->pc = 0x17DC30u;
            goto label_17dc30;
        }
    }
    ctx->pc = 0x17DBBCu;
label_17dbbc:
    // 0x17dbbc: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x17dbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_17dbc0:
    // 0x17dbc0: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_17dbc4:
    if (ctx->pc == 0x17DBC4u) {
        ctx->pc = 0x17DBC8u;
        goto label_17dbc8;
    }
    ctx->pc = 0x17DBC0u;
    {
        const bool branch_taken_0x17dbc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17dbc0) {
            ctx->pc = 0x17DC30u;
            goto label_17dc30;
        }
    }
    ctx->pc = 0x17DBC8u;
label_17dbc8:
    // 0x17dbc8: 0x8fa20458  lw          $v0, 0x458($sp)
    ctx->pc = 0x17dbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1112)));
label_17dbcc:
    // 0x17dbcc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x17dbccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_17dbd0:
    // 0x17dbd0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x17dbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_17dbd4:
    // 0x17dbd4: 0x24a5f930  addiu       $a1, $a1, -0x6D0
    ctx->pc = 0x17dbd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965552));
label_17dbd8:
    // 0x17dbd8: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x17dbd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_17dbdc:
    // 0x17dbdc: 0xc0805c8  jal         func_201720
label_17dbe0:
    if (ctx->pc == 0x17DBE0u) {
        ctx->pc = 0x17DBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DBDCu;
        // 0x17dbe0: 0x27a70150  addiu       $a3, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DBE4u;
        goto label_17dbe4;
    }
    ctx->pc = 0x17DBDCu;
    SET_GPR_U32(ctx, 31, 0x17DBE4u);
    ctx->pc = 0x17DBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DBDCu;
    // 0x17dbe0: 0x27a70150  addiu       $a3, $sp, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x17DBDCu, 0x17DBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DBE4u;
label_17dbe4:
    // 0x17dbe4: 0xc0512c8  jal         func_144B20
label_17dbe8:
    if (ctx->pc == 0x17DBE8u) {
        ctx->pc = 0x17DBECu;
        goto label_17dbec;
    }
    ctx->pc = 0x17DBE4u;
    SET_GPR_U32(ctx, 31, 0x17DBECu);
    ctx->pc = 0x144B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144B20u, 0x17DBE4u, 0x17DBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DBECu;
label_17dbec:
    // 0x17dbec: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x17dbecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_17dbf0:
    // 0x17dbf0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x17dbf0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17dbf4:
    // 0x17dbf4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17dbf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17dbf8:
    // 0x17dbf8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x17dbf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_17dbfc:
    // 0x17dbfc: 0xc051248  jal         func_144920
label_17dc00:
    if (ctx->pc == 0x17DC00u) {
        ctx->pc = 0x17DC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DBFCu;
        // 0x17dc00: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DC04u;
        goto label_17dc04;
    }
    ctx->pc = 0x17DBFCu;
    SET_GPR_U32(ctx, 31, 0x17DC04u);
    ctx->pc = 0x17DC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DBFCu;
    // 0x17dc00: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144920u, 0x17DBFCu, 0x17DC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DC04u;
label_17dc04:
    // 0x17dc04: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x17dc04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_17dc08:
    // 0x17dc08: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x17dc08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17dc0c:
    // 0x17dc0c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x17dc0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17dc10:
    // 0x17dc10: 0x8f39008c  lw          $t9, 0x8C($t9)
    ctx->pc = 0x17dc10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 140)));
label_17dc14:
    // 0x17dc14: 0x320f809  jalr        $t9
label_17dc18:
    if (ctx->pc == 0x17DC18u) {
        ctx->pc = 0x17DC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DC14u;
        // 0x17dc18: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DC1Cu;
        goto label_17dc1c;
    }
    ctx->pc = 0x17DC14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17DC1Cu);
        ctx->pc = 0x17DC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DC14u;
        // 0x17dc18: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17DC14u, 0x17DC1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17DC1Cu;
label_17dc1c:
    // 0x17dc1c: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x17dc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_17dc20:
    // 0x17dc20: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x17dc20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17dc24:
    // 0x17dc24: 0x8f39008c  lw          $t9, 0x8C($t9)
    ctx->pc = 0x17dc24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 140)));
label_17dc28:
    // 0x17dc28: 0x320f809  jalr        $t9
label_17dc2c:
    if (ctx->pc == 0x17DC2Cu) {
        ctx->pc = 0x17DC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DC28u;
        // 0x17dc2c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DC30u;
        goto label_17dc30;
    }
    ctx->pc = 0x17DC28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17DC30u);
        ctx->pc = 0x17DC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DC28u;
        // 0x17dc2c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17DC28u, 0x17DC30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17DC30u;
label_17dc30:
    // 0x17dc30: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_17dc34:
    if (ctx->pc == 0x17DC34u) {
        ctx->pc = 0x17DC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DC30u;
        // 0x17dc34: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DC38u;
        goto label_17dc38;
    }
    ctx->pc = 0x17DC30u;
    {
        const bool branch_taken_0x17dc30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DC30u;
        // 0x17dc34: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dc30) {
            ctx->pc = 0x17DC4Cu;
            goto label_17dc4c;
        }
    }
    ctx->pc = 0x17DC38u;
label_17dc38:
    // 0x17dc38: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17dc38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_17dc3c:
    // 0x17dc3c: 0xc05fb94  jal         func_17EE50
label_17dc40:
    if (ctx->pc == 0x17DC40u) {
        ctx->pc = 0x17DC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DC3Cu;
        // 0x17dc40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DC44u;
        goto label_17dc44;
    }
    ctx->pc = 0x17DC3Cu;
    SET_GPR_U32(ctx, 31, 0x17DC44u);
    ctx->pc = 0x17DC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DC3Cu;
    // 0x17dc40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EE50u, 0x17DC3Cu, 0x17DC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DC44u;
label_17dc44:
    // 0x17dc44: 0x10000004  b           . + 4 + (0x4 << 2)
label_17dc48:
    if (ctx->pc == 0x17DC48u) {
        ctx->pc = 0x17DC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DC44u;
        // 0x17dc48: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DC4Cu;
        goto label_17dc4c;
    }
    ctx->pc = 0x17DC44u;
    {
        const bool branch_taken_0x17dc44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DC44u;
        // 0x17dc48: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dc44) {
            ctx->pc = 0x17DC58u;
            goto label_17dc58;
        }
    }
    ctx->pc = 0x17DC4Cu;
label_17dc4c:
    // 0x17dc4c: 0xc05fb94  jal         func_17EE50
label_17dc50:
    if (ctx->pc == 0x17DC50u) {
        ctx->pc = 0x17DC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DC4Cu;
        // 0x17dc50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DC54u;
        goto label_17dc54;
    }
    ctx->pc = 0x17DC4Cu;
    SET_GPR_U32(ctx, 31, 0x17DC54u);
    ctx->pc = 0x17DC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DC4Cu;
    // 0x17dc50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EE50u, 0x17DC4Cu, 0x17DC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DC54u;
label_17dc54:
    // 0x17dc54: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x17dc54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_17dc58:
    // 0x17dc58: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x17dc58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_17dc5c:
    // 0x17dc5c: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x17dc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_17dc60:
    // 0x17dc60: 0x802026  xor         $a0, $a0, $zero
    ctx->pc = 0x17dc60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 0));
label_17dc64:
    // 0x17dc64: 0x601826  xor         $v1, $v1, $zero
    ctx->pc = 0x17dc64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 0));
label_17dc68:
    // 0x17dc68: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x17dc68u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_17dc6c:
    // 0x17dc6c: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x17dc6cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_17dc70:
    // 0x17dc70: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x17dc70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_17dc74:
    // 0x17dc74: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x17dc74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_17dc78:
    // 0x17dc78: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x17dc78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_17dc7c:
    // 0x17dc7c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x17dc7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_17dc80:
    // 0x17dc80: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_17dc84:
    if (ctx->pc == 0x17DC84u) {
        ctx->pc = 0x17DC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DC80u;
        // 0x17dc84: 0x27a40458  addiu       $a0, $sp, 0x458 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DC88u;
        goto label_17dc88;
    }
    ctx->pc = 0x17DC80u;
    {
        const bool branch_taken_0x17dc80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DC80u;
        // 0x17dc84: 0x27a40458  addiu       $a0, $sp, 0x458 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dc80) {
            ctx->pc = 0x17DC9Cu;
            goto label_17dc9c;
        }
    }
    ctx->pc = 0x17DC88u;
label_17dc88:
    // 0x17dc88: 0x27a40458  addiu       $a0, $sp, 0x458
    ctx->pc = 0x17dc88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1112));
label_17dc8c:
    // 0x17dc8c: 0xc04619c  jal         func_118670
label_17dc90:
    if (ctx->pc == 0x17DC90u) {
        ctx->pc = 0x17DC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DC8Cu;
        // 0x17dc90: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DC94u;
        goto label_17dc94;
    }
    ctx->pc = 0x17DC8Cu;
    SET_GPR_U32(ctx, 31, 0x17DC94u);
    ctx->pc = 0x17DC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DC8Cu;
    // 0x17dc90: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x17DC8Cu, 0x17DC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DC94u;
label_17dc94:
    // 0x17dc94: 0x10000004  b           . + 4 + (0x4 << 2)
label_17dc98:
    if (ctx->pc == 0x17DC98u) {
        ctx->pc = 0x17DC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DC94u;
        // 0x17dc98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DC9Cu;
        goto label_17dc9c;
    }
    ctx->pc = 0x17DC94u;
    {
        const bool branch_taken_0x17dc94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DC94u;
        // 0x17dc98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dc94) {
            ctx->pc = 0x17DCA8u;
            goto label_17dca8;
        }
    }
    ctx->pc = 0x17DC9Cu;
label_17dc9c:
    // 0x17dc9c: 0xc04619c  jal         func_118670
label_17dca0:
    if (ctx->pc == 0x17DCA0u) {
        ctx->pc = 0x17DCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DC9Cu;
        // 0x17dca0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DCA4u;
        goto label_17dca4;
    }
    ctx->pc = 0x17DC9Cu;
    SET_GPR_U32(ctx, 31, 0x17DCA4u);
    ctx->pc = 0x17DCA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DC9Cu;
    // 0x17dca0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x17DC9Cu, 0x17DCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DCA4u;
label_17dca4:
    // 0x17dca4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17dca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17dca8:
    // 0x17dca8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x17dca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_17dcac:
    // 0x17dcac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17dcacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_17dcb0:
    // 0x17dcb0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17dcb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17dcb4:
    // 0x17dcb4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17dcb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17dcb8:
    // 0x17dcb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17dcb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_17dcbc:
    // 0x17dcbc: 0x3e00008  jr          $ra
label_17dcc0:
    if (ctx->pc == 0x17DCC0u) {
        ctx->pc = 0x17DCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DCBCu;
        // 0x17dcc0: 0x27bd0460  addiu       $sp, $sp, 0x460 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17DCC4u;
        goto label_fallthrough_0x17dcbc;
    }
    ctx->pc = 0x17DCBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17DCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DCBCu;
        // 0x17dcc0: 0x27bd0460  addiu       $sp, $sp, 0x460 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17DCBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x17dcbc:
    ctx->pc = 0x17DCC4u;
}
