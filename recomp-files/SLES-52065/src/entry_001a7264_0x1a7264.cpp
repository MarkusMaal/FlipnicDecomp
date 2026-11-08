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

// Function: entry_001a7264
// Address: 0x1a7264 - 0x1a72e4
void entry_001a7264_0x1a7264(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a7264_0x1a7264");
#endif

    switch (ctx->pc) {
        case 0x1a7270u: goto label_1a7270;
        case 0x1a7284u: goto label_1a7284;
        case 0x1a7294u: goto label_1a7294;
        default: break;
    }

    ctx->pc = 0x1a7264u;

    // 0x1a7264: 0x8e44002c  lw          $a0, 0x2C($s2)
    ctx->pc = 0x1a7264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x1a7268: 0xc0628f0  jal         func_18A3C0
    ctx->pc = 0x1A7268u;
    SET_GPR_U32(ctx, 31, 0x1A7270u);
    ctx->pc = 0x1A726Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7268u;
    // 0x1a726c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A3C0u, 0x1A7268u, 0x1A7270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7270u;
label_1a7270:
    // 0x1a7270: 0xc64c0010  lwc1        $f12, 0x10($s2)
    ctx->pc = 0x1a7270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a7274: 0xc64d0014  lwc1        $f13, 0x14($s2)
    ctx->pc = 0x1a7274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1a7278: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1a7278u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1a727c: 0xc062828  jal         func_18A0A0
    ctx->pc = 0x1A727Cu;
    SET_GPR_U32(ctx, 31, 0x1A7284u);
    ctx->pc = 0x1A7280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A727Cu;
    // 0x1a7280: 0x8e44002c  lw          $a0, 0x2C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0A0u, 0x1A727Cu, 0x1A7284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7284u;
label_1a7284:
    // 0x1a7284: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a7284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1a7288: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a7288u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a728c: 0xc062858  jal         func_18A160
    ctx->pc = 0x1A728Cu;
    SET_GPR_U32(ctx, 31, 0x1A7294u);
    ctx->pc = 0x1A7290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A728Cu;
    // 0x1a7290: 0x8e44002c  lw          $a0, 0x2C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A160u, 0x1A728Cu, 0x1A7294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7294u;
label_1a7294:
    // 0x1a7294: 0xc7818028  lwc1        $f1, -0x7FD8($gp)
    ctx->pc = 0x1a7294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a7298: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x1a7298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x1a729c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1a729cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1a72a0: 0x3c033f40  lui         $v1, 0x3F40
    ctx->pc = 0x1a72a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16192 << 16));
    // 0x1a72a4: 0xc6420018  lwc1        $f2, 0x18($s2)
    ctx->pc = 0x1a72a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a72a8: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x1a72a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1a72ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a72acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a72b0: 0x0  nop
    ctx->pc = 0x1a72b0u;
    // NOP
    // 0x1a72b4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a72b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1a72b8: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x1a72b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1a72bc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a72bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1a72c0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a72c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1a72c4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a72c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1a72c8: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x1a72c8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x1a72cc: 0x0  nop
    ctx->pc = 0x1a72ccu;
    // NOP
    // 0x1a72d0: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x1a72d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1a72d4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A72D4u;
    {
        const bool branch_taken_0x1a72d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A72D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A72D4u;
        // 0x1a72d8: 0x46010500  add.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a72d4) {
            ctx->pc = 0x1A72E4u;
            return;
        }
    }
    ctx->pc = 0x1A72DCu;
    // 0x1a72dc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A72DCu;
    {
        const bool branch_taken_0x1a72dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A72E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A72DCu;
        // 0x1a72e0: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a72dc) {
            ctx->pc = 0x1A72E8u;
            return;
        }
    }
    ctx->pc = 0x1A72E4u;
}
