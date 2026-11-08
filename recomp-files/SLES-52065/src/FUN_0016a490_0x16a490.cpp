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

// Function: FUN_0016a490
// Address: 0x16a490 - 0x16a97c
void FUN_0016a490_0x16a490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016a490_0x16a490");
#endif

    switch (ctx->pc) {
        case 0x16a568u: goto label_16a568;
        case 0x16a578u: goto label_16a578;
        case 0x16a5ecu: goto label_16a5ec;
        case 0x16a76cu: goto label_16a76c;
        case 0x16a7ecu: goto label_16a7ec;
        case 0x16a86cu: goto label_16a86c;
        case 0x16a8ecu: goto label_16a8ec;
        case 0x16a934u: goto label_16a934;
        default: break;
    }

    ctx->pc = 0x16a490u;

    // 0x16a490: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16a490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16a494: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x16a494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16a498: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16a498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16a49c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16a49cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16a4a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16a4a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a4a4: 0x90a3004b  lbu         $v1, 0x4B($a1)
    ctx->pc = 0x16a4a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 75)));
    // 0x16a4a8: 0x90a4004a  lbu         $a0, 0x4A($a1)
    ctx->pc = 0x16a4a8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 74)));
    // 0x16a4ac: 0x80a2006a  lb          $v0, 0x6A($a1)
    ctx->pc = 0x16a4acu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 106)));
    // 0x16a4b0: 0x2463ff80  addiu       $v1, $v1, -0x80
    ctx->pc = 0x16a4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967168));
    // 0x16a4b4: 0x2484ff80  addiu       $a0, $a0, -0x80
    ctx->pc = 0x16a4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967168));
    // 0x16a4b8: 0x31823  negu        $v1, $v1
    ctx->pc = 0x16a4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x16a4bc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x16a4bcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16a4c0: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x16a4c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16a4c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x16a4c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x16a4c8: 0x4600001a  mula.s      $f0, $f0
    ctx->pc = 0x16a4c8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x16a4cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16a4ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16a4d0: 0x0  nop
    ctx->pc = 0x16a4d0u;
    // NOP
    // 0x16a4d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x16a4d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x16a4d8: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x16a4d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x16a4dc: 0x0  nop
    ctx->pc = 0x16a4dcu;
    // NOP
    // 0x16a4e0: 0x0  nop
    ctx->pc = 0x16a4e0u;
    // NOP
    // 0x16a4e4: 0x0  nop
    ctx->pc = 0x16a4e4u;
    // NOP
    // 0x16a4e8: 0x46000084  c1          0x84
    ctx->pc = 0x16a4e8u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x16a4ec: 0x3c024335  lui         $v0, 0x4335
    ctx->pc = 0x16a4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17205 << 16));
    // 0x16a4f0: 0x344304f3  ori         $v1, $v0, 0x4F3
    ctx->pc = 0x16a4f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1267);
    // 0x16a4f4: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x16a4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x16a4f8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16a4f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x16a4fc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x16a4fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16a500: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16a500u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16a504: 0x0  nop
    ctx->pc = 0x16a504u;
    // NOP
    // 0x16a508: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x16a508u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x16a50c: 0x0  nop
    ctx->pc = 0x16a50cu;
    // NOP
    // 0x16a510: 0x0  nop
    ctx->pc = 0x16a510u;
    // NOP
    // 0x16a514: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x16a514u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16a518: 0x0  nop
    ctx->pc = 0x16a518u;
    // NOP
    // 0x16a51c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x16A51Cu;
    {
        const bool branch_taken_0x16a51c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16a51c) {
            ctx->pc = 0x16A528u;
            goto label_16a528;
        }
    }
    ctx->pc = 0x16A524u;
    // 0x16a524: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16a524u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16a528:
    // 0x16a528: 0x4c0003f  bltz        $a2, . + 4 + (0x3F << 2)
    ctx->pc = 0x16A528u;
    {
        const bool branch_taken_0x16a528 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x16A52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A528u;
        // 0x16a52c: 0x61840  sll         $v1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a528) {
            ctx->pc = 0x16A628u;
            goto label_16a628;
        }
    }
    ctx->pc = 0x16A530u;
    // 0x16a530: 0x80a2006a  lb          $v0, 0x6A($a1)
    ctx->pc = 0x16a530u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 106)));
    // 0x16a534: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x16a534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x16a538: 0x90640048  lbu         $a0, 0x48($v1)
    ctx->pc = 0x16a538u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x16a53c: 0x90630049  lbu         $v1, 0x49($v1)
    ctx->pc = 0x16a53cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 73)));
    // 0x16a540: 0x2484ff80  addiu       $a0, $a0, -0x80
    ctx->pc = 0x16a540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967168));
    // 0x16a544: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x16a544u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16a548: 0x0  nop
    ctx->pc = 0x16a548u;
    // NOP
    // 0x16a54c: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x16a54cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x16a550: 0x2463ff80  addiu       $v1, $v1, -0x80
    ctx->pc = 0x16a550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967168));
    // 0x16a554: 0x31823  negu        $v1, $v1
    ctx->pc = 0x16a554u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x16a558: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x16a558u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16a55c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16a55cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16a560: 0xc07ef40  jal         func_1FBD00
    ctx->pc = 0x16A560u;
    SET_GPR_U32(ctx, 31, 0x16A568u);
    ctx->pc = 0x16A564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A560u;
    // 0x16a564: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBD00u, 0x16A560u, 0x16A568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A568u;
