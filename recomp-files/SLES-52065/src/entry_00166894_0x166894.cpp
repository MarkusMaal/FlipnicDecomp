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

// Function: entry_00166894
// Address: 0x166894 - 0x16697c
void entry_00166894_0x166894(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00166894_0x166894");
#endif

    switch (ctx->pc) {
        case 0x1668c0u: goto label_1668c0;
        case 0x1668e0u: goto label_1668e0;
        case 0x1668f4u: goto label_1668f4;
        case 0x1668fcu: goto label_1668fc;
        case 0x166938u: goto label_166938;
        case 0x166978u: goto label_166978;
        default: break;
    }

    ctx->pc = 0x166894u;

    // 0x166894: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x166894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166898: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x166898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x16689c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16689cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1668a0: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x1668a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1668a4: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x1668a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1668a8: 0x24460020  addiu       $a2, $v0, 0x20
    ctx->pc = 0x1668a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1668ac: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1668acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1668b0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1668b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1668b4: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x1668b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x1668b8: 0xc0425d4  jal         func_109750
    ctx->pc = 0x1668B8u;
    SET_GPR_U32(ctx, 31, 0x1668C0u);
    ctx->pc = 0x1668BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1668B8u;
    // 0x1668bc: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109750u, 0x1668B8u, 0x1668C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1668C0u;
label_1668c0:
    // 0x1668c0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1668c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1668c4: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x1668c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x1668c8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1668c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x1668cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1668ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1668d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1668d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1668d4: 0xc46c004c  lwc1        $f12, 0x4C($v1)
    ctx->pc = 0x1668d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1668d8: 0xc056194  jal         func_158650
    ctx->pc = 0x1668D8u;
    SET_GPR_U32(ctx, 31, 0x1668E0u);
    ctx->pc = 0x1668DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1668D8u;
    // 0x1668dc: 0x46140340  add.s       $f13, $f0, $f20 (Delay Slot)
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x158650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158650u, 0x1668D8u, 0x1668E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1668E0u;
label_1668e0:
    // 0x1668e0: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1668e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1668e4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1668e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1668e8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1668e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1668ec: 0xc055dac  jal         func_1576B0
    ctx->pc = 0x1668ECu;
    SET_GPR_U32(ctx, 31, 0x1668F4u);
    ctx->pc = 0x1668F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1668ECu;
    // 0x1668f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1576B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1576B0u, 0x1668ECu, 0x1668F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1668F4u;
label_1668f4:
    // 0x1668f4: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x1668F4u;
    SET_GPR_U32(ctx, 31, 0x1668FCu);
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x1668F4u, 0x1668FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1668FCu;
label_1668fc:
    // 0x1668fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1668fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x166900: 0x0  nop
    ctx->pc = 0x166900u;
    // NOP
    // 0x166904: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x166904u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x166908: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x166908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x16690c: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x16690cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x166910: 0x3c024e80  lui         $v0, 0x4E80
    ctx->pc = 0x166910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20096 << 16));
    // 0x166914: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x166914u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x166918: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x166918u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16691c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x16691cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x166920: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x166920u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x166924: 0xc6000290  lwc1        $f0, 0x290($s0)
    ctx->pc = 0x166924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x166928: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x166928u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x16692c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x16692cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x166930: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x166930u;
    SET_GPR_U32(ctx, 31, 0x166938u);
    ctx->pc = 0x166934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166930u;
    // 0x166934: 0xe6000290  swc1        $f0, 0x290($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 656), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x166930u, 0x166938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166938u;
label_166938:
    // 0x166938: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x166938u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16693c: 0x3c033ca3  lui         $v1, 0x3CA3
    ctx->pc = 0x16693cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15523 << 16));
    // 0x166940: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x166940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x166944: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x166944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166948: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x166948u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x16694c: 0x3c024e80  lui         $v0, 0x4E80
    ctx->pc = 0x16694cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20096 << 16));
    // 0x166950: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x166950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166954: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x166954u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x166958: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x166958u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16695c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x16695cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x166960: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x166960u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x166964: 0xc6000298  lwc1        $f0, 0x298($s0)
    ctx->pc = 0x166964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x166968: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x166968u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x16696c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x16696cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x166970: 0xc0564b8  jal         func_1592E0
    ctx->pc = 0x166970u;
    SET_GPR_U32(ctx, 31, 0x166978u);
    ctx->pc = 0x166974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166970u;
    // 0x166974: 0xe6000298  swc1        $f0, 0x298($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 664), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1592E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1592E0u, 0x166970u, 0x166978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166978u;
label_166978:
    // 0x166978: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x166978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x16697cu;
}
