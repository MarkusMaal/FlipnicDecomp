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

// Function: FUN_001285e0
// Address: 0x1285e0 - 0x128ba0
void FUN_001285e0_0x1285e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001285e0_0x1285e0");
#endif

    switch (ctx->pc) {
        case 0x12860cu: goto label_12860c;
        case 0x128614u: goto label_128614;
        case 0x128654u: goto label_128654;
        case 0x128684u: goto label_128684;
        case 0x128690u: goto label_128690;
        case 0x128800u: goto label_128800;
        case 0x128810u: goto label_128810;
        case 0x128820u: goto label_128820;
        case 0x128864u: goto label_128864;
        case 0x128884u: goto label_128884;
        case 0x1288a4u: goto label_1288a4;
        case 0x1288b0u: goto label_1288b0;
        case 0x1288ecu: goto label_1288ec;
        case 0x12893cu: goto label_12893c;
        case 0x128a60u: goto label_128a60;
        case 0x128a70u: goto label_128a70;
        case 0x128a7cu: goto label_128a7c;
        case 0x128a84u: goto label_128a84;
        case 0x128a98u: goto label_128a98;
        case 0x128aacu: goto label_128aac;
        case 0x128afcu: goto label_128afc;
        case 0x128b54u: goto label_128b54;
        default: break;
    }

    ctx->pc = 0x1285e0u;

    // 0x1285e0: 0x27bdfd20  addiu       $sp, $sp, -0x2E0
    ctx->pc = 0x1285e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966560));
    // 0x1285e4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1285e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1285e8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1285e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1285ec: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1285ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1285f0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1285f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1285f4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1285f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1285f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1285f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1285fc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1285fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128600: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x128600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x128604: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x128604u;
    SET_GPR_U32(ctx, 31, 0x12860Cu);
    ctx->pc = 0x128608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128604u;
    // 0x128608: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x128604u, 0x12860Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12860Cu;
label_12860c:
    // 0x12860c: 0xc04a050  jal         func_128140
    ctx->pc = 0x12860Cu;
    SET_GPR_U32(ctx, 31, 0x128614u);
    ctx->pc = 0x128610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12860Cu;
    // 0x128610: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128140u, 0x12860Cu, 0x128614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128614u;
label_128614:
    // 0x128614: 0x8e8400a0  lw          $a0, 0xA0($s4)
    ctx->pc = 0x128614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 160)));
    // 0x128618: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x128618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12861c: 0x10830155  beq         $a0, $v1, . + 4 + (0x155 << 2)
    ctx->pc = 0x12861Cu;
    {
        const bool branch_taken_0x12861c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x128620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12861Cu;
        // 0x128620: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12861c) {
            ctx->pc = 0x128B74u;
            goto label_128b74;
        }
    }
    ctx->pc = 0x128624u;
    // 0x128624: 0x10830153  beq         $a0, $v1, . + 4 + (0x153 << 2)
    ctx->pc = 0x128624u;
    {
        const bool branch_taken_0x128624 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x128624) {
            ctx->pc = 0x128B74u;
            goto label_128b74;
        }
    }
    ctx->pc = 0x12862Cu;
    // 0x12862c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x12862cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x128630: 0x1083010d  beq         $a0, $v1, . + 4 + (0x10D << 2)
    ctx->pc = 0x128630u;
    {
        const bool branch_taken_0x128630 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x128630) {
            ctx->pc = 0x128A68u;
            goto label_128a68;
        }
    }
    ctx->pc = 0x128638u;
    // 0x128638: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x128638u;
    {
        const bool branch_taken_0x128638 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x128638) {
            ctx->pc = 0x128648u;
            goto label_128648;
        }
    }
    ctx->pc = 0x128640u;
    // 0x128640: 0x1000014f  b           . + 4 + (0x14F << 2)
    ctx->pc = 0x128640u;
    {
        const bool branch_taken_0x128640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128640u;
        // 0x128644: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128640) {
            ctx->pc = 0x128B80u;
            goto label_128b80;
        }
    }
    ctx->pc = 0x128648u;
label_128648:
    // 0x128648: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x128648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12864c: 0xc05f770  jal         func_17DDC0
    ctx->pc = 0x12864Cu;
    SET_GPR_U32(ctx, 31, 0x128654u);
    ctx->pc = 0x128650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12864Cu;
    // 0x128650: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17DDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17DDC0u, 0x12864Cu, 0x128654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128654u;
