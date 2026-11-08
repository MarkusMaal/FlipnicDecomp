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

// Function: FUN_00101490
// Address: 0x101490 - 0x10168c
void FUN_00101490_0x101490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00101490_0x101490");
#endif

    switch (ctx->pc) {
        case 0x101490u: goto label_101490;
        case 0x101494u: goto label_101494;
        case 0x101498u: goto label_101498;
        case 0x10149cu: goto label_10149c;
        case 0x1014a0u: goto label_1014a0;
        case 0x1014a4u: goto label_1014a4;
        case 0x1014a8u: goto label_1014a8;
        case 0x1014acu: goto label_1014ac;
        case 0x1014b0u: goto label_1014b0;
        case 0x1014b4u: goto label_1014b4;
        case 0x1014b8u: goto label_1014b8;
        case 0x1014bcu: goto label_1014bc;
        case 0x1014c0u: goto label_1014c0;
        case 0x1014c4u: goto label_1014c4;
        case 0x1014c8u: goto label_1014c8;
        case 0x1014ccu: goto label_1014cc;
        case 0x1014d0u: goto label_1014d0;
        case 0x1014d4u: goto label_1014d4;
        case 0x1014d8u: goto label_1014d8;
        case 0x1014dcu: goto label_1014dc;
        case 0x1014e0u: goto label_1014e0;
        case 0x1014e4u: goto label_1014e4;
        case 0x1014e8u: goto label_1014e8;
        case 0x1014ecu: goto label_1014ec;
        case 0x1014f0u: goto label_1014f0;
        case 0x1014f4u: goto label_1014f4;
        case 0x1014f8u: goto label_1014f8;
        case 0x1014fcu: goto label_1014fc;
        case 0x101500u: goto label_101500;
        case 0x101504u: goto label_101504;
        case 0x101508u: goto label_101508;
        case 0x10150cu: goto label_10150c;
        case 0x101510u: goto label_101510;
        case 0x101514u: goto label_101514;
        case 0x101518u: goto label_101518;
        case 0x10151cu: goto label_10151c;
        case 0x101520u: goto label_101520;
        case 0x101524u: goto label_101524;
        case 0x101528u: goto label_101528;
        case 0x10152cu: goto label_10152c;
        case 0x101530u: goto label_101530;
        case 0x101534u: goto label_101534;
        case 0x101538u: goto label_101538;
        case 0x10153cu: goto label_10153c;
        case 0x101540u: goto label_101540;
        case 0x101544u: goto label_101544;
        case 0x101548u: goto label_101548;
        case 0x10154cu: goto label_10154c;
        case 0x101550u: goto label_101550;
        case 0x101554u: goto label_101554;
        case 0x101558u: goto label_101558;
        case 0x10155cu: goto label_10155c;
        case 0x101560u: goto label_101560;
        case 0x101564u: goto label_101564;
        case 0x101568u: goto label_101568;
        case 0x10156cu: goto label_10156c;
        case 0x101570u: goto label_101570;
        case 0x101574u: goto label_101574;
        case 0x101578u: goto label_101578;
        case 0x10157cu: goto label_10157c;
        case 0x101580u: goto label_101580;
        case 0x101584u: goto label_101584;
        case 0x101588u: goto label_101588;
        case 0x10158cu: goto label_10158c;
        case 0x101590u: goto label_101590;
        case 0x101594u: goto label_101594;
        case 0x101598u: goto label_101598;
        case 0x10159cu: goto label_10159c;
        case 0x1015a0u: goto label_1015a0;
        case 0x1015a4u: goto label_1015a4;
        case 0x1015a8u: goto label_1015a8;
        case 0x1015acu: goto label_1015ac;
        case 0x1015b0u: goto label_1015b0;
        case 0x1015b4u: goto label_1015b4;
        case 0x1015b8u: goto label_1015b8;
        case 0x1015bcu: goto label_1015bc;
        case 0x1015c0u: goto label_1015c0;
        case 0x1015c4u: goto label_1015c4;
        case 0x1015c8u: goto label_1015c8;
        case 0x1015ccu: goto label_1015cc;
        case 0x1015d0u: goto label_1015d0;
        case 0x1015d4u: goto label_1015d4;
        case 0x1015d8u: goto label_1015d8;
        case 0x1015dcu: goto label_1015dc;
        case 0x1015e0u: goto label_1015e0;
        case 0x1015e4u: goto label_1015e4;
        case 0x1015e8u: goto label_1015e8;
        case 0x1015ecu: goto label_1015ec;
        case 0x1015f0u: goto label_1015f0;
        case 0x1015f4u: goto label_1015f4;
        case 0x1015f8u: goto label_1015f8;
        case 0x1015fcu: goto label_1015fc;
        case 0x101600u: goto label_101600;
        case 0x101604u: goto label_101604;
        case 0x101608u: goto label_101608;
        case 0x10160cu: goto label_10160c;
        case 0x101610u: goto label_101610;
        case 0x101614u: goto label_101614;
        case 0x101618u: goto label_101618;
        case 0x10161cu: goto label_10161c;
        case 0x101620u: goto label_101620;
        case 0x101624u: goto label_101624;
        case 0x101628u: goto label_101628;
        case 0x10162cu: goto label_10162c;
        case 0x101630u: goto label_101630;
        case 0x101634u: goto label_101634;
        case 0x101638u: goto label_101638;
        case 0x10163cu: goto label_10163c;
        case 0x101640u: goto label_101640;
        case 0x101644u: goto label_101644;
        case 0x101648u: goto label_101648;
        case 0x10164cu: goto label_10164c;
        case 0x101650u: goto label_101650;
        case 0x101654u: goto label_101654;
        case 0x101658u: goto label_101658;
        case 0x10165cu: goto label_10165c;
        case 0x101660u: goto label_101660;
        case 0x101664u: goto label_101664;
        case 0x101668u: goto label_101668;
        case 0x10166cu: goto label_10166c;
        case 0x101670u: goto label_101670;
        case 0x101674u: goto label_101674;
        case 0x101678u: goto label_101678;
        case 0x10167cu: goto label_10167c;
        case 0x101680u: goto label_101680;
        case 0x101684u: goto label_101684;
        case 0x101688u: goto label_101688;
        default: break;
    }

    ctx->pc = 0x101490u;

