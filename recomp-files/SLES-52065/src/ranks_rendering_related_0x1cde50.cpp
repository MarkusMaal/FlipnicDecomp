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

// Function: ranks_rendering_related
// Address: 0x1cde50 - 0x1ce510
void ranks_rendering_related_0x1cde50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ranks_rendering_related_0x1cde50");
#endif

    switch (ctx->pc) {
        case 0x1cdf74u: goto label_1cdf74;
        case 0x1cdf8cu: goto label_1cdf8c;
        case 0x1cdfe8u: goto label_1cdfe8;
        case 0x1cdff4u: goto label_1cdff4;
        case 0x1ce004u: goto label_1ce004;
        case 0x1ce014u: goto label_1ce014;
        case 0x1ce028u: goto label_1ce028;
        case 0x1ce034u: goto label_1ce034;
        case 0x1ce04cu: goto label_1ce04c;
        case 0x1ce06cu: goto label_1ce06c;
        case 0x1ce080u: goto label_1ce080;
        case 0x1ce098u: goto label_1ce098;
        case 0x1ce0acu: goto label_1ce0ac;
        case 0x1ce0c4u: goto label_1ce0c4;
        case 0x1ce0d8u: goto label_1ce0d8;
        case 0x1ce108u: goto label_1ce108;
        case 0x1ce11cu: goto label_1ce11c;
        case 0x1ce12cu: goto label_1ce12c;
        case 0x1ce278u: goto label_1ce278;
        case 0x1ce284u: goto label_1ce284;
        case 0x1ce29cu: goto label_1ce29c;
        case 0x1ce2c0u: goto label_1ce2c0;
        case 0x1ce2e4u: goto label_1ce2e4;
        case 0x1ce2f8u: goto label_1ce2f8;
        case 0x1ce310u: goto label_1ce310;
        case 0x1ce328u: goto label_1ce328;
        case 0x1ce34cu: goto label_1ce34c;
        case 0x1ce364u: goto label_1ce364;
        case 0x1ce370u: goto label_1ce370;
        case 0x1ce384u: goto label_1ce384;
        case 0x1ce38cu: goto label_1ce38c;
        case 0x1ce398u: goto label_1ce398;
        case 0x1ce3dcu: goto label_1ce3dc;
        case 0x1ce40cu: goto label_1ce40c;
        case 0x1ce420u: goto label_1ce420;
        case 0x1ce42cu: goto label_1ce42c;
        case 0x1ce43cu: goto label_1ce43c;
        case 0x1ce454u: goto label_1ce454;
        case 0x1ce480u: goto label_1ce480;
        case 0x1ce494u: goto label_1ce494;
        case 0x1ce4acu: goto label_1ce4ac;
        case 0x1ce4b4u: goto label_1ce4b4;
        case 0x1ce4c8u: goto label_1ce4c8;
        case 0x1ce4dcu: goto label_1ce4dc;
        case 0x1ce4e4u: goto label_1ce4e4;
        default: break;
    }

    ctx->pc = 0x1cde50u;

    // 0x1cde50: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1cde50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1cde54: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cde54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cde58: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1cde58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1cde5c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1cde5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1cde60: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1cde60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1cde64: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1cde64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1cde68: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1cde68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1cde6c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1cde6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1cde70: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1cde70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1cde74: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1cde74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1cde78: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1cde78u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1cde7c: 0x8022fa40  lb          $v0, -0x5C0($at)
    ctx->pc = 0x1cde7cu;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36FA40u));
    // 0x1cde80: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CDE80u;
    {
        const bool branch_taken_0x1cde80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CDE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDE80u;
        // 0x1cde84: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cde80) {
            ctx->pc = 0x1CDEA0u;
            goto label_1cdea0;
        }
    }
    ctx->pc = 0x1CDE88u;
    // 0x1cde88: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1cde88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1cde8c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cde8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cde90: 0xac23fa38  sw          $v1, -0x5C8($at)
    ctx->pc = 0x1cde90u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36FA38u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36FA38u, _value); } while (0);
    // 0x1cde94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cde94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cde98: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cde98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cde9c: 0xa022fa40  sb          $v0, -0x5C0($at)
    ctx->pc = 0x1cde9cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36FA40u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36FA40u, _value); } while (0);
label_1cdea0:
    // 0x1cdea0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cdea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cdea4: 0x8022fa50  lb          $v0, -0x5B0($at)
    ctx->pc = 0x1cdea4u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36FA50u));
    // 0x1cdea8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CDEA8u;
    {
        const bool branch_taken_0x1cdea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cdea8) {
            ctx->pc = 0x1CDEC8u;
            goto label_1cdec8;
        }
    }
    ctx->pc = 0x1CDEB0u;
    // 0x1cdeb0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1cdeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1cdeb4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cdeb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cdeb8: 0xac23fa48  sw          $v1, -0x5B8($at)
    ctx->pc = 0x1cdeb8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36FA48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36FA48u, _value); } while (0);
    // 0x1cdebc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cdebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdec0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cdec0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cdec4: 0xa022fa50  sb          $v0, -0x5B0($at)
    ctx->pc = 0x1cdec4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36FA50u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36FA50u, _value); } while (0);
label_1cdec8:
    // 0x1cdec8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cdec8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cdecc: 0x8022fa60  lb          $v0, -0x5A0($at)
    ctx->pc = 0x1cdeccu;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36FA60u));
    // 0x1cded0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CDED0u;
    {
        const bool branch_taken_0x1cded0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cded0) {
            ctx->pc = 0x1CDEF0u;
            goto label_1cdef0;
        }
    }
    ctx->pc = 0x1CDED8u;
    // 0x1cded8: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x1cded8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x1cdedc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cdedcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cdee0: 0xac23fa58  sw          $v1, -0x5A8($at)
    ctx->pc = 0x1cdee0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36FA58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36FA58u, _value); } while (0);
    // 0x1cdee4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cdee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdee8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cdee8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cdeec: 0xa022fa60  sb          $v0, -0x5A0($at)
    ctx->pc = 0x1cdeecu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36FA60u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36FA60u, _value); } while (0);
