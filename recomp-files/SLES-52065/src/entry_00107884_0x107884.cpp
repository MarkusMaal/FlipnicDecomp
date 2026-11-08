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

// Function: entry_00107884
// Address: 0x107884 - 0x107910
void entry_00107884_0x107884(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107884_0x107884");
#endif

    switch (ctx->pc) {
        case 0x10789cu: goto label_10789c;
        case 0x1078d4u: goto label_1078d4;
        default: break;
    }

    ctx->pc = 0x107884u;

    // 0x107884: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x107884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x107888: 0x4614a841  sub.s       $f1, $f21, $f20
    ctx->pc = 0x107888u;
    ctx->f[1] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
    // 0x10788c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10788cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x107890: 0xc7ac008c  lwc1        $f12, 0x8C($sp)
    ctx->pc = 0x107890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x107894: 0xc07edfe  jal         func_1FB7F8
    ctx->pc = 0x107894u;
    SET_GPR_U32(ctx, 31, 0x10789Cu);
    ctx->pc = 0x107898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107894u;
    // 0x107898: 0x46010540  add.s       $f21, $f0, $f1 (Delay Slot)
    ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB7F8u, 0x107894u, 0x10789Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10789Cu;
label_10789c:
    // 0x10789c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x10789cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1078a0: 0x3c03c000  lui         $v1, 0xC000
    ctx->pc = 0x1078a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49152 << 16));
    // 0x1078a4: 0x34440fdb  ori         $a0, $v0, 0xFDB
    ctx->pc = 0x1078a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1078a8: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x1078a8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1078ac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1078acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1078b0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1078b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1078b4: 0x0  nop
    ctx->pc = 0x1078b4u;
    // NOP
    // 0x1078b8: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1078b8u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x1078bc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1078bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1078c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1078c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1078c4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1078c4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1078c8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1078c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1078cc: 0xc07edc4  jal         func_1FB710
    ctx->pc = 0x1078CCu;
    SET_GPR_U32(ctx, 31, 0x1078D4u);
    ctx->pc = 0x1078D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1078CCu;
    // 0x1078d0: 0xe7a0008c  swc1        $f0, 0x8C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB710u, 0x1078CCu, 0x1078D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1078D4u;
label_1078d4:
    // 0x1078d4: 0xc7a2008c  lwc1        $f2, 0x8C($sp)
    ctx->pc = 0x1078d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1078d8: 0x3c02427c  lui         $v0, 0x427C
    ctx->pc = 0x1078d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17020 << 16));
    // 0x1078dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1078dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1078e0: 0x0  nop
    ctx->pc = 0x1078e0u;
    // NOP
    // 0x1078e4: 0x46170842  mul.s       $f1, $f1, $f23
    ctx->pc = 0x1078e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[23]);
    // 0x1078e8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1078e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1078ec: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1078ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1078f0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1078f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1078f4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1078f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1078f8: 0x0  nop
    ctx->pc = 0x1078f8u;
    // NOP
    // 0x1078fc: 0x2861ffc1  slti        $at, $v1, -0x3F
    ctx->pc = 0x1078fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967233) ? 1 : 0);
    // 0x107900: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x107900u;
    {
        const bool branch_taken_0x107900 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x107904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107900u;
        // 0x107904: 0x28610040  slti        $at, $v1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x107900) {
            ctx->pc = 0x107910u;
            return;
        }
    }
    ctx->pc = 0x107908u;
    // 0x107908: 0x2403ffc1  addiu       $v1, $zero, -0x3F
    ctx->pc = 0x107908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967233));
    // 0x10790c: 0x28610040  slti        $at, $v1, 0x40
    ctx->pc = 0x10790cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
    ctx->pc = 0x107910u;
}
