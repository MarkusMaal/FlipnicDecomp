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

// Function: entry_001a4328
// Address: 0x1a4328 - 0x1a4430
void entry_001a4328_0x1a4328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4328_0x1a4328");
#endif

    switch (ctx->pc) {
        case 0x1a43acu: goto label_1a43ac;
        case 0x1a43b8u: goto label_1a43b8;
        case 0x1a43d0u: goto label_1a43d0;
        case 0x1a43f0u: goto label_1a43f0;
        case 0x1a43f8u: goto label_1a43f8;
        case 0x1a4410u: goto label_1a4410;
        case 0x1a4428u: goto label_1a4428;
        default: break;
    }

    ctx->pc = 0x1a4328u;

label_1a4328:
    // 0x1a4328: 0x8e24068c  lw          $a0, 0x68C($s1)
    ctx->pc = 0x1a4328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1676)));
label_1a432c:
    // 0x1a432c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1a432cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_1a4330:
    // 0x1a4330: 0x8e260688  lw          $a2, 0x688($s1)
    ctx->pc = 0x1a4330u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1672)));
label_1a4334:
    // 0x1a4334: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a4334u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a4338:
    // 0x1a4338: 0x8f8585f4  lw          $a1, -0x7A0C($gp)
    ctx->pc = 0x1a4338u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1a433c:
    // 0x1a433c: 0x262306b4  addiu       $v1, $s1, 0x6B4
    ctx->pc = 0x1a433cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1716));
label_1a4340:
    // 0x1a4340: 0x262206f8  addiu       $v0, $s1, 0x6F8
    ctx->pc = 0x1a4340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1784));
label_1a4344:
    // 0x1a4344: 0xc481002c  lwc1        $f1, 0x2C($a0)
    ctx->pc = 0x1a4344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a4348:
    // 0x1a4348: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1a4348u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1a434c:
    // 0x1a434c: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x1a434cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_1a4350:
    // 0x1a4350: 0x8ca52cd8  lw          $a1, 0x2CD8($a1)
    ctx->pc = 0x1a4350u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11480)));
label_1a4354:
    // 0x1a4354: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a4354u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1a4358:
    // 0x1a4358: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x1a4358u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1a435c:
    // 0x1a435c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1a435cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1a4360:
    // 0x1a4360: 0xe6200694  swc1        $f0, 0x694($s1)
    ctx->pc = 0x1a4360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1684), bits); }
label_1a4364:
    // 0x1a4364: 0x8e24068c  lw          $a0, 0x68C($s1)
    ctx->pc = 0x1a4364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1676)));
label_1a4368:
    // 0x1a4368: 0x8c840030  lw          $a0, 0x30($a0)
    ctx->pc = 0x1a4368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_1a436c:
    // 0x1a436c: 0xae240698  sw          $a0, 0x698($s1)
    ctx->pc = 0x1a436cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1688), GPR_U32(ctx, 4));
label_1a4370:
    // 0x1a4370: 0x8e24068c  lw          $a0, 0x68C($s1)
    ctx->pc = 0x1a4370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1676)));
label_1a4374:
    // 0x1a4374: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x1a4374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_1a4378:
    // 0x1a4378: 0xae24069c  sw          $a0, 0x69C($s1)
    ctx->pc = 0x1a4378u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1692), GPR_U32(ctx, 4));
label_1a437c:
    // 0x1a437c: 0x8e24068c  lw          $a0, 0x68C($s1)
    ctx->pc = 0x1a437cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1676)));
label_1a4380:
    // 0x1a4380: 0x8c840038  lw          $a0, 0x38($a0)
    ctx->pc = 0x1a4380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_1a4384:
    // 0x1a4384: 0xae2406a0  sw          $a0, 0x6A0($s1)
    ctx->pc = 0x1a4384u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1696), GPR_U32(ctx, 4));
