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

// Function: entry_0016a594
// Address: 0x16a594 - 0x16a60c
void entry_0016a594_0x16a594(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a594_0x16a594");
#endif

    switch (ctx->pc) {
        case 0x16a5ecu: goto label_16a5ec;
        default: break;
    }

    ctx->pc = 0x16a594u;

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
            return;
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
            return;
        }
    }
    ctx->pc = 0x16A60Cu;
}
