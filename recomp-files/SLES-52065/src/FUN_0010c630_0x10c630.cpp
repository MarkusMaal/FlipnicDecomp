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

// Function: FUN_0010c630
// Address: 0x10c630 - 0x10c840
void FUN_0010c630_0x10c630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010c630_0x10c630");
#endif

    switch (ctx->pc) {
        case 0x10c630u: goto label_10c630;
        case 0x10c634u: goto label_10c634;
        case 0x10c638u: goto label_10c638;
        case 0x10c63cu: goto label_10c63c;
        case 0x10c640u: goto label_10c640;
        case 0x10c644u: goto label_10c644;
        case 0x10c648u: goto label_10c648;
        case 0x10c64cu: goto label_10c64c;
        case 0x10c650u: goto label_10c650;
        case 0x10c654u: goto label_10c654;
        case 0x10c658u: goto label_10c658;
        case 0x10c65cu: goto label_10c65c;
        case 0x10c660u: goto label_10c660;
        case 0x10c664u: goto label_10c664;
        case 0x10c668u: goto label_10c668;
        case 0x10c66cu: goto label_10c66c;
        case 0x10c670u: goto label_10c670;
        case 0x10c674u: goto label_10c674;
        case 0x10c678u: goto label_10c678;
        case 0x10c67cu: goto label_10c67c;
        case 0x10c680u: goto label_10c680;
        case 0x10c684u: goto label_10c684;
        case 0x10c688u: goto label_10c688;
        case 0x10c68cu: goto label_10c68c;
        case 0x10c690u: goto label_10c690;
        case 0x10c694u: goto label_10c694;
        case 0x10c698u: goto label_10c698;
        case 0x10c69cu: goto label_10c69c;
        case 0x10c6a0u: goto label_10c6a0;
        case 0x10c6a4u: goto label_10c6a4;
        case 0x10c6a8u: goto label_10c6a8;
        case 0x10c6acu: goto label_10c6ac;
        case 0x10c6b0u: goto label_10c6b0;
        case 0x10c6b4u: goto label_10c6b4;
        case 0x10c6b8u: goto label_10c6b8;
        case 0x10c6bcu: goto label_10c6bc;
        case 0x10c6c0u: goto label_10c6c0;
        case 0x10c6c4u: goto label_10c6c4;
        case 0x10c6c8u: goto label_10c6c8;
        case 0x10c6ccu: goto label_10c6cc;
        case 0x10c6d0u: goto label_10c6d0;
        case 0x10c6d4u: goto label_10c6d4;
        case 0x10c6d8u: goto label_10c6d8;
        case 0x10c6dcu: goto label_10c6dc;
        case 0x10c6e0u: goto label_10c6e0;
        case 0x10c6e4u: goto label_10c6e4;
        case 0x10c6e8u: goto label_10c6e8;
        case 0x10c6ecu: goto label_10c6ec;
        case 0x10c6f0u: goto label_10c6f0;
        case 0x10c6f4u: goto label_10c6f4;
        case 0x10c6f8u: goto label_10c6f8;
        case 0x10c6fcu: goto label_10c6fc;
        case 0x10c700u: goto label_10c700;
        case 0x10c704u: goto label_10c704;
        case 0x10c708u: goto label_10c708;
        case 0x10c70cu: goto label_10c70c;
        case 0x10c710u: goto label_10c710;
        case 0x10c714u: goto label_10c714;
        case 0x10c718u: goto label_10c718;
        case 0x10c71cu: goto label_10c71c;
        case 0x10c720u: goto label_10c720;
        case 0x10c724u: goto label_10c724;
        case 0x10c728u: goto label_10c728;
        case 0x10c72cu: goto label_10c72c;
        case 0x10c730u: goto label_10c730;
        case 0x10c734u: goto label_10c734;
        case 0x10c738u: goto label_10c738;
        case 0x10c73cu: goto label_10c73c;
        case 0x10c740u: goto label_10c740;
        case 0x10c744u: goto label_10c744;
        case 0x10c748u: goto label_10c748;
        case 0x10c74cu: goto label_10c74c;
        case 0x10c750u: goto label_10c750;
        case 0x10c754u: goto label_10c754;
        case 0x10c758u: goto label_10c758;
        case 0x10c75cu: goto label_10c75c;
        case 0x10c760u: goto label_10c760;
        case 0x10c764u: goto label_10c764;
        case 0x10c768u: goto label_10c768;
        case 0x10c76cu: goto label_10c76c;
        case 0x10c770u: goto label_10c770;
        case 0x10c774u: goto label_10c774;
        case 0x10c778u: goto label_10c778;
        case 0x10c77cu: goto label_10c77c;
        case 0x10c780u: goto label_10c780;
        case 0x10c784u: goto label_10c784;
        case 0x10c788u: goto label_10c788;
        case 0x10c78cu: goto label_10c78c;
        case 0x10c790u: goto label_10c790;
        case 0x10c794u: goto label_10c794;
        case 0x10c798u: goto label_10c798;
        case 0x10c79cu: goto label_10c79c;
        case 0x10c7a0u: goto label_10c7a0;
        case 0x10c7a4u: goto label_10c7a4;
        case 0x10c7a8u: goto label_10c7a8;
        case 0x10c7acu: goto label_10c7ac;
        case 0x10c7b0u: goto label_10c7b0;
        case 0x10c7b4u: goto label_10c7b4;
        case 0x10c7b8u: goto label_10c7b8;
        case 0x10c7bcu: goto label_10c7bc;
        case 0x10c7c0u: goto label_10c7c0;
        case 0x10c7c4u: goto label_10c7c4;
        case 0x10c7c8u: goto label_10c7c8;
        case 0x10c7ccu: goto label_10c7cc;
        case 0x10c7d0u: goto label_10c7d0;
        case 0x10c7d4u: goto label_10c7d4;
        case 0x10c7d8u: goto label_10c7d8;
        case 0x10c7dcu: goto label_10c7dc;
        case 0x10c7e0u: goto label_10c7e0;
        case 0x10c7e4u: goto label_10c7e4;
        case 0x10c7e8u: goto label_10c7e8;
        case 0x10c7ecu: goto label_10c7ec;
        case 0x10c7f0u: goto label_10c7f0;
        case 0x10c7f4u: goto label_10c7f4;
        case 0x10c7f8u: goto label_10c7f8;
        case 0x10c7fcu: goto label_10c7fc;
        case 0x10c800u: goto label_10c800;
        case 0x10c804u: goto label_10c804;
        case 0x10c808u: goto label_10c808;
        case 0x10c80cu: goto label_10c80c;
        case 0x10c810u: goto label_10c810;
        case 0x10c814u: goto label_10c814;
        case 0x10c818u: goto label_10c818;
        case 0x10c81cu: goto label_10c81c;
        case 0x10c820u: goto label_10c820;
        case 0x10c824u: goto label_10c824;
        case 0x10c828u: goto label_10c828;
        case 0x10c82cu: goto label_10c82c;
        case 0x10c830u: goto label_10c830;
        case 0x10c834u: goto label_10c834;
        case 0x10c838u: goto label_10c838;
        case 0x10c83cu: goto label_10c83c;
        default: break;
    }

    ctx->pc = 0x10c630u;