label_1cdef0:
    // 0x1cdef0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cdef0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cdef4: 0x8022fa70  lb          $v0, -0x590($at)
    ctx->pc = 0x1cdef4u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36FA70u));
    // 0x1cdef8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CDEF8u;
    {
        const bool branch_taken_0x1cdef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cdef8) {
            ctx->pc = 0x1CDF18u;
            goto label_1cdf18;
        }
    }
    ctx->pc = 0x1CDF00u;
    // 0x1cdf00: 0x3c0343f0  lui         $v1, 0x43F0
    ctx->pc = 0x1cdf00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17392 << 16));
    // 0x1cdf04: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cdf04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cdf08: 0xac23fa68  sw          $v1, -0x598($at)
    ctx->pc = 0x1cdf08u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36FA68u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36FA68u, _value); } while (0);
    // 0x1cdf0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cdf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdf10: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cdf10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cdf14: 0xa022fa70  sb          $v0, -0x590($at)
    ctx->pc = 0x1cdf14u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36FA70u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36FA70u, _value); } while (0);
label_1cdf18:
    // 0x1cdf18: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cdf18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cdf1c: 0x8022fa80  lb          $v0, -0x580($at)
    ctx->pc = 0x1cdf1cu;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36FA80u));
    // 0x1cdf20: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CDF20u;
    {
        const bool branch_taken_0x1cdf20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CDF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDF20u;
        // 0x1cdf24: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdf20) {
            ctx->pc = 0x1CDF44u;
            goto label_1cdf44;
        }
    }
    ctx->pc = 0x1CDF28u;
    // 0x1cdf28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cdf28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdf2c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cdf2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cdf30: 0xa022fa80  sb          $v0, -0x580($at)
    ctx->pc = 0x1cdf30u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36FA80u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36FA80u, _value); } while (0);
    // 0x1cdf34: 0x3c03440e  lui         $v1, 0x440E
    ctx->pc = 0x1cdf34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17422 << 16));
    // 0x1cdf38: 0x34628000  ori         $v0, $v1, 0x8000
    ctx->pc = 0x1cdf38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x1cdf3c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cdf3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cdf40: 0xac22fa78  sw          $v0, -0x588($at)
    ctx->pc = 0x1cdf40u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36FA78u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36FA78u, _value); } while (0);
label_1cdf44:
    // 0x1cdf44: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1cdf44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x1cdf48: 0x24a58fe0  addiu       $a1, $a1, -0x7020
    ctx->pc = 0x1cdf48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938592));
    // 0x1cdf4c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1cdf4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1cdf50: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x1cdf50u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1cdf54: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x1cdf54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cdf58: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cdf58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cdf5c: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1cdf5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1cdf60: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x1cdf60u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x1cdf64: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x1cdf64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x1cdf68: 0x8ea40060  lw          $a0, 0x60($s5)
    ctx->pc = 0x1cdf68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x1cdf6c: 0xc06282c  jal         func_18A0B0
    ctx->pc = 0x1CDF6Cu;
    SET_GPR_U32(ctx, 31, 0x1CDF74u);
    ctx->pc = 0x1CDF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDF6Cu;
    // 0x1cdf70: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0B0u, 0x1CDF6Cu, 0x1CDF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDF74u;
label_1cdf74:
    // 0x1cdf74: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cdf74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cdf78: 0xc42cfa38  lwc1        $f12, -0x5C8($at)
    ctx->pc = 0x1cdf78u;
    { uint32_t bits = FAST_READ32(0x36FA38u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cdf7c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cdf7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cdf80: 0xc42dfa48  lwc1        $f13, -0x5B8($at)
    ctx->pc = 0x1cdf80u;
    { uint32_t bits = FAST_READ32(0x36FA48u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1cdf84: 0xc06285c  jal         func_18A170
    ctx->pc = 0x1CDF84u;
    SET_GPR_U32(ctx, 31, 0x1CDF8Cu);
    ctx->pc = 0x1CDF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDF84u;
    // 0x1cdf88: 0x8ea40060  lw          $a0, 0x60($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A170u, 0x1CDF84u, 0x1CDF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDF8Cu;
label_1cdf8c:
    // 0x1cdf8c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cdf8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cdf90: 0x8c23fa88  lw          $v1, -0x578($at)
    ctx->pc = 0x1cdf90u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36FA88u));
    // 0x1cdf94: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cdf94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cdf98: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1cdf98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1cdf9c: 0x8022fa98  lb          $v0, -0x568($at)
    ctx->pc = 0x1cdf9cu;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36FA98u));
    // 0x1cdfa0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cdfa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cdfa4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CDFA4u;
    {
        const bool branch_taken_0x1cdfa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CDFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDFA4u;
        // 0x1cdfa8: 0xac23fa88  sw          $v1, -0x578($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294965896), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdfa4) {
            ctx->pc = 0x1CDFC4u;
            goto label_1cdfc4;
        }
    }
    ctx->pc = 0x1CDFACu;
    // 0x1cdfac: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1cdfacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cdfb0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cdfb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cdfb4: 0xac23fa90  sw          $v1, -0x570($at)
    ctx->pc = 0x1cdfb4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36FA90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36FA90u, _value); } while (0);
    // 0x1cdfb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cdfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdfbc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cdfbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cdfc0: 0xa022fa98  sb          $v0, -0x568($at)
    ctx->pc = 0x1cdfc0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36FA98u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36FA98u, _value); } while (0);
label_1cdfc4:
    // 0x1cdfc4: 0x92a3006c  lbu         $v1, 0x6C($s5)
    ctx->pc = 0x1cdfc4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 108)));
    // 0x1cdfc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cdfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdfcc: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CDFCCu;
    {
        const bool branch_taken_0x1cdfcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CDFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDFCCu;
        // 0x1cdfd0: 0x24160005  addiu       $s6, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdfcc) {
            ctx->pc = 0x1CDFD8u;
            goto label_1cdfd8;
        }
    }
    ctx->pc = 0x1CDFD4u;
    // 0x1cdfd4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1cdfd4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cdfd8:
    // 0x1cdfd8: 0x16082a  slt         $at, $zero, $s6
    ctx->pc = 0x1cdfd8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x1cdfdc: 0x10200042  beqz        $at, . + 4 + (0x42 << 2)
    ctx->pc = 0x1CDFDCu;
    {
        const bool branch_taken_0x1cdfdc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDFDCu;
        // 0x1cdfe0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdfdc) {
            ctx->pc = 0x1CE0E8u;
            goto label_1ce0e8;
        }
    }
    ctx->pc = 0x1CDFE4u;
    // 0x1cdfe4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1cdfe4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cdfe8:
    // 0x1cdfe8: 0x8ea40064  lw          $a0, 0x64($s5)
    ctx->pc = 0x1cdfe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 100)));
    // 0x1cdfec: 0xc072f34  jal         func_1CBCD0
    ctx->pc = 0x1CDFECu;
    SET_GPR_U32(ctx, 31, 0x1CDFF4u);
    ctx->pc = 0x1CDFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDFECu;
    // 0x1cdff0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBCD0u, 0x1CDFECu, 0x1CDFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDFF4u;
