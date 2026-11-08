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

// Function: FUN_001313b0
// Address: 0x1313b0 - 0x131528
void FUN_001313b0_0x1313b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001313b0_0x1313b0");
#endif

    switch (ctx->pc) {
        case 0x1313b0u: goto label_1313b0;
        case 0x1313b4u: goto label_1313b4;
        case 0x1313b8u: goto label_1313b8;
        case 0x1313bcu: goto label_1313bc;
        case 0x1313c0u: goto label_1313c0;
        case 0x1313c4u: goto label_1313c4;
        case 0x1313c8u: goto label_1313c8;
        case 0x1313ccu: goto label_1313cc;
        case 0x1313d0u: goto label_1313d0;
        case 0x1313d4u: goto label_1313d4;
        case 0x1313d8u: goto label_1313d8;
        case 0x1313dcu: goto label_1313dc;
        case 0x1313e0u: goto label_1313e0;
        case 0x1313e4u: goto label_1313e4;
        case 0x1313e8u: goto label_1313e8;
        case 0x1313ecu: goto label_1313ec;
        case 0x1313f0u: goto label_1313f0;
        case 0x1313f4u: goto label_1313f4;
        case 0x1313f8u: goto label_1313f8;
        case 0x1313fcu: goto label_1313fc;
        case 0x131400u: goto label_131400;
        case 0x131404u: goto label_131404;
        case 0x131408u: goto label_131408;
        case 0x13140cu: goto label_13140c;
        case 0x131410u: goto label_131410;
        case 0x131414u: goto label_131414;
        case 0x131418u: goto label_131418;
        case 0x13141cu: goto label_13141c;
        case 0x131420u: goto label_131420;
        case 0x131424u: goto label_131424;
        case 0x131428u: goto label_131428;
        case 0x13142cu: goto label_13142c;
        case 0x131430u: goto label_131430;
        case 0x131434u: goto label_131434;
        case 0x131438u: goto label_131438;
        case 0x13143cu: goto label_13143c;
        case 0x131440u: goto label_131440;
        case 0x131444u: goto label_131444;
        case 0x131448u: goto label_131448;
        case 0x13144cu: goto label_13144c;
        case 0x131450u: goto label_131450;
        case 0x131454u: goto label_131454;
        case 0x131458u: goto label_131458;
        case 0x13145cu: goto label_13145c;
        case 0x131460u: goto label_131460;
        case 0x131464u: goto label_131464;
        case 0x131468u: goto label_131468;
        case 0x13146cu: goto label_13146c;
        case 0x131470u: goto label_131470;
        case 0x131474u: goto label_131474;
        case 0x131478u: goto label_131478;
        case 0x13147cu: goto label_13147c;
        case 0x131480u: goto label_131480;
        case 0x131484u: goto label_131484;
        case 0x131488u: goto label_131488;
        case 0x13148cu: goto label_13148c;
        case 0x131490u: goto label_131490;
        case 0x131494u: goto label_131494;
        case 0x131498u: goto label_131498;
        case 0x13149cu: goto label_13149c;
        case 0x1314a0u: goto label_1314a0;
        case 0x1314a4u: goto label_1314a4;
        case 0x1314a8u: goto label_1314a8;
        case 0x1314acu: goto label_1314ac;
        case 0x1314b0u: goto label_1314b0;
        case 0x1314b4u: goto label_1314b4;
        case 0x1314b8u: goto label_1314b8;
        case 0x1314bcu: goto label_1314bc;
        case 0x1314c0u: goto label_1314c0;
        case 0x1314c4u: goto label_1314c4;
        case 0x1314c8u: goto label_1314c8;
        case 0x1314ccu: goto label_1314cc;
        case 0x1314d0u: goto label_1314d0;
        case 0x1314d4u: goto label_1314d4;
        case 0x1314d8u: goto label_1314d8;
        case 0x1314dcu: goto label_1314dc;
        case 0x1314e0u: goto label_1314e0;
        case 0x1314e4u: goto label_1314e4;
        case 0x1314e8u: goto label_1314e8;
        case 0x1314ecu: goto label_1314ec;
        case 0x1314f0u: goto label_1314f0;
        case 0x1314f4u: goto label_1314f4;
        case 0x1314f8u: goto label_1314f8;
        case 0x1314fcu: goto label_1314fc;
        case 0x131500u: goto label_131500;
        case 0x131504u: goto label_131504;
        case 0x131508u: goto label_131508;
        case 0x13150cu: goto label_13150c;
        case 0x131510u: goto label_131510;
        case 0x131514u: goto label_131514;
        case 0x131518u: goto label_131518;
        case 0x13151cu: goto label_13151c;
        case 0x131520u: goto label_131520;
        case 0x131524u: goto label_131524;
        default: break;
    }

    ctx->pc = 0x1313b0u;