label_1a4388:
    // 0x1a4388: 0xae2306a4  sw          $v1, 0x6A4($s1)
    ctx->pc = 0x1a4388u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1700), GPR_U32(ctx, 3));
label_1a438c:
    // 0x1a438c: 0x8e2306b0  lw          $v1, 0x6B0($s1)
    ctx->pc = 0x1a438cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1712)));
label_1a4390:
    // 0x1a4390: 0xae2306a8  sw          $v1, 0x6A8($s1)
    ctx->pc = 0x1a4390u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1704), GPR_U32(ctx, 3));
label_1a4394:
    // 0x1a4394: 0xae2206ac  sw          $v0, 0x6AC($s1)
    ctx->pc = 0x1a4394u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1708), GPR_U32(ctx, 2));
label_1a4398:
    // 0x1a4398: 0x8e240690  lw          $a0, 0x690($s1)
    ctx->pc = 0x1a4398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
label_1a439c:
    // 0x1a439c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a439cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a43a0:
    // 0x1a43a0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1a43a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1a43a4:
    // 0x1a43a4: 0x320f809  jalr        $t9
label_1a43a8:
    if (ctx->pc == 0x1A43A8u) {
        ctx->pc = 0x1A43ACu;
        goto label_1a43ac;
    }
    ctx->pc = 0x1A43A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A43ACu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A43A4u, 0x1A43ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A43ACu;
label_1a43ac:
    // 0x1a43ac: 0x8e240690  lw          $a0, 0x690($s1)
    ctx->pc = 0x1a43acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
label_1a43b0:
    // 0x1a43b0: 0xc04ae68  jal         func_12B9A0
label_1a43b4:
    if (ctx->pc == 0x1A43B4u) {
        ctx->pc = 0x1A43B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A43B0u;
        // 0x1a43b4: 0x26250694  addiu       $a1, $s1, 0x694 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1684));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A43B8u;
        goto label_1a43b8;
    }
    ctx->pc = 0x1A43B0u;
    SET_GPR_U32(ctx, 31, 0x1A43B8u);
    ctx->pc = 0x1A43B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A43B0u;
    // 0x1a43b4: 0x26250694  addiu       $a1, $s1, 0x694 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1684));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B9A0u, 0x1A43B0u, 0x1A43B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A43B8u;
label_1a43b8:
    // 0x1a43b8: 0x8e240690  lw          $a0, 0x690($s1)
    ctx->pc = 0x1a43b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
label_1a43bc:
    // 0x1a43bc: 0x8e260728  lw          $a2, 0x728($s1)
    ctx->pc = 0x1a43bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1832)));
label_1a43c0:
    // 0x1a43c0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a43c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a43c4:
    // 0x1a43c4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x1a43c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_1a43c8:
    // 0x1a43c8: 0x320f809  jalr        $t9
label_1a43cc:
    if (ctx->pc == 0x1A43CCu) {
        ctx->pc = 0x1A43CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A43C8u;
        // 0x1a43cc: 0x2625072c  addiu       $a1, $s1, 0x72C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1836));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A43D0u;
        goto label_1a43d0;
    }
    ctx->pc = 0x1A43C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A43D0u);
        ctx->pc = 0x1A43CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A43C8u;
        // 0x1a43cc: 0x2625072c  addiu       $a1, $s1, 0x72C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1836));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A43C8u, 0x1A43D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A43D0u;
label_1a43d0:
    // 0x1a43d0: 0x8e22067c  lw          $v0, 0x67C($s1)
    ctx->pc = 0x1a43d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1660)));
label_1a43d4:
    // 0x1a43d4: 0x2632067c  addiu       $s2, $s1, 0x67C
    ctx->pc = 0x1a43d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1660));
label_1a43d8:
    // 0x1a43d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a43d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a43dc:
    // 0x1a43dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a43dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a43e0:
    // 0x1a43e0: 0x8c45002c  lw          $a1, 0x2C($v0)
    ctx->pc = 0x1a43e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_1a43e4:
    // 0x1a43e4: 0x8c460030  lw          $a2, 0x30($v0)
    ctx->pc = 0x1a43e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_1a43e8:
    // 0x1a43e8: 0xc064f7c  jal         func_193DF0