label_101490:
    // 0x101490: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x101490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_101494:
    // 0x101494: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x101494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_101498:
    // 0x101498: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x101498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_10149c:
    // 0x10149c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x10149cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1014a0:
    // 0x1014a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1014a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1014a4:
    // 0x1014a4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1014a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1014a8:
    // 0x1014a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1014a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1014ac:
    // 0x1014ac: 0xa3828488  sb          $v0, -0x7B78($gp)
    ctx->pc = 0x1014acu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935688), (uint8_t)GPR_U32(ctx, 2));
label_1014b0:
    // 0x1014b0: 0xa3808398  sb          $zero, -0x7C68($gp)
    ctx->pc = 0x1014b0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935448), (uint8_t)GPR_U32(ctx, 0));
label_1014b4:
    // 0x1014b4: 0xc04d988  jal         func_136620
label_1014b8:
    if (ctx->pc == 0x1014B8u) {
        ctx->pc = 0x1014B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1014B4u;
        // 0x1014b8: 0xaf9283a0  sw          $s2, -0x7C60($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935456), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1014BCu;
        goto label_1014bc;
    }
    ctx->pc = 0x1014B4u;
    SET_GPR_U32(ctx, 31, 0x1014BCu);
    ctx->pc = 0x1014B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1014B4u;
    // 0x1014b8: 0xaf9283a0  sw          $s2, -0x7C60($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935456), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136620u, 0x1014B4u, 0x1014BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1014BCu;
label_1014bc:
    // 0x1014bc: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1014bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1014c0:
    // 0x1014c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1014c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1014c4:
    // 0x1014c4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1014c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1014c8:
    // 0x1014c8: 0x320f809  jalr        $t9
label_1014cc:
    if (ctx->pc == 0x1014CCu) {
        ctx->pc = 0x1014CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1014C8u;
        // 0x1014cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1014D0u;
        goto label_1014d0;
    }
    ctx->pc = 0x1014C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1014D0u);
        ctx->pc = 0x1014CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1014C8u;
        // 0x1014cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1014C8u, 0x1014D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1014D0u;