label_1cdff4:
    // 0x1cdff4: 0x8ea40064  lw          $a0, 0x64($s5)
    ctx->pc = 0x1cdff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 100)));
    // 0x1cdff8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1cdff8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdffc: 0xc072f78  jal         func_1CBDE0
    ctx->pc = 0x1CDFFCu;
    SET_GPR_U32(ctx, 31, 0x1CE004u);
    ctx->pc = 0x1CE000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDFFCu;
    // 0x1ce000: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBDE0u, 0x1CDFFCu, 0x1CE004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE004u;
label_1ce004:
    // 0x1ce004: 0x8ea40064  lw          $a0, 0x64($s5)
    ctx->pc = 0x1ce004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 100)));
    // 0x1ce008: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1ce008u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce00c: 0xc072fb0  jal         func_1CBEC0
    ctx->pc = 0x1CE00Cu;
    SET_GPR_U32(ctx, 31, 0x1CE014u);
    ctx->pc = 0x1CE010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE00Cu;
    // 0x1ce010: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBEC0u, 0x1CE00Cu, 0x1CE014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE014u;
label_1ce014:
    // 0x1ce014: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1ce014u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce018: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ce018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce01c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1ce01cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ce020: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CE020u;
    SET_GPR_U32(ctx, 31, 0x1CE028u);
    ctx->pc = 0x1CE024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE020u;
    // 0x1ce024: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CE020u, 0x1CE028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE028u;
label_1ce028:
    // 0x1ce028: 0x24450040  addiu       $a1, $v0, 0x40
    ctx->pc = 0x1ce028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1ce02c: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x1CE02Cu;
    SET_GPR_U32(ctx, 31, 0x1CE034u);
    ctx->pc = 0x1CE030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE02Cu;
    // 0x1ce030: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x1CE02Cu, 0x1CE034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE034u;
label_1ce034:
    // 0x1ce034: 0xc7ac00b0  lwc1        $f12, 0xB0($sp)
    ctx->pc = 0x1ce034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ce038: 0xc7ad00b4  lwc1        $f13, 0xB4($sp)
    ctx->pc = 0x1ce038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ce03c: 0xc7ae00b8  lwc1        $f14, 0xB8($sp)
    ctx->pc = 0x1ce03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1ce040: 0xc7af00bc  lwc1        $f15, 0xBC($sp)
    ctx->pc = 0x1ce040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1ce044: 0xc062860  jal         func_18A180
    ctx->pc = 0x1CE044u;
    SET_GPR_U32(ctx, 31, 0x1CE04Cu);
    ctx->pc = 0x1CE048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE044u;
    // 0x1ce048: 0x8ea40060  lw          $a0, 0x60($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A180u, 0x1CE044u, 0x1CE04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE04Cu;
