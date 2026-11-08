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

// Function: entry_001bef98
// Address: 0x1bef98 - 0x1bf048
void entry_001bef98_0x1bef98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bef98_0x1bef98");
#endif

    switch (ctx->pc) {
        case 0x1befb0u: goto label_1befb0;
        case 0x1befccu: goto label_1befcc;
        case 0x1befe8u: goto label_1befe8;
        case 0x1bf004u: goto label_1bf004;
        case 0x1bf020u: goto label_1bf020;
        case 0x1bf03cu: goto label_1bf03c;
        default: break;
    }

    ctx->pc = 0x1bef98u;

    // 0x1bef98: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x1bef98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bef9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bef9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1befa0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1befa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1befa4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1befa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1befa8: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1BEFA8u;
    SET_GPR_U32(ctx, 31, 0x1BEFB0u);
    ctx->pc = 0x1BEFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEFA8u;
    // 0x1befac: 0x46150502  mul.s       $f20, $f0, $f21 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1BEFA8u, 0x1BEFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEFB0u;
label_1befb0:
    // 0x1befb0: 0xe45400a8  swc1        $f20, 0xA8($v0)
    ctx->pc = 0x1befb0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 168), bits); }
    // 0x1befb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1befb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1befb8: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x1befb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1befbc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1befbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1befc0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1befc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1befc4: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1BEFC4u;
    SET_GPR_U32(ctx, 31, 0x1BEFCCu);
    ctx->pc = 0x1BEFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEFC4u;
    // 0x1befc8: 0x46150502  mul.s       $f20, $f0, $f21 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1BEFC4u, 0x1BEFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEFCCu;
label_1befcc:
    // 0x1befcc: 0xe45400a8  swc1        $f20, 0xA8($v0)
    ctx->pc = 0x1befccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 168), bits); }
    // 0x1befd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1befd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1befd4: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x1befd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1befd8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1befd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1befdc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1befdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1befe0: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1BEFE0u;
    SET_GPR_U32(ctx, 31, 0x1BEFE8u);
    ctx->pc = 0x1BEFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEFE0u;
    // 0x1befe4: 0x46150502  mul.s       $f20, $f0, $f21 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1BEFE0u, 0x1BEFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEFE8u;
label_1befe8:
    // 0x1befe8: 0xe45400a8  swc1        $f20, 0xA8($v0)
    ctx->pc = 0x1befe8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 168), bits); }
    // 0x1befec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1befecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1beff0: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x1beff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1beff4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1beff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1beff8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1beff8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1beffc: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1BEFFCu;
    SET_GPR_U32(ctx, 31, 0x1BF004u);
    ctx->pc = 0x1BF000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEFFCu;
    // 0x1bf000: 0x46150502  mul.s       $f20, $f0, $f21 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1BEFFCu, 0x1BF004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF004u;
label_1bf004:
    // 0x1bf004: 0xe45400a8  swc1        $f20, 0xA8($v0)
    ctx->pc = 0x1bf004u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 168), bits); }
    // 0x1bf008: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bf008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf00c: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x1bf00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bf010: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1bf010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1bf014: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1bf014u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bf018: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1BF018u;
    SET_GPR_U32(ctx, 31, 0x1BF020u);
    ctx->pc = 0x1BF01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF018u;
    // 0x1bf01c: 0x46150502  mul.s       $f20, $f0, $f21 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1BF018u, 0x1BF020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF020u;
label_1bf020:
    // 0x1bf020: 0xe45400a8  swc1        $f20, 0xA8($v0)
    ctx->pc = 0x1bf020u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 168), bits); }
    // 0x1bf024: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bf024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf028: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x1bf028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bf02c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1bf02cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1bf030: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1bf030u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bf034: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1BF034u;
    SET_GPR_U32(ctx, 31, 0x1BF03Cu);
    ctx->pc = 0x1BF038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF034u;
    // 0x1bf038: 0x46150502  mul.s       $f20, $f0, $f21 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1BF034u, 0x1BF03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF03Cu;
label_1bf03c:
    // 0x1bf03c: 0xe45400a8  swc1        $f20, 0xA8($v0)
    ctx->pc = 0x1bf03cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 168), bits); }
    // 0x1bf040: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1bf040u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf044: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1bf044u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1bf048u;
}