label_1014d0:
    // 0x1014d0: 0xc06cebc  jal         func_1B3AF0
label_1014d4:
    if (ctx->pc == 0x1014D4u) {
        ctx->pc = 0x1014D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1014D0u;
        // 0x1014d4: 0x8f848714  lw          $a0, -0x78EC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1014D8u;
        goto label_1014d8;
    }
    ctx->pc = 0x1014D0u;
    SET_GPR_U32(ctx, 31, 0x1014D8u);
    ctx->pc = 0x1014D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1014D0u;
    // 0x1014d4: 0x8f848714  lw          $a0, -0x78EC($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3AF0u, 0x1014D0u, 0x1014D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1014D8u;
label_1014d8:
    // 0x1014d8: 0xc040168  jal         func_1005A0
label_1014dc:
    if (ctx->pc == 0x1014DCu) {
        ctx->pc = 0x1014DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1014D8u;
        // 0x1014dc: 0x3c040100  lui         $a0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1014E0u;
        goto label_1014e0;
    }
    ctx->pc = 0x1014D8u;
    SET_GPR_U32(ctx, 31, 0x1014E0u);
    ctx->pc = 0x1014DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1014D8u;
    // 0x1014dc: 0x3c040100  lui         $a0, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x1014D8u, 0x1014E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1014E0u;
label_1014e0:
    // 0x1014e0: 0x0  nop
    ctx->pc = 0x1014e0u;
    // NOP
label_1014e4:
    // 0x1014e4: 0x0  nop
    ctx->pc = 0x1014e4u;
    // NOP
label_1014e8:
    // 0x1014e8: 0x0  nop
    ctx->pc = 0x1014e8u;
    // NOP
label_1014ec:
    // 0x1014ec: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
label_1014f0:
    if (ctx->pc == 0x1014F0u) {
        ctx->pc = 0x1014F4u;
        goto label_1014f4;
    }
    ctx->pc = 0x1014ECu;
    {
        const bool branch_taken_0x1014ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1014ec) {
            ctx->pc = 0x1014D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1014d8;
        }
    }
    ctx->pc = 0x1014F4u;
label_1014f4:
    // 0x1014f4: 0xc0401a4  jal         func_100690
label_1014f8:
    if (ctx->pc == 0x1014F8u) {
        ctx->pc = 0x1014F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1014F4u;
        // 0x1014f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1014FCu;
        goto label_1014fc;
    }
    ctx->pc = 0x1014F4u;
    SET_GPR_U32(ctx, 31, 0x1014FCu);
    ctx->pc = 0x1014F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1014F4u;
    // 0x1014f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1014F4u, 0x1014FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1014FCu;
label_1014fc:
    // 0x1014fc: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x1014fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_101500:
    // 0x101500: 0xc047a3c  jal         func_11E8F0
label_101504:
    if (ctx->pc == 0x101504u) {
        ctx->pc = 0x101504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101500u;
        // 0x101504: 0x84502828  lh          $s0, 0x2828($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10280)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101508u;
        goto label_101508;
    }
    ctx->pc = 0x101500u;
    SET_GPR_U32(ctx, 31, 0x101508u);
    ctx->pc = 0x101504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101500u;
    // 0x101504: 0x84502828  lh          $s0, 0x2828($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E8F0u, 0x101500u, 0x101508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101508u;
label_101508:
    // 0x101508: 0x8f848380  lw          $a0, -0x7C80($gp)
    ctx->pc = 0x101508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935424)));
label_10150c:
    // 0x10150c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x10150cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_101510:
    // 0x101510: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x101510u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_101514:
    // 0x101514: 0xc06cf0c  jal         func_1B3C30
label_101518:
    if (ctx->pc == 0x101518u) {
        ctx->pc = 0x101518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101514u;
        // 0x101518: 0x24a5dfc0  addiu       $a1, $a1, -0x2040 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10151Cu;
        goto label_10151c;
    }
    ctx->pc = 0x101514u;
    SET_GPR_U32(ctx, 31, 0x10151Cu);
    ctx->pc = 0x101518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101514u;
    // 0x101518: 0x24a5dfc0  addiu       $a1, $a1, -0x2040 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x101514u, 0x10151Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10151Cu;