label_1ce04c:
    // 0x1ce04c: 0x29d1021  addu        $v0, $s4, $sp
    ctx->pc = 0x1ce04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
    // 0x1ce050: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ce050u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1ce054: 0xc4540090  lwc1        $f20, 0x90($v0)
    ctx->pc = 0x1ce054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ce058: 0x8ea40060  lw          $a0, 0x60($s5)
    ctx->pc = 0x1ce058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x1ce05c: 0xc42cfa58  lwc1        $f12, -0x5A8($at)
    ctx->pc = 0x1ce05cu;
    { uint32_t bits = FAST_READ32(0x36FA58u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ce060: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1ce060u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1ce064: 0xc06282c  jal         func_18A0B0
    ctx->pc = 0x1CE064u;
    SET_GPR_U32(ctx, 31, 0x1CE06Cu);
    ctx->pc = 0x1CE068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE064u;
    // 0x1ce068: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0B0u, 0x1CE064u, 0x1CE06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE06Cu;
label_1ce06c:
    // 0x1ce06c: 0x8ea40060  lw          $a0, 0x60($s5)
    ctx->pc = 0x1ce06cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x1ce070: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1ce070u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1ce074: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1ce074u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce078: 0xc0627bc  jal         func_189EF0
    ctx->pc = 0x1CE078u;
    SET_GPR_U32(ctx, 31, 0x1CE080u);
    ctx->pc = 0x1CE07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE078u;
    // 0x1ce07c: 0x24a52eb8  addiu       $a1, $a1, 0x2EB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EF0u, 0x1CE078u, 0x1CE080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE080u;
label_1ce080:
    // 0x1ce080: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ce080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1ce084: 0x8ea40060  lw          $a0, 0x60($s5)
    ctx->pc = 0x1ce084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x1ce088: 0xc42cfa68  lwc1        $f12, -0x598($at)
    ctx->pc = 0x1ce088u;
    { uint32_t bits = FAST_READ32(0x36FA68u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ce08c: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1ce08cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1ce090: 0xc06282c  jal         func_18A0B0
    ctx->pc = 0x1CE090u;
    SET_GPR_U32(ctx, 31, 0x1CE098u);
    ctx->pc = 0x1CE094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE090u;
    // 0x1ce094: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0B0u, 0x1CE090u, 0x1CE098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE098u;
label_1ce098:
    // 0x1ce098: 0x8ea40060  lw          $a0, 0x60($s5)
    ctx->pc = 0x1ce098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x1ce09c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1ce09cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1ce0a0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1ce0a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce0a4: 0xc0627bc  jal         func_189EF0
    ctx->pc = 0x1CE0A4u;
    SET_GPR_U32(ctx, 31, 0x1CE0ACu);
    ctx->pc = 0x1CE0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE0A4u;
    // 0x1ce0a8: 0x24a52eb8  addiu       $a1, $a1, 0x2EB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EF0u, 0x1CE0A4u, 0x1CE0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE0ACu;
label_1ce0ac:
    // 0x1ce0ac: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ce0acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1ce0b0: 0x8ea40060  lw          $a0, 0x60($s5)
    ctx->pc = 0x1ce0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x1ce0b4: 0xc42cfa78  lwc1        $f12, -0x588($at)
    ctx->pc = 0x1ce0b4u;
    { uint32_t bits = FAST_READ32(0x36FA78u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ce0b8: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1ce0b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1ce0bc: 0xc06282c  jal         func_18A0B0
    ctx->pc = 0x1CE0BCu;
    SET_GPR_U32(ctx, 31, 0x1CE0C4u);
    ctx->pc = 0x1CE0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE0BCu;
    // 0x1ce0c0: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0B0u, 0x1CE0BCu, 0x1CE0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE0C4u;
label_1ce0c4:
    // 0x1ce0c4: 0x8ea40060  lw          $a0, 0x60($s5)
    ctx->pc = 0x1ce0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x1ce0c8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1ce0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1ce0cc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1ce0ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce0d0: 0xc0627bc  jal         func_189EF0
    ctx->pc = 0x1CE0D0u;
    SET_GPR_U32(ctx, 31, 0x1CE0D8u);
    ctx->pc = 0x1CE0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE0D0u;
    // 0x1ce0d4: 0x24a52eb8  addiu       $a1, $a1, 0x2EB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EF0u, 0x1CE0D0u, 0x1CE0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE0D8u;
label_1ce0d8:
    // 0x1ce0d8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ce0d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1ce0dc: 0x216102a  slt         $v0, $s0, $s6
    ctx->pc = 0x1ce0dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x1ce0e0: 0x1440ffc1  bnez        $v0, . + 4 + (-0x3F << 2)
    ctx->pc = 0x1CE0E0u;
    {
        const bool branch_taken_0x1ce0e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CE0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE0E0u;
        // 0x1ce0e4: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce0e0) {
            ctx->pc = 0x1CDFE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdfe8;
        }
    }
    ctx->pc = 0x1CE0E8u;
label_1ce0e8:
    // 0x1ce0e8: 0x92a3006c  lbu         $v1, 0x6C($s5)
    ctx->pc = 0x1ce0e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 108)));
    // 0x1ce0ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ce0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce0f0: 0x1462009d  bne         $v1, $v0, . + 4 + (0x9D << 2)
    ctx->pc = 0x1CE0F0u;
    {
        const bool branch_taken_0x1ce0f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CE0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE0F0u;
        // 0x1ce0f4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce0f0) {
            ctx->pc = 0x1CE368u;
            goto label_1ce368;
        }
    }
    ctx->pc = 0x1CE0F8u;
    // 0x1ce0f8: 0x8ea40064  lw          $a0, 0x64($s5)
    ctx->pc = 0x1ce0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 100)));
    // 0x1ce0fc: 0x3c100022  lui         $s0, 0x22
    ctx->pc = 0x1ce0fcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)34 << 16));
    // 0x1ce100: 0xc0743f4  jal         func_1D0FD0
    ctx->pc = 0x1CE100u;
    SET_GPR_U32(ctx, 31, 0x1CE108u);
    ctx->pc = 0x1CE104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE100u;
    // 0x1ce104: 0x26102ec0  addiu       $s0, $s0, 0x2EC0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 11968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0FD0u, 0x1CE100u, 0x1CE108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE108u;
label_1ce108:
    // 0x1ce108: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ce108u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce10c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1ce10cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1ce110: 0x2484faa0  addiu       $a0, $a0, -0x560
    ctx->pc = 0x1ce110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965920));
    // 0x1ce114: 0xc0806b0  jal         func_201AC0
    ctx->pc = 0x1CE114u;
    SET_GPR_U32(ctx, 31, 0x1CE11Cu);
    ctx->pc = 0x1CE118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE114u;
    // 0x1ce118: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201AC0u, 0x1CE114u, 0x1CE11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE11Cu;
label_1ce11c:
    // 0x1ce11c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1ce11cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1ce120: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ce120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce124: 0xc080702  jal         func_201C08
    ctx->pc = 0x1CE124u;
    SET_GPR_U32(ctx, 31, 0x1CE12Cu);
    ctx->pc = 0x1CE128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE124u;
    // 0x1ce128: 0x2484faa0  addiu       $a0, $a0, -0x560 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x1CE124u, 0x1CE12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE12Cu;
label_1ce12c:
    // 0x1ce12c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ce12cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1ce130: 0x8022fac8  lb          $v0, -0x538($at)
    ctx->pc = 0x1ce130u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36FAC8u));
    // 0x1ce134: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CE134u;
    {
        const bool branch_taken_0x1ce134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ce134) {
            ctx->pc = 0x1CE154u;
            goto label_1ce154;
        }
    }
    ctx->pc = 0x1CE13Cu;
    // 0x1ce13c: 0x24030032  addiu       $v1, $zero, 0x32
    ctx->pc = 0x1ce13cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1ce140: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ce140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1ce144: 0xac23fac0  sw          $v1, -0x540($at)
    ctx->pc = 0x1ce144u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36FAC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36FAC0u, _value); } while (0);
    // 0x1ce148: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ce148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce14c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ce14cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1ce150: 0xa022fac8  sb          $v0, -0x538($at)
    ctx->pc = 0x1ce150u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36FAC8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36FAC8u, _value); } while (0);
label_1ce154:
    // 0x1ce154: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ce154u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1ce158: 0x8022fad8  lb          $v0, -0x528($at)
    ctx->pc = 0x1ce158u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36FAD8u));
    // 0x1ce15c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CE15Cu;
    {
        const bool branch_taken_0x1ce15c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ce15c) {
            ctx->pc = 0x1CE17Cu;
            goto label_1ce17c;
        }
    }
    ctx->pc = 0x1CE164u;
    // 0x1ce164: 0x240300dc  addiu       $v1, $zero, 0xDC
    ctx->pc = 0x1ce164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
    // 0x1ce168: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ce168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1ce16c: 0xac23fad0  sw          $v1, -0x530($at)
    ctx->pc = 0x1ce16cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36FAD0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36FAD0u, _value); } while (0);
    // 0x1ce170: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ce170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce174: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ce174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1ce178: 0xa022fad8  sb          $v0, -0x528($at)
    ctx->pc = 0x1ce178u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36FAD8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36FAD8u, _value); } while (0);