label_16a568:
    // 0x16a568: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x16a568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a56c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x16a56cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x16a570: 0xc0548a8  jal         func_1522A0
    ctx->pc = 0x16A570u;
    SET_GPR_U32(ctx, 31, 0x16A578u);
    ctx->pc = 0x16A574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A570u;
    // 0x16a574: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1522A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1522A0u, 0x16A570u, 0x16A578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A578u;
label_16a578:
    // 0x16a578: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x16a578u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16a57c: 0x0  nop
    ctx->pc = 0x16a57cu;
    // NOP
    // 0x16a580: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x16a580u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16a584: 0x0  nop
    ctx->pc = 0x16a584u;
    // NOP
    // 0x16a588: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x16A588u;
    {
        const bool branch_taken_0x16a588 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16A58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A588u;
        // 0x16a58c: 0x3c033fc9  lui         $v1, 0x3FC9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a588) {
            ctx->pc = 0x16A594u;
            goto label_16a594;
        }
    }
    ctx->pc = 0x16A590u;
    // 0x16a590: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x16a590u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_16a594:
    // 0x16a594: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x16a594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x16a598: 0xc6040020  lwc1        $f4, 0x20($s0)
    ctx->pc = 0x16a598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x16a59c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x16a59cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x16a5a0: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x16a5a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x16a5a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16a5a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a5a8: 0xc6050024  lwc1        $f5, 0x24($s0)
    ctx->pc = 0x16a5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x16a5ac: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x16a5acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x16a5b0: 0x44823000  mtc1        $v0, $f6
    ctx->pc = 0x16a5b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x16a5b4: 0x46002107  neg.s       $f4, $f4
    ctx->pc = 0x16a5b4u;
    ctx->f[4] = FPU_NEG_S(ctx->f[4]);
    // 0x16a5b8: 0x46053142  mul.s       $f5, $f6, $f5
    ctx->pc = 0x16a5b8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
    // 0x16a5bc: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x16a5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x16a5c0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16a5c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x16a5c4: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x16a5c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x16a5c8: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x16a5c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x16a5cc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x16a5ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x16a5d0: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x16a5d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a5d4: 0x46020303  div.s       $f12, $f0, $f2
    ctx->pc = 0x16a5d4u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x16a5d8: 0xe6010028  swc1        $f1, 0x28($s0)
    ctx->pc = 0x16a5d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x16a5dc: 0x0  nop
    ctx->pc = 0x16a5dcu;
    // NOP
    // 0x16a5e0: 0x0  nop
    ctx->pc = 0x16a5e0u;
    // NOP
    // 0x16a5e4: 0xc04af5c  jal         func_12BD70
    ctx->pc = 0x16A5E4u;
    SET_GPR_U32(ctx, 31, 0x16A5ECu);
    ctx->pc = 0x12BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BD70u, 0x16A5E4u, 0x16A5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A5ECu;
