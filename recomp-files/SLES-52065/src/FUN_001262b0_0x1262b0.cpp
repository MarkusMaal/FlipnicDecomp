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

// Function: FUN_001262b0
// Address: 0x1262b0 - 0x126310
void FUN_001262b0_0x1262b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001262b0_0x1262b0");
#endif

    ctx->pc = 0x1262b0u;

    // 0x1262b0: 0x78a30070  lq          $v1, 0x70($a1)
    ctx->pc = 0x1262b0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 112)));
    // 0x1262b4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1262b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1262b8: 0x27a60000  addiu       $a2, $sp, 0x0
    ctx->pc = 0x1262b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x1262bc: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x1262bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1262c0: 0x27a90024  addiu       $t1, $sp, 0x24
    ctx->pc = 0x1262c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x1262c4: 0x27a80020  addiu       $t0, $sp, 0x20
    ctx->pc = 0x1262c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1262c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1262c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1262cc: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x1262ccu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x1262d0: 0x78a30080  lq          $v1, 0x80($a1)
    ctx->pc = 0x1262d0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x1262d4: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x1262d4u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x1262d8: 0xc4a00090  lwc1        $f0, 0x90($a1)
    ctx->pc = 0x1262d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1262dc: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x1262dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x1262e0: 0xc4a00060  lwc1        $f0, 0x60($a1)
    ctx->pc = 0x1262e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1262e4: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x1262e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x1262e8: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x1262e8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1262ec: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x1262ecu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x1262f0: 0x78e30000  lq          $v1, 0x0($a3)
    ctx->pc = 0x1262f0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1262f4: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x1262f4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
    // 0x1262f8: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x1262f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1262fc: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x1262fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x126300: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x126300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x126304: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x126304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x126308: 0x3e00008  jr          $ra
    ctx->pc = 0x126308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12630Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126308u;
        // 0x12630c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126310u;
}