label_1ce17c:
    // 0x1ce17c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ce17cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1ce180: 0x8022fae8  lb          $v0, -0x518($at)
    ctx->pc = 0x1ce180u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36FAE8u));
    // 0x1ce184: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CE184u;
    {
        const bool branch_taken_0x1ce184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ce184) {
            ctx->pc = 0x1CE1A4u;
            goto label_1ce1a4;
        }
    }
    ctx->pc = 0x1CE18Cu;
    // 0x1ce18c: 0x24030032  addiu       $v1, $zero, 0x32
    ctx->pc = 0x1ce18cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1ce190: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ce190u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1ce194: 0xac23fae0  sw          $v1, -0x520($at)
    ctx->pc = 0x1ce194u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36FAE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36FAE0u, _value); } while (0);
    // 0x1ce198: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ce198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce19c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ce19cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1ce1a0: 0xa022fae8  sb          $v0, -0x518($at)
    ctx->pc = 0x1ce1a0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36FAE8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36FAE8u, _value); } while (0);
label_1ce1a4:
    // 0x1ce1a4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ce1a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1ce1a8: 0x8022faf8  lb          $v0, -0x508($at)
    ctx->pc = 0x1ce1a8u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36FAF8u));
    // 0x1ce1ac: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CE1ACu;
    {
        const bool branch_taken_0x1ce1ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ce1ac) {
            ctx->pc = 0x1CE1CCu;
            goto label_1ce1cc;
        }
    }
    ctx->pc = 0x1CE1B4u;
    // 0x1ce1b4: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x1ce1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
    // 0x1ce1b8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ce1b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1ce1bc: 0xac23faf0  sw          $v1, -0x510($at)
    ctx->pc = 0x1ce1bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36FAF0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36FAF0u, _value); } while (0);
    // 0x1ce1c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ce1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce1c4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ce1c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1ce1c8: 0xa022faf8  sb          $v0, -0x508($at)
    ctx->pc = 0x1ce1c8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36FAF8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36FAF8u, _value); } while (0);
label_1ce1cc:
    // 0x1ce1cc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ce1ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1ce1d0: 0x8022fb08  lb          $v0, -0x4F8($at)
    ctx->pc = 0x1ce1d0u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36FB08u));
    // 0x1ce1d4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CE1D4u;
    {
        const bool branch_taken_0x1ce1d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ce1d4) {
            ctx->pc = 0x1CE1F4u;
            goto label_1ce1f4;
        }
    }
    ctx->pc = 0x1CE1DCu;
    // 0x1ce1dc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1ce1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1ce1e0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ce1e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1ce1e4: 0xac23fb00  sw          $v1, -0x500($at)
    ctx->pc = 0x1ce1e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36FB00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36FB00u, _value); } while (0);
    // 0x1ce1e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ce1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce1ec: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ce1ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1ce1f0: 0xa022fb08  sb          $v0, -0x4F8($at)
    ctx->pc = 0x1ce1f0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36FB08u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36FB08u, _value); } while (0);
label_1ce1f4:
    // 0x1ce1f4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ce1f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1ce1f8: 0x8022fb18  lb          $v0, -0x4E8($at)
    ctx->pc = 0x1ce1f8u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36FB18u));
    // 0x1ce1fc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CE1FCu;
    {
        const bool branch_taken_0x1ce1fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ce1fc) {
            ctx->pc = 0x1CE21Cu;
            goto label_1ce21c;
        }
    }
    ctx->pc = 0x1CE204u;
    // 0x1ce204: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1ce204u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1ce208: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ce208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1ce20c: 0xac23fb10  sw          $v1, -0x4F0($at)
    ctx->pc = 0x1ce20cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36FB10u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36FB10u, _value); } while (0);
    // 0x1ce210: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ce210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce214: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ce214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1ce218: 0xa022fb18  sb          $v0, -0x4E8($at)
    ctx->pc = 0x1ce218u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36FB18u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36FB18u, _value); } while (0);
label_1ce21c:
    // 0x1ce21c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ce21cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1ce220: 0x8022fb28  lb          $v0, -0x4D8($at)
    ctx->pc = 0x1ce220u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36FB28u));
    // 0x1ce224: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CE224u;
    {
        const bool branch_taken_0x1ce224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ce224) {
            ctx->pc = 0x1CE244u;
            goto label_1ce244;
        }
    }
    ctx->pc = 0x1CE22Cu;
    // 0x1ce22c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1ce22cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1ce230: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ce230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1ce234: 0xac23fb20  sw          $v1, -0x4E0($at)
    ctx->pc = 0x1ce234u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36FB20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36FB20u, _value); } while (0);
    // 0x1ce238: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ce238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce23c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ce23cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1ce240: 0xa022fb28  sb          $v0, -0x4D8($at)
    ctx->pc = 0x1ce240u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36FB28u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36FB28u, _value); } while (0);
label_1ce244:
    // 0x1ce244: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ce244u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1ce248: 0x8022fb38  lb          $v0, -0x4C8($at)
    ctx->pc = 0x1ce248u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36FB38u));
    // 0x1ce24c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CE24Cu;
    {
        const bool branch_taken_0x1ce24c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CE250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE24Cu;
        // 0x1ce250: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce24c) {
            ctx->pc = 0x1CE26Cu;
            goto label_1ce26c;
        }
    }
    ctx->pc = 0x1CE254u;
    // 0x1ce254: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1ce254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1ce258: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ce258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1ce25c: 0xac23fb30  sw          $v1, -0x4D0($at)
    ctx->pc = 0x1ce25cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36FB30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36FB30u, _value); } while (0);
    // 0x1ce260: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ce260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce264: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ce264u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1ce268: 0xa022fb38  sb          $v0, -0x4C8($at)
    ctx->pc = 0x1ce268u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36FB38u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36FB38u, _value); } while (0);
label_1ce26c:
    // 0x1ce26c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1ce26cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ce270: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CE270u;
    SET_GPR_U32(ctx, 31, 0x1CE278u);
    ctx->pc = 0x1CE274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE270u;
    // 0x1ce274: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CE270u, 0x1CE278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE278u;