label_16a5ec:
    // 0x16a5ec: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x16a5ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x16a5f0: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x16a5f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a5f4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x16a5f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16a5f8: 0x0  nop
    ctx->pc = 0x16a5f8u;
    // NOP
    // 0x16a5fc: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x16A5FCu;
    {
        const bool branch_taken_0x16a5fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16a5fc) {
            ctx->pc = 0x16A60Cu;
            goto label_16a60c;
        }
    }
    ctx->pc = 0x16A604u;
    // 0x16a604: 0x100000d9  b           . + 4 + (0xD9 << 2)
    ctx->pc = 0x16A604u;
    {
        const bool branch_taken_0x16a604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A604u;
        // 0x16a608: 0xe6010018  swc1        $f1, 0x18($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a604) {
            ctx->pc = 0x16A96Cu;
            goto label_16a96c;
        }
    }
    ctx->pc = 0x16A60Cu;
label_16a60c:
    // 0x16a60c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x16a60cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x16a610: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x16a610u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16a614: 0x0  nop
    ctx->pc = 0x16a614u;
    // NOP
    // 0x16a618: 0x450000d4  bc1f        . + 4 + (0xD4 << 2)
    ctx->pc = 0x16A618u;
    {
        const bool branch_taken_0x16a618 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16a618) {
            ctx->pc = 0x16A96Cu;
            goto label_16a96c;
        }
    }
    ctx->pc = 0x16A620u;
    // 0x16a620: 0x100000d2  b           . + 4 + (0xD2 << 2)
    ctx->pc = 0x16A620u;
    {
        const bool branch_taken_0x16a620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A620u;
        // 0x16a624: 0xe6010018  swc1        $f1, 0x18($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a620) {
            ctx->pc = 0x16A96Cu;
            goto label_16a96c;
        }
    }
    ctx->pc = 0x16A628u;
label_16a628:
    // 0x16a628: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x16a628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a62c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16a62cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x16a630: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16a630u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16a634: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x16a634u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a638: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x16a638u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x16a63c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x16a63cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x16a640: 0x46000045  abs.s       $f1, $f0
    ctx->pc = 0x16a640u;
    ctx->f[1] = FPU_ABS_S(ctx->f[0]);
    // 0x16a644: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x16a644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x16a648: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16a648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x16a64c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16a64cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16a650: 0x0  nop
    ctx->pc = 0x16a650u;
    // NOP
    // 0x16a654: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16a654u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16a658: 0x0  nop
    ctx->pc = 0x16a658u;
    // NOP
    // 0x16a65c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x16A65Cu;
    {
        const bool branch_taken_0x16a65c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16A660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A65Cu;
        // 0x16a660: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a65c) {
            ctx->pc = 0x16A668u;
            goto label_16a668;
        }
    }
    ctx->pc = 0x16A664u;
    // 0x16a664: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16a664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16a668:
    // 0x16a668: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16a668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16a66c: 0x1044002e  beq         $v0, $a0, . + 4 + (0x2E << 2)
    ctx->pc = 0x16A66Cu;
    {
        const bool branch_taken_0x16a66c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x16a66c) {
            ctx->pc = 0x16A728u;
            goto label_16a728;
        }
    }
    ctx->pc = 0x16A674u;
    // 0x16a674: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x16a674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a678: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x16a678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x16a67c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16a67cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x16a680: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16a680u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16a684: 0x0  nop
    ctx->pc = 0x16a684u;
    // NOP
    // 0x16a688: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x16a688u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x16a68c: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x16a68cu;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x16a690: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16a690u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16a694: 0x0  nop
    ctx->pc = 0x16a694u;
    // NOP
    // 0x16a698: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x16A698u;
    {
        const bool branch_taken_0x16a698 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16a698) {
            ctx->pc = 0x16A6A8u;
            goto label_16a6a8;
        }
    }
    ctx->pc = 0x16A6A0u;
    // 0x16a6a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16A6A0u;
    {
        const bool branch_taken_0x16a6a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A6A0u;
        // 0x16a6a4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a6a0) {
            ctx->pc = 0x16A6B0u;
            goto label_16a6b0;
        }
    }
    ctx->pc = 0x16A6A8u;