label_10151c:
    // 0x10151c: 0x8f838380  lw          $v1, -0x7C80($gp)
    ctx->pc = 0x10151cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935424)));
label_101520:
    // 0x101520: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x101520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_101524:
    // 0x101524: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x101524u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_101528:
    // 0x101528: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x101528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10152c:
    // 0x10152c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x10152cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_101530:
    // 0x101530: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x101530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_101534:
    // 0x101534: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x101534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_101538:
    // 0x101538: 0x8442000a  lh          $v0, 0xA($v0)
    ctx->pc = 0x101538u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
label_10153c:
    // 0x10153c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x10153cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_101540:
    // 0x101540: 0x501018  mult        $v0, $v0, $s0
    ctx->pc = 0x101540u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_101544:
    // 0x101544: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x101544u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_101548:
    // 0x101548: 0xc046b40  jal         func_11AD00
label_10154c:
    if (ctx->pc == 0x10154Cu) {
        ctx->pc = 0x10154Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101548u;
        // 0x10154c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101550u;
        goto label_101550;
    }
    ctx->pc = 0x101548u;
    SET_GPR_U32(ctx, 31, 0x101550u);
    ctx->pc = 0x10154Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101548u;
    // 0x10154c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AD00u, 0x101548u, 0x101550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101550u;
label_101550:
    // 0x101550: 0xc053bc4  jal         func_14EF10
label_101554:
    if (ctx->pc == 0x101554u) {
        ctx->pc = 0x101558u;
        goto label_101558;
    }
    ctx->pc = 0x101550u;
    SET_GPR_U32(ctx, 31, 0x101558u);
    ctx->pc = 0x14EF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EF10u, 0x101550u, 0x101558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101558u;
label_101558:
    // 0x101558: 0xc0740f0  jal         func_1D03C0
label_10155c:
    if (ctx->pc == 0x10155Cu) {
        ctx->pc = 0x10155Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101558u;
        // 0x10155c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101560u;
        goto label_101560;
    }
    ctx->pc = 0x101558u;
    SET_GPR_U32(ctx, 31, 0x101560u);
    ctx->pc = 0x10155Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101558u;
    // 0x10155c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D03C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D03C0u, 0x101558u, 0x101560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101560u;
label_101560:
    // 0x101560: 0xc07418c  jal         func_1D0630
label_101564:
    if (ctx->pc == 0x101564u) {
        ctx->pc = 0x101564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101560u;
        // 0x101564: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101568u;
        goto label_101568;
    }
    ctx->pc = 0x101560u;
    SET_GPR_U32(ctx, 31, 0x101568u);
    ctx->pc = 0x101564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101560u;
    // 0x101564: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0630u, 0x101560u, 0x101568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101568u;
label_101568:
    // 0x101568: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x101568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_10156c:
    // 0x10156c: 0xc054660  jal         func_151980
label_101570:
    if (ctx->pc == 0x101570u) {
        ctx->pc = 0x101570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10156Cu;
        // 0x101570: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101574u;
        goto label_101574;
    }
    ctx->pc = 0x10156Cu;
    SET_GPR_U32(ctx, 31, 0x101574u);
    ctx->pc = 0x101570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10156Cu;
    // 0x101570: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151980u, 0x10156Cu, 0x101574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101574u;
label_101574:
    // 0x101574: 0xc074190  jal         func_1D0640
label_101578:
    if (ctx->pc == 0x101578u) {
        ctx->pc = 0x101578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101574u;
        // 0x101578: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10157Cu;
        goto label_10157c;
    }
    ctx->pc = 0x101574u;
    SET_GPR_U32(ctx, 31, 0x10157Cu);
    ctx->pc = 0x101578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101574u;
    // 0x101578: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0640u, 0x101574u, 0x10157Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10157Cu;
label_10157c:
    // 0x10157c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x10157cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_101580:
    // 0x101580: 0xc074160  jal         func_1D0580