label_1a43ec:
    if (ctx->pc == 0x1A43ECu) {
        ctx->pc = 0x1A43ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A43E8u;
        // 0x1a43ec: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A43F0u;
        goto label_1a43f0;
    }
    ctx->pc = 0x1A43E8u;
    SET_GPR_U32(ctx, 31, 0x1A43F0u);
    ctx->pc = 0x1A43ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A43E8u;
    // 0x1a43ec: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193DF0u, 0x1A43E8u, 0x1A43F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A43F0u;
label_1a43f0:
    // 0x1a43f0: 0xc04bf44  jal         func_12FD10
label_1a43f4:
    if (ctx->pc == 0x1A43F4u) {
        ctx->pc = 0x1A43F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A43F0u;
        // 0x1a43f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A43F8u;
        goto label_1a43f8;
    }
    ctx->pc = 0x1A43F0u;
    SET_GPR_U32(ctx, 31, 0x1A43F8u);
    ctx->pc = 0x1A43F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A43F0u;
    // 0x1a43f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FD10u, 0x1A43F0u, 0x1A43F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A43F8u;
label_1a43f8:
    // 0x1a43f8: 0xae220684  sw          $v0, 0x684($s1)
    ctx->pc = 0x1a43f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1668), GPR_U32(ctx, 2));
label_1a43fc:
    // 0x1a43fc: 0x8e240684  lw          $a0, 0x684($s1)
    ctx->pc = 0x1a43fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1668)));
label_1a4400:
    // 0x1a4400: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a4400u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a4404:
    // 0x1a4404: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1a4404u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1a4408:
    // 0x1a4408: 0x320f809  jalr        $t9
label_1a440c:
    if (ctx->pc == 0x1A440Cu) {
        ctx->pc = 0x1A440Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4408u;
        // 0x1a440c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4410u;
        goto label_1a4410;
    }
    ctx->pc = 0x1A4408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A4410u);
        ctx->pc = 0x1A440Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4408u;
        // 0x1a440c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4408u, 0x1A4410u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A4410u;
label_1a4410:
    // 0x1a4410: 0xae200680  sw          $zero, 0x680($s1)
    ctx->pc = 0x1a4410u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1664), GPR_U32(ctx, 0));
label_1a4414:
    // 0x1a4414: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a4414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a4418:
    // 0x1a4418: 0x8e220938  lw          $v0, 0x938($s1)
    ctx->pc = 0x1a4418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2360)));
label_1a441c:
    // 0x1a441c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a441cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a4420:
    // 0x1a4420: 0xc063e14  jal         func_18F850
label_1a4424:
    if (ctx->pc == 0x1A4424u) {
        ctx->pc = 0x1A4424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4420u;
        // 0x1a4424: 0xae220938  sw          $v0, 0x938($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2360), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4428u;
        goto label_1a4428;
    }
    ctx->pc = 0x1A4420u;
    SET_GPR_U32(ctx, 31, 0x1A4428u);
    ctx->pc = 0x1A4424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4420u;
    // 0x1a4424: 0xae220938  sw          $v0, 0x938($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2360), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1A4420u, 0x1A4428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4428u;
label_1a4428:
    // 0x1a4428: 0x10000110  b           . + 4 + (0x110 << 2)
label_1a442c:
    if (ctx->pc == 0x1A442Cu) {
        ctx->pc = 0x1A4430u;
        goto label_fallthrough_0x1a4428;
    }
    ctx->pc = 0x1A4428u;
    {
        const bool branch_taken_0x1a4428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4428) {
            ctx->pc = 0x1A486Cu;
            return;
        }
    }
label_fallthrough_0x1a4428:
    ctx->pc = 0x1A4430u;
}
