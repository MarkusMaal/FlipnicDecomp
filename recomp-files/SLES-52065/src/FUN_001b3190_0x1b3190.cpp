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

// Function: FUN_001b3190
// Address: 0x1b3190 - 0x1b335c
void FUN_001b3190_0x1b3190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b3190_0x1b3190");
#endif

    switch (ctx->pc) {
        case 0x1b31c4u: goto label_1b31c4;
        case 0x1b31d4u: goto label_1b31d4;
        case 0x1b31e0u: goto label_1b31e0;
        case 0x1b31f8u: goto label_1b31f8;
        case 0x1b3208u: goto label_1b3208;
        case 0x1b321cu: goto label_1b321c;
        case 0x1b32c4u: goto label_1b32c4;
        case 0x1b32ccu: goto label_1b32cc;
        case 0x1b32f4u: goto label_1b32f4;
        case 0x1b3308u: goto label_1b3308;
        case 0x1b3320u: goto label_1b3320;
        default: break;
    }

    ctx->pc = 0x1b3190u;

    // 0x1b3190: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1b3190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1b3194: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1b3194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1b3198: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1b3198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1b319c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1b319cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1b31a0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1b31a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1b31a4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b31a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b31a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b31a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b31ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b31acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b31b0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b31b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b31b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b31b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b31b8: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x1b31b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1b31bc: 0xc062200  jal         func_188800
    ctx->pc = 0x1B31BCu;
    SET_GPR_U32(ctx, 31, 0x1B31C4u);
    ctx->pc = 0x1B31C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B31BCu;
    // 0x1b31c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188800u, 0x1B31BCu, 0x1B31C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B31C4u;
label_1b31c4:
    // 0x1b31c4: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x1b31c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1b31c8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b31c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b31cc: 0xc06223c  jal         func_1888F0
    ctx->pc = 0x1B31CCu;
    SET_GPR_U32(ctx, 31, 0x1B31D4u);
    ctx->pc = 0x1B31D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B31CCu;
    // 0x1b31d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1888F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1888F0u, 0x1B31CCu, 0x1B31D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B31D4u;
label_1b31d4:
    // 0x1b31d4: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x1b31d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1b31d8: 0xc0628f0  jal         func_18A3C0
    ctx->pc = 0x1B31D8u;
    SET_GPR_U32(ctx, 31, 0x1B31E0u);
    ctx->pc = 0x1B31DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B31D8u;
    // 0x1b31dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A3C0u, 0x1B31D8u, 0x1B31E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B31E0u;
label_1b31e0:
    // 0x1b31e0: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x1b31e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1b31e4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b31e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b31e8: 0x0  nop
    ctx->pc = 0x1b31e8u;
    // NOP
    // 0x1b31ec: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1b31ecu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1b31f0: 0xc062828  jal         func_18A0A0
    ctx->pc = 0x1B31F0u;
    SET_GPR_U32(ctx, 31, 0x1B31F8u);
    ctx->pc = 0x1B31F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B31F0u;
    // 0x1b31f4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0A0u, 0x1B31F0u, 0x1B31F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B31F8u;
label_1b31f8:
    // 0x1b31f8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b31f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1b31fc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b31fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b3200: 0xc062858  jal         func_18A160
    ctx->pc = 0x1B3200u;
    SET_GPR_U32(ctx, 31, 0x1B3208u);
    ctx->pc = 0x1B3204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3200u;
    // 0x1b3204: 0x8e440008  lw          $a0, 0x8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A160u, 0x1B3200u, 0x1B3208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3208u;
label_1b3208:
    // 0x1b3208: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x1b3208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x1b320c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1b320cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3210: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b3210u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3214: 0x8c5628dc  lw          $s6, 0x28DC($v0)
    ctx->pc = 0x1b3214u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10460)));
    // 0x1b3218: 0x0  nop
    ctx->pc = 0x1b3218u;
    // NOP
