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

// Function: FUN_001736d0
// Address: 0x1736d0 - 0x173800
void FUN_001736d0_0x1736d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001736d0_0x1736d0");
#endif

    switch (ctx->pc) {
        case 0x173710u: goto label_173710;
        case 0x17371cu: goto label_17371c;
        case 0x173728u: goto label_173728;
        case 0x17373cu: goto label_17373c;
        case 0x173744u: goto label_173744;
        case 0x17374cu: goto label_17374c;
        case 0x173764u: goto label_173764;
        case 0x173784u: goto label_173784;
        case 0x173790u: goto label_173790;
        case 0x1737c0u: goto label_1737c0;
        default: break;
    }

    ctx->pc = 0x1736d0u;

    // 0x1736d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1736d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1736d4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1736d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1736d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1736d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1736dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1736dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1736e0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1736e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1736e4: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x1736e4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1736e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1736e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1736ec: 0x460065c6  mov.s       $f23, $f12
    ctx->pc = 0x1736ecu;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
    // 0x1736f0: 0x4600bdc2  mul.s       $f23, $f23, $f0
    ctx->pc = 0x1736f0u;
    ctx->f[23] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    // 0x1736f4: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x1736f4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1736f8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1736f8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1736fc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1736fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x173700: 0x46006d86  mov.s       $f22, $f13
    ctx->pc = 0x173700u;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
    // 0x173704: 0x46007546  mov.s       $f21, $f14
    ctx->pc = 0x173704u;
    ctx->f[21] = FPU_MOV_S(ctx->f[14]);
    // 0x173708: 0xc045b20  jal         func_116C80
    ctx->pc = 0x173708u;
    SET_GPR_U32(ctx, 31, 0x173710u);
    ctx->pc = 0x17370Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173708u;
    // 0x17370c: 0x46007d06  mov.s       $f20, $f15 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[15]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x173708u, 0x173710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173710u;
label_173710:
    // 0x173710: 0x4600b802  mul.s       $f0, $f23, $f0
    ctx->pc = 0x173710u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    // 0x173714: 0xc045b20  jal         func_116C80
    ctx->pc = 0x173714u;
    SET_GPR_U32(ctx, 31, 0x17371Cu);
    ctx->pc = 0x173718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173714u;
    // 0x173718: 0xe6000010  swc1        $f0, 0x10($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x173714u, 0x17371Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17371Cu;
label_17371c:
    // 0x17371c: 0x4600b802  mul.s       $f0, $f23, $f0
    ctx->pc = 0x17371cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    // 0x173720: 0xc045b20  jal         func_116C80
    ctx->pc = 0x173720u;
    SET_GPR_U32(ctx, 31, 0x173728u);
    ctx->pc = 0x173724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173720u;
    // 0x173724: 0xe6000014  swc1        $f0, 0x14($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x173720u, 0x173728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173728u;
label_173728:
    // 0x173728: 0x4600b802  mul.s       $f0, $f23, $f0
    ctx->pc = 0x173728u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    // 0x17372c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17372cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x173730: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x173730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x173734: 0xc045b20  jal         func_116C80
    ctx->pc = 0x173734u;
    SET_GPR_U32(ctx, 31, 0x17373Cu);
    ctx->pc = 0x173738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173734u;
    // 0x173738: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x173734u, 0x17373Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17373Cu;
label_17373c:
    // 0x17373c: 0xc045b20  jal         func_116C80
    ctx->pc = 0x17373Cu;
    SET_GPR_U32(ctx, 31, 0x173744u);
    ctx->pc = 0x173740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17373Cu;
    // 0x173740: 0xe6000020  swc1        $f0, 0x20($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x17373Cu, 0x173744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173744u;
label_173744:
    // 0x173744: 0xc045b20  jal         func_116C80
    ctx->pc = 0x173744u;
    SET_GPR_U32(ctx, 31, 0x17374Cu);
    ctx->pc = 0x173748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173744u;
    // 0x173748: 0xe6000024  swc1        $f0, 0x24($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x173744u, 0x17374Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17374Cu;
label_17374c:
    // 0x17374c: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x17374cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x173750: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x173750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x173754: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x173754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x173758: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x173758u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17375c: 0xc07d312  jal         func_1F4C48
    ctx->pc = 0x17375Cu;
    SET_GPR_U32(ctx, 31, 0x173764u);
    ctx->pc = 0x173760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17375Cu;
    // 0x173760: 0xae02002c  sw          $v0, 0x2C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x17375Cu, 0x173764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173764u;
label_173764:
    // 0x173764: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x173764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x173768: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x173768u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17376c: 0x24421a40  addiu       $v0, $v0, 0x1A40
    ctx->pc = 0x17376cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6720));
    // 0x173770: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x173770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x173774: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x173774u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x211A40u));
    // 0x173778: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x173778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x17377c: 0xc07d300  jal         func_1F4C00
    ctx->pc = 0x17377Cu;
    SET_GPR_U32(ctx, 31, 0x173784u);
    ctx->pc = 0x173780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17377Cu;
    // 0x173780: 0x7cc20000  sq          $v0, 0x0($a2) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C00u, 0x17377Cu, 0x173784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173784u;
label_173784:
    // 0x173784: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x173784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x173788: 0xc07d312  jal         func_1F4C48
    ctx->pc = 0x173788u;
    SET_GPR_U32(ctx, 31, 0x173790u);
    ctx->pc = 0x17378Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173788u;
    // 0x17378c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x173788u, 0x173790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173790u;
label_173790:
    // 0x173790: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x173790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173794: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x173794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x173798: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x173798u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x17379c: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x17379cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1737a0: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x1737a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1737a4: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x1737a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x1737a8: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x1737a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x1737ac: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x1737acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1737b0: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x1737b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x1737b4: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x1737b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x1737b8: 0xc045b20  jal         func_116C80
    ctx->pc = 0x1737B8u;
    SET_GPR_U32(ctx, 31, 0x1737C0u);
    ctx->pc = 0x1737BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1737B8u;
    // 0x1737bc: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x1737B8u, 0x1737C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1737C0u;
label_1737c0:
    // 0x1737c0: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x1737c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x1737c4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1737c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1737c8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1737c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1737cc: 0x0  nop
    ctx->pc = 0x1737ccu;
    // NOP
    // 0x1737d0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1737d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1737d4: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x1737d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x1737d8: 0xe6150040  swc1        $f21, 0x40($s0)
    ctx->pc = 0x1737d8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x1737dc: 0xe6140044  swc1        $f20, 0x44($s0)
    ctx->pc = 0x1737dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x1737e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1737e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1737e4: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x1737e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1737e8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1737e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1737ec: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x1737ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1737f0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1737f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1737f4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1737f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1737f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1737F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1737FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1737F8u;
        // 0x1737fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1737F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x173800u;
}