label_10c630:
    // 0x10c630: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x10c630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_10c634:
    // 0x10c634: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10c634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_10c638:
    // 0x10c638: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x10c638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_10c63c:
    // 0x10c63c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10c63cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_10c640:
    // 0x10c640: 0x84830254  lh          $v1, 0x254($a0)
    ctx->pc = 0x10c640u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 596)));
label_10c644:
    // 0x10c644: 0x4600047  bltz        $v1, . + 4 + (0x47 << 2)
label_10c648:
    if (ctx->pc == 0x10C648u) {
        ctx->pc = 0x10C648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C644u;
        // 0x10c648: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10C64Cu;
        goto label_10c64c;
    }
    ctx->pc = 0x10C644u;
    {
        const bool branch_taken_0x10c644 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x10C648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C644u;
        // 0x10c648: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c644) {
            ctx->pc = 0x10C764u;
            goto label_10c764;
        }
    }
    ctx->pc = 0x10C64Cu;
label_10c64c:
    // 0x10c64c: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x10c64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_10c650:
    // 0x10c650: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x10c650u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_10c654:
    // 0x10c654: 0x86230256  lh          $v1, 0x256($s1)
    ctx->pc = 0x10c654u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 598)));
label_10c658:
    // 0x10c658: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x10c658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_10c65c:
    // 0x10c65c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x10c65cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_10c660:
    // 0x10c660: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10c660u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_10c664:
    // 0x10c664: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10c664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_10c668:
    // 0x10c668: 0xc042580  jal         func_109600
