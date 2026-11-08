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

// Function: entry_001a75d0
// Address: 0x1a75d0 - 0x1a76e0
void entry_001a75d0_0x1a75d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a75d0_0x1a75d0");
#endif

    switch (ctx->pc) {
        case 0x1a75d8u: goto label_1a75d8;
        case 0x1a75e8u: goto label_1a75e8;
        case 0x1a75f4u: goto label_1a75f4;
        case 0x1a760cu: goto label_1a760c;
        case 0x1a762cu: goto label_1a762c;
        case 0x1a763cu: goto label_1a763c;
        case 0x1a764cu: goto label_1a764c;
        case 0x1a765cu: goto label_1a765c;
        case 0x1a7674u: goto label_1a7674;
        case 0x1a7680u: goto label_1a7680;
        case 0x1a7690u: goto label_1a7690;
        default: break;
    }

    ctx->pc = 0x1a75d0u;

    // 0x1a75d0: 0xc062200  jal         func_188800
    ctx->pc = 0x1A75D0u;
    SET_GPR_U32(ctx, 31, 0x1A75D8u);
    ctx->pc = 0x1A75D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A75D0u;
    // 0x1a75d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188800u, 0x1A75D0u, 0x1A75D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A75D8u;
label_1a75d8:
    // 0x1a75d8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a75d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1a75dc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a75dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a75e0: 0xc062858  jal         func_18A160
    ctx->pc = 0x1A75E0u;
    SET_GPR_U32(ctx, 31, 0x1A75E8u);
    ctx->pc = 0x1A75E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A75E0u;
    // 0x1a75e4: 0x26440040  addiu       $a0, $s2, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A160u, 0x1A75E0u, 0x1A75E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A75E8u;
label_1a75e8:
    // 0x1a75e8: 0x26440040  addiu       $a0, $s2, 0x40
    ctx->pc = 0x1a75e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x1a75ec: 0xc0628f0  jal         func_18A3C0
    ctx->pc = 0x1A75ECu;
    SET_GPR_U32(ctx, 31, 0x1A75F4u);
    ctx->pc = 0x1A75F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A75ECu;
    // 0x1a75f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A3C0u, 0x1A75ECu, 0x1A75F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A75F4u;
label_1a75f4:
    // 0x1a75f4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a75f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a75f8: 0x3c02c280  lui         $v0, 0xC280
    ctx->pc = 0x1a75f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49792 << 16));
    // 0x1a75fc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a75fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1a7600: 0x26440040  addiu       $a0, $s2, 0x40
    ctx->pc = 0x1a7600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x1a7604: 0xc062828  jal         func_18A0A0
    ctx->pc = 0x1A7604u;
    SET_GPR_U32(ctx, 31, 0x1A760Cu);
    ctx->pc = 0x1A7608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7604u;
    // 0x1a7608: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0A0u, 0x1A7604u, 0x1A760Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A760Cu;
label_1a760c:
    // 0x1a760c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a760cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1a7610: 0x26440040  addiu       $a0, $s2, 0x40
    ctx->pc = 0x1a7610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x1a7614: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a7614u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a7618: 0x0  nop
    ctx->pc = 0x1a7618u;
    // NOP
    // 0x1a761c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1a761cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1a7620: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x1a7620u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x1a7624: 0xc062860  jal         func_18A180
    ctx->pc = 0x1A7624u;
    SET_GPR_U32(ctx, 31, 0x1A762Cu);
    ctx->pc = 0x1A7628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7624u;
    // 0x1a7628: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A180u, 0x1A7624u, 0x1A762Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A762Cu;
label_1a762c:
    // 0x1a762c: 0x8e450020  lw          $a1, 0x20($s2)
    ctx->pc = 0x1a762cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1a7630: 0x8e460030  lw          $a2, 0x30($s2)
    ctx->pc = 0x1a7630u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x1a7634: 0xc0627e0  jal         func_189F80
    ctx->pc = 0x1A7634u;
    SET_GPR_U32(ctx, 31, 0x1A763Cu);
    ctx->pc = 0x1A7638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7634u;
    // 0x1a7638: 0x26440040  addiu       $a0, $s2, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189F80u, 0x1A7634u, 0x1A763Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A763Cu;
