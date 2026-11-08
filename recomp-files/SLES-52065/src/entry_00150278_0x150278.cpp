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

// Function: entry_00150278
// Address: 0x150278 - 0x1502d4
void entry_00150278_0x150278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150278_0x150278");
#endif

    switch (ctx->pc) {
        case 0x1502a8u: goto label_1502a8;
        case 0x1502b4u: goto label_1502b4;
        default: break;
    }

    ctx->pc = 0x150278u;

    // 0x150278: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x150278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15027c: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x15027cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150280: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x150280u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x150284: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x150284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x150288: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x150288u;
    {
        const bool branch_taken_0x150288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15028Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150288u;
        // 0x15028c: 0xe4e00000  swc1        $f0, 0x0($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x150288) {
            ctx->pc = 0x15020Cu;
            return;
        }
    }
    ctx->pc = 0x150290u;
    // 0x150290: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x150290u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x150294: 0x2a020064  slti        $v0, $s0, 0x64
    ctx->pc = 0x150294u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x150298: 0x1440ffbf  bnez        $v0, . + 4 + (-0x41 << 2)
    ctx->pc = 0x150298u;
    {
        const bool branch_taken_0x150298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x150298) {
            ctx->pc = 0x150198u;
            return;
        }
    }
    ctx->pc = 0x1502A0u;
    // 0x1502a0: 0xc07edfe  jal         func_1FB7F8
    ctx->pc = 0x1502A0u;
    SET_GPR_U32(ctx, 31, 0x1502A8u);
    ctx->pc = 0x1502A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1502A0u;
    // 0x1502a4: 0xc7ac0080  lwc1        $f12, 0x80($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB7F8u, 0x1502A0u, 0x1502A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1502A8u;
label_1502a8:
    // 0x1502a8: 0xc7ac0070  lwc1        $f12, 0x70($sp)
    ctx->pc = 0x1502a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1502ac: 0xc07edfe  jal         func_1FB7F8
    ctx->pc = 0x1502ACu;
    SET_GPR_U32(ctx, 31, 0x1502B4u);
    ctx->pc = 0x1502B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1502ACu;
    // 0x1502b0: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB7F8u, 0x1502ACu, 0x1502B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1502B4u;
label_1502b4:
    // 0x1502b4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1502b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1502b8: 0x0  nop
    ctx->pc = 0x1502b8u;
    // NOP
    // 0x1502bc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1502BCu;
    {
        const bool branch_taken_0x1502bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1502bc) {
            ctx->pc = 0x1502D4u;
            return;
        }
    }
    ctx->pc = 0x1502C4u;
    // 0x1502c4: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x1502c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1502c8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1502c8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1502cc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1502CCu;
    {
        const bool branch_taken_0x1502cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1502D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1502CCu;
        // 0x1502d0: 0xe7a00080  swc1        $f0, 0x80($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1502cc) {
            ctx->pc = 0x1502E0u;
            return;
        }
    }
    ctx->pc = 0x1502D4u;
}