label_10c66c:
    if (ctx->pc == 0x10C66Cu) {
        ctx->pc = 0x10C66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C668u;
        // 0x10c66c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10C670u;
        goto label_10c670;
    }
    ctx->pc = 0x10C668u;
    SET_GPR_U32(ctx, 31, 0x10C670u);
    ctx->pc = 0x10C66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C668u;
    // 0x10c66c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109600u, 0x10C668u, 0x10C670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C670u;
label_10c670:
    // 0x10c670: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_10c674:
    if (ctx->pc == 0x10C674u) {
        ctx->pc = 0x10C674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C670u;
        // 0x10c674: 0x27a30040  addiu       $v1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10C678u;
        goto label_10c678;
    }
    ctx->pc = 0x10C670u;
    {
        const bool branch_taken_0x10c670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C670u;
        // 0x10c674: 0x27a30040  addiu       $v1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c670) {
            ctx->pc = 0x10C694u;
            goto label_10c694;
        }
    }
    ctx->pc = 0x10C678u;
label_10c678:
    // 0x10c678: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x10c678u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_10c67c:
    // 0x10c67c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10c67cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10c680:
    // 0x10c680: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x10c680u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_10c684:
    // 0x10c684: 0x320f809  jalr        $t9
label_10c688:
    if (ctx->pc == 0x10C688u) {
        ctx->pc = 0x10C688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C684u;
        // 0x10c688: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10C68Cu;
        goto label_10c68c;
    }
    ctx->pc = 0x10C684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10C68Cu);
        ctx->pc = 0x10C688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C684u;
        // 0x10c688: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C684u, 0x10C68Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10C68Cu;
label_10c68c:
    // 0x10c68c: 0x10000036  b           . + 4 + (0x36 << 2)
label_10c690:
    if (ctx->pc == 0x10C690u) {
        ctx->pc = 0x10C690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C68Cu;
        // 0x10c690: 0x8624024e  lh          $a0, 0x24E($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 590)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10C694u;
        goto label_10c694;
    }
    ctx->pc = 0x10C68Cu;
    {
        const bool branch_taken_0x10c68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C68Cu;
        // 0x10c690: 0x8624024e  lh          $a0, 0x24E($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 590)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c68c) {
            ctx->pc = 0x10C768u;
            goto label_10c768;
        }
    }
    ctx->pc = 0x10C694u;
label_10c694:
    // 0x10c694: 0x7a260030  lq          $a2, 0x30($s1)
    ctx->pc = 0x10c694u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 17), 48)));
label_10c698:
    // 0x10c698: 0x7a270040  lq          $a3, 0x40($s1)
    ctx->pc = 0x10c698u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 17), 64)));
label_10c69c:
    // 0x10c69c: 0x7a280050  lq          $t0, 0x50($s1)
    ctx->pc = 0x10c69cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 17), 80)));
label_10c6a0:
    // 0x10c6a0: 0x7c660000  sq          $a2, 0x0($v1)
    ctx->pc = 0x10c6a0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 6));
label_10c6a4:
    // 0x10c6a4: 0x7c670010  sq          $a3, 0x10($v1)
    ctx->pc = 0x10c6a4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 7));
label_10c6a8:
    // 0x10c6a8: 0x7c680020  sq          $t0, 0x20($v1)
    ctx->pc = 0x10c6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 8));
label_10c6ac:
    // 0x10c6ac: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x10c6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_10c6b0:
    // 0x10c6b0: 0x7a260010  lq          $a2, 0x10($s1)
    ctx->pc = 0x10c6b0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_10c6b4:
    // 0x10c6b4: 0x7c460000  sq          $a2, 0x0($v0)
    ctx->pc = 0x10c6b4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 6));
label_10c6b8:
    // 0x10c6b8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x10c6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_10c6bc:
    // 0x10c6bc: 0xc6210258  lwc1        $f1, 0x258($s1)
    ctx->pc = 0x10c6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_10c6c0:
    // 0x10c6c0: 0x3c023f99  lui         $v0, 0x3F99
    ctx->pc = 0x10c6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