label_1313b0:
    // 0x1313b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1313b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1313b4:
    // 0x1313b4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1313b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1313b8:
    // 0x1313b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1313b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1313bc:
    // 0x1313bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1313bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1313c0:
    // 0x1313c0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1313c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1313c4:
    // 0x1313c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1313c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1313c8:
    // 0x1313c8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1313c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1313cc:
    // 0x1313cc: 0x1260004e  beqz        $s3, . + 4 + (0x4E << 2)
label_1313d0:
    if (ctx->pc == 0x1313D0u) {
        ctx->pc = 0x1313D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1313CCu;
        // 0x1313d0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1313D4u;
        goto label_1313d4;
    }
    ctx->pc = 0x1313CCu;
    {
        const bool branch_taken_0x1313cc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1313D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1313CCu;
        // 0x1313d0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1313cc) {
            ctx->pc = 0x131508u;
            goto label_131508;
        }
    }
    ctx->pc = 0x1313D4u;
label_1313d4:
    // 0x1313d4: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1313d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
label_1313d8:
    // 0x1313d8: 0x24428ba0  addiu       $v0, $v0, -0x7460
    ctx->pc = 0x1313d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937504));
label_1313dc:
    // 0x1313dc: 0xc04c57c  jal         func_1315F0
label_1313e0:
    if (ctx->pc == 0x1313E0u) {
        ctx->pc = 0x1313E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1313DCu;
        // 0x1313e0: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1313E4u;
        goto label_1313e4;
    }
    ctx->pc = 0x1313DCu;
    SET_GPR_U32(ctx, 31, 0x1313E4u);
    ctx->pc = 0x1313E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1313DCu;
    // 0x1313e0: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1315F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1315F0u, 0x1313DCu, 0x1313E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1313E4u;
label_1313e4:
    // 0x1313e4: 0xc04c554  jal         func_131550
label_1313e8:
    if (ctx->pc == 0x1313E8u) {
        ctx->pc = 0x1313E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1313E4u;
        // 0x1313e8: 0x26640058  addiu       $a0, $s3, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1313ECu;
        goto label_1313ec;
    }
    ctx->pc = 0x1313E4u;
    SET_GPR_U32(ctx, 31, 0x1313ECu);
    ctx->pc = 0x1313E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1313E4u;
    // 0x1313e8: 0x26640058  addiu       $a0, $s3, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131550u, 0x1313E4u, 0x1313ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1313ECu;
label_1313ec:
    // 0x1313ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1313ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1313f0:
    // 0x1313f0: 0xc04c550  jal         func_131540
label_1313f4:
    if (ctx->pc == 0x1313F4u) {
        ctx->pc = 0x1313F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1313F0u;
        // 0x1313f4: 0x27a4005c  addiu       $a0, $sp, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1313F8u;
        goto label_1313f8;
    }
    ctx->pc = 0x1313F0u;
    SET_GPR_U32(ctx, 31, 0x1313F8u);
    ctx->pc = 0x1313F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1313F0u;
    // 0x1313f4: 0x27a4005c  addiu       $a0, $sp, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131540u, 0x1313F0u, 0x1313F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1313F8u;
label_1313f8:
    // 0x1313f8: 0x8fb0005c  lw          $s0, 0x5C($sp)
    ctx->pc = 0x1313f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1313fc:
    // 0x1313fc: 0x2671005c  addiu       $s1, $s3, 0x5C
    ctx->pc = 0x1313fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 92));
label_131400:
    // 0x131400: 0xc04c4e8  jal         func_1313A0