label_16a6a8:
    // 0x16a6a8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16a6a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a6ac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16a6acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16a6b0:
    // 0x16a6b0: 0x14860004  bne         $a0, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x16A6B0u;
    {
        const bool branch_taken_0x16a6b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x16A6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A6B0u;
        // 0x16a6b4: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a6b0) {
            ctx->pc = 0x16A6C4u;
            goto label_16a6c4;
        }
    }
    ctx->pc = 0x16A6B8u;
    // 0x16a6b8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x16a6b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x16a6bc: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x16A6BCu;
    {
        const bool branch_taken_0x16a6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A6BCu;
        // 0x16a6c0: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a6bc) {
            ctx->pc = 0x16A728u;
            goto label_16a728;
        }
    }
    ctx->pc = 0x16A6C4u;
label_16a6c4:
    // 0x16a6c4: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x16a6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a6c8: 0x3c02bfc9  lui         $v0, 0xBFC9
    ctx->pc = 0x16a6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49097 << 16));
    // 0x16a6cc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16a6ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x16a6d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16a6d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16a6d4: 0x0  nop
    ctx->pc = 0x16a6d4u;
    // NOP
    // 0x16a6d8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x16a6d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x16a6dc: 0x46000045  abs.s       $f1, $f0
    ctx->pc = 0x16a6dcu;
    ctx->f[1] = FPU_ABS_S(ctx->f[0]);
    // 0x16a6e0: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x16a6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x16a6e4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16a6e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x16a6e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16a6e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16a6ec: 0x0  nop
    ctx->pc = 0x16a6ecu;
    // NOP
    // 0x16a6f0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16a6f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16a6f4: 0x0  nop
    ctx->pc = 0x16a6f4u;
    // NOP
    // 0x16a6f8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x16A6F8u;
    {
        const bool branch_taken_0x16a6f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16a6f8) {
            ctx->pc = 0x16A708u;
            goto label_16a708;
        }
    }
    ctx->pc = 0x16A700u;
    // 0x16a700: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16A700u;
    {
        const bool branch_taken_0x16a700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A700u;
        // 0x16a704: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a700) {
            ctx->pc = 0x16A710u;
            goto label_16a710;
        }
    }
    ctx->pc = 0x16A708u;
label_16a708:
    // 0x16a708: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16a708u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a70c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16a70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16a710:
    // 0x16a710: 0x14c20003  bne         $a2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16A710u;
    {
        const bool branch_taken_0x16a710 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x16a710) {
            ctx->pc = 0x16A720u;
            goto label_16a720;
        }
    }
    ctx->pc = 0x16A718u;
    // 0x16a718: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16A718u;
    {
        const bool branch_taken_0x16a718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A718u;
        // 0x16a71c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a718) {
            ctx->pc = 0x16A728u;
            goto label_16a728;
        }
    }
    ctx->pc = 0x16A720u;