label_10c6c4:
    // 0x10c6c4: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x10c6c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_10c6c8:
    // 0x10c6c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10c6c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10c6cc:
    // 0x10c6cc: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x10c6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_10c6d0:
    // 0x10c6d0: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x10c6d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_10c6d4:
    // 0x10c6d4: 0xc6210200  lwc1        $f1, 0x200($s1)
    ctx->pc = 0x10c6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_10c6d8:
    // 0x10c6d8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x10c6d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_10c6dc:
    // 0x10c6dc: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x10c6dcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_10c6e0:
    // 0x10c6e0: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x10c6e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_10c6e4:
    // 0x10c6e4: 0x0  nop
    ctx->pc = 0x10c6e4u;
    // NOP
label_10c6e8:
    // 0x10c6e8: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x10c6e8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_10c6ec:
    // 0x10c6ec: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x10c6ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_10c6f0:
    // 0x10c6f0: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x10c6f0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_10c6f4:
    // 0x10c6f4: 0xd8860000  lqc2        $vf6, 0x0($a0)
    ctx->pc = 0x10c6f4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_10c6f8:
    // 0x10c6f8: 0x4bc53198  vmulx.xyz   $vf6, $vf6, $vf5x
    ctx->pc = 0x10c6f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_10c6fc:
    // 0x10c6fc: 0xf8860000  sqc2        $vf6, 0x0($a0)
    ctx->pc = 0x10c6fcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[6]));
label_10c700:
    // 0x10c700: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x10c700u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_10c704:
    // 0x10c704: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x10c704u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_10c708:
    // 0x10c708: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x10c708u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_10c70c:
    // 0x10c70c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x10c70cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_10c710:
    // 0x10c710: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x10c710u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_10c714:
    // 0x10c714: 0x86230254  lh          $v1, 0x254($s1)
    ctx->pc = 0x10c714u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 596)));
label_10c718:
    // 0x10c718: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x10c718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_10c71c:
    // 0x10c71c: 0x86250256  lh          $a1, 0x256($s1)
    ctx->pc = 0x10c71cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 598)));
label_10c720:
    // 0x10c720: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x10c720u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_10c724:
    // 0x10c724: 0xc0466e4  jal         func_119B90
label_10c728:
    if (ctx->pc == 0x10C728u) {
        ctx->pc = 0x10C728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C724u;
        // 0x10c728: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10C72Cu;
        goto label_10c72c;
    }
    ctx->pc = 0x10C724u;
    SET_GPR_U32(ctx, 31, 0x10C72Cu);
    ctx->pc = 0x10C728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C724u;
    // 0x10c728: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119B90u, 0x10C724u, 0x10C72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C72Cu;
label_10c72c:
    // 0x10c72c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x10c72cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_10c730:
    // 0x10c730: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10c730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10c734:
    // 0x10c734: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x10c734u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_10c738:
    // 0x10c738: 0x320f809  jalr        $t9
label_10c73c:
    if (ctx->pc == 0x10C73Cu) {
        ctx->pc = 0x10C73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C738u;
        // 0x10c73c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10C740u;
        goto label_10c740;
    }
    ctx->pc = 0x10C738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10C740u);
        ctx->pc = 0x10C73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C738u;
        // 0x10c73c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C738u, 0x10C740u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10C740u;
label_10c740:
    // 0x10c740: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x10c740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_10c744:
    // 0x10c744: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x10c744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_10c748:
    // 0x10c748: 0x24420260  addiu       $v0, $v0, 0x260
    ctx->pc = 0x10c748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 608));
label_10c74c:
    // 0x10c74c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x10c74cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_10c750:
    // 0x10c750: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x10c750u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
label_10c754:
    // 0x10c754: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x10c754u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_10c758:
    // 0x10c758: 0x8f3900c8  lw          $t9, 0xC8($t9)
    ctx->pc = 0x10c758u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 200)));
label_10c75c:
    // 0x10c75c: 0x320f809  jalr        $t9
label_10c760:
    if (ctx->pc == 0x10C760u) {
        ctx->pc = 0x10C760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C75Cu;
        // 0x10c760: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10C764u;
        goto label_10c764;
    }
    ctx->pc = 0x10C75Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10C764u);
        ctx->pc = 0x10C760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C75Cu;
        // 0x10c760: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C75Cu, 0x10C764u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10C764u;
label_10c764:
    // 0x10c764: 0x8624024e  lh          $a0, 0x24E($s1)
    ctx->pc = 0x10c764u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 590)));
label_10c768:
    // 0x10c768: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10c768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10c76c:
    // 0x10c76c: 0x1483002c  bne         $a0, $v1, . + 4 + (0x2C << 2)
