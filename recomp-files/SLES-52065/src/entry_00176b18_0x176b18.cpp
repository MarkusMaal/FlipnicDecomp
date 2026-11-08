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

// Function: entry_00176b18
// Address: 0x176b18 - 0x176b9c
void entry_00176b18_0x176b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176b18_0x176b18");
#endif

    switch (ctx->pc) {
        case 0x176b24u: goto label_176b24;
        default: break;
    }

    ctx->pc = 0x176b18u;

    // 0x176b18: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x176b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x176b1c: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x176B1Cu;
    SET_GPR_U32(ctx, 31, 0x176B24u);
    ctx->pc = 0x176B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176B1Cu;
    // 0x176b20: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x176B1Cu, 0x176B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176B24u;
label_176b24:
    // 0x176b24: 0x27a30074  addiu       $v1, $sp, 0x74
    ctx->pc = 0x176b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x176b28: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x176b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
    // 0x176b2c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x176b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x176b30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x176b30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x176b34: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x176b34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x176b38: 0x0  nop
    ctx->pc = 0x176b38u;
    // NOP
    // 0x176b3c: 0x46141032  c.eq.s      $f2, $f20
    ctx->pc = 0x176b3cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x176b40: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x176b40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x176b44: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x176b44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x176b48: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x176b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x176b4c: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x176B4Cu;
    {
        const bool branch_taken_0x176b4c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x176B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176B4Cu;
        // 0x176b50: 0x532021  addu        $a0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176b4c) {
            ctx->pc = 0x176B9Cu;
            return;
        }
    }
    ctx->pc = 0x176B54u;
    // 0x176b54: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x176b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x176b58: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x176b58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x176b5c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x176b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176b60: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x176b60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x176b64: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x176b64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x176b68: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x176b68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x176b6c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x176b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x176b70: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x176b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176b74: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x176b74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x176b78: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x176b78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x176b7c: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x176b7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x176b80: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x176b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x176b84: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x176b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176b88: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x176b88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x176b8c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x176b8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x176b90: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x176b90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x176b94: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x176B94u;
    {
        const bool branch_taken_0x176b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176B94u;
        // 0x176b98: 0xac82001c  sw          $v0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176b94) {
            ctx->pc = 0x176BA8u;
            return;
        }
    }
    ctx->pc = 0x176B9Cu;
}
