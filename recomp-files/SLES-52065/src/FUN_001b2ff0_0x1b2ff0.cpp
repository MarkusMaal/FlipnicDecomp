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

// Function: FUN_001b2ff0
// Address: 0x1b2ff0 - 0x1b3104
void FUN_001b2ff0_0x1b2ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b2ff0_0x1b2ff0");
#endif

    switch (ctx->pc) {
        case 0x1b300cu: goto label_1b300c;
        case 0x1b3020u: goto label_1b3020;
        case 0x1b302cu: goto label_1b302c;
        case 0x1b3044u: goto label_1b3044;
        case 0x1b3054u: goto label_1b3054;
        case 0x1b3074u: goto label_1b3074;
        case 0x1b308cu: goto label_1b308c;
        case 0x1b30f0u: goto label_1b30f0;
        default: break;
    }

    ctx->pc = 0x1b2ff0u;

    // 0x1b2ff0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b2ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b2ff4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b2ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b2ff8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b2ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b2ffc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b2ffcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3000: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x1b3000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1b3004: 0xc062200  jal         func_188800
    ctx->pc = 0x1B3004u;
    SET_GPR_U32(ctx, 31, 0x1B300Cu);
    ctx->pc = 0x1B3008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3004u;
    // 0x1b3008: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188800u, 0x1B3004u, 0x1B300Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B300Cu;
label_1b300c:
    // 0x1b300c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1b300cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b3010: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1b3010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1b3014: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b3014u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b3018: 0xc06223c  jal         func_1888F0
    ctx->pc = 0x1B3018u;
    SET_GPR_U32(ctx, 31, 0x1B3020u);
    ctx->pc = 0x1B301Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3018u;
    // 0x1b301c: 0x3c058000  lui         $a1, 0x8000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1888F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1888F0u, 0x1B3018u, 0x1B3020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3020u;
label_1b3020:
    // 0x1b3020: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1b3020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b3024: 0xc0628f0  jal         func_18A3C0
    ctx->pc = 0x1B3024u;
    SET_GPR_U32(ctx, 31, 0x1B302Cu);
    ctx->pc = 0x1B3028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3024u;
    // 0x1b3028: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A3C0u, 0x1B3024u, 0x1B302Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B302Cu;
label_1b302c:
    // 0x1b302c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1b302cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b3030: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b3030u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b3034: 0x0  nop
    ctx->pc = 0x1b3034u;
    // NOP
    // 0x1b3038: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1b3038u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1b303c: 0xc062828  jal         func_18A0A0
    ctx->pc = 0x1B303Cu;
    SET_GPR_U32(ctx, 31, 0x1B3044u);
    ctx->pc = 0x1B3040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B303Cu;
    // 0x1b3040: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0A0u, 0x1B303Cu, 0x1B3044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3044u;
label_1b3044:
    // 0x1b3044: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1b3044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1b3048: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b3048u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b304c: 0xc062858  jal         func_18A160
    ctx->pc = 0x1B304Cu;
    SET_GPR_U32(ctx, 31, 0x1B3054u);
    ctx->pc = 0x1B3050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B304Cu;
    // 0x1b3050: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A160u, 0x1B304Cu, 0x1B3054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3054u;
label_1b3054:
    // 0x1b3054: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1b3054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b3058: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b3058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1b305c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b305cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b3060: 0x0  nop
    ctx->pc = 0x1b3060u;
    // NOP
    // 0x1b3064: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1b3064u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1b3068: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x1b3068u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x1b306c: 0xc062860  jal         func_18A180
    ctx->pc = 0x1B306Cu;
    SET_GPR_U32(ctx, 31, 0x1B3074u);
    ctx->pc = 0x1B3070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B306Cu;
    // 0x1b3070: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A180u, 0x1B306Cu, 0x1B3074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3074u;
label_1b3074:
    // 0x1b3074: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x1b3074u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1b3078: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1b3078u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1b307c: 0x8e070010  lw          $a3, 0x10($s0)
    ctx->pc = 0x1b307cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1b3080: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1b3080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1b3084: 0xc0805c8  jal         func_201720
    ctx->pc = 0x1B3084u;
    SET_GPR_U32(ctx, 31, 0x1B308Cu);
    ctx->pc = 0x1B3088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3084u;
    // 0x1b3088: 0x24a50c98  addiu       $a1, $a1, 0xC98 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x1B3084u, 0x1B308Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B308Cu;
label_1b308c:
    // 0x1b308c: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1b308cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3090: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1b3090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1b3094: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b3094u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b3098: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x1b3098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1b309c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b309cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b30a0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b30a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b30a4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b30a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1b30a8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1b30a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1b30ac: 0x0  nop
    ctx->pc = 0x1b30acu;
    // NOP
    // 0x1b30b0: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1b30b0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1b30b4: 0x0  nop
    ctx->pc = 0x1b30b4u;
    // NOP
    // 0x1b30b8: 0x0  nop
    ctx->pc = 0x1b30b8u;
    // NOP
    // 0x1b30bc: 0x1012  mflo        $v0
    ctx->pc = 0x1b30bcu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1b30c0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b30c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b30c4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B30C4u;
    {
        const bool branch_taken_0x1b30c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b30c4) {
            ctx->pc = 0x1B30E4u;
            goto label_1b30e4;
        }
    }
    ctx->pc = 0x1B30CCu;
    // 0x1b30cc: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1b30ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1b30d0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b30d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b30d4: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x1b30d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1b30d8: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x1b30d8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x1b30dc: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1b30dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1b30e0: 0xa0440020  sb          $a0, 0x20($v0)
    ctx->pc = 0x1b30e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 32), (uint8_t)GPR_U32(ctx, 4));
label_1b30e4:
    // 0x1b30e4: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1b30e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b30e8: 0xc0627bc  jal         func_189EF0
    ctx->pc = 0x1B30E8u;
    SET_GPR_U32(ctx, 31, 0x1B30F0u);
    ctx->pc = 0x1B30ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B30E8u;
    // 0x1b30ec: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EF0u, 0x1B30E8u, 0x1B30F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B30F0u;
label_1b30f0:
    // 0x1b30f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b30f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b30f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b30f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b30f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b30f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b30fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B30FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B30FCu;
        // 0x1b3100: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B30FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3104u;
}
