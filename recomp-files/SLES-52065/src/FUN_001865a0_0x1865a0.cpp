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

// Function: FUN_001865a0
// Address: 0x1865a0 - 0x186894
void FUN_001865a0_0x1865a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001865a0_0x1865a0");
#endif

    switch (ctx->pc) {
        case 0x1865e4u: goto label_1865e4;
        case 0x1865ecu: goto label_1865ec;
        case 0x1865f4u: goto label_1865f4;
        case 0x1865fcu: goto label_1865fc;
        case 0x186604u: goto label_186604;
        default: break;
    }

    ctx->pc = 0x1865a0u;

    // 0x1865a0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1865a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1865a4: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1865a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1865a8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1865a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1865ac: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1865acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1865b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1865b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1865b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1865b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1865b8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1865b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1865bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1865bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1865c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1865c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1865c4: 0xc4400148  lwc1        $f0, 0x148($v0)
    ctx->pc = 0x1865c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1865c8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1865c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1865cc: 0xe4800158  swc1        $f0, 0x158($a0)
    ctx->pc = 0x1865ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 344), bits); }
    // 0x1865d0: 0xc440013c  lwc1        $f0, 0x13C($v0)
    ctx->pc = 0x1865d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1865d4: 0xe4800154  swc1        $f0, 0x154($a0)
    ctx->pc = 0x1865d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 340), bits); }
    // 0x1865d8: 0xc4800130  lwc1        $f0, 0x130($a0)
    ctx->pc = 0x1865d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1865dc: 0xc061a34  jal         func_1868D0
    ctx->pc = 0x1865DCu;
    SET_GPR_U32(ctx, 31, 0x1865E4u);
    ctx->pc = 0x1865E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1865DCu;
    // 0x1865e0: 0xe480015c  swc1        $f0, 0x15C($a0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 348), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1868D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868D0u, 0x1865DCu, 0x1865E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1865E4u;
label_1865e4:
    // 0x1865e4: 0xc061b94  jal         func_186E50
    ctx->pc = 0x1865E4u;
    SET_GPR_U32(ctx, 31, 0x1865ECu);
    ctx->pc = 0x1865E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1865E4u;
    // 0x1865e8: 0x26240090  addiu       $a0, $s1, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186E50u, 0x1865E4u, 0x1865ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1865ECu;
label_1865ec:
    // 0x1865ec: 0xc061c50  jal         func_187140
    ctx->pc = 0x1865ECu;
    SET_GPR_U32(ctx, 31, 0x1865F4u);
    ctx->pc = 0x1865F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1865ECu;
    // 0x1865f0: 0x262400d0  addiu       $a0, $s1, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187140u, 0x1865ECu, 0x1865F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1865F4u;
label_1865f4:
    // 0x1865f4: 0xc061ba4  jal         func_186E90
    ctx->pc = 0x1865F4u;
    SET_GPR_U32(ctx, 31, 0x1865FCu);
    ctx->pc = 0x1865F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1865F4u;
    // 0x1865f8: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186E90u, 0x1865F4u, 0x1865FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1865FCu;
label_1865fc:
    // 0x1865fc: 0xc061bbc  jal         func_186EF0
    ctx->pc = 0x1865FCu;
    SET_GPR_U32(ctx, 31, 0x186604u);
    ctx->pc = 0x186600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1865FCu;
    // 0x186600: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186EF0u, 0x1865FCu, 0x186604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186604u;
label_186604:
    // 0x186604: 0x938386d8  lbu         $v1, -0x7928($gp)
    ctx->pc = 0x186604u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936280)));
    // 0x186608: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x186608u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x18660c: 0x44843000  mtc1        $a0, $f6
    ctx->pc = 0x18660cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x186610: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x186610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x186614: 0x1464000a  bne         $v1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x186614u;
    {
        const bool branch_taken_0x186614 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x186618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186614u;
        // 0x186618: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186614) {
            ctx->pc = 0x186640u;
            goto label_186640;
        }
    }
    ctx->pc = 0x18661Cu;
    // 0x18661c: 0x12430008  beq         $s2, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x18661Cu;
    {
        const bool branch_taken_0x18661c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x18661c) {
            ctx->pc = 0x186640u;
            goto label_186640;
        }
    }
    ctx->pc = 0x186624u;
    // 0x186624: 0x12440005  beq         $s2, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x186624u;
    {
        const bool branch_taken_0x186624 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 4));
        ctx->pc = 0x186628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186624u;
        // 0x186628: 0x3c03bf80  lui         $v1, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186624) {
            ctx->pc = 0x18663Cu;
            goto label_18663c;
        }
    }
    ctx->pc = 0x18662Cu;
    // 0x18662c: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x18662Cu;
    {
        const bool branch_taken_0x18662c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x18662c) {
            ctx->pc = 0x18663Cu;
            goto label_18663c;
        }
    }
    ctx->pc = 0x186634u;
    // 0x186634: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x186634u;
    {
        const bool branch_taken_0x186634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186634u;
        // 0x186638: 0xc6250158  lwc1        $f5, 0x158($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x186634) {
            ctx->pc = 0x186644u;
            goto label_186644;
        }
    }
    ctx->pc = 0x18663Cu;
