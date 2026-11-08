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

// Function: entry_001a611c
// Address: 0x1a611c - 0x1a619c
void entry_001a611c_0x1a611c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a611c_0x1a611c");
#endif

    ctx->pc = 0x1a611cu;

    // 0x1a611c: 0x0  nop
    ctx->pc = 0x1a611cu;
    // NOP
    // 0x1a6120: 0x8e8300ec  lw          $v1, 0xEC($s4)
    ctx->pc = 0x1a6120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 236)));
    // 0x1a6124: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a6124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a6128: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1a6128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a612c: 0xae8300ec  sw          $v1, 0xEC($s4)
    ctx->pc = 0x1a612cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 236), GPR_U32(ctx, 3));
    // 0x1a6130: 0x8e8300e0  lw          $v1, 0xE0($s4)
    ctx->pc = 0x1a6130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 224)));
    // 0x1a6134: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1A6134u;
    {
        const bool branch_taken_0x1a6134 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a6134) {
            ctx->pc = 0x1A619Cu;
            return;
        }
    }
    ctx->pc = 0x1A613Cu;
    // 0x1a613c: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1a613cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6140: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a6140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1a6144: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a6144u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a6148: 0x8e8400ec  lw          $a0, 0xEC($s4)
    ctx->pc = 0x1a6148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 236)));
    // 0x1a614c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a614cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a6150: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a6150u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a6154: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a6154u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1a6158: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1a6158u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1a615c: 0x0  nop
    ctx->pc = 0x1a615cu;
    // NOP
    // 0x1a6160: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x1a6160u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a6164: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x1A6164u;
    {
        const bool branch_taken_0x1a6164 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6164u;
        // 0x1a6168: 0x641023  subu        $v0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6164) {
            ctx->pc = 0x1A619Cu;
            return;
        }
    }
    ctx->pc = 0x1A616Cu;
    // 0x1a616c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a616cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a6170: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a6170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6174: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a6174u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a6178: 0x0  nop
    ctx->pc = 0x1a6178u;
    // NOP
    // 0x1a617c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a617cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1a6180: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a6180u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a6184: 0x46000bc3  div.s       $f15, $f1, $f0
    ctx->pc = 0x1a6184u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[15] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1a6188: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a6188u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a618c: 0x0  nop
    ctx->pc = 0x1a618cu;
    // NOP
    // 0x1a6190: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1a6190u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1a6194: 0xc053c2c  jal         func_14F0B0
    ctx->pc = 0x1A6194u;
    SET_GPR_U32(ctx, 31, 0x1A619Cu);
    ctx->pc = 0x1A6198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6194u;
    // 0x1a6198: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F0B0u, 0x1A6194u, 0x1A619Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A619Cu;
}
