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

// Function: FUN_0013d420
// Address: 0x13d420 - 0x13d52c
void FUN_0013d420_0x13d420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013d420_0x13d420");
#endif

    switch (ctx->pc) {
        case 0x13d420u: goto label_13d420;
        case 0x13d424u: goto label_13d424;
        case 0x13d428u: goto label_13d428;
        case 0x13d42cu: goto label_13d42c;
        case 0x13d430u: goto label_13d430;
        case 0x13d434u: goto label_13d434;
        case 0x13d438u: goto label_13d438;
        case 0x13d43cu: goto label_13d43c;
        case 0x13d440u: goto label_13d440;
        case 0x13d444u: goto label_13d444;
        case 0x13d448u: goto label_13d448;
        case 0x13d44cu: goto label_13d44c;
        case 0x13d450u: goto label_13d450;
        case 0x13d454u: goto label_13d454;
        case 0x13d458u: goto label_13d458;
        case 0x13d45cu: goto label_13d45c;
        case 0x13d460u: goto label_13d460;
        case 0x13d464u: goto label_13d464;
        case 0x13d468u: goto label_13d468;
        case 0x13d46cu: goto label_13d46c;
        case 0x13d470u: goto label_13d470;
        case 0x13d474u: goto label_13d474;
        case 0x13d478u: goto label_13d478;
        case 0x13d47cu: goto label_13d47c;
        case 0x13d480u: goto label_13d480;
        case 0x13d484u: goto label_13d484;
        case 0x13d488u: goto label_13d488;
        case 0x13d48cu: goto label_13d48c;
        case 0x13d490u: goto label_13d490;
        case 0x13d494u: goto label_13d494;
        case 0x13d498u: goto label_13d498;
        case 0x13d49cu: goto label_13d49c;
        case 0x13d4a0u: goto label_13d4a0;
        case 0x13d4a4u: goto label_13d4a4;
        case 0x13d4a8u: goto label_13d4a8;
        case 0x13d4acu: goto label_13d4ac;
        case 0x13d4b0u: goto label_13d4b0;
        case 0x13d4b4u: goto label_13d4b4;
        case 0x13d4b8u: goto label_13d4b8;
        case 0x13d4bcu: goto label_13d4bc;
        case 0x13d4c0u: goto label_13d4c0;
        case 0x13d4c4u: goto label_13d4c4;
        case 0x13d4c8u: goto label_13d4c8;
        case 0x13d4ccu: goto label_13d4cc;
        case 0x13d4d0u: goto label_13d4d0;
        case 0x13d4d4u: goto label_13d4d4;
        case 0x13d4d8u: goto label_13d4d8;
        case 0x13d4dcu: goto label_13d4dc;
        case 0x13d4e0u: goto label_13d4e0;
        case 0x13d4e4u: goto label_13d4e4;
        case 0x13d4e8u: goto label_13d4e8;
        case 0x13d4ecu: goto label_13d4ec;
        case 0x13d4f0u: goto label_13d4f0;
        case 0x13d4f4u: goto label_13d4f4;
        case 0x13d4f8u: goto label_13d4f8;
        case 0x13d4fcu: goto label_13d4fc;
        case 0x13d500u: goto label_13d500;
        case 0x13d504u: goto label_13d504;
        case 0x13d508u: goto label_13d508;
        case 0x13d50cu: goto label_13d50c;
        case 0x13d510u: goto label_13d510;
        case 0x13d514u: goto label_13d514;
        case 0x13d518u: goto label_13d518;
        case 0x13d51cu: goto label_13d51c;
        case 0x13d520u: goto label_13d520;
        case 0x13d524u: goto label_13d524;
        case 0x13d528u: goto label_13d528;
        default: break;
    }

    ctx->pc = 0x13d420u;

label_13d420:
    // 0x13d420: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x13d420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_13d424:
    // 0x13d424: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x13d424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_13d428:
    // 0x13d428: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x13d428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_13d42c:
    // 0x13d42c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13d42cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_13d430:
    // 0x13d430: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13d430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_13d434:
    // 0x13d434: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x13d434u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_13d438:
    // 0x13d438: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13d438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_13d43c:
    // 0x13d43c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x13d43cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_13d440:
    // 0x13d440: 0x16220007  bne         $s1, $v0, . + 4 + (0x7 << 2)
label_13d444:
    if (ctx->pc == 0x13D444u) {
        ctx->pc = 0x13D444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D440u;
        // 0x13d444: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D448u;
        goto label_13d448;
    }
    ctx->pc = 0x13D440u;
    {
        const bool branch_taken_0x13d440 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x13D444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D440u;
        // 0x13d444: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d440) {
            ctx->pc = 0x13D460u;
            goto label_13d460;
        }
    }
    ctx->pc = 0x13D448u;
label_13d448:
    // 0x13d448: 0xc080874  jal         func_2021D0