label_10c770:
    if (ctx->pc == 0x10C770u) {
        ctx->pc = 0x10C770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C76Cu;
        // 0x10c770: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10C774u;
        goto label_10c774;
    }
    ctx->pc = 0x10C76Cu;
    {
        const bool branch_taken_0x10c76c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x10C770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C76Cu;
        // 0x10c770: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c76c) {
            ctx->pc = 0x10C820u;
            goto label_10c820;
        }
    }
    ctx->pc = 0x10C774u;
label_10c774:
    // 0x10c774: 0xc6220248  lwc1        $f2, 0x248($s1)
    ctx->pc = 0x10c774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_10c778:
    // 0x10c778: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x10c778u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_10c77c:
    // 0x10c77c: 0xc6210244  lwc1        $f1, 0x244($s1)
    ctx->pc = 0x10c77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_10c780:
    // 0x10c780: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x10c780u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10c784:
    // 0x10c784: 0x0  nop
    ctx->pc = 0x10c784u;
    // NOP
label_10c788:
    // 0x10c788: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x10c788u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_10c78c:
    // 0x10c78c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x10c78cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_10c790:
    // 0x10c790: 0x0  nop
    ctx->pc = 0x10c790u;
    // NOP
label_10c794:
    // 0x10c794: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_10c798:
    if (ctx->pc == 0x10C798u) {
        ctx->pc = 0x10C798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C794u;
        // 0x10c798: 0xe6210244  swc1        $f1, 0x244($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 580), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x10C79Cu;
        goto label_10c79c;
    }
    ctx->pc = 0x10C794u;
    {
        const bool branch_taken_0x10c794 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x10C798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C794u;
        // 0x10c798: 0xe6210244  swc1        $f1, 0x244($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 580), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c794) {
            ctx->pc = 0x10C7A0u;
            goto label_10c7a0;
        }
    }
    ctx->pc = 0x10C79Cu;
label_10c79c:
    // 0x10c79c: 0xe6200244  swc1        $f0, 0x244($s1)
    ctx->pc = 0x10c79cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 580), bits); }
label_10c7a0:
    // 0x10c7a0: 0x8e280244  lw          $t0, 0x244($s1)
    ctx->pc = 0x10c7a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 580)));
label_10c7a4:
    // 0x10c7a4: 0x26240230  addiu       $a0, $s1, 0x230
    ctx->pc = 0x10c7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 560));
label_10c7a8:
    // 0x10c7a8: 0x26230220  addiu       $v1, $s1, 0x220
    ctx->pc = 0x10c7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
label_10c7ac:
    // 0x10c7ac: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x10c7acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_10c7b0:
    // 0x10c7b0: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x10c7b0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_10c7b4:
    // 0x10c7b4: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x10c7b4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_10c7b8:
    // 0x10c7b8: 0x0  nop
    ctx->pc = 0x10c7b8u;
    // NOP
label_10c7bc:
    // 0x10c7bc: 0x48a83000  qmtc2.ni    $t0, $vf6
    ctx->pc = 0x10c7bcu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_10c7c0:
    // 0x10c7c0: 0x4b0001c3  vaddw.x     $vf7, $vf0, $vf0w
    ctx->pc = 0x10c7c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
label_10c7c4:
    // 0x10c7c4: 0x4b063a2c  vsub.x      $vf8, $vf7, $vf6
    ctx->pc = 0x10c7c4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
label_10c7c8:
    // 0x10c7c8: 0x4be621bc  vmulax.xyzw $ACC, $vf4, $vf6x
    ctx->pc = 0x10c7c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_10c7cc:
    // 0x10c7cc: 0x4be82a48  vmaddx.xyzw $vf9, $vf5, $vf8x
    ctx->pc = 0x10c7ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
label_10c7d0:
    // 0x10c7d0: 0xf8a90000  sqc2        $vf9, 0x0($a1)
    ctx->pc = 0x10c7d0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[9]));
label_10c7d4:
    // 0x10c7d4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x10c7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_10c7d8:
    // 0x10c7d8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x10c7d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_10c7dc:
    // 0x10c7dc: 0xae23001c  sw          $v1, 0x1C($s1)
    ctx->pc = 0x10c7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 3));
label_10c7e0:
    // 0x10c7e0: 0xc6200244  lwc1        $f0, 0x244($s1)
    ctx->pc = 0x10c7e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10c7e4:
    // 0x10c7e4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x10c7e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_10c7e8:
    // 0x10c7e8: 0x0  nop
    ctx->pc = 0x10c7e8u;
    // NOP