label_101584:
    if (ctx->pc == 0x101584u) {
        ctx->pc = 0x101584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101580u;
        // 0x101584: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101588u;
        goto label_101588;
    }
    ctx->pc = 0x101580u;
    SET_GPR_U32(ctx, 31, 0x101588u);
    ctx->pc = 0x101584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101580u;
    // 0x101584: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0580u, 0x101580u, 0x101588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101588u;
label_101588:
    // 0x101588: 0xc061804  jal         func_186010
label_10158c:
    if (ctx->pc == 0x10158Cu) {
        ctx->pc = 0x101590u;
        goto label_101590;
    }
    ctx->pc = 0x101588u;
    SET_GPR_U32(ctx, 31, 0x101590u);
    ctx->pc = 0x186010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186010u, 0x101588u, 0x101590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101590u;
label_101590:
    // 0x101590: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x101590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_101594:
    // 0x101594: 0xc080702  jal         func_201C08
label_101598:
    if (ctx->pc == 0x101598u) {
        ctx->pc = 0x101598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101594u;
        // 0x101598: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10159Cu;
        goto label_10159c;
    }
    ctx->pc = 0x101594u;
    SET_GPR_U32(ctx, 31, 0x10159Cu);
    ctx->pc = 0x101598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101594u;
    // 0x101598: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x101594u, 0x10159Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10159Cu;
label_10159c:
    // 0x10159c: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x10159cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_1015a0:
    // 0x1015a0: 0x8c512830  lw          $s1, 0x2830($v0)
    ctx->pc = 0x1015a0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10288)));
label_1015a4:
    // 0x1015a4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_1015a8:
    if (ctx->pc == 0x1015A8u) {
        ctx->pc = 0x1015A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1015A4u;
        // 0x1015a8: 0x2404004c  addiu       $a0, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1015ACu;
        goto label_1015ac;
    }
    ctx->pc = 0x1015A4u;
    {
        const bool branch_taken_0x1015a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1015A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1015A4u;
        // 0x1015a8: 0x2404004c  addiu       $a0, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1015a4) {
            ctx->pc = 0x1015E8u;
            goto label_1015e8;
        }
    }
    ctx->pc = 0x1015ACu;
label_1015ac:
    // 0x1015ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1015acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1015b0:
    // 0x1015b0: 0x16220007  bne         $s1, $v0, . + 4 + (0x7 << 2)
label_1015b4:
    if (ctx->pc == 0x1015B4u) {
        ctx->pc = 0x1015B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1015B0u;
        // 0x1015b4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1015B8u;
        goto label_1015b8;
    }
    ctx->pc = 0x1015B0u;
    {
        const bool branch_taken_0x1015b0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1015B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1015B0u;
        // 0x1015b4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1015b0) {
            ctx->pc = 0x1015D0u;
            goto label_1015d0;
        }
    }
    ctx->pc = 0x1015B8u;
label_1015b8:
    // 0x1015b8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1015b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_1015bc:
    // 0x1015bc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1015bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1015c0:
    // 0x1015c0: 0xc080664  jal         func_201990
label_1015c4:
    if (ctx->pc == 0x1015C4u) {
        ctx->pc = 0x1015C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1015C0u;
        // 0x1015c4: 0x24a5dfc8  addiu       $a1, $a1, -0x2038 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1015C8u;
        goto label_1015c8;
    }
    ctx->pc = 0x1015C0u;
    SET_GPR_U32(ctx, 31, 0x1015C8u);
    ctx->pc = 0x1015C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1015C0u;
    // 0x1015c4: 0x24a5dfc8  addiu       $a1, $a1, -0x2038 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x1015C0u, 0x1015C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1015C8u;
label_1015c8:
    // 0x1015c8: 0x10000006  b           . + 4 + (0x6 << 2)
label_1015cc:
    if (ctx->pc == 0x1015CCu) {
        ctx->pc = 0x1015D0u;
        goto label_1015d0;
    }
    ctx->pc = 0x1015C8u;
    {
        const bool branch_taken_0x1015c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1015c8) {
            ctx->pc = 0x1015E4u;
            goto label_1015e4;
        }
    }
    ctx->pc = 0x1015D0u;
label_1015d0:
    // 0x1015d0: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
