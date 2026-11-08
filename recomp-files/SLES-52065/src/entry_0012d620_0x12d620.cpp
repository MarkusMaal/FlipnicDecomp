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

// Function: entry_0012d620
// Address: 0x12d620 - 0x12d750
void entry_0012d620_0x12d620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012d620_0x12d620");
#endif

    switch (ctx->pc) {
        case 0x12d6b4u: goto label_12d6b4;
        case 0x12d74cu: goto label_12d74c;
        default: break;
    }

    ctx->pc = 0x12d620u;

    // 0x12d620: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x12d620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x12d624: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x12d624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x12d628: 0xa423309a  sh          $v1, 0x309A($at)
    ctx->pc = 0x12d628u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 12442), (uint16_t)GPR_U32(ctx, 3));
    // 0x12d62c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x12d62cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x12d630: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x12d630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x12d634: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x12d634u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12d638: 0xdc273098  ld          $a3, 0x3098($at)
    ctx->pc = 0x12d638u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 1), 12440)));
    // 0x12d63c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x12d63cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12d640: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x12d640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x12d644: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x12d644u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x12d648: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x12d648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x12d64c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12d64cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d650: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x12d650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x12d654: 0x651025  or          $v0, $v1, $a1
    ctx->pc = 0x12d654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x12d658: 0x70431389  pcpyld      $v0, $v0, $v1
    ctx->pc = 0x12d658u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x12d65c: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x12d65cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x12d660: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x12d660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x12d664: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x12d664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x12d668: 0xfc223098  sd          $v0, 0x3098($at)
    ctx->pc = 0x12d668u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x2B3098u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x2B3098u, _value); } while (0);
    // 0x12d66c: 0xc6240008  lwc1        $f4, 0x8($s1)
    ctx->pc = 0x12d66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x12d670: 0xc6230040  lwc1        $f3, 0x40($s1)
    ctx->pc = 0x12d670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12d674: 0xc6220030  lwc1        $f2, 0x30($s1)
    ctx->pc = 0x12d674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12d678: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x12d678u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x12d67c: 0x4600201a  mula.s      $f4, $f0
    ctx->pc = 0x12d67cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[4], ctx->f[0]));
    // 0x12d680: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x12d680u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x12d684: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x12d684u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x12d688: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x12d688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x12d68c: 0xc6220044  lwc1        $f2, 0x44($s1)
    ctx->pc = 0x12d68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12d690: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x12d690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12d694: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x12d694u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x12d698: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12d698u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12d69c: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x12d69cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x12d6a0: 0xc6210048  lwc1        $f1, 0x48($s1)
    ctx->pc = 0x12d6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12d6a4: 0xc6200038  lwc1        $f0, 0x38($s1)
    ctx->pc = 0x12d6a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12d6a8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12d6a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12d6ac: 0xc04b67c  jal         func_12D9F0
    ctx->pc = 0x12D6ACu;
    SET_GPR_U32(ctx, 31, 0x12D6B4u);
    ctx->pc = 0x12D6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D6ACu;
    // 0x12d6b0: 0xe6200038  swc1        $f0, 0x38($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D9F0u, 0x12D6ACu, 0x12D6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D6B4u;
label_12d6b4:
    // 0x12d6b4: 0x8e270078  lw          $a3, 0x78($s1)
    ctx->pc = 0x12d6b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x12d6b8: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x12d6b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12d6bc: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x12d6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x12d6c0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x12d6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12d6c4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x12d6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x12d6c8: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x12d6c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x12d6cc: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x12d6ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x12d6d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12d6d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d6d4: 0xa0e60003  sb          $a2, 0x3($a3)
    ctx->pc = 0x12d6d4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 6));
    // 0x12d6d8: 0xa0e00002  sb          $zero, 0x2($a3)
    ctx->pc = 0x12d6d8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x12d6dc: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x12d6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x12d6e0: 0xa4e50000  sh          $a1, 0x0($a3)
    ctx->pc = 0x12d6e0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x12d6e4: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x12d6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
    // 0x12d6e8: 0xace2000c  sw          $v0, 0xC($a3)
    ctx->pc = 0x12d6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
    // 0x12d6ec: 0x8e220078  lw          $v0, 0x78($s1)
    ctx->pc = 0x12d6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x12d6f0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x12d6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x12d6f4: 0xae220078  sw          $v0, 0x78($s1)
    ctx->pc = 0x12d6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 2));
    // 0x12d6f8: 0x78233070  lq          $v1, 0x3070($at)
    ctx->pc = 0x12d6f8u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x2B3070u));
    // 0x12d6fc: 0x8e220078  lw          $v0, 0x78($s1)
    ctx->pc = 0x12d6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x12d700: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x12d700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x12d704: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x12d704u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x12d708: 0x8e220078  lw          $v0, 0x78($s1)
    ctx->pc = 0x12d708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x12d70c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x12d70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x12d710: 0xae220078  sw          $v0, 0x78($s1)
    ctx->pc = 0x12d710u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 2));
    // 0x12d714: 0x78233080  lq          $v1, 0x3080($at)
    ctx->pc = 0x12d714u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x2B3080u));
    // 0x12d718: 0x8e220078  lw          $v0, 0x78($s1)
    ctx->pc = 0x12d718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x12d71c: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x12d71cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x12d720: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x12d720u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x12d724: 0x8e220078  lw          $v0, 0x78($s1)
    ctx->pc = 0x12d724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x12d728: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x12d728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x12d72c: 0xae220078  sw          $v0, 0x78($s1)
    ctx->pc = 0x12d72cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 2));
    // 0x12d730: 0x78233090  lq          $v1, 0x3090($at)
    ctx->pc = 0x12d730u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x2B3090u));
    // 0x12d734: 0x8e220078  lw          $v0, 0x78($s1)
    ctx->pc = 0x12d734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x12d738: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x12d738u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x12d73c: 0x8e220078  lw          $v0, 0x78($s1)
    ctx->pc = 0x12d73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x12d740: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x12d740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x12d744: 0xc04b67c  jal         func_12D9F0
    ctx->pc = 0x12D744u;
    SET_GPR_U32(ctx, 31, 0x12D74Cu);
    ctx->pc = 0x12D748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D744u;
    // 0x12d748: 0xae220078  sw          $v0, 0x78($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D9F0u, 0x12D744u, 0x12D74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D74Cu;
label_12d74c:
    // 0x12d74c: 0xa2200010  sb          $zero, 0x10($s1)
    ctx->pc = 0x12d74cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 16), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x12d750u;
}