label_16a720:
    // 0x16a720: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x16a720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x16a724: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x16a724u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_16a728:
    // 0x16a728: 0x84a20022  lh          $v0, 0x22($a1)
    ctx->pc = 0x16a728u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 34)));
    // 0x16a72c: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x16a72cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x16a730: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x16A730u;
    {
        const bool branch_taken_0x16a730 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A730u;
        // 0x16a734: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a730) {
            ctx->pc = 0x16A73Cu;
            goto label_16a73c;
        }
    }
    ctx->pc = 0x16A738u;
    // 0x16a738: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16a738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16a73c:
    // 0x16a73c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x16A73Cu;
    {
        const bool branch_taken_0x16a73c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a73c) {
            ctx->pc = 0x16A7A8u;
            goto label_16a7a8;
        }
    }
    ctx->pc = 0x16A744u;
    // 0x16a744: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x16A744u;
    {
        const bool branch_taken_0x16a744 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A744u;
        // 0x16a748: 0x3c0240c0  lui         $v0, 0x40C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a744) {
            ctx->pc = 0x16A7A8u;
            goto label_16a7a8;
        }
    }
    ctx->pc = 0x16A74Cu;
    // 0x16a74c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16a74cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a750: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16a750u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16a754: 0xc6020028  lwc1        $f2, 0x28($s0)
    ctx->pc = 0x16a754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16a758: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x16a758u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x16a75c: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x16a75cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a760: 0x46011301  sub.s       $f12, $f2, $f1
    ctx->pc = 0x16a760u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x16a764: 0xc04af5c  jal         func_12BD70
    ctx->pc = 0x16A764u;
    SET_GPR_U32(ctx, 31, 0x16A76Cu);
    ctx->pc = 0x16A768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A764u;
    // 0x16a768: 0xe6000028  swc1        $f0, 0x28($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BD70u, 0x16A764u, 0x16A76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A76Cu;
label_16a76c:
    // 0x16a76c: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x16a76cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x16a770: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x16a770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a774: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x16a774u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16a778: 0x0  nop
    ctx->pc = 0x16a778u;
    // NOP
    // 0x16a77c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x16A77Cu;
    {
        const bool branch_taken_0x16a77c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16a77c) {
            ctx->pc = 0x16A78Cu;
            goto label_16a78c;
        }
    }
    ctx->pc = 0x16A784u;
    // 0x16a784: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x16A784u;
    {
        const bool branch_taken_0x16a784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A784u;
        // 0x16a788: 0xe6010018  swc1        $f1, 0x18($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a784) {
            ctx->pc = 0x16A96Cu;
            goto label_16a96c;
        }
    }
    ctx->pc = 0x16A78Cu;
label_16a78c:
    // 0x16a78c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x16a78cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x16a790: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x16a790u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16a794: 0x0  nop
    ctx->pc = 0x16a794u;
    // NOP
    // 0x16a798: 0x45000074  bc1f        . + 4 + (0x74 << 2)
    ctx->pc = 0x16A798u;
    {
        const bool branch_taken_0x16a798 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16a798) {
            ctx->pc = 0x16A96Cu;
            goto label_16a96c;
        }
    }
    ctx->pc = 0x16A7A0u;
    // 0x16a7a0: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x16A7A0u;
    {
        const bool branch_taken_0x16a7a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A7A0u;
        // 0x16a7a4: 0xe6010018  swc1        $f1, 0x18($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a7a0) {
            ctx->pc = 0x16A96Cu;
            goto label_16a96c;
        }
    }
    ctx->pc = 0x16A7A8u;
