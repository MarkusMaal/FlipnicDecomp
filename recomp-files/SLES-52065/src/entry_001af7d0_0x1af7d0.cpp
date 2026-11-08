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

// Function: entry_001af7d0
// Address: 0x1af7d0 - 0x1af850
void entry_001af7d0_0x1af7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001af7d0_0x1af7d0");
#endif

    switch (ctx->pc) {
        case 0x1af7e4u: goto label_1af7e4;
        default: break;
    }

    ctx->pc = 0x1af7d0u;

label_1af7d0:
    // 0x1af7d0: 0x26470001  addiu       $a3, $s2, 0x1
    ctx->pc = 0x1af7d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1af7d4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1af7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1af7d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1af7d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af7dc: 0xc04b7dc  jal         func_12DF70
    ctx->pc = 0x1AF7DCu;
    SET_GPR_U32(ctx, 31, 0x1AF7E4u);
    ctx->pc = 0x1AF7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF7DCu;
    // 0x1af7e0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DF70u, 0x1AF7DCu, 0x1AF7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF7E4u;
label_1af7e4:
    // 0x1af7e4: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1af7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1af7e8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1af7e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1af7ec: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x1af7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1af7f0: 0x2131821  addu        $v1, $s0, $s3
    ctx->pc = 0x1af7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x1af7f4: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x1af7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1af7f8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1af7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1af7fc: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x1af7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1af800: 0x2a420040  slti        $v0, $s2, 0x40
    ctx->pc = 0x1af800u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x1af804: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x1af804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1af808: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1af808u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x1af80c: 0xe4830000  swc1        $f3, 0x0($a0)
    ctx->pc = 0x1af80cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1af810: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x1af810u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1af814: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x1af814u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1af818: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x1af818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1af81c: 0xc4a30010  lwc1        $f3, 0x10($a1)
    ctx->pc = 0x1af81cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1af820: 0xc4a20014  lwc1        $f2, 0x14($a1)
    ctx->pc = 0x1af820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1af824: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x1af824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1af828: 0xc4a0001c  lwc1        $f0, 0x1C($a1)
    ctx->pc = 0x1af828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1af82c: 0xe4830010  swc1        $f3, 0x10($a0)
    ctx->pc = 0x1af82cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x1af830: 0xe4820014  swc1        $f2, 0x14($a0)
    ctx->pc = 0x1af830u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x1af834: 0xe4810018  swc1        $f1, 0x18($a0)
    ctx->pc = 0x1af834u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x1af838: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x1af838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x1af83c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x1af83cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1af840: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x1AF840u;
    {
        const bool branch_taken_0x1af840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF840u;
        // 0x1af844: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af840) {
            ctx->pc = 0x1AF7D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1af7d0;
        }
    }
    ctx->pc = 0x1AF848u;
    // 0x1af848: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1af848u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af84c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1af84cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1af850u;
}
