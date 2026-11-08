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

// Function: FUN_00193440
// Address: 0x193440 - 0x1935e0
void FUN_00193440_0x193440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00193440_0x193440");
#endif

    switch (ctx->pc) {
        case 0x193494u: goto label_193494;
        case 0x193548u: goto label_193548;
        case 0x193570u: goto label_193570;
        case 0x1935b0u: goto label_1935b0;
        default: break;
    }

    ctx->pc = 0x193440u;

    // 0x193440: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x193440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x193444: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x193444u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193448: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x193448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x19344c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x19344cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193450: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x193450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x193454: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x193454u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193458: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x193458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x19345c: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x19345cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193460: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x193460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x193464: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x193464u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193468: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x193468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x19346c: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x19346cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193470: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x193470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x193474: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x193474u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193478: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x193478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19347c: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x19347cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x193480: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x193480u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x193484: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x193484u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x193488: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x193488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x19348c: 0xc057040  jal         func_15C100
    ctx->pc = 0x19348Cu;
    SET_GPR_U32(ctx, 31, 0x193494u);
    ctx->pc = 0x193490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19348Cu;
    // 0x193490: 0x160882d  daddu       $s1, $t3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x19348Cu, 0x193494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193494u;
label_193494:
    // 0x193494: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x193494u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x193498: 0x8f8685f4  lw          $a2, -0x7A0C($gp)
    ctx->pc = 0x193498u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x19349c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x19349cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1934a0: 0x1327c2  srl         $a0, $s3, 31
    ctx->pc = 0x1934a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 19), 31));
    // 0x1934a4: 0x34430001  ori         $v1, $v0, 0x1
    ctx->pc = 0x1934a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1934a8: 0x730018  mult        $zero, $v1, $s3
    ctx->pc = 0x1934a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1934ac: 0x131203  sra         $v0, $s3, 8
    ctx->pc = 0x1934acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 19), 8));
    // 0x1934b0: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x1934b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1934b4: 0x8c652cd8  lw          $a1, 0x2CD8($v1)
    ctx->pc = 0x1934b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x1934b8: 0x1810  mfhi        $v1
    ctx->pc = 0x1934b8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1934bc: 0x8cb00004  lw          $s0, 0x4($a1)
    ctx->pc = 0x1934bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1934c0: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x1934c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1934c4: 0x31bc3  sra         $v1, $v1, 15
    ctx->pc = 0x1934c4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 15));
    // 0x1934c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1934c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1934cc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1934ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1934d0: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x1934d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x1934d4: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1934d4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1934d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1934d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1934dc: 0x6610003  bgez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1934DCu;
    {
        const bool branch_taken_0x1934dc = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x1934E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1934DCu;
        // 0x1934e0: 0x468005a0  cvt.s.w     $f22, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1934dc) {
            ctx->pc = 0x1934ECu;
            goto label_1934ec;
        }
    }
    ctx->pc = 0x1934E4u;
    // 0x1934e4: 0x266200ff  addiu       $v0, $s3, 0xFF
    ctx->pc = 0x1934e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 255));
    // 0x1934e8: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x1934e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
label_1934ec:
    // 0x1934ec: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1934ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1934f0: 0x3263c  dsll32      $a0, $v1, 24
    ctx->pc = 0x1934f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 24));
    // 0x1934f4: 0x326200ff  andi        $v0, $s3, 0xFF
    ctx->pc = 0x1934f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x1934f8: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x1934f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1934fc: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x1934fcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x193500: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x193500u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x193504: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x193504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x193508: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x193508u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19350c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19350cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193510: 0x0  nop
    ctx->pc = 0x193510u;
    // NOP
    // 0x193514: 0x46800d60  cvt.s.w     $f21, $f1
    ctx->pc = 0x193514u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x193518: 0x12420017  beq         $s2, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x193518u;
    {
        const bool branch_taken_0x193518 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x19351Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193518u;
        // 0x19351c: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x193518) {
            ctx->pc = 0x193578u;
            goto label_193578;
        }
    }
    ctx->pc = 0x193520u;
    // 0x193520: 0x8f838384  lw          $v1, -0x7C7C($gp)
    ctx->pc = 0x193520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935428)));
    // 0x193524: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x193524u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x193528: 0x1410c0  sll         $v0, $s4, 3
    ctx->pc = 0x193528u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x19352c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x19352cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193530: 0x2484d5d0  addiu       $a0, $a0, -0x2A30
    ctx->pc = 0x193530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956496));
    // 0x193534: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x193534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x193538: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x193538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19353c: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x19353cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x193540: 0xc04bf38  jal         func_12FCE0
    ctx->pc = 0x193540u;
    SET_GPR_U32(ctx, 31, 0x193548u);
    ctx->pc = 0x193544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193540u;
    // 0x193544: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FCE0u, 0x193540u, 0x193548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193548u;
label_193548:
    // 0x193548: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x193548u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x19354c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x19354cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193550: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x193550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193554: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x193554u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193558: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x193558u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x19355c: 0x24c6d5d0  addiu       $a2, $a2, -0x2A30
    ctx->pc = 0x19355cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956496));
    // 0x193560: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x193560u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x193564: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x193564u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x193568: 0xc04bce0  jal         func_12F380
    ctx->pc = 0x193568u;
    SET_GPR_U32(ctx, 31, 0x193570u);
    ctx->pc = 0x19356Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193568u;
    // 0x19356c: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F380u, 0x193568u, 0x193570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193570u;
label_193570:
    // 0x193570: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x193570u;
    {
        const bool branch_taken_0x193570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193570u;
        // 0x193574: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193570) {
            ctx->pc = 0x1935B4u;
            goto label_1935b4;
        }
    }
    ctx->pc = 0x193578u;
label_193578:
    // 0x193578: 0x8f838384  lw          $v1, -0x7C7C($gp)
    ctx->pc = 0x193578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935428)));
    // 0x19357c: 0x1410c0  sll         $v0, $s4, 3
    ctx->pc = 0x19357cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x193580: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x193580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193584: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x193584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193588: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x193588u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19358c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x19358cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x193590: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x193590u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x193594: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x193594u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x193598: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x193598u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x19359c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x19359cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1935a0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1935a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1935a4: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x1935a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1935a8: 0xc04bce0  jal         func_12F380
    ctx->pc = 0x1935A8u;
    SET_GPR_U32(ctx, 31, 0x1935B0u);
    ctx->pc = 0x1935ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1935A8u;
    // 0x1935ac: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F380u, 0x1935A8u, 0x1935B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1935B0u;
label_1935b0:
    // 0x1935b0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1935b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1935b4:
    // 0x1935b4: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x1935b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1935b8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1935b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1935bc: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1935bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1935c0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1935c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1935c4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1935c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1935c8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1935c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1935cc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1935ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1935d0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1935d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1935d4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1935d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1935d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1935D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1935DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1935D8u;
        // 0x1935dc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1935D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1935E0u;
}