label_128654:
    // 0x128654: 0x8fb00080  lw          $s0, 0x80($sp)
    ctx->pc = 0x128654u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x128658: 0x12000148  beqz        $s0, . + 4 + (0x148 << 2)
    ctx->pc = 0x128658u;
    {
        const bool branch_taken_0x128658 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x128658) {
            ctx->pc = 0x128B7Cu;
            goto label_128b7c;
        }
    }
    ctx->pc = 0x128660u;
    // 0x128660: 0x8e82012c  lw          $v0, 0x12C($s4)
    ctx->pc = 0x128660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 300)));
    // 0x128664: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x128664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x128668: 0x10430002  beq         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x128668u;
    {
        const bool branch_taken_0x128668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x12866Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128668u;
        // 0x12866c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128668) {
            ctx->pc = 0x128674u;
            goto label_128674;
        }
    }
    ctx->pc = 0x128670u;
    // 0x128670: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x128670u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_128674:
    // 0x128674: 0xae83012c  sw          $v1, 0x12C($s4)
    ctx->pc = 0x128674u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 300), GPR_U32(ctx, 3));
    // 0x128678: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x128678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x12867c: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x12867Cu;
    SET_GPR_U32(ctx, 31, 0x128684u);
    ctx->pc = 0x128680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12867Cu;
    // 0x128680: 0xae8200a8  sw          $v0, 0xA8($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 168), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x12867Cu, 0x128684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128684u;
label_128684:
    // 0x128684: 0x8e8500a8  lw          $a1, 0xA8($s4)
    ctx->pc = 0x128684u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 168)));
    // 0x128688: 0xc049f34  jal         func_127CD0
    ctx->pc = 0x128688u;
    SET_GPR_U32(ctx, 31, 0x128690u);
    ctx->pc = 0x12868Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128688u;
    // 0x12868c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127CD0u, 0x128688u, 0x128690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128690u;
label_128690:
    // 0x128690: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x128690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x128694: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x128694u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128698: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x128698u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x12869c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x12869cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1286a0: 0x10620029  beq         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1286A0u;
    {
        const bool branch_taken_0x1286a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1286a0) {
            ctx->pc = 0x128748u;
            goto label_128748;
        }
    }
    ctx->pc = 0x1286A8u;
    // 0x1286a8: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1286A8u;
    {
        const bool branch_taken_0x1286a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1286ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1286A8u;
        // 0x1286ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1286a8) {
            ctx->pc = 0x128704u;
            goto label_128704;
        }
    }
    ctx->pc = 0x1286B0u;
    // 0x1286b0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1286B0u;
    {
        const bool branch_taken_0x1286b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1286b0) {
            ctx->pc = 0x1286C0u;
            goto label_1286c0;
        }
    }
    ctx->pc = 0x1286B8u;
    // 0x1286b8: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x1286B8u;
    {
        const bool branch_taken_0x1286b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1286BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1286B8u;
        // 0x1286bc: 0x8e820138  lw          $v0, 0x138($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1286b8) {
            ctx->pc = 0x128788u;
            goto label_128788;
        }
    }
    ctx->pc = 0x1286C0u;
label_1286c0:
    // 0x1286c0: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x1286c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1286c4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1286c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1286c8: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x1286c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1286cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1286ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1286d0: 0xc7a40078  lwc1        $f4, 0x78($sp)
    ctx->pc = 0x1286d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1286d4: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1286d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x1286d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1286d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1286dc: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1286dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1286e0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1286e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1286e4: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x1286e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x1286e8: 0x4603201a  mula.s      $f4, $f3
    ctx->pc = 0x1286e8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[4], ctx->f[3]));
    // 0x1286ec: 0x4602085c  madd.s      $f1, $f1, $f2
    ctx->pc = 0x1286ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[2]));
    // 0x1286f0: 0x460008c3  div.s       $f3, $f1, $f0
    ctx->pc = 0x1286f0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1286f4: 0x0  nop
    ctx->pc = 0x1286f4u;
    // NOP
    // 0x1286f8: 0x0  nop
    ctx->pc = 0x1286f8u;
    // NOP
    // 0x1286fc: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1286FCu;
    {
        const bool branch_taken_0x1286fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1286fc) {
            ctx->pc = 0x128784u;
            goto label_128784;
        }
    }
    ctx->pc = 0x128704u;
label_128704:
    // 0x128704: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x128704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x128708: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x128708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x12870c: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x12870cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x128710: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x128710u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x128714: 0xc7a4007c  lwc1        $f4, 0x7C($sp)
    ctx->pc = 0x128714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x128718: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x128718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x12871c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12871cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x128720: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x128720u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x128724: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x128724u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x128728: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x128728u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x12872c: 0x4603201a  mula.s      $f4, $f3
    ctx->pc = 0x12872cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[4], ctx->f[3]));
    // 0x128730: 0x4602085c  madd.s      $f1, $f1, $f2
    ctx->pc = 0x128730u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[2]));
    // 0x128734: 0x460008c3  div.s       $f3, $f1, $f0
    ctx->pc = 0x128734u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x128738: 0x0  nop
    ctx->pc = 0x128738u;
    // NOP
    // 0x12873c: 0x0  nop
    ctx->pc = 0x12873cu;
    // NOP
    // 0x128740: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x128740u;
    {
        const bool branch_taken_0x128740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x128740) {
            ctx->pc = 0x128784u;
            goto label_128784;
        }
    }
    ctx->pc = 0x128748u;