label_1ce278:
    // 0x1ce278: 0x24450040  addiu       $a1, $v0, 0x40
    ctx->pc = 0x1ce278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1ce27c: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x1CE27Cu;
    SET_GPR_U32(ctx, 31, 0x1CE284u);
    ctx->pc = 0x1CE280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE27Cu;
    // 0x1ce280: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x1CE27Cu, 0x1CE284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE284u;
label_1ce284:
    // 0x1ce284: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ce284u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1ce288: 0xc42cfb00  lwc1        $f12, -0x500($at)
    ctx->pc = 0x1ce288u;
    { uint32_t bits = FAST_READ32(0x36FB00u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ce28c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ce28cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1ce290: 0xc42dfb10  lwc1        $f13, -0x4F0($at)
    ctx->pc = 0x1ce290u;
    { uint32_t bits = FAST_READ32(0x36FB10u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ce294: 0xc06285c  jal         func_18A170
    ctx->pc = 0x1CE294u;
    SET_GPR_U32(ctx, 31, 0x1CE29Cu);
    ctx->pc = 0x1CE298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE294u;
    // 0x1ce298: 0x8ea40060  lw          $a0, 0x60($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A170u, 0x1CE294u, 0x1CE29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE29Cu;
label_1ce29c:
    // 0x1ce29c: 0x27b300c4  addiu       $s3, $sp, 0xC4
    ctx->pc = 0x1ce29cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    // 0x1ce2a0: 0x27b200c8  addiu       $s2, $sp, 0xC8
    ctx->pc = 0x1ce2a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x1ce2a4: 0x27b100cc  addiu       $s1, $sp, 0xCC
    ctx->pc = 0x1ce2a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    // 0x1ce2a8: 0xc7ac00c0  lwc1        $f12, 0xC0($sp)
    ctx->pc = 0x1ce2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ce2ac: 0xc66d0000  lwc1        $f13, 0x0($s3)
    ctx->pc = 0x1ce2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ce2b0: 0xc64e0000  lwc1        $f14, 0x0($s2)
    ctx->pc = 0x1ce2b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1ce2b4: 0xc62f0000  lwc1        $f15, 0x0($s1)
    ctx->pc = 0x1ce2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1ce2b8: 0xc062860  jal         func_18A180
    ctx->pc = 0x1CE2B8u;
    SET_GPR_U32(ctx, 31, 0x1CE2C0u);
    ctx->pc = 0x1CE2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE2B8u;
    // 0x1ce2bc: 0x8ea40060  lw          $a0, 0x60($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A180u, 0x1CE2B8u, 0x1CE2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE2C0u;
label_1ce2c0:
    // 0x1ce2c0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ce2c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1ce2c4: 0x8ea40060  lw          $a0, 0x60($s5)
    ctx->pc = 0x1ce2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x1ce2c8: 0xc421fac0  lwc1        $f1, -0x540($at)
    ctx->pc = 0x1ce2c8u;
    { uint32_t bits = FAST_READ32(0x36FAC0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ce2cc: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1ce2ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1ce2d0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ce2d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1ce2d4: 0xc420fad0  lwc1        $f0, -0x530($at)
    ctx->pc = 0x1ce2d4u;
    { uint32_t bits = FAST_READ32(0x36FAD0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ce2d8: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1ce2d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1ce2dc: 0xc06282c  jal         func_18A0B0
    ctx->pc = 0x1CE2DCu;
    SET_GPR_U32(ctx, 31, 0x1CE2E4u);
    ctx->pc = 0x1CE2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE2DCu;
    // 0x1ce2e0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0B0u, 0x1CE2DCu, 0x1CE2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE2E4u;
label_1ce2e4:
    // 0x1ce2e4: 0x8ea40060  lw          $a0, 0x60($s5)
    ctx->pc = 0x1ce2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x1ce2e8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1ce2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1ce2ec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1ce2ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce2f0: 0xc0627bc  jal         func_189EF0
    ctx->pc = 0x1CE2F0u;
    SET_GPR_U32(ctx, 31, 0x1CE2F8u);
    ctx->pc = 0x1CE2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE2F0u;
    // 0x1ce2f4: 0x24a52eb8  addiu       $a1, $a1, 0x2EB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EF0u, 0x1CE2F0u, 0x1CE2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE2F8u;
label_1ce2f8:
    // 0x1ce2f8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ce2f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1ce2fc: 0xc42cfb20  lwc1        $f12, -0x4E0($at)
    ctx->pc = 0x1ce2fcu;
    { uint32_t bits = FAST_READ32(0x36FB20u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ce300: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ce300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1ce304: 0xc42dfb30  lwc1        $f13, -0x4D0($at)
    ctx->pc = 0x1ce304u;
    { uint32_t bits = FAST_READ32(0x36FB30u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ce308: 0xc06285c  jal         func_18A170
    ctx->pc = 0x1CE308u;
    SET_GPR_U32(ctx, 31, 0x1CE310u);
    ctx->pc = 0x1CE30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE308u;
    // 0x1ce30c: 0x8ea40060  lw          $a0, 0x60($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A170u, 0x1CE308u, 0x1CE310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE310u;
label_1ce310:
    // 0x1ce310: 0x8ea40060  lw          $a0, 0x60($s5)
    ctx->pc = 0x1ce310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x1ce314: 0xc64e0000  lwc1        $f14, 0x0($s2)
    ctx->pc = 0x1ce314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1ce318: 0xc62f0000  lwc1        $f15, 0x0($s1)
    ctx->pc = 0x1ce318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1ce31c: 0xc7ac00c0  lwc1        $f12, 0xC0($sp)
    ctx->pc = 0x1ce31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ce320: 0xc062860  jal         func_18A180
    ctx->pc = 0x1CE320u;
    SET_GPR_U32(ctx, 31, 0x1CE328u);
    ctx->pc = 0x1CE324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE320u;
    // 0x1ce324: 0xc66d0000  lwc1        $f13, 0x0($s3) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A180u, 0x1CE320u, 0x1CE328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE328u;
label_1ce328:
    // 0x1ce328: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ce328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1ce32c: 0x8ea40060  lw          $a0, 0x60($s5)
    ctx->pc = 0x1ce32cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x1ce330: 0xc421fae0  lwc1        $f1, -0x520($at)
    ctx->pc = 0x1ce330u;
    { uint32_t bits = FAST_READ32(0x36FAE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ce334: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1ce334u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1ce338: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ce338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1ce33c: 0xc420faf0  lwc1        $f0, -0x510($at)
    ctx->pc = 0x1ce33cu;
    { uint32_t bits = FAST_READ32(0x36FAF0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ce340: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1ce340u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1ce344: 0xc06282c  jal         func_18A0B0
    ctx->pc = 0x1CE344u;
    SET_GPR_U32(ctx, 31, 0x1CE34Cu);
    ctx->pc = 0x1CE348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE344u;
    // 0x1ce348: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0B0u, 0x1CE344u, 0x1CE34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE34Cu;
label_1ce34c:
    // 0x1ce34c: 0x8ea40060  lw          $a0, 0x60($s5)
    ctx->pc = 0x1ce34cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x1ce350: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1ce350u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1ce354: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x1ce354u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x1ce358: 0x24a52eb8  addiu       $a1, $a1, 0x2EB8
    ctx->pc = 0x1ce358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11960));
    // 0x1ce35c: 0xc0627bc  jal         func_189EF0
    ctx->pc = 0x1CE35Cu;
    SET_GPR_U32(ctx, 31, 0x1CE364u);
    ctx->pc = 0x1CE360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE35Cu;
    // 0x1ce360: 0x24c6faa0  addiu       $a2, $a2, -0x560 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EF0u, 0x1CE35Cu, 0x1CE364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE364u;
label_1ce364:
    // 0x1ce364: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ce364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1ce368:
    // 0x1ce368: 0xc06dc70  jal         func_1B71C0
    ctx->pc = 0x1CE368u;
    SET_GPR_U32(ctx, 31, 0x1CE370u);
    ctx->pc = 0x1B71C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B71C0u, 0x1CE368u, 0x1CE370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE370u;
label_1ce370:
    // 0x1ce370: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ce370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce374: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1ce374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1ce378: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ce378u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce37c: 0xc06e044  jal         func_1B8110
    ctx->pc = 0x1CE37Cu;
    SET_GPR_U32(ctx, 31, 0x1CE384u);
    ctx->pc = 0x1CE380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE37Cu;
    // 0x1ce380: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8110u, 0x1CE37Cu, 0x1CE384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE384u;
label_1ce384:
    // 0x1ce384: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1CE384u;
    {
        const bool branch_taken_0x1ce384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE384u;
        // 0x1ce388: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce384) {
            ctx->pc = 0x1CE3A4u;
            goto label_1ce3a4;
        }
    }
    ctx->pc = 0x1CE38Cu;
label_1ce38c:
    // 0x1ce38c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1ce38cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1ce390: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CE390u;
    SET_GPR_U32(ctx, 31, 0x1CE398u);
    ctx->pc = 0x1CE394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE390u;
    // 0x1ce394: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CE390u, 0x1CE398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE398u;
label_1ce398:
    // 0x1ce398: 0xa0520008  sb          $s2, 0x8($v0)
    ctx->pc = 0x1ce398u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 18));
    // 0x1ce39c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1ce39cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1ce3a0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1ce3a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1ce3a4:
    // 0x1ce3a4: 0x0  nop
    ctx->pc = 0x1ce3a4u;
    // NOP
    // 0x1ce3a8: 0x8ea40064  lw          $a0, 0x64($s5)
    ctx->pc = 0x1ce3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 100)));
    // 0x1ce3ac: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1ce3acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1ce3b0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ce3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ce3b4: 0x24632cd0  addiu       $v1, $v1, 0x2CD0
    ctx->pc = 0x1ce3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11472));
    // 0x1ce3b8: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1ce3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1ce3bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ce3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ce3c0: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1ce3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1ce3c4: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1ce3c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ce3c8: 0x14c2fff0  bne         $a2, $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1CE3C8u;
    {
        const bool branch_taken_0x1ce3c8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CE3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE3C8u;
        // 0x1ce3cc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce3c8) {
            ctx->pc = 0x1CE38Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ce38c;
        }
    }
    ctx->pc = 0x1CE3D0u;
    // 0x1ce3d0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ce3d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce3d4: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1CE3D4u;
    SET_GPR_U32(ctx, 31, 0x1CE3DCu);
    ctx->pc = 0x1CE3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE3D4u;
    // 0x1ce3d8: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1CE3D4u, 0x1CE3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE3DCu;
label_1ce3dc:
    // 0x1ce3dc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CE3DCu;
    {
        const bool branch_taken_0x1ce3dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE3DCu;
        // 0x1ce3e0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce3dc) {
            ctx->pc = 0x1CE404u;
            goto label_1ce404;
        }
    }
    ctx->pc = 0x1CE3E4u;
    // 0x1ce3e4: 0x92a2006c  lbu         $v0, 0x6C($s5)
    ctx->pc = 0x1ce3e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 108)));
    // 0x1ce3e8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1ce3e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ce3ec: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1ce3ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1ce3f0: 0xa2a2006c  sb          $v0, 0x6C($s5)
    ctx->pc = 0x1ce3f0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 108), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ce3f4: 0x92a2006c  lbu         $v0, 0x6C($s5)
    ctx->pc = 0x1ce3f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 108)));
    // 0x1ce3f8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1ce3f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ce3fc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1ce3fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1ce400: 0xa2a20040  sb          $v0, 0x40($s5)
    ctx->pc = 0x1ce400u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 64), (uint8_t)GPR_U32(ctx, 2));