label_1015d4:
    if (ctx->pc == 0x1015D4u) {
        ctx->pc = 0x1015D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1015D0u;
        // 0x1015d4: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1015D8u;
        goto label_1015d8;
    }
    ctx->pc = 0x1015D0u;
    {
        const bool branch_taken_0x1015d0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1015D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1015D0u;
        // 0x1015d4: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1015d0) {
            ctx->pc = 0x1015E4u;
            goto label_1015e4;
        }
    }
    ctx->pc = 0x1015D8u;
label_1015d8:
    // 0x1015d8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1015d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1015dc:
    // 0x1015dc: 0xc080664  jal         func_201990
label_1015e0:
    if (ctx->pc == 0x1015E0u) {
        ctx->pc = 0x1015E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1015DCu;
        // 0x1015e0: 0x24a5dfd0  addiu       $a1, $a1, -0x2030 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959056));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1015E4u;
        goto label_1015e4;
    }
    ctx->pc = 0x1015DCu;
    SET_GPR_U32(ctx, 31, 0x1015E4u);
    ctx->pc = 0x1015E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1015DCu;
    // 0x1015e0: 0x24a5dfd0  addiu       $a1, $a1, -0x2030 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x1015DCu, 0x1015E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1015E4u;
label_1015e4:
    // 0x1015e4: 0x2404004c  addiu       $a0, $zero, 0x4C
    ctx->pc = 0x1015e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_1015e8:
    // 0x1015e8: 0xc0401bc  jal         func_1006F0
label_1015ec:
    if (ctx->pc == 0x1015ECu) {
        ctx->pc = 0x1015F0u;
        goto label_1015f0;
    }
    ctx->pc = 0x1015E8u;
    SET_GPR_U32(ctx, 31, 0x1015F0u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1015E8u, 0x1015F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1015F0u;
label_1015f0:
    // 0x1015f0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1015f4:
    if (ctx->pc == 0x1015F4u) {
        ctx->pc = 0x1015F8u;
        goto label_1015f8;
    }
    ctx->pc = 0x1015F0u;
    {
        const bool branch_taken_0x1015f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1015f0) {
            ctx->pc = 0x101618u;
            goto label_101618;
        }
    }
    ctx->pc = 0x1015F8u;
label_1015f8:
    // 0x1015f8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1015f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1015fc:
    // 0x1015fc: 0x24040053  addiu       $a0, $zero, 0x53
    ctx->pc = 0x1015fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
label_101600:
    // 0x101600: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x101600u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_101604:
    // 0x101604: 0x24030054  addiu       $v1, $zero, 0x54
    ctx->pc = 0x101604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_101608:
    // 0x101608: 0xa0440048  sb          $a0, 0x48($v0)
    ctx->pc = 0x101608u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 72), (uint8_t)GPR_U32(ctx, 4));
label_10160c:
    // 0x10160c: 0xa0440049  sb          $a0, 0x49($v0)
    ctx->pc = 0x10160cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 73), (uint8_t)GPR_U32(ctx, 4));
label_101610:
    // 0x101610: 0xa043004a  sb          $v1, 0x4A($v0)
    ctx->pc = 0x101610u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 74), (uint8_t)GPR_U32(ctx, 3));
label_101614:
    // 0x101614: 0xa040004b  sb          $zero, 0x4B($v0)
    ctx->pc = 0x101614u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 75), (uint8_t)GPR_U32(ctx, 0));
label_101618:
    // 0x101618: 0xaf828388  sw          $v0, -0x7C78($gp)
    ctx->pc = 0x101618u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935432), GPR_U32(ctx, 2));
label_10161c:
    // 0x10161c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10161cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_101620:
    // 0x101620: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x101620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_101624:
    // 0x101624: 0xc06cfa0  jal         func_1B3E80
label_101628:
    if (ctx->pc == 0x101628u) {
        ctx->pc = 0x101628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101624u;
        // 0x101628: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10162Cu;
        goto label_10162c;
    }
    ctx->pc = 0x101624u;
    SET_GPR_U32(ctx, 31, 0x10162Cu);
    ctx->pc = 0x101628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101624u;
    // 0x101628: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3E80u, 0x101624u, 0x10162Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10162Cu;