label_128748:
    // 0x128748: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x128748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12874c: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x12874cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x128750: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x128750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128754: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x128754u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x128758: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x128758u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x12875c: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x12875cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x128760: 0x46021832  c.eq.s      $f3, $f2
    ctx->pc = 0x128760u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x128764: 0x0  nop
    ctx->pc = 0x128764u;
    // NOP
    // 0x128768: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x128768u;
    {
        const bool branch_taken_0x128768 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12876Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128768u;
        // 0x12876c: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x128768) {
            ctx->pc = 0x128778u;
            goto label_128778;
        }
    }
    ctx->pc = 0x128770u;
    // 0x128770: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x128770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x128774: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x128774u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_128778:
    // 0x128778: 0x0  nop
    ctx->pc = 0x128778u;
    // NOP
    // 0x12877c: 0x0  nop
    ctx->pc = 0x12877cu;
    // NOP
    // 0x128780: 0x460200c3  div.s       $f3, $f0, $f2
    ctx->pc = 0x128780u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
label_128784:
    // 0x128784: 0x8e820138  lw          $v0, 0x138($s4)
    ctx->pc = 0x128784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 312)));
label_128788:
    // 0x128788: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x128788u;
    {
        const bool branch_taken_0x128788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12878Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128788u;
        // 0x12878c: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128788) {
            ctx->pc = 0x128798u;
            goto label_128798;
        }
    }
    ctx->pc = 0x128790u;
    // 0x128790: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x128790u;
    {
        const bool branch_taken_0x128790 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x128790) {
            ctx->pc = 0x1287A4u;
            goto label_1287a4;
        }
    }
    ctx->pc = 0x128798u;
label_128798:
    // 0x128798: 0xe68300a4  swc1        $f3, 0xA4($s4)
    ctx->pc = 0x128798u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 164), bits); }
    // 0x12879c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x12879Cu;
    {
        const bool branch_taken_0x12879c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1287A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12879Cu;
        // 0x1287a0: 0xae800138  sw          $zero, 0x138($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 312), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12879c) {
            ctx->pc = 0x1287C8u;
            goto label_1287c8;
        }
    }
    ctx->pc = 0x1287A4u;
label_1287a4:
    // 0x1287a4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1287a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1287a8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1287a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1287ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1287acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1287b0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1287b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1287b4: 0xc68000a4  lwc1        $f0, 0xA4($s4)
    ctx->pc = 0x1287b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1287b8: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1287b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1287bc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1287bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1287c0: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x1287c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x1287c4: 0x460200c3  div.s       $f3, $f0, $f2
    ctx->pc = 0x1287c4u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
label_1287c8:
    // 0x1287c8: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1287c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1287cc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1287ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1287d0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1287D0u;
    {
        const bool branch_taken_0x1287d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1287d0) {
            ctx->pc = 0x1287F4u;
            goto label_1287f4;
        }
    }
    ctx->pc = 0x1287D8u;
    // 0x1287d8: 0xc68000a4  lwc1        $f0, 0xA4($s4)
    ctx->pc = 0x1287d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1287dc: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x1287dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1287e0: 0x0  nop
    ctx->pc = 0x1287e0u;
    // NOP
    // 0x1287e4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1287E4u;
    {
        const bool branch_taken_0x1287e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1287e4) {
            ctx->pc = 0x1287F8u;
            goto label_1287f8;
        }
    }
    ctx->pc = 0x1287ECu;
    // 0x1287ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1287ECu;
    {
        const bool branch_taken_0x1287ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1287F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1287ECu;
        // 0x1287f0: 0xe68300a4  swc1        $f3, 0xA4($s4) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 164), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1287ec) {
            ctx->pc = 0x1287F8u;
            goto label_1287f8;
        }
    }
    ctx->pc = 0x1287F4u;
label_1287f4:
    // 0x1287f4: 0xe68300a4  swc1        $f3, 0xA4($s4)
    ctx->pc = 0x1287f4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 164), bits); }
label_1287f8:
    // 0x1287f8: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x1287F8u;
    SET_GPR_U32(ctx, 31, 0x128800u);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x1287F8u, 0x128800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128800u;
label_128800:
    // 0x128800: 0x8e8500a8  lw          $a1, 0xA8($s4)
    ctx->pc = 0x128800u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 168)));
    // 0x128804: 0xc68c00a4  lwc1        $f12, 0xA4($s4)
    ctx->pc = 0x128804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x128808: 0xc04a038  jal         func_1280E0
    ctx->pc = 0x128808u;
    SET_GPR_U32(ctx, 31, 0x128810u);
    ctx->pc = 0x12880Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128808u;
    // 0x12880c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1280E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1280E0u, 0x128808u, 0x128810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128810u;