label_13d44c:
    if (ctx->pc == 0x13D44Cu) {
        ctx->pc = 0x13D44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D448u;
        // 0x13d44c: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D450u;
        goto label_13d450;
    }
    ctx->pc = 0x13D448u;
    SET_GPR_U32(ctx, 31, 0x13D450u);
    ctx->pc = 0x13D44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D448u;
    // 0x13d44c: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2021D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2021D0u, 0x13D448u, 0x13D450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D450u;
label_13d450:
    // 0x13d450: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_13d454:
    if (ctx->pc == 0x13D454u) {
        ctx->pc = 0x13D458u;
        goto label_13d458;
    }
    ctx->pc = 0x13D450u;
    {
        const bool branch_taken_0x13d450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d450) {
            ctx->pc = 0x13D460u;
            goto label_13d460;
        }
    }
    ctx->pc = 0x13D458u;
label_13d458:
    // 0x13d458: 0x1000002e  b           . + 4 + (0x2E << 2)
label_13d45c:
    if (ctx->pc == 0x13D45Cu) {
        ctx->pc = 0x13D45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D458u;
        // 0x13d45c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D460u;
        goto label_13d460;
    }
    ctx->pc = 0x13D458u;
    {
        const bool branch_taken_0x13d458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D458u;
        // 0x13d45c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d458) {
            ctx->pc = 0x13D514u;
            goto label_13d514;
        }
    }
    ctx->pc = 0x13D460u;
label_13d460:
    // 0x13d460: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x13d460u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_13d464:
    // 0x13d464: 0xc0806b0  jal         func_201AC0
label_13d468:
    if (ctx->pc == 0x13D468u) {
        ctx->pc = 0x13D468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D464u;
        // 0x13d468: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D46Cu;
        goto label_13d46c;
    }
    ctx->pc = 0x13D464u;
    SET_GPR_U32(ctx, 31, 0x13D46Cu);
    ctx->pc = 0x13D468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D464u;
    // 0x13d468: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201AC0u, 0x13D464u, 0x13D46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D46Cu;
label_13d46c:
    // 0x13d46c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_13d470:
    if (ctx->pc == 0x13D470u) {
        ctx->pc = 0x13D470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D46Cu;
        // 0x13d470: 0x26040058  addiu       $a0, $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D474u;
        goto label_13d474;
    }
    ctx->pc = 0x13D46Cu;
    {
        const bool branch_taken_0x13d46c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13D470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D46Cu;
        // 0x13d470: 0x26040058  addiu       $a0, $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d46c) {
            ctx->pc = 0x13D47Cu;
            goto label_13d47c;
        }
    }
    ctx->pc = 0x13D474u;
label_13d474:
    // 0x13d474: 0x10000027  b           . + 4 + (0x27 << 2)
label_13d478:
    if (ctx->pc == 0x13D478u) {
        ctx->pc = 0x13D478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D474u;
        // 0x13d478: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D47Cu;
        goto label_13d47c;
    }
    ctx->pc = 0x13D474u;
    {
        const bool branch_taken_0x13d474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D474u;
        // 0x13d478: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d474) {
            ctx->pc = 0x13D514u;
            goto label_13d514;
        }
    }
    ctx->pc = 0x13D47Cu;
label_13d47c:
    // 0x13d47c: 0xc04c554  jal         func_131550
label_13d480:
    if (ctx->pc == 0x13D480u) {
        ctx->pc = 0x13D484u;
        goto label_13d484;
    }
    ctx->pc = 0x13D47Cu;
    SET_GPR_U32(ctx, 31, 0x13D484u);
    ctx->pc = 0x131550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131550u, 0x13D47Cu, 0x13D484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D484u;
label_13d484:
    // 0x13d484: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x13d484u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_13d488:
    // 0x13d488: 0xc04c54c  jal         func_131530
label_13d48c:
    if (ctx->pc == 0x13D48Cu) {
        ctx->pc = 0x13D48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D488u;
        // 0x13d48c: 0x27a40048  addiu       $a0, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D490u;
        goto label_13d490;
    }
    ctx->pc = 0x13D488u;
    SET_GPR_U32(ctx, 31, 0x13D490u);
    ctx->pc = 0x13D48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D488u;
    // 0x13d48c: 0x27a40048  addiu       $a0, $sp, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131530u, 0x13D488u, 0x13D490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D490u;
label_13d490:
    // 0x13d490: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13d490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_13d494:
    // 0x13d494: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x13d494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_13d498:
    // 0x13d498: 0xc04c554  jal         func_131550
label_13d49c:
    if (ctx->pc == 0x13D49Cu) {
        ctx->pc = 0x13D49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D498u;
        // 0x13d49c: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D4A0u;
        goto label_13d4a0;
    }
    ctx->pc = 0x13D498u;
    SET_GPR_U32(ctx, 31, 0x13D4A0u);
    ctx->pc = 0x13D49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D498u;
    // 0x13d49c: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131550u, 0x13D498u, 0x13D4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D4A0u;
label_13d4a0:
    // 0x13d4a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13d4a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13d4a4:
    // 0x13d4a4: 0xc04c550  jal         func_131540
