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

// Function: entry_0016d12c
// Address: 0x16d12c - 0x16d1a4
void entry_0016d12c_0x16d12c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016d12c_0x16d12c");
#endif

    switch (ctx->pc) {
        case 0x16d134u: goto label_16d134;
        case 0x16d148u: goto label_16d148;
        case 0x16d160u: goto label_16d160;
        case 0x16d16cu: goto label_16d16c;
        case 0x16d180u: goto label_16d180;
        default: break;
    }

    ctx->pc = 0x16d12cu;

label_16d12c:
    // 0x16d12c: 0xc055c40  jal         func_157100
label_16d130:
    if (ctx->pc == 0x16D130u) {
        ctx->pc = 0x16D130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D12Cu;
        // 0x16d130: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D134u;
        goto label_16d134;
    }
    ctx->pc = 0x16D12Cu;
    SET_GPR_U32(ctx, 31, 0x16D134u);
    ctx->pc = 0x16D130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D12Cu;
    // 0x16d130: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157100u, 0x16D12Cu, 0x16D134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D134u;
label_16d134:
    // 0x16d134: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x16d134u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_16d138:
    // 0x16d138: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16d138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16d13c:
    // 0x16d13c: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x16d13cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_16d140:
    // 0x16d140: 0x320f809  jalr        $t9
label_16d144:
    if (ctx->pc == 0x16D144u) {
        ctx->pc = 0x16D144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D140u;
        // 0x16d144: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D148u;
        goto label_16d148;
    }
    ctx->pc = 0x16D140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16D148u);
        ctx->pc = 0x16D144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D140u;
        // 0x16d144: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D140u, 0x16D148u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16D148u;
label_16d148:
    // 0x16d148: 0xc60001c0  lwc1        $f0, 0x1C0($s0)
    ctx->pc = 0x16d148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16d14c:
    // 0x16d14c: 0xc6210200  lwc1        $f1, 0x200($s1)
    ctx->pc = 0x16d14cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16d150:
    // 0x16d150: 0xc6340224  lwc1        $f20, 0x224($s1)
    ctx->pc = 0x16d150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_16d154:
    // 0x16d154: 0x46000d40  add.s       $f21, $f1, $f0
    ctx->pc = 0x16d154u;
    ctx->f[21] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_16d158:
    // 0x16d158: 0xc0548a8  jal         func_1522A0
label_16d15c:
    if (ctx->pc == 0x16D15Cu) {
        ctx->pc = 0x16D15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D158u;
        // 0x16d15c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D160u;
        goto label_16d160;
    }
    ctx->pc = 0x16D158u;
    SET_GPR_U32(ctx, 31, 0x16D160u);
    ctx->pc = 0x16D15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D158u;
    // 0x16d15c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1522A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1522A0u, 0x16D158u, 0x16D160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D160u;
label_16d160:
    // 0x16d160: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x16d160u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_16d164:
    // 0x16d164: 0xc07edc4  jal         func_1FB710
label_16d168:
    if (ctx->pc == 0x16D168u) {
        ctx->pc = 0x16D168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D164u;
        // 0x16d168: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D16Cu;
        goto label_16d16c;
    }
    ctx->pc = 0x16D164u;
    SET_GPR_U32(ctx, 31, 0x16D16Cu);
    ctx->pc = 0x16D168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D164u;
    // 0x16d168: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB710u, 0x16D164u, 0x16D16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D16Cu;
label_16d16c:
    // 0x16d16c: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x16d16cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_16d170:
    // 0x16d170: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x16d170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_16d174:
    // 0x16d174: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x16d174u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_16d178:
    // 0x16d178: 0xc07eea2  jal         func_1FBA88
label_16d17c:
    if (ctx->pc == 0x16D17Cu) {
        ctx->pc = 0x16D17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D178u;
        // 0x16d17c: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D180u;
        goto label_16d180;
    }
    ctx->pc = 0x16D178u;
    SET_GPR_U32(ctx, 31, 0x16D180u);
    ctx->pc = 0x16D17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D178u;
    // 0x16d17c: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBA88u, 0x16D178u, 0x16D180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D180u;
label_16d180:
    // 0x16d180: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x16d180u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_16d184:
    // 0x16d184: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16d184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16d188:
    // 0x16d188: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16d188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16d18c:
    // 0x16d18c: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x16d18cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_16d190:
    // 0x16d190: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x16d190u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_16d194:
    // 0x16d194: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x16d194u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_16d198:
    // 0x16d198: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x16d198u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_16d19c:
    // 0x16d19c: 0x320f809  jalr        $t9
label_16d1a0:
    if (ctx->pc == 0x16D1A0u) {
        ctx->pc = 0x16D1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D19Cu;
        // 0x16d1a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D1A4u;
        goto label_fallthrough_0x16d19c;
    }
    ctx->pc = 0x16D19Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16D1A4u);
        ctx->pc = 0x16D1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D19Cu;
        // 0x16d1a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D19Cu, 0x16D1A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x16d19c:
    ctx->pc = 0x16D1A4u;
}