label_131404:
    if (ctx->pc == 0x131404u) {
        ctx->pc = 0x131404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131400u;
        // 0x131404: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131408u;
        goto label_131408;
    }
    ctx->pc = 0x131400u;
    SET_GPR_U32(ctx, 31, 0x131408u);
    ctx->pc = 0x131404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131400u;
    // 0x131404: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1313A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1313A0u, 0x131400u, 0x131408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131408u;
label_131408:
    // 0x131408: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x131408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_13140c:
    // 0x13140c: 0x27a30058  addiu       $v1, $sp, 0x58
    ctx->pc = 0x13140cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_131410:
    // 0x131410: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x131410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
label_131414:
    // 0x131414: 0x27a20054  addiu       $v0, $sp, 0x54
    ctx->pc = 0x131414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_131418:
    // 0x131418: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x131418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13141c:
    // 0x13141c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x13141cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_131420:
    // 0x131420: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x131420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_131424:
    // 0x131424: 0x1050001b  beq         $v0, $s0, . + 4 + (0x1B << 2)
label_131428:
    if (ctx->pc == 0x131428u) {
        ctx->pc = 0x13142Cu;
        goto label_13142c;
    }
    ctx->pc = 0x131424u;
    {
        const bool branch_taken_0x131424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x131424) {
            ctx->pc = 0x131494u;
            goto label_131494;
        }
    }
    ctx->pc = 0x13142Cu;
label_13142c:
    // 0x13142c: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x13142cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_131430:
    // 0x131430: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x131430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_131434:
    // 0x131434: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_131438:
    if (ctx->pc == 0x131438u) {
        ctx->pc = 0x13143Cu;
        goto label_13143c;
    }
    ctx->pc = 0x131434u;
    {
        const bool branch_taken_0x131434 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x131434) {
            ctx->pc = 0x13144Cu;
            goto label_13144c;
        }
    }
    ctx->pc = 0x13143Cu;
label_13143c:
    // 0x13143c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x13143cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_131440:
    // 0x131440: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x131440u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_131444:
    // 0x131444: 0x320f809  jalr        $t9
label_131448:
    if (ctx->pc == 0x131448u) {
        ctx->pc = 0x131448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131444u;
        // 0x131448: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13144Cu;
        goto label_13144c;
    }
    ctx->pc = 0x131444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13144Cu);
        ctx->pc = 0x131448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131444u;
        // 0x131448: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131444u, 0x13144Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13144Cu;
label_13144c:
    // 0x13144c: 0x0  nop
    ctx->pc = 0x13144cu;
    // NOP
label_131450:
    // 0x131450: 0xc04c554  jal         func_131550
label_131454:
    if (ctx->pc == 0x131454u) {
        ctx->pc = 0x131454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131450u;
        // 0x131454: 0x26640058  addiu       $a0, $s3, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131458u;
        goto label_131458;
    }
    ctx->pc = 0x131450u;
    SET_GPR_U32(ctx, 31, 0x131458u);
    ctx->pc = 0x131454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131450u;
    // 0x131454: 0x26640058  addiu       $a0, $s3, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131550u, 0x131450u, 0x131458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131458u;
label_131458:
    // 0x131458: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x131458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13145c:
    // 0x13145c: 0xc04c550  jal         func_131540
label_131460:
    if (ctx->pc == 0x131460u) {
        ctx->pc = 0x131460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13145Cu;
        // 0x131460: 0x27a4005c  addiu       $a0, $sp, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131464u;
        goto label_131464;
    }
    ctx->pc = 0x13145Cu;
    SET_GPR_U32(ctx, 31, 0x131464u);
    ctx->pc = 0x131460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13145Cu;
    // 0x131460: 0x27a4005c  addiu       $a0, $sp, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131540u, 0x13145Cu, 0x131464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131464u;
label_131464:
    // 0x131464: 0x8fb0005c  lw          $s0, 0x5C($sp)
    ctx->pc = 0x131464u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_131468:
    // 0x131468: 0xc04c4e8  jal         func_1313A0
label_13146c:
    if (ctx->pc == 0x13146Cu) {
        ctx->pc = 0x13146Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131468u;
        // 0x13146c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131470u;
        goto label_131470;
    }
    ctx->pc = 0x131468u;
    SET_GPR_U32(ctx, 31, 0x131470u);
    ctx->pc = 0x13146Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131468u;
    // 0x13146c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1313A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1313A0u, 0x131468u, 0x131470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131470u;