label_18663c:
    // 0x18663c: 0x44833000  mtc1        $v1, $f6
    ctx->pc = 0x18663cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_186640:
    // 0x186640: 0xc6250158  lwc1        $f5, 0x158($s1)
    ctx->pc = 0x186640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_186644:
    // 0x186644: 0x3c076c02  lui         $a3, 0x6C02
    ctx->pc = 0x186644u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)27650 << 16));
    // 0x186648: 0xc6240154  lwc1        $f4, 0x154($s1)
    ctx->pc = 0x186648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x18664c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x18664cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x186650: 0x44833800  mtc1        $v1, $f7
    ctx->pc = 0x186650u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x186654: 0x3c060100  lui         $a2, 0x100
    ctx->pc = 0x186654u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)256 << 16));
    // 0x186658: 0xc6210118  lwc1        $f1, 0x118($s1)
    ctx->pc = 0x186658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18665c: 0x34ed8010  ori         $t5, $a3, 0x8010
    ctx->pc = 0x18665cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32784);
    // 0x186660: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x186660u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x186664: 0x34ec8210  ori         $t4, $a3, 0x8210
    ctx->pc = 0x186664u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)33296);
    // 0x186668: 0x44834000  mtc1        $v1, $f8
    ctx->pc = 0x186668u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x18666c: 0x3c073c23  lui         $a3, 0x3C23
    ctx->pc = 0x18666cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)15395 << 16));
    // 0x186670: 0xc623011c  lwc1        $f3, 0x11C($s1)
    ctx->pc = 0x186670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x186674: 0x34ebd70a  ori         $t3, $a3, 0xD70A
    ctx->pc = 0x186674u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)55050);
    // 0x186678: 0x46042901  sub.s       $f4, $f5, $f4
    ctx->pc = 0x186678u;
    ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x18667c: 0x3c076c01  lui         $a3, 0x6C01
    ctx->pc = 0x18667cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)27649 << 16));
    // 0x186680: 0x34e88013  ori         $t0, $a3, 0x8013
    ctx->pc = 0x186680u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32787);
    // 0x186684: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x186684u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x186688: 0x27b90070  addiu       $t9, $sp, 0x70
    ctx->pc = 0x186688u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x18668c: 0x27b80040  addiu       $t8, $sp, 0x40
    ctx->pc = 0x18668cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x186690: 0x3c0a3f00  lui         $t2, 0x3F00
    ctx->pc = 0x186690u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16128 << 16));
    // 0x186694: 0x3c124500  lui         $s2, 0x4500
    ctx->pc = 0x186694u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)17664 << 16));
    // 0x186698: 0x46072103  div.s       $f4, $f4, $f7
    ctx->pc = 0x186698u;
    { if (ctx->f[7] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[4], ctx->f[7]); }
    // 0x18669c: 0x27af0080  addiu       $t7, $sp, 0x80
    ctx->pc = 0x18669cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1866a0: 0x27ae0050  addiu       $t6, $sp, 0x50
    ctx->pc = 0x1866a0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1866a4: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1866a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1866a8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1866a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1866ac: 0x34c60404  ori         $a2, $a2, 0x404
    ctx->pc = 0x1866acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1028);
    // 0x1866b0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1866b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1866b4: 0x34e78213  ori         $a3, $a3, 0x8213
    ctx->pc = 0x1866b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)33299);
    // 0x1866b8: 0x46002107  neg.s       $f4, $f4
    ctx->pc = 0x1866b8u;
    ctx->f[4] = FPU_NEG_S(ctx->f[4]);
    // 0x1866bc: 0x46082103  div.s       $f4, $f4, $f8
    ctx->pc = 0x1866bcu;
    { if (ctx->f[8] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[4], ctx->f[8]); }
    // 0x1866c0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1866c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1866c4: 0xc6220168  lwc1        $f2, 0x168($s1)
    ctx->pc = 0x1866c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1866c8: 0xc6200164  lwc1        $f0, 0x164($s1)
    ctx->pc = 0x1866c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1866cc: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1866ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1866d0: 0xafa5007c  sw          $a1, 0x7C($sp)
    ctx->pc = 0x1866d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 5));
    // 0x1866d4: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x1866d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x1866d8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x1866d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1866dc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1866dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1866e0: 0xe7a20074  swc1        $f2, 0x74($sp)
    ctx->pc = 0x1866e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1866e4: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1866e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1866e8: 0x448b1000  mtc1        $t3, $f2
    ctx->pc = 0x1866e8u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1866ec: 0xe7a40078  swc1        $f4, 0x78($sp)
    ctx->pc = 0x1866ecu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1866f0: 0x7b2b0000  lq          $t3, 0x0($t9)
    ctx->pc = 0x1866f0u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x1866f4: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x1866f4u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1866f8: 0x7f0b0000  sq          $t3, 0x0($t8)
    ctx->pc = 0x1866f8u;
    WRITE128(ADD32(GPR_U32(ctx, 24), 0), GPR_VEC(ctx, 11));
    // 0x1866fc: 0xc6230158  lwc1        $f3, 0x158($s1)
    ctx->pc = 0x1866fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x186700: 0xc6210154  lwc1        $f1, 0x154($s1)
    ctx->pc = 0x186700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x186704: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x186704u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x186708: 0xafb20080  sw          $s2, 0x80($sp)
    ctx->pc = 0x186708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 18));
    // 0x18670c: 0xafb20084  sw          $s2, 0x84($sp)
    ctx->pc = 0x18670cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 18));
    // 0x186710: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x186710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
    // 0x186714: 0x46070843  div.s       $f1, $f1, $f7
    ctx->pc = 0x186714u;
    { if (ctx->f[7] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[7]); }
    // 0x186718: 0x46080843  div.s       $f1, $f1, $f8
    ctx->pc = 0x186718u;
    { if (ctx->f[8] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[8]); }
    // 0x18671c: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x18671cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x186720: 0x79ea0000  lq          $t2, 0x0($t7)
    ctx->pc = 0x186720u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x186724: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x186724u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x186728: 0x8e0a0000  lw          $t2, 0x0($s0)
    ctx->pc = 0x186728u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18672c: 0xa1440003  sb          $a0, 0x3($t2)
    ctx->pc = 0x18672cu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x186730: 0xa1400002  sb          $zero, 0x2($t2)
    ctx->pc = 0x186730u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x186734: 0xad400004  sw          $zero, 0x4($t2)
    ctx->pc = 0x186734u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 0));
    // 0x186738: 0xa5430000  sh          $v1, 0x0($t2)
    ctx->pc = 0x186738u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x18673c: 0xad460008  sw          $a2, 0x8($t2)
    ctx->pc = 0x18673cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 6));
    // 0x186740: 0xad4d000c  sw          $t5, 0xC($t2)
    ctx->pc = 0x186740u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 13));
    // 0x186744: 0x8e0a0000  lw          $t2, 0x0($s0)
    ctx->pc = 0x186744u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x186748: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x186748u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x18674c: 0xae0a0000  sw          $t2, 0x0($s0)
    ctx->pc = 0x18674cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 10));
    // 0x186750: 0x7bab0040  lq          $t3, 0x40($sp)
    ctx->pc = 0x186750u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x186754: 0x8e0a0000  lw          $t2, 0x0($s0)
    ctx->pc = 0x186754u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x186758: 0x7d4b0000  sq          $t3, 0x0($t2)
    ctx->pc = 0x186758u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 11));
    // 0x18675c: 0x8e0a0000  lw          $t2, 0x0($s0)
    ctx->pc = 0x18675cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x186760: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x186760u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x186764: 0xae0a0000  sw          $t2, 0x0($s0)
    ctx->pc = 0x186764u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 10));
    // 0x186768: 0x7bab0050  lq          $t3, 0x50($sp)
    ctx->pc = 0x186768u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18676c: 0x8e0a0000  lw          $t2, 0x0($s0)
    ctx->pc = 0x18676cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x186770: 0x7d4b0000  sq          $t3, 0x0($t2)
    ctx->pc = 0x186770u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 11));
    // 0x186774: 0x8e0a0000  lw          $t2, 0x0($s0)
    ctx->pc = 0x186774u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x186778: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x186778u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x18677c: 0xae0a0000  sw          $t2, 0x0($s0)
    ctx->pc = 0x18677cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 10));
    // 0x186780: 0x8e0a0000  lw          $t2, 0x0($s0)
    ctx->pc = 0x186780u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x186784: 0xa1440003  sb          $a0, 0x3($t2)
    ctx->pc = 0x186784u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x186788: 0xa1400002  sb          $zero, 0x2($t2)
    ctx->pc = 0x186788u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x18678c: 0xad400004  sw          $zero, 0x4($t2)
    ctx->pc = 0x18678cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 0));
    // 0x186790: 0xa5430000  sh          $v1, 0x0($t2)
    ctx->pc = 0x186790u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x186794: 0xad460008  sw          $a2, 0x8($t2)
    ctx->pc = 0x186794u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 6));
    // 0x186798: 0xad4c000c  sw          $t4, 0xC($t2)
    ctx->pc = 0x186798u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 12));
    // 0x18679c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x18679cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1867a0: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1867a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1867a4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1867a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1867a8: 0x7baa0040  lq          $t2, 0x40($sp)
    ctx->pc = 0x1867a8u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1867ac: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1867acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1867b0: 0x7c6a0000  sq          $t2, 0x0($v1)
    ctx->pc = 0x1867b0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 10));
    // 0x1867b4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1867b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1867b8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1867b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1867bc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1867bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1867c0: 0x7baa0050  lq          $t2, 0x50($sp)
    ctx->pc = 0x1867c0u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1867c4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1867c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1867c8: 0x7c6a0000  sq          $t2, 0x0($v1)
    ctx->pc = 0x1867c8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 10));
    // 0x1867cc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1867ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1867d0: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1867d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1867d4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1867d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1867d8: 0xc621015c  lwc1        $f1, 0x15C($s1)
    ctx->pc = 0x1867d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1867dc: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1867dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1867e0: 0xafa50098  sw          $a1, 0x98($sp)
    ctx->pc = 0x1867e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 5));
    // 0x1867e4: 0xafa5009c  sw          $a1, 0x9C($sp)
    ctx->pc = 0x1867e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 5));
    // 0x1867e8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1867e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1867ec: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x1867ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1867f0: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x1867f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1867f4: 0x7ba30090  lq          $v1, 0x90($sp)
    ctx->pc = 0x1867f4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1867f8: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x1867f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
    // 0x1867fc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1867fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x186800: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x186800u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x186804: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x186804u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x186808: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x186808u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x18680c: 0xa4690000  sh          $t1, 0x0($v1)
    ctx->pc = 0x18680cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 9));
    // 0x186810: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x186810u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
    // 0x186814: 0xac68000c  sw          $t0, 0xC($v1)
    ctx->pc = 0x186814u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 8));
    // 0x186818: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x186818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18681c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x18681cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x186820: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x186820u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x186824: 0x7ba50060  lq          $a1, 0x60($sp)
    ctx->pc = 0x186824u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x186828: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x186828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18682c: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x18682cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x186830: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x186830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x186834: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x186834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x186838: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x186838u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x18683c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x18683cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x186840: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x186840u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x186844: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x186844u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x186848: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x186848u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x18684c: 0xa4690000  sh          $t1, 0x0($v1)
    ctx->pc = 0x18684cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 9));
    // 0x186850: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x186850u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
    // 0x186854: 0xac67000c  sw          $a3, 0xC($v1)
    ctx->pc = 0x186854u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 7));
    // 0x186858: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x186858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18685c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x18685cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x186860: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x186860u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x186864: 0x7ba40060  lq          $a0, 0x60($sp)
    ctx->pc = 0x186864u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x186868: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x186868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18686c: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x18686cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x186870: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x186870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x186874: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x186874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x186878: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x186878u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x18687c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x18687cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x186880: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x186880u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x186884: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x186884u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x186888: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x186888u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18688c: 0x3e00008  jr          $ra
    ctx->pc = 0x18688Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18688Cu;
        // 0x186890: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18688Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x186894u;
}
