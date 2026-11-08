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

// Function: entry_001287f8
// Address: 0x1287f8 - 0x12888c
void entry_001287f8_0x1287f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001287f8_0x1287f8");
#endif

    switch (ctx->pc) {
        case 0x128800u: goto label_128800;
        case 0x128810u: goto label_128810;
        case 0x128820u: goto label_128820;
        case 0x128864u: goto label_128864;
        case 0x128884u: goto label_128884;
        default: break;
    }

    ctx->pc = 0x1287f8u;

    // 0x1287f8: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x1287F8u;
    SET_GPR_U32(ctx, 31, 0x128800u);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x1287F8u, 0x128800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128800u;
label_128800:
    // 0x128800: 0x8e8500a8  lw          $a1, 0xA8($s4)
    ctx->pc = 0x128800u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 168)));
    // 0x128804: 0xc68c00a4  lwc1        $f12, 0xA4($s4)
    ctx->pc = 0x128804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x128808: 0xc04a038  jal         func_1280E0
    ctx->pc = 0x128808u;
    SET_GPR_U32(ctx, 31, 0x128810u);
    ctx->pc = 0x12880Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128808u;
    // 0x12880c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1280E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1280E0u, 0x128808u, 0x128810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128810u;
label_128810:
    // 0x128810: 0xc68c00a4  lwc1        $f12, 0xA4($s4)
    ctx->pc = 0x128810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x128814: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x128814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128818: 0xc049b30  jal         func_126CC0
    ctx->pc = 0x128818u;
    SET_GPR_U32(ctx, 31, 0x128820u);
    ctx->pc = 0x12881Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128818u;
    // 0x12881c: 0x27a40160  addiu       $a0, $sp, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126CC0u, 0x128818u, 0x128820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128820u;
label_128820:
    // 0x128820: 0x7ba30160  lq          $v1, 0x160($sp)
    ctx->pc = 0x128820u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x128824: 0x27b100a0  addiu       $s1, $sp, 0xA0
    ctx->pc = 0x128824u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x128828: 0x7ba20170  lq          $v0, 0x170($sp)
    ctx->pc = 0x128828u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x12882c: 0x27b500b0  addiu       $s5, $sp, 0xB0
    ctx->pc = 0x12882cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x128830: 0x27b200b4  addiu       $s2, $sp, 0xB4
    ctx->pc = 0x128830u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x128834: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x128834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
    // 0x128838: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x128838u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    // 0x12883c: 0xc7a00180  lwc1        $f0, 0x180($sp)
    ctx->pc = 0x12883cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128840: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x128840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x128844: 0xc7a00184  lwc1        $f0, 0x184($sp)
    ctx->pc = 0x128844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128848: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x128848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x12884c: 0x8e820130  lw          $v0, 0x130($s4)
    ctx->pc = 0x12884cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 304)));
    // 0x128850: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x128850u;
    {
        const bool branch_taken_0x128850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x128850) {
            ctx->pc = 0x12888Cu;
            return;
        }
    }
    ctx->pc = 0x128858u;
    // 0x128858: 0x8e84013c  lw          $a0, 0x13C($s4)
    ctx->pc = 0x128858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 316)));
    // 0x12885c: 0xc04c6f4  jal         func_131BD0
    ctx->pc = 0x12885Cu;
    SET_GPR_U32(ctx, 31, 0x128864u);
    ctx->pc = 0x128860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12885Cu;
    // 0x128860: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131BD0u, 0x12885Cu, 0x128864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128864u;
label_128864:
    // 0x128864: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x128864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128868: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x128868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12886c: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x12886cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x128870: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x128870u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x128874: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x128874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x128878: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x128878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x12887c: 0xc04a2e8  jal         func_128BA0
    ctx->pc = 0x12887Cu;
    SET_GPR_U32(ctx, 31, 0x128884u);
    ctx->pc = 0x128880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12887Cu;
    // 0x128880: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128BA0u, 0x12887Cu, 0x128884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128884u;
label_128884:
    // 0x128884: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x128884u;
    {
        const bool branch_taken_0x128884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128884u;
        // 0x128888: 0xae800130  sw          $zero, 0x130($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 304), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128884) {
            ctx->pc = 0x1288A4u;
            return;
        }
    }
    ctx->pc = 0x12888Cu;
}