label_131470:
    // 0x131470: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x131470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_131474:
    // 0x131474: 0x27a3006c  addiu       $v1, $sp, 0x6C
    ctx->pc = 0x131474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
label_131478:
    // 0x131478: 0xafa4006c  sw          $a0, 0x6C($sp)
    ctx->pc = 0x131478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 4));
label_13147c:
    // 0x13147c: 0x27a20054  addiu       $v0, $sp, 0x54
    ctx->pc = 0x13147cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_131480:
    // 0x131480: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x131480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_131484:
    // 0x131484: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x131484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_131488:
    // 0x131488: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x131488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_13148c:
    // 0x13148c: 0x1450ffe7  bne         $v0, $s0, . + 4 + (-0x19 << 2)
label_131490:
    if (ctx->pc == 0x131490u) {
        ctx->pc = 0x131494u;
        goto label_131494;
    }
    ctx->pc = 0x13148Cu;
    {
        const bool branch_taken_0x13148c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x13148c) {
            ctx->pc = 0x13142Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13142c;
        }
    }
    ctx->pc = 0x131494u;
label_131494:
    // 0x131494: 0x0  nop
    ctx->pc = 0x131494u;
    // NOP
label_131498:
    // 0x131498: 0x26640058  addiu       $a0, $s3, 0x58
    ctx->pc = 0x131498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 88));
label_13149c:
    // 0x13149c: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
label_1314a0:
    if (ctx->pc == 0x1314A0u) {
        ctx->pc = 0x1314A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13149Cu;
        // 0x1314a0: 0x12143c  dsll32      $v0, $s2, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1314A4u;
        goto label_1314a4;
    }
    ctx->pc = 0x13149Cu;
    {
        const bool branch_taken_0x13149c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1314A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13149Cu;
        // 0x1314a0: 0x12143c  dsll32      $v0, $s2, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13149c) {
            ctx->pc = 0x1314F4u;
            goto label_1314f4;
        }
    }
    ctx->pc = 0x1314A4u;
label_1314a4:
    // 0x1314a4: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
label_1314a8:
    if (ctx->pc == 0x1314A8u) {
        ctx->pc = 0x1314ACu;
        goto label_1314ac;
    }
    ctx->pc = 0x1314A4u;
    {
        const bool branch_taken_0x1314a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1314a4) {
            ctx->pc = 0x1314F0u;
            goto label_1314f0;
        }
    }
    ctx->pc = 0x1314ACu;
label_1314ac:
    // 0x1314ac: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
label_1314b0:
    if (ctx->pc == 0x1314B0u) {
        ctx->pc = 0x1314B4u;
        goto label_1314b4;
    }
    ctx->pc = 0x1314ACu;
    {
        const bool branch_taken_0x1314ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1314ac) {
            ctx->pc = 0x1314F0u;
            goto label_1314f0;
        }
    }
    ctx->pc = 0x1314B4u;
label_1314b4:
    // 0x1314b4: 0xc04c554  jal         func_131550
label_1314b8:
    if (ctx->pc == 0x1314B8u) {
        ctx->pc = 0x1314BCu;
        goto label_1314bc;
    }
    ctx->pc = 0x1314B4u;
    SET_GPR_U32(ctx, 31, 0x1314BCu);
    ctx->pc = 0x131550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131550u, 0x1314B4u, 0x1314BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1314BCu;
label_1314bc:
    // 0x1314bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1314bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1314c0:
    // 0x1314c0: 0xc04c550  jal         func_131540
label_1314c4:
    if (ctx->pc == 0x1314C4u) {
        ctx->pc = 0x1314C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1314C0u;
        // 0x1314c4: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1314C8u;
        goto label_1314c8;
    }
    ctx->pc = 0x1314C0u;
    SET_GPR_U32(ctx, 31, 0x1314C8u);
    ctx->pc = 0x1314C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1314C0u;
    // 0x1314c4: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131540u, 0x1314C0u, 0x1314C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1314C8u;
label_1314c8:
    // 0x1314c8: 0xc04c554  jal         func_131550