label_1a763c:
    // 0x1a763c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1a763cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1a7640: 0x26440040  addiu       $a0, $s2, 0x40
    ctx->pc = 0x1a7640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x1a7644: 0xc0627bc  jal         func_189EF0
    ctx->pc = 0x1A7644u;
    SET_GPR_U32(ctx, 31, 0x1A764Cu);
    ctx->pc = 0x1A7648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7644u;
    // 0x1a7648: 0x24a50738  addiu       $a1, $a1, 0x738 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EF0u, 0x1A7644u, 0x1A764Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A764Cu;
label_1a764c:
    // 0x1a764c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a764cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1a7650: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a7650u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a7654: 0xc062858  jal         func_18A160
    ctx->pc = 0x1A7654u;
    SET_GPR_U32(ctx, 31, 0x1A765Cu);
    ctx->pc = 0x1A7658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7654u;
    // 0x1a7658: 0x26440040  addiu       $a0, $s2, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A160u, 0x1A7654u, 0x1A765Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A765Cu;
label_1a765c:
    // 0x1a765c: 0x3c02c180  lui         $v0, 0xC180
    ctx->pc = 0x1a765cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49536 << 16));
    // 0x1a7660: 0x26440040  addiu       $a0, $s2, 0x40
    ctx->pc = 0x1a7660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x1a7664: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a7664u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a7668: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a7668u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1a766c: 0xc062828  jal         func_18A0A0
    ctx->pc = 0x1A766Cu;
    SET_GPR_U32(ctx, 31, 0x1A7674u);
    ctx->pc = 0x1A7670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A766Cu;
    // 0x1a7670: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0A0u, 0x1A766Cu, 0x1A7674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7674u;
label_1a7674:
    // 0x1a7674: 0x8e450024  lw          $a1, 0x24($s2)
    ctx->pc = 0x1a7674u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1a7678: 0xc0627e0  jal         func_189F80
    ctx->pc = 0x1A7678u;
    SET_GPR_U32(ctx, 31, 0x1A7680u);
    ctx->pc = 0x1A767Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7678u;
    // 0x1a767c: 0x26440040  addiu       $a0, $s2, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189F80u, 0x1A7678u, 0x1A7680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7680u;
label_1a7680:
    // 0x1a7680: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1a7680u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1a7684: 0x26440040  addiu       $a0, $s2, 0x40
    ctx->pc = 0x1a7684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x1a7688: 0xc0627bc  jal         func_189EF0
    ctx->pc = 0x1A7688u;
    SET_GPR_U32(ctx, 31, 0x1A7690u);
    ctx->pc = 0x1A768Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7688u;
    // 0x1a768c: 0x24a50740  addiu       $a1, $a1, 0x740 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EF0u, 0x1A7688u, 0x1A7690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7690u;
label_1a7690:
    // 0x1a7690: 0xc7818028  lwc1        $f1, -0x7FD8($gp)
    ctx->pc = 0x1a7690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a7694: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x1a7694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x1a7698: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1a7698u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1a769c: 0x3c033f40  lui         $v1, 0x3F40
    ctx->pc = 0x1a769cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16192 << 16));
    // 0x1a76a0: 0xc6420010  lwc1        $f2, 0x10($s2)
    ctx->pc = 0x1a76a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a76a4: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x1a76a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x1a76a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a76a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a76ac: 0x0  nop
    ctx->pc = 0x1a76acu;
    // NOP
    // 0x1a76b0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a76b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1a76b4: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x1a76b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1a76b8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a76b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1a76bc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a76bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1a76c0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a76c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1a76c4: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x1a76c4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x1a76c8: 0x0  nop
    ctx->pc = 0x1a76c8u;
    // NOP
    // 0x1a76cc: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x1a76ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1a76d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A76D0u;
    {
        const bool branch_taken_0x1a76d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A76D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A76D0u;
        // 0x1a76d4: 0x46010500  add.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a76d0) {
            ctx->pc = 0x1A76E0u;
            return;
        }
    }
    ctx->pc = 0x1A76D8u;
    // 0x1a76d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A76D8u;
    {
        const bool branch_taken_0x1a76d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A76DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A76D8u;
        // 0x1a76dc: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a76d8) {
            ctx->pc = 0x1A76E4u;
            return;
        }
    }
    ctx->pc = 0x1A76E0u;
}
