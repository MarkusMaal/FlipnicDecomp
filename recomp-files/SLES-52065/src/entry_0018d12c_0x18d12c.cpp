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

// Function: entry_0018d12c
// Address: 0x18d12c - 0x18d174
void entry_0018d12c_0x18d12c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d12c_0x18d12c");
#endif

    switch (ctx->pc) {
        case 0x18d134u: goto label_18d134;
        case 0x18d148u: goto label_18d148;
        case 0x18d154u: goto label_18d154;
        case 0x18d15cu: goto label_18d15c;
        default: break;
    }

    ctx->pc = 0x18d12cu;

    // 0x18d12c: 0xc063dd4  jal         func_18F750
    ctx->pc = 0x18D12Cu;
    SET_GPR_U32(ctx, 31, 0x18D134u);
    ctx->pc = 0x18F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F750u, 0x18D12Cu, 0x18D134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D134u;
label_18d134:
    // 0x18d134: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x18d134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18d138: 0x1443000e  bne         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x18D138u;
    {
        const bool branch_taken_0x18d138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x18d138) {
            ctx->pc = 0x18D174u;
            return;
        }
    }
    ctx->pc = 0x18D140u;
    // 0x18d140: 0xc07eea2  jal         func_1FBA88
    ctx->pc = 0x18D140u;
    SET_GPR_U32(ctx, 31, 0x18D148u);
    ctx->pc = 0x18D144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D140u;
    // 0x18d144: 0xc64c048c  lwc1        $f12, 0x48C($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBA88u, 0x18D140u, 0x18D148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D148u;
label_18d148:
    // 0x18d148: 0xc64c0490  lwc1        $f12, 0x490($s2)
    ctx->pc = 0x18d148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18d14c: 0xc07eea2  jal         func_1FBA88
    ctx->pc = 0x18D14Cu;
    SET_GPR_U32(ctx, 31, 0x18D154u);
    ctx->pc = 0x18D150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D14Cu;
    // 0x18d150: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBA88u, 0x18D14Cu, 0x18D154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D154u;
label_18d154:
    // 0x18d154: 0xc07edfe  jal         func_1FB7F8
    ctx->pc = 0x18D154u;
    SET_GPR_U32(ctx, 31, 0x18D15Cu);
    ctx->pc = 0x18D158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D154u;
    // 0x18d158: 0x4600a302  mul.s       $f12, $f20, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB7F8u, 0x18D154u, 0x18D15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D15Cu;
label_18d15c:
    // 0x18d15c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18d15cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18d160: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18d160u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18d164: 0x0  nop
    ctx->pc = 0x18d164u;
    // NOP
    // 0x18d168: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x18d168u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x18d16c: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x18D16Cu;
    {
        const bool branch_taken_0x18d16c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D16Cu;
        // 0x18d170: 0xe6400488  swc1        $f0, 0x488($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1160), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d16c) {
            ctx->pc = 0x18D338u;
            return;
        }
    }
    ctx->pc = 0x18D174u;
}
