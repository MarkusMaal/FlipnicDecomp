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

// Function: FUN_00144f40
// Address: 0x144f40 - 0x144fc8
void FUN_00144f40_0x144f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00144f40_0x144f40");
#endif

    ctx->pc = 0x144f40u;

    // 0x144f40: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x144f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x144f44: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x144f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x144f48: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x144f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x144f4c: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x144f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x144f50: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x144f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144f54: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x144f54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x144f58: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x144f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x144f5c: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x144f5cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x144f60: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x144f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x144f64: 0x73040  sll         $a2, $a3, 1
    ctx->pc = 0x144f64u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x144f68: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x144f68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x144f6c: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x144f6cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x144f70: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x144f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x144f74: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x144f74u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x144f78: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x144f78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x144f7c: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x144f7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x144f80: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x144f80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x144f84: 0xc4a30010  lwc1        $f3, 0x10($a1)
    ctx->pc = 0x144f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x144f88: 0xc4a20014  lwc1        $f2, 0x14($a1)
    ctx->pc = 0x144f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x144f8c: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x144f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x144f90: 0xc4a0001c  lwc1        $f0, 0x1C($a1)
    ctx->pc = 0x144f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144f94: 0xe4630010  swc1        $f3, 0x10($v1)
    ctx->pc = 0x144f94u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x144f98: 0xe4620014  swc1        $f2, 0x14($v1)
    ctx->pc = 0x144f98u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x144f9c: 0xe4610018  swc1        $f1, 0x18($v1)
    ctx->pc = 0x144f9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x144fa0: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x144fa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
    // 0x144fa4: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x144fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144fa8: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x144fa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x144fac: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x144facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x144fb0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x144fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x144fb4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x144fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x144fb8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x144fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x144fbc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x144fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x144fc0: 0x3e00008  jr          $ra
    ctx->pc = 0x144FC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144FC0u;
        // 0x144fc4: 0xac830008  sw          $v1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144FC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x144FC8u;
}