label_1ce404:
    // 0x1ce404: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1CE404u;
    SET_GPR_U32(ctx, 31, 0x1CE40Cu);
    ctx->pc = 0x1CE408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE404u;
    // 0x1ce408: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1CE404u, 0x1CE40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE40Cu;
label_1ce40c:
    // 0x1ce40c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CE40Cu;
    {
        const bool branch_taken_0x1ce40c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE40Cu;
        // 0x1ce410: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce40c) {
            ctx->pc = 0x1CE424u;
            goto label_1ce424;
        }
    }
    ctx->pc = 0x1CE414u;
    // 0x1ce414: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ce414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce418: 0xc073944  jal         func_1CE510
    ctx->pc = 0x1CE418u;
    SET_GPR_U32(ctx, 31, 0x1CE420u);
    ctx->pc = 0x1CE41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE418u;
    // 0x1ce41c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE510u, 0x1CE418u, 0x1CE420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE420u;
label_1ce420:
    // 0x1ce420: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ce420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1ce424:
    // 0x1ce424: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1CE424u;
    SET_GPR_U32(ctx, 31, 0x1CE42Cu);
    ctx->pc = 0x1CE428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE424u;
    // 0x1ce428: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1CE424u, 0x1CE42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE42Cu;
label_1ce42c:
    // 0x1ce42c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CE42Cu;
    {
        const bool branch_taken_0x1ce42c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE42Cu;
        // 0x1ce430: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce42c) {
            ctx->pc = 0x1CE43Cu;
            goto label_1ce43c;
        }
    }
    ctx->pc = 0x1CE434u;
    // 0x1ce434: 0xc073944  jal         func_1CE510
    ctx->pc = 0x1CE434u;
    SET_GPR_U32(ctx, 31, 0x1CE43Cu);
    ctx->pc = 0x1CE438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE434u;
    // 0x1ce438: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE510u, 0x1CE434u, 0x1CE43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE43Cu;