label_16a7a8:
    // 0x16a7a8: 0x84a2001e  lh          $v0, 0x1E($a1)
    ctx->pc = 0x16a7a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 30)));
    // 0x16a7ac: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x16a7acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x16a7b0: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x16A7B0u;
    {
        const bool branch_taken_0x16a7b0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A7B0u;
        // 0x16a7b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a7b0) {
            ctx->pc = 0x16A7BCu;
            goto label_16a7bc;
        }
    }
    ctx->pc = 0x16A7B8u;
    // 0x16a7b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16a7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16a7bc:
    // 0x16a7bc: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x16A7BCu;
    {
        const bool branch_taken_0x16a7bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a7bc) {
            ctx->pc = 0x16A828u;
            goto label_16a828;
        }
    }
    ctx->pc = 0x16A7C4u;
    // 0x16a7c4: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x16A7C4u;
    {
        const bool branch_taken_0x16a7c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A7C4u;
        // 0x16a7c8: 0x3c0240c0  lui         $v0, 0x40C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a7c4) {
            ctx->pc = 0x16A828u;
            goto label_16a828;
        }
    }
    ctx->pc = 0x16A7CCu;
    // 0x16a7cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16a7ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a7d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16a7d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16a7d4: 0xc6020028  lwc1        $f2, 0x28($s0)
    ctx->pc = 0x16a7d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16a7d8: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x16a7d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x16a7dc: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x16a7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a7e0: 0x46011300  add.s       $f12, $f2, $f1
    ctx->pc = 0x16a7e0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x16a7e4: 0xc04af5c  jal         func_12BD70
    ctx->pc = 0x16A7E4u;
    SET_GPR_U32(ctx, 31, 0x16A7ECu);
    ctx->pc = 0x16A7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A7E4u;
    // 0x16a7e8: 0xe6000028  swc1        $f0, 0x28($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BD70u, 0x16A7E4u, 0x16A7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A7ECu;
label_16a7ec:
    // 0x16a7ec: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x16a7ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x16a7f0: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x16a7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a7f4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x16a7f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16a7f8: 0x0  nop
    ctx->pc = 0x16a7f8u;
    // NOP
    // 0x16a7fc: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x16A7FCu;
    {
        const bool branch_taken_0x16a7fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16a7fc) {
            ctx->pc = 0x16A80Cu;
            goto label_16a80c;
        }
    }
    ctx->pc = 0x16A804u;
    // 0x16a804: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x16A804u;
    {
        const bool branch_taken_0x16a804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A804u;
        // 0x16a808: 0xe6010018  swc1        $f1, 0x18($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a804) {
            ctx->pc = 0x16A96Cu;
            goto label_16a96c;
        }
    }
    ctx->pc = 0x16A80Cu;
label_16a80c:
    // 0x16a80c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x16a80cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x16a810: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x16a810u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16a814: 0x0  nop
    ctx->pc = 0x16a814u;
    // NOP
    // 0x16a818: 0x45000054  bc1f        . + 4 + (0x54 << 2)
    ctx->pc = 0x16A818u;
    {
        const bool branch_taken_0x16a818 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16a818) {
            ctx->pc = 0x16A96Cu;
            goto label_16a96c;
        }
    }
    ctx->pc = 0x16A820u;
    // 0x16a820: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x16A820u;
    {
        const bool branch_taken_0x16a820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A820u;
        // 0x16a824: 0xe6010018  swc1        $f1, 0x18($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a820) {
            ctx->pc = 0x16A96Cu;
            goto label_16a96c;
        }
    }
    ctx->pc = 0x16A828u;
label_16a828:
    // 0x16a828: 0x84a2001c  lh          $v0, 0x1C($a1)
    ctx->pc = 0x16a828u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x16a82c: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x16a82cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x16a830: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x16A830u;
    {
        const bool branch_taken_0x16a830 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A830u;
        // 0x16a834: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a830) {
            ctx->pc = 0x16A83Cu;
            goto label_16a83c;
        }
    }
    ctx->pc = 0x16A838u;
    // 0x16a838: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16a838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16a83c:
    // 0x16a83c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x16A83Cu;
    {
        const bool branch_taken_0x16a83c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a83c) {
            ctx->pc = 0x16A8A8u;
            goto label_16a8a8;
        }
    }
    ctx->pc = 0x16A844u;
    // 0x16a844: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x16A844u;
    {
        const bool branch_taken_0x16a844 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A844u;
        // 0x16a848: 0x3c0240c0  lui         $v0, 0x40C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a844) {
            ctx->pc = 0x16A8A8u;
            goto label_16a8a8;
        }
    }
    ctx->pc = 0x16A84Cu;
    // 0x16a84c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16a84cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a850: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16a850u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16a854: 0xc6020028  lwc1        $f2, 0x28($s0)
    ctx->pc = 0x16a854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16a858: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x16a858u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x16a85c: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x16a85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a860: 0x46011301  sub.s       $f12, $f2, $f1
    ctx->pc = 0x16a860u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x16a864: 0xc04af5c  jal         func_12BD70
    ctx->pc = 0x16A864u;
    SET_GPR_U32(ctx, 31, 0x16A86Cu);
    ctx->pc = 0x16A868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A864u;
    // 0x16a868: 0xe6000028  swc1        $f0, 0x28($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BD70u, 0x16A864u, 0x16A86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A86Cu;