label_1b321c:
    // 0x1b321c: 0x2508821  addu        $s1, $s2, $s0
    ctx->pc = 0x1b321cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1b3220: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1b3220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1b3224: 0x1080003a  beqz        $a0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1B3224u;
    {
        const bool branch_taken_0x1b3224 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3224) {
            ctx->pc = 0x1B3310u;
            goto label_1b3310;
        }
    }
    ctx->pc = 0x1B322Cu;
    // 0x1b322c: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1b322cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3230: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b3230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1b3234: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x1b3234u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1b3238: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1b3238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1b323c: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x1b323cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x1b3240: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1b3240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x1b3244: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b3244u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b3248: 0x0  nop
    ctx->pc = 0x1b3248u;
    // NOP
    // 0x1b324c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b324cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b3250: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b3250u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b3254: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b3254u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1b3258: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1b3258u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1b325c: 0x0  nop
    ctx->pc = 0x1b325cu;
    // NOP
    // 0x1b3260: 0x82082a  slt         $at, $a0, $v0
    ctx->pc = 0x1b3260u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b3264: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B3264u;
    {
        const bool branch_taken_0x1b3264 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3264u;
        // 0x1b3268: 0x8e330010  lw          $s3, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3264) {
            ctx->pc = 0x1B3284u;
            goto label_1b3284;
        }
    }
    ctx->pc = 0x1B326Cu;
    // 0x1b326c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1b326cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b3270: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b3270u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3274: 0x0  nop
    ctx->pc = 0x1b3274u;
    // NOP
    // 0x1b3278: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b3278u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b327c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b327cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b3280: 0x46000bc3  div.s       $f15, $f1, $f0
    ctx->pc = 0x1b3280u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[15] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1b3284:
    // 0x1b3284: 0x0  nop
    ctx->pc = 0x1b3284u;
    // NOP
    // 0x1b3288: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1b3288u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1b328c: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x1b328cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x1b3290: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1b3290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1b3294: 0x24632d20  addiu       $v1, $v1, 0x2D20
    ctx->pc = 0x1b3294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11552));
    // 0x1b3298: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b3298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b329c: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x1b329cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b32a0: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x1b32a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1b32a4: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1b32a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b32a8: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1b32a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b32ac: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1b32acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1b32b0: 0x0  nop
    ctx->pc = 0x1b32b0u;
    // NOP
    // 0x1b32b4: 0x46021b02  mul.s       $f12, $f3, $f2
    ctx->pc = 0x1b32b4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1b32b8: 0x46011b42  mul.s       $f13, $f3, $f1
    ctx->pc = 0x1b32b8u;
    ctx->f[13] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1b32bc: 0xc062860  jal         func_18A180
    ctx->pc = 0x1B32BCu;
    SET_GPR_U32(ctx, 31, 0x1B32C4u);
    ctx->pc = 0x1B32C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B32BCu;
    // 0x1b32c0: 0x46001b82  mul.s       $f14, $f3, $f0 (Delay Slot)
    ctx->f[14] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A180u, 0x1B32BCu, 0x1B32C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B32C4u;
label_1b32c4:
    // 0x1b32c4: 0xc062114  jal         func_188450
    ctx->pc = 0x1B32C4u;
    SET_GPR_U32(ctx, 31, 0x1B32CCu);
    ctx->pc = 0x1B32C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B32C4u;
    // 0x1b32c8: 0x24040035  addiu       $a0, $zero, 0x35 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188450u, 0x1B32C4u, 0x1B32CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B32CCu;
label_1b32cc:
    // 0x1b32cc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1b32ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b32d0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1b32d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1b32d4: 0x16620003  bne         $s3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B32D4u;
    {
        const bool branch_taken_0x1b32d4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b32d4) {
            ctx->pc = 0x1B32E4u;
            goto label_1b32e4;
        }
    }
    ctx->pc = 0x1B32DCu;
    // 0x1b32dc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B32DCu;
    {
        const bool branch_taken_0x1b32dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B32E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B32DCu;
        // 0x1b32e0: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b32dc) {
            ctx->pc = 0x1B32E8u;
            goto label_1b32e8;
        }
    }
    ctx->pc = 0x1B32E4u;
label_1b32e4:
    // 0x1b32e4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1b32e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1b32e8:
    // 0x1b32e8: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x1b32e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1b32ec: 0xc081c20  jal         func_207080
    ctx->pc = 0x1B32ECu;
    SET_GPR_U32(ctx, 31, 0x1B32F4u);
    ctx->pc = 0x1B32F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B32ECu;
    // 0x1b32f0: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207080u, 0x1B32ECu, 0x1B32F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B32F4u;
label_1b32f4:
    // 0x1b32f4: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x1b32f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1b32f8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1b32f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b32fc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1b32fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3300: 0xc0627e0  jal         func_189F80
    ctx->pc = 0x1B3300u;
    SET_GPR_U32(ctx, 31, 0x1B3308u);
    ctx->pc = 0x1B3304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3300u;
    // 0x1b3304: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189F80u, 0x1B3300u, 0x1B3308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3308u;
label_1b3308:
    // 0x1b3308: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B3308u;
    {
        const bool branch_taken_0x1b3308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3308) {
            ctx->pc = 0x1B3320u;
            goto label_1b3320;
        }
    }
    ctx->pc = 0x1B3310u;
label_1b3310:
    // 0x1b3310: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x1b3310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1b3314: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1b3314u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1b3318: 0xc0627bc  jal         func_189EF0
    ctx->pc = 0x1B3318u;
    SET_GPR_U32(ctx, 31, 0x1B3320u);
    ctx->pc = 0x1B331Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3318u;
    // 0x1b331c: 0x24a50cb8  addiu       $a1, $a1, 0xCB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EF0u, 0x1B3318u, 0x1B3320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3320u;
label_1b3320:
    // 0x1b3320: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1b3320u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1b3324: 0x2aa20003  slti        $v0, $s5, 0x3
    ctx->pc = 0x1b3324u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1b3328: 0x1440ffbc  bnez        $v0, . + 4 + (-0x44 << 2)
    ctx->pc = 0x1B3328u;
    {
        const bool branch_taken_0x1b3328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B332Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3328u;
        // 0x1b332c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3328) {
            ctx->pc = 0x1B321Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b321c;
        }
    }
    ctx->pc = 0x1B3330u;
    // 0x1b3330: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1b3330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b3334: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b3334u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3338: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1b3338u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b333c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1b333cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b3340: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1b3340u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b3344: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b3344u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b3348: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b3348u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b334c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b334cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b3350: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b3350u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3354: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3354u;
        // 0x1b3358: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B335Cu;
}