label_128810:
    // 0x128810: 0xc68c00a4  lwc1        $f12, 0xA4($s4)
    ctx->pc = 0x128810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x128814: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x128814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128818: 0xc049b30  jal         func_126CC0
    ctx->pc = 0x128818u;
    SET_GPR_U32(ctx, 31, 0x128820u);
    ctx->pc = 0x12881Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128818u;
    // 0x12881c: 0x27a40160  addiu       $a0, $sp, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126CC0u, 0x128818u, 0x128820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128820u;
label_128820:
    // 0x128820: 0x7ba30160  lq          $v1, 0x160($sp)
    ctx->pc = 0x128820u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x128824: 0x27b100a0  addiu       $s1, $sp, 0xA0
    ctx->pc = 0x128824u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x128828: 0x7ba20170  lq          $v0, 0x170($sp)
    ctx->pc = 0x128828u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x12882c: 0x27b500b0  addiu       $s5, $sp, 0xB0
    ctx->pc = 0x12882cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x128830: 0x27b200b4  addiu       $s2, $sp, 0xB4
    ctx->pc = 0x128830u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x128834: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x128834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
    // 0x128838: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x128838u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    // 0x12883c: 0xc7a00180  lwc1        $f0, 0x180($sp)
    ctx->pc = 0x12883cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128840: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x128840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x128844: 0xc7a00184  lwc1        $f0, 0x184($sp)
    ctx->pc = 0x128844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128848: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x128848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x12884c: 0x8e820130  lw          $v0, 0x130($s4)
    ctx->pc = 0x12884cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 304)));
    // 0x128850: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x128850u;
    {
        const bool branch_taken_0x128850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x128850) {
            ctx->pc = 0x12888Cu;
            goto label_12888c;
        }
    }
    ctx->pc = 0x128858u;
    // 0x128858: 0x8e84013c  lw          $a0, 0x13C($s4)
    ctx->pc = 0x128858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 316)));
    // 0x12885c: 0xc04c6f4  jal         func_131BD0
    ctx->pc = 0x12885Cu;
    SET_GPR_U32(ctx, 31, 0x128864u);
    ctx->pc = 0x128860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12885Cu;
    // 0x128860: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131BD0u, 0x12885Cu, 0x128864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128864u;
label_128864:
    // 0x128864: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x128864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128868: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x128868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12886c: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x12886cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x128870: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x128870u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x128874: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x128874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x128878: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x128878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x12887c: 0xc04a2e8  jal         func_128BA0
    ctx->pc = 0x12887Cu;
    SET_GPR_U32(ctx, 31, 0x128884u);
    ctx->pc = 0x128880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12887Cu;
    // 0x128880: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128BA0u, 0x12887Cu, 0x128884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128884u;
label_128884:
    // 0x128884: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x128884u;
    {
        const bool branch_taken_0x128884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128884u;
        // 0x128888: 0xae800130  sw          $zero, 0x130($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 304), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128884) {
            ctx->pc = 0x1288A4u;
            goto label_1288a4;
        }
    }
    ctx->pc = 0x12888Cu;
label_12888c:
    // 0x12888c: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x12888cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x128890: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x128890u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128894: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x128894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128898: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x128898u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x12889c: 0xc04a2e8  jal         func_128BA0
    ctx->pc = 0x12889Cu;
    SET_GPR_U32(ctx, 31, 0x1288A4u);
    ctx->pc = 0x1288A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12889Cu;
    // 0x1288a0: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128BA0u, 0x12889Cu, 0x1288A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1288A4u;
label_1288a4:
    // 0x1288a4: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x1288a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1288a8: 0xc0498ac  jal         func_1262B0
    ctx->pc = 0x1288A8u;
    SET_GPR_U32(ctx, 31, 0x1288B0u);
    ctx->pc = 0x1288ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1288A8u;
    // 0x1288ac: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1262B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1262B0u, 0x1288A8u, 0x1288B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1288B0u;