label_10162c:
    // 0x10162c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_101630:
    if (ctx->pc == 0x101630u) {
        ctx->pc = 0x101630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10162Cu;
        // 0x101630: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101634u;
        goto label_101634;
    }
    ctx->pc = 0x10162Cu;
    {
        const bool branch_taken_0x10162c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x101630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10162Cu;
        // 0x101630: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10162c) {
            ctx->pc = 0x101650u;
            goto label_101650;
        }
    }
    ctx->pc = 0x101634u;
label_101634:
    // 0x101634: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_101638:
    if (ctx->pc == 0x101638u) {
        ctx->pc = 0x10163Cu;
        goto label_10163c;
    }
    ctx->pc = 0x101634u;
    {
        const bool branch_taken_0x101634 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x101634) {
            ctx->pc = 0x10164Cu;
            goto label_10164c;
        }
    }
    ctx->pc = 0x10163Cu;
label_10163c:
    // 0x10163c: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x10163cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
label_101640:
    // 0x101640: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x101640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_101644:
    // 0x101644: 0xc06cfa0  jal         func_1B3E80
label_101648:
    if (ctx->pc == 0x101648u) {
        ctx->pc = 0x101648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101644u;
        // 0x101648: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10164Cu;
        goto label_10164c;
    }
    ctx->pc = 0x101644u;
    SET_GPR_U32(ctx, 31, 0x10164Cu);
    ctx->pc = 0x101648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101644u;
    // 0x101648: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3E80u, 0x101644u, 0x10164Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10164Cu;
label_10164c:
    // 0x10164c: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x10164cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_101650:
    // 0x101650: 0xc0401bc  jal         func_1006F0
label_101654:
    if (ctx->pc == 0x101654u) {
        ctx->pc = 0x101658u;
        goto label_101658;
    }
    ctx->pc = 0x101650u;
    SET_GPR_U32(ctx, 31, 0x101658u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x101650u, 0x101658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101658u;
label_101658:
    // 0x101658: 0xaf828214  sw          $v0, -0x7DEC($gp)
    ctx->pc = 0x101658u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935060), GPR_U32(ctx, 2));
label_10165c:
    // 0x10165c: 0x8f858388  lw          $a1, -0x7C78($gp)
    ctx->pc = 0x10165cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
label_101660:
    // 0x101660: 0xc040638  jal         func_1018E0
label_101664:
    if (ctx->pc == 0x101664u) {
        ctx->pc = 0x101664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101660u;
        // 0x101664: 0x8f848214  lw          $a0, -0x7DEC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101668u;
        goto label_101668;
    }
    ctx->pc = 0x101660u;
    SET_GPR_U32(ctx, 31, 0x101668u);
    ctx->pc = 0x101664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101660u;
    // 0x101664: 0x8f848214  lw          $a0, -0x7DEC($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1018E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1018E0u, 0x101660u, 0x101668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101668u;
label_101668:
    // 0x101668: 0xc040840  jal         func_102100
label_10166c:
    if (ctx->pc == 0x10166Cu) {
        ctx->pc = 0x10166Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101668u;
        // 0x10166c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101670u;
        goto label_101670;
    }
    ctx->pc = 0x101668u;
    SET_GPR_U32(ctx, 31, 0x101670u);
    ctx->pc = 0x10166Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101668u;
    // 0x10166c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102100u, 0x101668u, 0x101670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101670u;
label_101670:
    // 0x101670: 0xff808390  sd          $zero, -0x7C70($gp)
    ctx->pc = 0x101670u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294935440), GPR_U64(ctx, 0));
label_101674:
    // 0x101674: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x101674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_101678:
    // 0x101678: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x101678u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_10167c:
    // 0x10167c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10167cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_101680:
    // 0x101680: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x101680u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_101684:
    // 0x101684: 0x3e00008  jr          $ra
label_101688:
    if (ctx->pc == 0x101688u) {
        ctx->pc = 0x101688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101684u;
        // 0x101688: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10168Cu;
        goto label_fallthrough_0x101684;
    }
    ctx->pc = 0x101684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101684u;
        // 0x101688: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x101684:
    ctx->pc = 0x10168Cu;
}