label_16a86c:
    // 0x16a86c: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x16a86cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x16a870: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x16a870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a874: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x16a874u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16a878: 0x0  nop
    ctx->pc = 0x16a878u;
    // NOP
    // 0x16a87c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x16A87Cu;
    {
        const bool branch_taken_0x16a87c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16a87c) {
            ctx->pc = 0x16A88Cu;
            goto label_16a88c;
        }
    }
    ctx->pc = 0x16A884u;
    // 0x16a884: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x16A884u;
    {
        const bool branch_taken_0x16a884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A884u;
        // 0x16a888: 0xe6010018  swc1        $f1, 0x18($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a884) {
            ctx->pc = 0x16A96Cu;
            goto label_16a96c;
        }
    }
    ctx->pc = 0x16A88Cu;
label_16a88c:
    // 0x16a88c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x16a88cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x16a890: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x16a890u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16a894: 0x0  nop
    ctx->pc = 0x16a894u;
    // NOP
    // 0x16a898: 0x45000034  bc1f        . + 4 + (0x34 << 2)
    ctx->pc = 0x16A898u;
    {
        const bool branch_taken_0x16a898 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16a898) {
            ctx->pc = 0x16A96Cu;
            goto label_16a96c;
        }
    }
    ctx->pc = 0x16A8A0u;
    // 0x16a8a0: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x16A8A0u;
    {
        const bool branch_taken_0x16a8a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A8A0u;
        // 0x16a8a4: 0xe6010018  swc1        $f1, 0x18($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a8a0) {
            ctx->pc = 0x16A96Cu;
            goto label_16a96c;
        }
    }
    ctx->pc = 0x16A8A8u;
label_16a8a8:
    // 0x16a8a8: 0x84a20020  lh          $v0, 0x20($a1)
    ctx->pc = 0x16a8a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x16a8ac: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x16a8acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x16a8b0: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x16A8B0u;
    {
        const bool branch_taken_0x16a8b0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A8B0u;
        // 0x16a8b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a8b0) {
            ctx->pc = 0x16A8BCu;
            goto label_16a8bc;
        }
    }
    ctx->pc = 0x16A8B8u;
    // 0x16a8b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16a8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16a8bc:
    // 0x16a8bc: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x16A8BCu;
    {
        const bool branch_taken_0x16a8bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a8bc) {
            ctx->pc = 0x16A928u;
            goto label_16a928;
        }
    }
    ctx->pc = 0x16A8C4u;
    // 0x16a8c4: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x16A8C4u;
    {
        const bool branch_taken_0x16a8c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A8C4u;
        // 0x16a8c8: 0x3c0240c0  lui         $v0, 0x40C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a8c4) {
            ctx->pc = 0x16A928u;
            goto label_16a928;
        }
    }
    ctx->pc = 0x16A8CCu;
    // 0x16a8cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16a8ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a8d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16a8d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16a8d4: 0xc6020028  lwc1        $f2, 0x28($s0)
    ctx->pc = 0x16a8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16a8d8: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x16a8d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x16a8dc: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x16a8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a8e0: 0x46011300  add.s       $f12, $f2, $f1
    ctx->pc = 0x16a8e0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x16a8e4: 0xc04af5c  jal         func_12BD70
    ctx->pc = 0x16A8E4u;
    SET_GPR_U32(ctx, 31, 0x16A8ECu);
    ctx->pc = 0x16A8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A8E4u;
    // 0x16a8e8: 0xe6000028  swc1        $f0, 0x28($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BD70u, 0x16A8E4u, 0x16A8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A8ECu;