label_13d4a8:
    if (ctx->pc == 0x13D4A8u) {
        ctx->pc = 0x13D4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D4A4u;
        // 0x13d4a8: 0x27a4004c  addiu       $a0, $sp, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D4ACu;
        goto label_13d4ac;
    }
    ctx->pc = 0x13D4A4u;
    SET_GPR_U32(ctx, 31, 0x13D4ACu);
    ctx->pc = 0x13D4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D4A4u;
    // 0x13d4a8: 0x27a4004c  addiu       $a0, $sp, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131540u, 0x13D4A4u, 0x13D4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D4ACu;
label_13d4ac:
    // 0x13d4ac: 0x27a20044  addiu       $v0, $sp, 0x44
    ctx->pc = 0x13d4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
label_13d4b0:
    // 0x13d4b0: 0x8fb0004c  lw          $s0, 0x4C($sp)
    ctx->pc = 0x13d4b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_13d4b4:
    // 0x13d4b4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x13d4b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13d4b8:
    // 0x13d4b8: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x13d4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_13d4bc:
    // 0x13d4bc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x13d4bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_13d4c0:
    // 0x13d4c0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x13d4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_13d4c4:
    // 0x13d4c4: 0x10500012  beq         $v0, $s0, . + 4 + (0x12 << 2)
label_13d4c8:
    if (ctx->pc == 0x13D4C8u) {
        ctx->pc = 0x13D4CCu;
        goto label_13d4cc;
    }
    ctx->pc = 0x13D4C4u;
    {
        const bool branch_taken_0x13d4c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x13d4c4) {
            ctx->pc = 0x13D510u;
            goto label_13d510;
        }
    }
    ctx->pc = 0x13D4CCu;
label_13d4cc:
    // 0x13d4cc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x13d4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_13d4d0:
    // 0x13d4d0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x13d4d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_13d4d4:
    // 0x13d4d4: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x13d4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_13d4d8:
    // 0x13d4d8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x13d4d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13d4dc:
    // 0x13d4dc: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x13d4dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_13d4e0:
    // 0x13d4e0: 0x320f809  jalr        $t9
label_13d4e4:
    if (ctx->pc == 0x13D4E4u) {
        ctx->pc = 0x13D4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D4E0u;
        // 0x13d4e4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D4E8u;
        goto label_13d4e8;
    }
    ctx->pc = 0x13D4E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13D4E8u);
        ctx->pc = 0x13D4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D4E0u;
        // 0x13d4e4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D4E0u, 0x13D4E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13D4E8u;
label_13d4e8:
    // 0x13d4e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_13d4ec:
    if (ctx->pc == 0x13D4ECu) {
        ctx->pc = 0x13D4F0u;
        goto label_13d4f0;
    }
    ctx->pc = 0x13D4E8u;
    {
        const bool branch_taken_0x13d4e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d4e8) {
            ctx->pc = 0x13D4F8u;
            goto label_13d4f8;
        }
    }
    ctx->pc = 0x13D4F0u;
label_13d4f0:
    // 0x13d4f0: 0x10000009  b           . + 4 + (0x9 << 2)
label_13d4f4:
    if (ctx->pc == 0x13D4F4u) {
        ctx->pc = 0x13D4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D4F0u;
        // 0x13d4f4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D4F8u;
        goto label_13d4f8;
    }
    ctx->pc = 0x13D4F0u;
    {
        const bool branch_taken_0x13d4f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D4F0u;
        // 0x13d4f4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d4f0) {
            ctx->pc = 0x13D518u;
            goto label_13d518;
        }
    }
    ctx->pc = 0x13D4F8u;
label_13d4f8:
    // 0x13d4f8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x13d4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_13d4fc:
    // 0x13d4fc: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x13d4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_13d500:
    // 0x13d500: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x13d500u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_13d504:
    // 0x13d504: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x13d504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_13d508:
    // 0x13d508: 0x1450fff0  bne         $v0, $s0, . + 4 + (-0x10 << 2)
label_13d50c:
    if (ctx->pc == 0x13D50Cu) {
        ctx->pc = 0x13D510u;
        goto label_13d510;
    }
    ctx->pc = 0x13D508u;
    {
        const bool branch_taken_0x13d508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x13d508) {
            ctx->pc = 0x13D4CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13d4cc;
        }
    }
    ctx->pc = 0x13D510u;
label_13d510:
    // 0x13d510: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13d510u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13d514:
    // 0x13d514: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x13d514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_13d518:
    // 0x13d518: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13d518u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_13d51c:
    // 0x13d51c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13d51cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13d520:
    // 0x13d520: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13d520u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_13d524:
    // 0x13d524: 0x3e00008  jr          $ra
label_13d528:
    if (ctx->pc == 0x13D528u) {
        ctx->pc = 0x13D528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D524u;
        // 0x13d528: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D52Cu;
        goto label_fallthrough_0x13d524;
    }
    ctx->pc = 0x13D524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D524u;
        // 0x13d528: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13d524:
    ctx->pc = 0x13D52Cu;
}
