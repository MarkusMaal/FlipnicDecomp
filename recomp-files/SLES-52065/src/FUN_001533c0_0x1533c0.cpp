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

// Function: FUN_001533c0
// Address: 0x1533c0 - 0x153428
void FUN_001533c0_0x1533c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001533c0_0x1533c0");
#endif

    ctx->pc = 0x1533c0u;

    // 0x1533c0: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x1533c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1533c4: 0x3c033eaa  lui         $v1, 0x3EAA
    ctx->pc = 0x1533c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16042 << 16));
    // 0x1533c8: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x1533c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1533cc: 0x3463aaab  ori         $v1, $v1, 0xAAAB
    ctx->pc = 0x1533ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43691);
    // 0x1533d0: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x1533d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1533d4: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1533d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1533d8: 0x0  nop
    ctx->pc = 0x1533d8u;
    // NOP
    // 0x1533dc: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1533dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1533e0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1533e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1533e4: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x1533e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x1533e8: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1533e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1533ec: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x1533ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1533f0: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x1533f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1533f4: 0xc4a00024  lwc1        $f0, 0x24($a1)
    ctx->pc = 0x1533f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1533f8: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1533f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1533fc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1533fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x153400: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x153400u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x153404: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x153404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x153408: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x153408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15340c: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x15340cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x153410: 0xc4a00028  lwc1        $f0, 0x28($a1)
    ctx->pc = 0x153410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x153414: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x153414u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x153418: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x153418u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x15341c: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x15341cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x153420: 0x3e00008  jr          $ra
    ctx->pc = 0x153420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x153424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153420u;
        // 0x153424: 0xe4800008  swc1        $f0, 0x8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x153428u;
}
