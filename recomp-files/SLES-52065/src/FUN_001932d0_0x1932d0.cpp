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

// Function: FUN_001932d0
// Address: 0x1932d0 - 0x193438
void FUN_001932d0_0x1932d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001932d0_0x1932d0");
#endif

    switch (ctx->pc) {
        case 0x1933acu: goto label_1933ac;
        case 0x1933d4u: goto label_1933d4;
        case 0x193414u: goto label_193414;
        default: break;
    }

    ctx->pc = 0x1932d0u;

    // 0x1932d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1932d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1932d4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1932d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1932d8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1932d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1932dc: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1932dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1932e0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1932e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1932e4: 0x480018  mult        $zero, $v0, $t0
    ctx->pc = 0x1932e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1932e8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1932e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1932ec: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1932ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1932f0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1932f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1932f4: 0x827c2  srl         $a0, $t0, 31
    ctx->pc = 0x1932f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x1932f8: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x1932f8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1932fc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1932fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193300: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x193300u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x193304: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x193304u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193308: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x193308u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x19330c: 0x81203  sra         $v0, $t0, 8
    ctx->pc = 0x19330cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 8), 8));
    // 0x193310: 0x8f8585f4  lw          $a1, -0x7A0C($gp)
    ctx->pc = 0x193310u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x193314: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x193314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x193318: 0x8c652cd8  lw          $a1, 0x2CD8($v1)
    ctx->pc = 0x193318u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x19331c: 0x1810  mfhi        $v1
    ctx->pc = 0x19331cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x193320: 0x8cb00004  lw          $s0, 0x4($a1)
    ctx->pc = 0x193320u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x193324: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x193324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x193328: 0x31bc3  sra         $v1, $v1, 15
    ctx->pc = 0x193328u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 15));
    // 0x19332c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19332cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x193330: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x193330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x193334: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x193334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x193338: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x193338u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x19333c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19333cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193340: 0x5010003  bgez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x193340u;
    {
        const bool branch_taken_0x193340 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x193344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193340u;
        // 0x193344: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x193340) {
            ctx->pc = 0x193350u;
            goto label_193350;
        }
    }
    ctx->pc = 0x193348u;
    // 0x193348: 0x250200ff  addiu       $v0, $t0, 0xFF
    ctx->pc = 0x193348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 255));
    // 0x19334c: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x19334cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
label_193350:
    // 0x193350: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x193350u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x193354: 0x3263c  dsll32      $a0, $v1, 24
    ctx->pc = 0x193354u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 24));
    // 0x193358: 0x310200ff  andi        $v0, $t0, 0xFF
    ctx->pc = 0x193358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x19335c: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x19335cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x193360: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x193360u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x193364: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x193364u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x193368: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x193368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19336c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x19336cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x193370: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x193370u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193374: 0x0  nop
    ctx->pc = 0x193374u;
    // NOP
    // 0x193378: 0x46800d60  cvt.s.w     $f21, $f1
    ctx->pc = 0x193378u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x19337c: 0x11220017  beq         $t1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x19337Cu;
    {
        const bool branch_taken_0x19337c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        ctx->pc = 0x193380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19337Cu;
        // 0x193380: 0x468005a0  cvt.s.w     $f22, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19337c) {
            ctx->pc = 0x1933DCu;
            goto label_1933dc;
        }
    }
    ctx->pc = 0x193384u;
    // 0x193384: 0x8f838384  lw          $v1, -0x7C7C($gp)
    ctx->pc = 0x193384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935428)));
    // 0x193388: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x193388u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x19338c: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x19338cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x193390: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x193390u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193394: 0x2484d5d0  addiu       $a0, $a0, -0x2A30
    ctx->pc = 0x193394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956496));
    // 0x193398: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x193398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19339c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x19339cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1933a0: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x1933a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1933a4: 0xc04bf38  jal         func_12FCE0
    ctx->pc = 0x1933A4u;
    SET_GPR_U32(ctx, 31, 0x1933ACu);
    ctx->pc = 0x1933A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1933A4u;
    // 0x1933a8: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FCE0u, 0x1933A4u, 0x1933ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1933ACu;
label_1933ac:
    // 0x1933ac: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x1933acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x1933b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1933b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1933b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1933b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1933b8: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1933b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1933bc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1933bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1933c0: 0x24c6d5d0  addiu       $a2, $a2, -0x2A30
    ctx->pc = 0x1933c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956496));
    // 0x1933c4: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x1933c4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x1933c8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1933c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1933cc: 0xc04bce0  jal         func_12F380
    ctx->pc = 0x1933CCu;
    SET_GPR_U32(ctx, 31, 0x1933D4u);
    ctx->pc = 0x1933D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1933CCu;
    // 0x1933d0: 0x4600b386  mov.s       $f14, $f22 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F380u, 0x1933CCu, 0x1933D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1933D4u;
label_1933d4:
    // 0x1933d4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1933D4u;
    {
        const bool branch_taken_0x1933d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1933D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1933D4u;
        // 0x1933d8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1933d4) {
            ctx->pc = 0x193418u;
            goto label_193418;
        }
    }
    ctx->pc = 0x1933DCu;
label_1933dc:
    // 0x1933dc: 0x8f838384  lw          $v1, -0x7C7C($gp)
    ctx->pc = 0x1933dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935428)));
    // 0x1933e0: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x1933e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1933e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1933e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1933e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1933e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1933ec: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1933ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1933f0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1933f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1933f4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1933f4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1933f8: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x1933f8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x1933fc: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x1933fcu;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x193400: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x193400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x193404: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x193404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x193408: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x193408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x19340c: 0xc04bce0  jal         func_12F380
    ctx->pc = 0x19340Cu;
    SET_GPR_U32(ctx, 31, 0x193414u);
    ctx->pc = 0x193410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19340Cu;
    // 0x193410: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F380u, 0x19340Cu, 0x193414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193414u;
label_193414:
    // 0x193414: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x193414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_193418:
    // 0x193418: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x193418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x19341c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x19341cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x193420: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x193420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x193424: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x193424u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x193428: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x193428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19342c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19342cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193430: 0x3e00008  jr          $ra
    ctx->pc = 0x193430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193430u;
        // 0x193434: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193430u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193438u;
}