label_1314cc:
    if (ctx->pc == 0x1314CCu) {
        ctx->pc = 0x1314CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1314C8u;
        // 0x1314cc: 0x26640058  addiu       $a0, $s3, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1314D0u;
        goto label_1314d0;
    }
    ctx->pc = 0x1314C8u;
    SET_GPR_U32(ctx, 31, 0x1314D0u);
    ctx->pc = 0x1314CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1314C8u;
    // 0x1314cc: 0x26640058  addiu       $a0, $s3, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131550u, 0x1314C8u, 0x1314D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1314D0u;
label_1314d0:
    // 0x1314d0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1314d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1314d4:
    // 0x1314d4: 0xc04c54c  jal         func_131530
label_1314d8:
    if (ctx->pc == 0x1314D8u) {
        ctx->pc = 0x1314D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1314D4u;
        // 0x1314d8: 0x27a40064  addiu       $a0, $sp, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1314DCu;
        goto label_1314dc;
    }
    ctx->pc = 0x1314D4u;
    SET_GPR_U32(ctx, 31, 0x1314DCu);
    ctx->pc = 0x1314D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1314D4u;
    // 0x1314d8: 0x27a40064  addiu       $a0, $sp, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131530u, 0x1314D4u, 0x1314DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1314DCu;
label_1314dc:
    // 0x1314dc: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x1314dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
label_1314e0:
    // 0x1314e0: 0x26650058  addiu       $a1, $s3, 0x58
    ctx->pc = 0x1314e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 88));
label_1314e4:
    // 0x1314e4: 0x27a60064  addiu       $a2, $sp, 0x64
    ctx->pc = 0x1314e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
label_1314e8:
    // 0x1314e8: 0xc04c8f0  jal         func_1323C0
label_1314ec:
    if (ctx->pc == 0x1314ECu) {
        ctx->pc = 0x1314ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1314E8u;
        // 0x1314ec: 0x27a70060  addiu       $a3, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1314F0u;
        goto label_1314f0;
    }
    ctx->pc = 0x1314E8u;
    SET_GPR_U32(ctx, 31, 0x1314F0u);
    ctx->pc = 0x1314ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1314E8u;
    // 0x1314ec: 0x27a70060  addiu       $a3, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1323C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1323C0u, 0x1314E8u, 0x1314F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1314F0u;
label_1314f0:
    // 0x1314f0: 0x12143c  dsll32      $v0, $s2, 16
    ctx->pc = 0x1314f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
label_1314f4:
    // 0x1314f4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1314f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1314f8:
    // 0x1314f8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_1314fc:
    if (ctx->pc == 0x1314FCu) {
        ctx->pc = 0x1314FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1314F8u;
        // 0x1314fc: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131500u;
        goto label_131500;
    }
    ctx->pc = 0x1314F8u;
    {
        const bool branch_taken_0x1314f8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1314FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1314F8u;
        // 0x1314fc: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1314f8) {
            ctx->pc = 0x13150Cu;
            goto label_13150c;
        }
    }
    ctx->pc = 0x131500u;
label_131500:
    // 0x131500: 0xc0401a4  jal         func_100690
label_131504:
    if (ctx->pc == 0x131504u) {
        ctx->pc = 0x131504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131500u;
        // 0x131504: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131508u;
        goto label_131508;
    }
    ctx->pc = 0x131500u;
    SET_GPR_U32(ctx, 31, 0x131508u);
    ctx->pc = 0x131504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131500u;
    // 0x131504: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x131500u, 0x131508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131508u;
label_131508:
    // 0x131508: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x131508u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_13150c:
    // 0x13150c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x13150cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_131510:
    // 0x131510: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x131510u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_131514:
    // 0x131514: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x131514u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_131518:
    // 0x131518: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x131518u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13151c:
    // 0x13151c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13151cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_131520:
    // 0x131520: 0x3e00008  jr          $ra
label_131524:
    if (ctx->pc == 0x131524u) {
        ctx->pc = 0x131524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131520u;
        // 0x131524: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131528u;
        goto label_fallthrough_0x131520;
    }
    ctx->pc = 0x131520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131520u;
        // 0x131524: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x131520:
    ctx->pc = 0x131528u;
}