label_1288b0:
    // 0x1288b0: 0x7ba30190  lq          $v1, 0x190($sp)
    ctx->pc = 0x1288b0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1288b4: 0xc7a101b0  lwc1        $f1, 0x1B0($sp)
    ctx->pc = 0x1288b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1288b8: 0x7ba201a0  lq          $v0, 0x1A0($sp)
    ctx->pc = 0x1288b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1288bc: 0xc7a001b4  lwc1        $f0, 0x1B4($sp)
    ctx->pc = 0x1288bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1288c0: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x1288c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x1288c4: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x1288c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1288c8: 0x7fa300d0  sq          $v1, 0xD0($sp)
    ctx->pc = 0x1288c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 3));
    // 0x1288cc: 0xe7a100f0  swc1        $f1, 0xF0($sp)
    ctx->pc = 0x1288ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x1288d0: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x1288d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    // 0x1288d4: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x1288d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x1288d8: 0xc60c0020  lwc1        $f12, 0x20($s0)
    ctx->pc = 0x1288d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1288dc: 0xc60d0024  lwc1        $f13, 0x24($s0)
    ctx->pc = 0x1288dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1288e0: 0xc60e0028  lwc1        $f14, 0x28($s0)
    ctx->pc = 0x1288e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1288e4: 0xc0498c4  jal         func_126310
    ctx->pc = 0x1288E4u;
    SET_GPR_U32(ctx, 31, 0x1288ECu);
    ctx->pc = 0x1288E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1288E4u;
    // 0x1288e8: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126310u, 0x1288E4u, 0x1288ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1288ECu;
label_1288ec:
    // 0x1288ec: 0x27a201c0  addiu       $v0, $sp, 0x1C0
    ctx->pc = 0x1288ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x1288f0: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x1288f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1288f4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1288f4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1288f8: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1288f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1288fc: 0x27a201d0  addiu       $v0, $sp, 0x1D0
    ctx->pc = 0x1288fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x128900: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x128900u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x128904: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x128904u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x128908: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x128908u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    // 0x12890c: 0xc7a001e0  lwc1        $f0, 0x1E0($sp)
    ctx->pc = 0x12890cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128910: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x128910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x128914: 0xc7a001e4  lwc1        $f0, 0x1E4($sp)
    ctx->pc = 0x128914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128918: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x128918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x12891c: 0xc68c0134  lwc1        $f12, 0x134($s4)
    ctx->pc = 0x12891cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x128920: 0x460c6832  c.eq.s      $f13, $f12
    ctx->pc = 0x128920u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[13], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x128924: 0x0  nop
    ctx->pc = 0x128924u;
    // NOP
    // 0x128928: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x128928u;
    {
        const bool branch_taken_0x128928 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x12892Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128928u;
        // 0x12892c: 0x27a401f0  addiu       $a0, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128928) {
            ctx->pc = 0x128968u;
            goto label_128968;
        }
    }
    ctx->pc = 0x128930u;
    // 0x128930: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x128930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x128934: 0xc0498c4  jal         func_126310
    ctx->pc = 0x128934u;
    SET_GPR_U32(ctx, 31, 0x12893Cu);
    ctx->pc = 0x128938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128934u;
    // 0x128938: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x126310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126310u, 0x128934u, 0x12893Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12893Cu;
label_12893c:
    // 0x12893c: 0x27a201f0  addiu       $v0, $sp, 0x1F0
    ctx->pc = 0x12893cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x128940: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x128940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x128944: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x128944u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x128948: 0x27a20200  addiu       $v0, $sp, 0x200
    ctx->pc = 0x128948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x12894c: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x12894cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x128950: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x128950u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x128954: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x128954u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    // 0x128958: 0xc7a00210  lwc1        $f0, 0x210($sp)
    ctx->pc = 0x128958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12895c: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x12895cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x128960: 0xc7a00214  lwc1        $f0, 0x214($sp)
    ctx->pc = 0x128960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128964: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x128964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_128968:
    // 0x128968: 0x83828444  lb          $v0, -0x7BBC($gp)
    ctx->pc = 0x128968u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935620)));
    // 0x12896c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12896Cu;
    {
        const bool branch_taken_0x12896c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x128970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12896Cu;
        // 0x128970: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12896c) {
            ctx->pc = 0x128984u;
            goto label_128984;
        }
    }
    ctx->pc = 0x128974u;
    // 0x128974: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x128974u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x128978: 0xa3828444  sb          $v0, -0x7BBC($gp)
    ctx->pc = 0x128978u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935620), (uint8_t)GPR_U32(ctx, 2));
    // 0x12897c: 0x3462d70a  ori         $v0, $v1, 0xD70A
    ctx->pc = 0x12897cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x128980: 0xaf828440  sw          $v0, -0x7BC0($gp)
    ctx->pc = 0x128980u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935616), GPR_U32(ctx, 2));
label_128984:
    // 0x128984: 0x8382844c  lb          $v0, -0x7BB4($gp)
    ctx->pc = 0x128984u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935628)));
    // 0x128988: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x128988u;
    {
        const bool branch_taken_0x128988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12898Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128988u;
        // 0x12898c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128988) {
            ctx->pc = 0x1289A0u;
            goto label_1289a0;
        }
    }
    ctx->pc = 0x128990u;
    // 0x128990: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x128990u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x128994: 0xa382844c  sb          $v0, -0x7BB4($gp)
    ctx->pc = 0x128994u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935628), (uint8_t)GPR_U32(ctx, 2));
    // 0x128998: 0x3462d70a  ori         $v0, $v1, 0xD70A
    ctx->pc = 0x128998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x12899c: 0xaf828448  sw          $v0, -0x7BB8($gp)
    ctx->pc = 0x12899cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935624), GPR_U32(ctx, 2));