label_1ce43c:
    // 0x1ce43c: 0x8ea30064  lw          $v1, 0x64($s5)
    ctx->pc = 0x1ce43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 100)));
    // 0x1ce440: 0x8ea20068  lw          $v0, 0x68($s5)
    ctx->pc = 0x1ce440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 104)));
    // 0x1ce444: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CE444u;
    {
        const bool branch_taken_0x1ce444 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CE448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE444u;
        // 0x1ce448: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce444) {
            ctx->pc = 0x1CE454u;
            goto label_1ce454;
        }
    }
    ctx->pc = 0x1CE44Cu;
    // 0x1ce44c: 0xc07395c  jal         func_1CE570
    ctx->pc = 0x1CE44Cu;
    SET_GPR_U32(ctx, 31, 0x1CE454u);
    ctx->pc = 0x1CE570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE570u, 0x1CE44Cu, 0x1CE454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE454u;
label_1ce454:
    // 0x1ce454: 0x8ea20064  lw          $v0, 0x64($s5)
    ctx->pc = 0x1ce454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 100)));
    // 0x1ce458: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ce458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce45c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1ce45cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1ce460: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x1ce460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1ce464: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ce464u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce468: 0x2408000e  addiu       $t0, $zero, 0xE
    ctx->pc = 0x1ce468u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1ce46c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1ce46cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce470: 0x26aa0064  addiu       $t2, $s5, 0x64
    ctx->pc = 0x1ce470u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 21), 100));
    // 0x1ce474: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1ce474u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce478: 0xc06dd54  jal         func_1B7550
    ctx->pc = 0x1CE478u;
    SET_GPR_U32(ctx, 31, 0x1CE480u);
    ctx->pc = 0x1CE47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE478u;
    // 0x1ce47c: 0xaea20068  sw          $v0, 0x68($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 104), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7550u, 0x1CE478u, 0x1CE480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE480u;
label_1ce480:
    // 0x1ce480: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ce480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce484: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1ce484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1ce488: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x1ce488u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1ce48c: 0xc06dfdc  jal         func_1B7F70
    ctx->pc = 0x1CE48Cu;
    SET_GPR_U32(ctx, 31, 0x1CE494u);
    ctx->pc = 0x1CE490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE48Cu;
    // 0x1ce490: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7F70u, 0x1CE48Cu, 0x1CE494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE494u;
label_1ce494:
    // 0x1ce494: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CE494u;
    {
        const bool branch_taken_0x1ce494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE494u;
        // 0x1ce498: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce494) {
            ctx->pc = 0x1CE4B8u;
            goto label_1ce4b8;
        }
    }
    ctx->pc = 0x1CE49Cu;
    // 0x1ce49c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ce49cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce4a0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1ce4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ce4a4: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CE4A4u;
    SET_GPR_U32(ctx, 31, 0x1CE4ACu);
    ctx->pc = 0x1CE4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE4A4u;
    // 0x1ce4a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CE4A4u, 0x1CE4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE4ACu;
label_1ce4ac:
    // 0x1ce4ac: 0xc06e470  jal         func_1B91C0
    ctx->pc = 0x1CE4ACu;
    SET_GPR_U32(ctx, 31, 0x1CE4B4u);
    ctx->pc = 0x1CE4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE4ACu;
    // 0x1ce4b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91C0u, 0x1CE4ACu, 0x1CE4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE4B4u;
label_1ce4b4:
    // 0x1ce4b4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ce4b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1ce4b8:
    // 0x1ce4b8: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1ce4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1ce4bc: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x1ce4bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1ce4c0: 0xc06dfdc  jal         func_1B7F70
    ctx->pc = 0x1CE4C0u;
    SET_GPR_U32(ctx, 31, 0x1CE4C8u);
    ctx->pc = 0x1CE4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE4C0u;
    // 0x1ce4c4: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7F70u, 0x1CE4C0u, 0x1CE4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE4C8u;
label_1ce4c8:
    // 0x1ce4c8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CE4C8u;
    {
        const bool branch_taken_0x1ce4c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE4C8u;
        // 0x1ce4cc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce4c8) {
            ctx->pc = 0x1CE4E4u;
            goto label_1ce4e4;
        }
    }
    ctx->pc = 0x1CE4D0u;
    // 0x1ce4d0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1ce4d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ce4d4: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CE4D4u;
    SET_GPR_U32(ctx, 31, 0x1CE4DCu);
    ctx->pc = 0x1CE4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE4D4u;
    // 0x1ce4d8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CE4D4u, 0x1CE4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE4DCu;
label_1ce4dc:
    // 0x1ce4dc: 0xc06e470  jal         func_1B91C0
    ctx->pc = 0x1CE4DCu;
    SET_GPR_U32(ctx, 31, 0x1CE4E4u);
    ctx->pc = 0x1CE4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE4DCu;
    // 0x1ce4e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91C0u, 0x1CE4DCu, 0x1CE4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE4E4u;
label_1ce4e4:
    // 0x1ce4e4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1ce4e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ce4e8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1ce4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ce4ec: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1ce4ecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ce4f0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1ce4f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ce4f4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1ce4f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ce4f8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1ce4f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ce4fc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1ce4fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ce500: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1ce500u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ce504: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ce504u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ce508: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE508u;
        // 0x1ce50c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE510u;
}