label_10c7ec:
    // 0x10c7ec: 0x4501000f  bc1t        . + 4 + (0xF << 2)
label_10c7f0:
    if (ctx->pc == 0x10C7F0u) {
        ctx->pc = 0x10C7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C7ECu;
        // 0x10c7f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10C7F4u;
        goto label_10c7f4;
    }
    ctx->pc = 0x10C7ECu;
    {
        const bool branch_taken_0x10c7ec = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x10C7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C7ECu;
        // 0x10c7f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c7ec) {
            ctx->pc = 0x10C82Cu;
            goto label_10c82c;
        }
    }
    ctx->pc = 0x10C7F4u;
label_10c7f4:
    // 0x10c7f4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x10c7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_10c7f8:
    // 0x10c7f8: 0xa225007a  sb          $a1, 0x7A($s1)
    ctx->pc = 0x10c7f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 122), (uint8_t)GPR_U32(ctx, 5));
label_10c7fc:
    // 0x10c7fc: 0xa2200078  sb          $zero, 0x78($s1)
    ctx->pc = 0x10c7fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 120), (uint8_t)GPR_U32(ctx, 0));
label_10c800:
    // 0x10c800: 0xa623024e  sh          $v1, 0x24E($s1)
    ctx->pc = 0x10c800u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 590), (uint16_t)GPR_U32(ctx, 3));
label_10c804:
    // 0x10c804: 0x8e2301d4  lw          $v1, 0x1D4($s1)
    ctx->pc = 0x10c804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 468)));
label_10c808:
    // 0x10c808: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_10c80c:
    if (ctx->pc == 0x10C80Cu) {
        ctx->pc = 0x10C80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C808u;
        // 0x10c80c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10C810u;
        goto label_10c810;
    }
    ctx->pc = 0x10C808u;
    {
        const bool branch_taken_0x10c808 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10C80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C808u;
        // 0x10c80c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c808) {
            ctx->pc = 0x10C82Cu;
            goto label_10c82c;
        }
    }
    ctx->pc = 0x10C810u;
label_10c810:
    // 0x10c810: 0xc042570  jal         func_1095C0
label_10c814:
    if (ctx->pc == 0x10C814u) {
        ctx->pc = 0x10C818u;
        goto label_10c818;
    }
    ctx->pc = 0x10C810u;
    SET_GPR_U32(ctx, 31, 0x10C818u);
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x10C810u, 0x10C818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C818u;
label_10c818:
    // 0x10c818: 0x10000005  b           . + 4 + (0x5 << 2)
label_10c81c:
    if (ctx->pc == 0x10C81Cu) {
        ctx->pc = 0x10C81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C818u;
        // 0x10c81c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10C820u;
        goto label_10c820;
    }
    ctx->pc = 0x10C818u;
    {
        const bool branch_taken_0x10c818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C818u;
        // 0x10c81c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c818) {
            ctx->pc = 0x10C830u;
            goto label_10c830;
        }
    }
    ctx->pc = 0x10C820u;
label_10c820:
    // 0x10c820: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
label_10c824:
    if (ctx->pc == 0x10C824u) {
        ctx->pc = 0x10C828u;
        goto label_10c828;
    }
    ctx->pc = 0x10C820u;
    {
        const bool branch_taken_0x10c820 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x10c820) {
            ctx->pc = 0x10C82Cu;
            goto label_10c82c;
        }
    }
    ctx->pc = 0x10C828u;
label_10c828:
    // 0x10c828: 0xa620024e  sh          $zero, 0x24E($s1)
    ctx->pc = 0x10c828u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 590), (uint16_t)GPR_U32(ctx, 0));
label_10c82c:
    // 0x10c82c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10c82cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_10c830:
    // 0x10c830: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10c830u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_10c834:
    // 0x10c834: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10c834u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_10c838:
    // 0x10c838: 0x3e00008  jr          $ra
label_10c83c:
    if (ctx->pc == 0x10C83Cu) {
        ctx->pc = 0x10C83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C838u;
        // 0x10c83c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10C840u;
        goto label_fallthrough_0x10c838;
    }
    ctx->pc = 0x10C838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C838u;
        // 0x10c83c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10c838:
    ctx->pc = 0x10C840u;
}