label_1289a0:
    // 0x1289a0: 0x83828454  lb          $v0, -0x7BAC($gp)
    ctx->pc = 0x1289a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935636)));
    // 0x1289a4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1289A4u;
    {
        const bool branch_taken_0x1289a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1289A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1289A4u;
        // 0x1289a8: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1289a4) {
            ctx->pc = 0x1289B8u;
            goto label_1289b8;
        }
    }
    ctx->pc = 0x1289ACu;
    // 0x1289ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1289acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1289b0: 0xaf838450  sw          $v1, -0x7BB0($gp)
    ctx->pc = 0x1289b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935632), GPR_U32(ctx, 3));
    // 0x1289b4: 0xa3828454  sb          $v0, -0x7BAC($gp)
    ctx->pc = 0x1289b4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935636), (uint8_t)GPR_U32(ctx, 2));
label_1289b8:
    // 0x1289b8: 0x8382845c  lb          $v0, -0x7BA4($gp)
    ctx->pc = 0x1289b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935644)));
    // 0x1289bc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1289BCu;
    {
        const bool branch_taken_0x1289bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1289C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1289BCu;
        // 0x1289c0: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1289bc) {
            ctx->pc = 0x1289D0u;
            goto label_1289d0;
        }
    }
    ctx->pc = 0x1289C4u;
    // 0x1289c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1289c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1289c8: 0xaf838458  sw          $v1, -0x7BA8($gp)
    ctx->pc = 0x1289c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935640), GPR_U32(ctx, 3));
    // 0x1289cc: 0xa382845c  sb          $v0, -0x7BA4($gp)
    ctx->pc = 0x1289ccu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935644), (uint8_t)GPR_U32(ctx, 2));
label_1289d0:
    // 0x1289d0: 0x83828464  lb          $v0, -0x7B9C($gp)
    ctx->pc = 0x1289d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935652)));
    // 0x1289d4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1289D4u;
    {
        const bool branch_taken_0x1289d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1289D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1289D4u;
        // 0x1289d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1289d4) {
            ctx->pc = 0x1289E4u;
            goto label_1289e4;
        }
    }
    ctx->pc = 0x1289DCu;
    // 0x1289dc: 0xaf808460  sw          $zero, -0x7BA0($gp)
    ctx->pc = 0x1289dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935648), GPR_U32(ctx, 0));
    // 0x1289e0: 0xa3828464  sb          $v0, -0x7B9C($gp)
    ctx->pc = 0x1289e0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935652), (uint8_t)GPR_U32(ctx, 2));
label_1289e4:
    // 0x1289e4: 0x8382846c  lb          $v0, -0x7B94($gp)
    ctx->pc = 0x1289e4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935660)));
    // 0x1289e8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1289E8u;
    {
        const bool branch_taken_0x1289e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1289ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1289E8u;
        // 0x1289ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1289e8) {
            ctx->pc = 0x128A00u;
            goto label_128a00;
        }
    }
    ctx->pc = 0x1289F0u;
    // 0x1289f0: 0x3c033f78  lui         $v1, 0x3F78
    ctx->pc = 0x1289f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16248 << 16));
    // 0x1289f4: 0xa382846c  sb          $v0, -0x7B94($gp)
    ctx->pc = 0x1289f4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935660), (uint8_t)GPR_U32(ctx, 2));
    // 0x1289f8: 0x346251ec  ori         $v0, $v1, 0x51EC
    ctx->pc = 0x1289f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20972);
    // 0x1289fc: 0xaf828468  sw          $v0, -0x7B98($gp)
    ctx->pc = 0x1289fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935656), GPR_U32(ctx, 2));
label_128a00:
    // 0x128a00: 0xc6810134  lwc1        $f1, 0x134($s4)
    ctx->pc = 0x128a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x128a04: 0xc7808448  lwc1        $f0, -0x7BB8($gp)
    ctx->pc = 0x128a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128a08: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x128a08u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x128a0c: 0xe6810134  swc1        $f1, 0x134($s4)
    ctx->pc = 0x128a0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 308), bits); }
    // 0x128a10: 0xc7808458  lwc1        $f0, -0x7BA8($gp)
    ctx->pc = 0x128a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128a14: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x128a14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x128a18: 0xe6800134  swc1        $f0, 0x134($s4)
    ctx->pc = 0x128a18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 308), bits); }
    // 0x128a1c: 0xc7818460  lwc1        $f1, -0x7BA0($gp)
    ctx->pc = 0x128a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x128a20: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x128a20u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x128a24: 0x0  nop
    ctx->pc = 0x128a24u;
    // NOP
    // 0x128a28: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x128A28u;
    {
        const bool branch_taken_0x128a28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x128a28) {
            ctx->pc = 0x128A34u;
            goto label_128a34;
        }
    }
    ctx->pc = 0x128A30u;
    // 0x128a30: 0xe6810134  swc1        $f1, 0x134($s4)
    ctx->pc = 0x128a30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 308), bits); }
