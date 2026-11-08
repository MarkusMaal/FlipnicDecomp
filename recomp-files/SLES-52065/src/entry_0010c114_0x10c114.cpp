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

// Function: entry_0010c114
// Address: 0x10c114 - 0x10c1e8
void entry_0010c114_0x10c114(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c114_0x10c114");
#endif

    switch (ctx->pc) {
        case 0x10c128u: goto label_10c128;
        case 0x10c144u: goto label_10c144;
        case 0x10c14cu: goto label_10c14c;
        case 0x10c1ccu: goto label_10c1cc;
        case 0x10c1e0u: goto label_10c1e0;
        default: break;
    }

    ctx->pc = 0x10c114u;

    // 0x10c114: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10c114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10c118: 0x16250033  bne         $s1, $a1, . + 4 + (0x33 << 2)
    ctx->pc = 0x10C118u;
    {
        const bool branch_taken_0x10c118 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 5));
        ctx->pc = 0x10C11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C118u;
        // 0x10c11c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c118) {
            ctx->pc = 0x10C1E8u;
            return;
        }
    }
    ctx->pc = 0x10C120u;
    // 0x10c120: 0xc042570  jal         func_1095C0
    ctx->pc = 0x10C120u;
    SET_GPR_U32(ctx, 31, 0x10C128u);
    ctx->pc = 0x10C124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C120u;
    // 0x10c124: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x10C120u, 0x10C128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C128u;
label_10c128:
    // 0x10c128: 0xa24001d3  sb          $zero, 0x1D3($s2)
    ctx->pc = 0x10c128u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 467), (uint8_t)GPR_U32(ctx, 0));
    // 0x10c12c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10c12cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10c130: 0x8e4401d4  lw          $a0, 0x1D4($s2)
    ctx->pc = 0x10c130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 468)));
    // 0x10c134: 0x10830030  beq         $a0, $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x10C134u;
    {
        const bool branch_taken_0x10c134 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x10C138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C134u;
        // 0x10c138: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c134) {
            ctx->pc = 0x10C1F8u;
            return;
        }
    }
    ctx->pc = 0x10C13Cu;
    // 0x10c13c: 0xc0430e8  jal         func_10C3A0
    ctx->pc = 0x10C13Cu;
    SET_GPR_U32(ctx, 31, 0x10C144u);
    ctx->pc = 0x10C3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C3A0u, 0x10C13Cu, 0x10C144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C144u;
label_10c144:
    // 0x10c144: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x10C144u;
    SET_GPR_U32(ctx, 31, 0x10C14Cu);
    ctx->pc = 0x10C148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C144u;
    // 0x10c148: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x10C144u, 0x10C14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C14Cu;
label_10c14c:
    // 0x10c14c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10c14cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10c150: 0x3c094e80  lui         $t1, 0x4E80
    ctx->pc = 0x10c150u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)20096 << 16));
    // 0x10c154: 0x44891000  mtc1        $t1, $f2
    ctx->pc = 0x10c154u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x10c158: 0x3c084220  lui         $t0, 0x4220
    ctx->pc = 0x10c158u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16928 << 16));
    // 0x10c15c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x10c15cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x10c160: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x10c160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x10c164: 0x3c0741a0  lui         $a3, 0x41A0
    ctx->pc = 0x10c164u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16800 << 16));
    // 0x10c168: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x10c168u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x10c16c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10c16cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c170: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x10c170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x10c174: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x10c174u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c178: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x10c178u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x10c17c: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x10c17cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10c180: 0x460020c2  mul.s       $f3, $f4, $f0
    ctx->pc = 0x10c180u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x10c184: 0x3c023eae  lui         $v0, 0x3EAE
    ctx->pc = 0x10c184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16046 << 16));
    // 0x10c188: 0x3442147b  ori         $v0, $v0, 0x147B
    ctx->pc = 0x10c188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5243);
    // 0x10c18c: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x10c18cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x10c190: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x10c190u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x10c194: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x10c194u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10c198: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x10c198u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x10c19c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x10c19cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x10c1a0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x10c1a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x10c1a4: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x10c1a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x10c1a8: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x10c1a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10c1ac: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x10c1acu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10c1b0: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x10c1b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x10c1b4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x10c1b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x10c1b8: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x10c1b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x10c1bc: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x10c1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10c1c0: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x10c1c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x10c1c4: 0xc043134  jal         func_10C4D0
    ctx->pc = 0x10C1C4u;
    SET_GPR_U32(ctx, 31, 0x10C1CCu);
    ctx->pc = 0x10C1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C1C4u;
    // 0x10c1c8: 0xafa3004c  sw          $v1, 0x4C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C4D0u, 0x10C1C4u, 0x10C1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C1CCu;
label_10c1cc:
    // 0x10c1cc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x10c1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x10c1d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10c1d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c1d4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x10c1d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x10c1d8: 0xc0425a4  jal         func_109690
    ctx->pc = 0x10C1D8u;
    SET_GPR_U32(ctx, 31, 0x10C1E0u);
    ctx->pc = 0x10C1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C1D8u;
    // 0x10c1dc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x10C1D8u, 0x10C1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C1E0u;
label_10c1e0:
    // 0x10c1e0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x10C1E0u;
    {
        const bool branch_taken_0x10c1e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10c1e0) {
            ctx->pc = 0x10C1F8u;
            return;
        }
    }
    ctx->pc = 0x10C1E8u;
}
