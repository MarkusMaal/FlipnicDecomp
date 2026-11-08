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

// Function: FUN_0011a410
// Address: 0x11a410 - 0x11a52c
void FUN_0011a410_0x11a410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011a410_0x11a410");
#endif

    switch (ctx->pc) {
        case 0x11a488u: goto label_11a488;
        case 0x11a4acu: goto label_11a4ac;
        default: break;
    }

    ctx->pc = 0x11a410u;

    // 0x11a410: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x11a410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x11a414: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x11a414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x11a418: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x11a418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x11a41c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x11a41cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x11a420: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x11a420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x11a424: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x11a424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x11a428: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x11a428u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a42c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x11a42cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x11a430: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11a430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x11a434: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11a434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x11a438: 0x8ce400b0  lw          $a0, 0xB0($a3)
    ctx->pc = 0x11a438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 176)));
    // 0x11a43c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x11a43cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a440: 0x8ce300c0  lw          $v1, 0xC0($a3)
    ctx->pc = 0x11a440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 192)));
    // 0x11a444: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x11a444u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x11a448: 0x439823  subu        $s3, $v0, $v1
    ctx->pc = 0x11a448u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11a44c: 0x266082a  slt         $at, $s3, $a2
    ctx->pc = 0x11a44cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x11a450: 0xc1980a  movz        $s3, $a2, $at
    ctx->pc = 0x11a450u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 6));
    // 0x11a454: 0x8e1100b4  lw          $s1, 0xB4($s0)
    ctx->pc = 0x11a454u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x11a458: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x11a458u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x11a45c: 0x8e1200d8  lw          $s2, 0xD8($s0)
    ctx->pc = 0x11a45cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x11a460: 0x34210001  ori         $at, $at, 0x1
    ctx->pc = 0x11a460u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1);
    // 0x11a464: 0x2331021  addu        $v0, $s1, $s3
    ctx->pc = 0x11a464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x11a468: 0x41082a  slt         $at, $v0, $at
    ctx->pc = 0x11a468u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x11a46c: 0x1420000b  bnez        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x11A46Cu;
    {
        const bool branch_taken_0x11a46c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A46Cu;
        // 0x11a470: 0x260a82d  daddu       $s5, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a46c) {
            ctx->pc = 0x11A49Cu;
            goto label_11a49c;
        }
    }
    ctx->pc = 0x11A474u;
    // 0x11a474: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x11a474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x11a478: 0x2512021  addu        $a0, $s2, $s1
    ctx->pc = 0x11a478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x11a47c: 0x513023  subu        $a2, $v0, $s1
    ctx->pc = 0x11a47cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x11a480: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x11A480u;
    SET_GPR_U32(ctx, 31, 0x11A488u);
    ctx->pc = 0x11A484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A480u;
    // 0x11a484: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x11A480u, 0x11A488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A488u;
label_11a488:
    // 0x11a488: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x11a488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x11a48c: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x11a48cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x11a490: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x11a490u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x11a494: 0x262a823  subu        $s5, $s3, $v0
    ctx->pc = 0x11a494u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x11a498: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x11a498u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11a49c:
    // 0x11a49c: 0x2512021  addu        $a0, $s2, $s1
    ctx->pc = 0x11a49cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x11a4a0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x11a4a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a4a4: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x11A4A4u;
    SET_GPR_U32(ctx, 31, 0x11A4ACu);
    ctx->pc = 0x11A4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A4A4u;
    // 0x11a4a8: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x11A4A4u, 0x11A4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A4ACu;
label_11a4ac:
    // 0x11a4ac: 0x2351021  addu        $v0, $s1, $s5
    ctx->pc = 0x11a4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    // 0x11a4b0: 0xae0200b4  sw          $v0, 0xB4($s0)
    ctx->pc = 0x11a4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 2));
    // 0x11a4b4: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x11a4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x11a4b8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x11a4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x11a4bc: 0xae0200b0  sw          $v0, 0xB0($s0)
    ctx->pc = 0x11a4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
    // 0x11a4c0: 0x8e0200b8  lw          $v0, 0xB8($s0)
    ctx->pc = 0x11a4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x11a4c4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11A4C4u;
    {
        const bool branch_taken_0x11a4c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11a4c4) {
            ctx->pc = 0x11A4ECu;
            goto label_11a4ec;
        }
    }
    ctx->pc = 0x11A4CCu;
    // 0x11a4cc: 0x8e0300b4  lw          $v1, 0xB4($s0)
    ctx->pc = 0x11a4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x11a4d0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x11a4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x11a4d4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x11a4d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11a4d8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11A4D8u;
    {
        const bool branch_taken_0x11a4d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A4D8u;
        // 0x11a4dc: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a4d8) {
            ctx->pc = 0x11A508u;
            goto label_11a508;
        }
    }
    ctx->pc = 0x11A4E0u;
    // 0x11a4e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11a4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11a4e4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x11A4E4u;
    {
        const bool branch_taken_0x11a4e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A4E4u;
        // 0x11a4e8: 0xae0200b8  sw          $v0, 0xB8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a4e4) {
            ctx->pc = 0x11A504u;
            goto label_11a504;
        }
    }
    ctx->pc = 0x11A4ECu;
label_11a4ec:
    // 0x11a4ec: 0x8e0200b4  lw          $v0, 0xB4($s0)
    ctx->pc = 0x11a4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x11a4f0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x11a4f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x11a4f4: 0x41082a  slt         $at, $v0, $at
    ctx->pc = 0x11a4f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x11a4f8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x11A4F8u;
    {
        const bool branch_taken_0x11a4f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a4f8) {
            ctx->pc = 0x11A504u;
            goto label_11a504;
        }
    }
    ctx->pc = 0x11A500u;
    // 0x11a500: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x11a500u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
label_11a504:
    // 0x11a504: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x11a504u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_11a508:
    // 0x11a508: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x11a508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11a50c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x11a50cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11a510: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x11a510u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11a514: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x11a514u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11a518: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x11a518u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11a51c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11a51cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11a520: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11a520u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a524: 0x3e00008  jr          $ra
    ctx->pc = 0x11A524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A524u;
        // 0x11a528: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A52Cu;
}