label_128a34:
    // 0x128a34: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x128a34u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x128a38: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x128a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128a3c: 0x27a50220  addiu       $a1, $sp, 0x220
    ctx->pc = 0x128a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x128a40: 0x7fa20220  sq          $v0, 0x220($sp)
    ctx->pc = 0x128a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 2));
    // 0x128a44: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x128a44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x128a48: 0x7fa20230  sq          $v0, 0x230($sp)
    ctx->pc = 0x128a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 2));
    // 0x128a4c: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x128a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128a50: 0xe7a00240  swc1        $f0, 0x240($sp)
    ctx->pc = 0x128a50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 576), bits); }
    // 0x128a54: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x128a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128a58: 0xc049948  jal         func_126520
    ctx->pc = 0x128A58u;
    SET_GPR_U32(ctx, 31, 0x128A60u);
    ctx->pc = 0x128A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128A58u;
    // 0x128a5c: 0xe7a00244  swc1        $f0, 0x244($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 580), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x126520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126520u, 0x128A58u, 0x128A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128A60u;
label_128a60:
    // 0x128a60: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x128A60u;
    {
        const bool branch_taken_0x128a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x128a60) {
            ctx->pc = 0x128B7Cu;
            goto label_128b7c;
        }
    }
    ctx->pc = 0x128A68u;
label_128a68:
    // 0x128a68: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x128A68u;
    SET_GPR_U32(ctx, 31, 0x128A70u);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x128A68u, 0x128A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128A70u;
label_128a70:
    // 0x128a70: 0x8e850118  lw          $a1, 0x118($s4)
    ctx->pc = 0x128a70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 280)));
    // 0x128a74: 0xc049f34  jal         func_127CD0
    ctx->pc = 0x128A74u;
    SET_GPR_U32(ctx, 31, 0x128A7Cu);
    ctx->pc = 0x128A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128A74u;
    // 0x128a78: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127CD0u, 0x128A74u, 0x128A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128A7Cu;
label_128a7c:
    // 0x128a7c: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x128A7Cu;
    SET_GPR_U32(ctx, 31, 0x128A84u);
    ctx->pc = 0x128A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128A7Cu;
    // 0x128a80: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x128A7Cu, 0x128A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128A84u;
label_128a84:
    // 0x128a84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x128a84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128a88: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x128a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x128a8c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x128a8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x128a90: 0xc04a038  jal         func_1280E0
    ctx->pc = 0x128A90u;
    SET_GPR_U32(ctx, 31, 0x128A98u);
    ctx->pc = 0x128A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128A90u;
    // 0x128a94: 0x8e850118  lw          $a1, 0x118($s4) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1280E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1280E0u, 0x128A90u, 0x128A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128A98u;
label_128a98:
    // 0x128a98: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x128a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x128a9c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x128a9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128aa0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x128aa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x128aa4: 0xc049b30  jal         func_126CC0
    ctx->pc = 0x128AA4u;
    SET_GPR_U32(ctx, 31, 0x128AACu);
    ctx->pc = 0x128AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128AA4u;
    // 0x128aa8: 0x27a40250  addiu       $a0, $sp, 0x250 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126CC0u, 0x128AA4u, 0x128AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128AACu;
label_128aac:
    // 0x128aac: 0x7ba30250  lq          $v1, 0x250($sp)
    ctx->pc = 0x128aacu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x128ab0: 0xc7a10270  lwc1        $f1, 0x270($sp)
    ctx->pc = 0x128ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x128ab4: 0x7ba20260  lq          $v0, 0x260($sp)
    ctx->pc = 0x128ab4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x128ab8: 0xc7a00274  lwc1        $f0, 0x274($sp)
    ctx->pc = 0x128ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128abc: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x128abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
    // 0x128ac0: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x128ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x128ac4: 0x268600e0  addiu       $a2, $s4, 0xE0
    ctx->pc = 0x128ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 224));
    // 0x128ac8: 0x7fa30100  sq          $v1, 0x100($sp)
    ctx->pc = 0x128ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 3));
    // 0x128acc: 0xe7a10120  swc1        $f1, 0x120($sp)
    ctx->pc = 0x128accu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x128ad0: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x128ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
    // 0x128ad4: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x128ad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x128ad8: 0xc6810110  lwc1        $f1, 0x110($s4)
    ctx->pc = 0x128ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x128adc: 0xc6800114  lwc1        $f0, 0x114($s4)
    ctx->pc = 0x128adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128ae0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x128ae0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x128ae4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x128ae4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x128ae8: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x128ae8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x128aec: 0x0  nop
    ctx->pc = 0x128aecu;
    // NOP
    // 0x128af0: 0x0  nop
    ctx->pc = 0x128af0u;
    // NOP
    // 0x128af4: 0xc049860  jal         func_126180
    ctx->pc = 0x128AF4u;
    SET_GPR_U32(ctx, 31, 0x128AFCu);
    ctx->pc = 0x126180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126180u, 0x128AF4u, 0x128AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128AFCu;