label_16a8ec:
    // 0x16a8ec: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x16a8ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x16a8f0: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x16a8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a8f4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x16a8f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16a8f8: 0x0  nop
    ctx->pc = 0x16a8f8u;
    // NOP
    // 0x16a8fc: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x16A8FCu;
    {
        const bool branch_taken_0x16a8fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16a8fc) {
            ctx->pc = 0x16A90Cu;
            goto label_16a90c;
        }
    }
    ctx->pc = 0x16A904u;
    // 0x16a904: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x16A904u;
    {
        const bool branch_taken_0x16a904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A904u;
        // 0x16a908: 0xe6010018  swc1        $f1, 0x18($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a904) {
            ctx->pc = 0x16A96Cu;
            goto label_16a96c;
        }
    }
    ctx->pc = 0x16A90Cu;
label_16a90c:
    // 0x16a90c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x16a90cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x16a910: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x16a910u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16a914: 0x0  nop
    ctx->pc = 0x16a914u;
    // NOP
    // 0x16a918: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x16A918u;
    {
        const bool branch_taken_0x16a918 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16a918) {
            ctx->pc = 0x16A96Cu;
            goto label_16a96c;
        }
    }
    ctx->pc = 0x16A920u;
    // 0x16a920: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x16A920u;
    {
        const bool branch_taken_0x16a920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A920u;
        // 0x16a924: 0xe6010018  swc1        $f1, 0x18($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a920) {
            ctx->pc = 0x16A96Cu;
            goto label_16a96c;
        }
    }
    ctx->pc = 0x16A928u;
label_16a928:
    // 0x16a928: 0xc60c0028  lwc1        $f12, 0x28($s0)
    ctx->pc = 0x16a928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x16a92c: 0xc04af5c  jal         func_12BD70
    ctx->pc = 0x16A92Cu;
    SET_GPR_U32(ctx, 31, 0x16A934u);
    ctx->pc = 0x16A930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A92Cu;
    // 0x16a930: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BD70u, 0x16A92Cu, 0x16A934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A934u;
label_16a934:
    // 0x16a934: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x16a934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x16a938: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x16a938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a93c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x16a93cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16a940: 0x0  nop
    ctx->pc = 0x16a940u;
    // NOP
    // 0x16a944: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x16A944u;
    {
        const bool branch_taken_0x16a944 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16a944) {
            ctx->pc = 0x16A954u;
            goto label_16a954;
        }
    }
    ctx->pc = 0x16A94Cu;
    // 0x16a94c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x16A94Cu;
    {
        const bool branch_taken_0x16a94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A94Cu;
        // 0x16a950: 0xe6010018  swc1        $f1, 0x18($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a94c) {
            ctx->pc = 0x16A96Cu;
            goto label_16a96c;
        }
    }
    ctx->pc = 0x16A954u;
label_16a954:
    // 0x16a954: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x16a954u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x16a958: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x16a958u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16a95c: 0x0  nop
    ctx->pc = 0x16a95cu;
    // NOP
    // 0x16a960: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x16A960u;
    {
        const bool branch_taken_0x16a960 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16a960) {
            ctx->pc = 0x16A96Cu;
            goto label_16a96c;
        }
    }
    ctx->pc = 0x16A968u;
    // 0x16a968: 0xe6010018  swc1        $f1, 0x18($s0)
    ctx->pc = 0x16a968u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_16a96c:
    // 0x16a96c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16a96cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16a970: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16a970u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a974: 0x3e00008  jr          $ra
    ctx->pc = 0x16A974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A974u;
        // 0x16a978: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16A97Cu;
}