label_128afc:
    // 0x128afc: 0x7ba30280  lq          $v1, 0x280($sp)
    ctx->pc = 0x128afcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x128b00: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x128b00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x128b04: 0x7ba20290  lq          $v0, 0x290($sp)
    ctx->pc = 0x128b04u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x128b08: 0x27a70150  addiu       $a3, $sp, 0x150
    ctx->pc = 0x128b08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x128b0c: 0x27a80154  addiu       $t0, $sp, 0x154
    ctx->pc = 0x128b0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 340));
    // 0x128b10: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x128b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128b14: 0x27a502b0  addiu       $a1, $sp, 0x2B0
    ctx->pc = 0x128b14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x128b18: 0x7fa30130  sq          $v1, 0x130($sp)
    ctx->pc = 0x128b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 3));
    // 0x128b1c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x128b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x128b20: 0xc7a002a0  lwc1        $f0, 0x2A0($sp)
    ctx->pc = 0x128b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128b24: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x128b24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x128b28: 0xc7a002a4  lwc1        $f0, 0x2A4($sp)
    ctx->pc = 0x128b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128b2c: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x128b2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x128b30: 0x7ba20130  lq          $v0, 0x130($sp)
    ctx->pc = 0x128b30u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x128b34: 0x7fa202b0  sq          $v0, 0x2B0($sp)
    ctx->pc = 0x128b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 688), GPR_VEC(ctx, 2));
    // 0x128b38: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x128b38u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x128b3c: 0x7fa202c0  sq          $v0, 0x2C0($sp)
    ctx->pc = 0x128b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 704), GPR_VEC(ctx, 2));
    // 0x128b40: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x128b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128b44: 0xe7a002d0  swc1        $f0, 0x2D0($sp)
    ctx->pc = 0x128b44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 720), bits); }
    // 0x128b48: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x128b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128b4c: 0xc049948  jal         func_126520
    ctx->pc = 0x128B4Cu;
    SET_GPR_U32(ctx, 31, 0x128B54u);
    ctx->pc = 0x128B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128B4Cu;
    // 0x128b50: 0xe7a002d4  swc1        $f0, 0x2D4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 724), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x126520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126520u, 0x128B4Cu, 0x128B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128B54u;
label_128b54:
    // 0x128b54: 0x8e830110  lw          $v1, 0x110($s4)
    ctx->pc = 0x128b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 272)));
    // 0x128b58: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x128b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x128b5c: 0xae830110  sw          $v1, 0x110($s4)
    ctx->pc = 0x128b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 272), GPR_U32(ctx, 3));
    // 0x128b60: 0x8e830110  lw          $v1, 0x110($s4)
    ctx->pc = 0x128b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 272)));
    // 0x128b64: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x128B64u;
    {
        const bool branch_taken_0x128b64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x128b64) {
            ctx->pc = 0x128B7Cu;
            goto label_128b7c;
        }
    }
    ctx->pc = 0x128B6Cu;
    // 0x128b6c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x128B6Cu;
    {
        const bool branch_taken_0x128b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128B6Cu;
        // 0x128b70: 0xae8000a0  sw          $zero, 0xA0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128b6c) {
            ctx->pc = 0x128B7Cu;
            goto label_128b7c;
        }
    }
    ctx->pc = 0x128B74u;
label_128b74:
    // 0x128b74: 0xae8000a4  sw          $zero, 0xA4($s4)
    ctx->pc = 0x128b74u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 164), GPR_U32(ctx, 0));
    // 0x128b78: 0xae8000a0  sw          $zero, 0xA0($s4)
    ctx->pc = 0x128b78u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 160), GPR_U32(ctx, 0));
label_128b7c:
    // 0x128b7c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x128b7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_128b80:
    // 0x128b80: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x128b80u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x128b84: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x128b84u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x128b88: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x128b88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x128b8c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x128b8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x128b90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x128b90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x128b94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x128b94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128b98: 0x3e00008  jr          $ra
    ctx->pc = 0x128B98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128B98u;
        // 0x128b9c: 0x27bd02e0  addiu       $sp, $sp, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x128B98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x128BA0u;
}
