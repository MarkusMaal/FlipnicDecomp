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

// Function: WriteFour32BitZeroes
// Address: 0x131d70 - 0x131db0
void WriteFour32BitZeroes_0x131d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WriteFour32BitZeroes_0x131d70");
#endif

    ctx->pc = 0x131d70u;

    // 0x131d70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x131d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x131d74: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x131d74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x131d78: 0x27a30000  addiu       $v1, $sp, 0x0
    ctx->pc = 0x131d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x131d7c: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x131d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x131d80: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x131d80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x131d84: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x131d84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x131d88: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x131d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x131d8c: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x131d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x131d90: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x131d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x131d94: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x131d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131d98: 0xe4830000  swc1        $f3, 0x0($a0)
    ctx->pc = 0x131d98u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x131d9c: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x131d9cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x131da0: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x131da0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x131da4: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x131da4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x131da8: 0x3e00008  jr          $ra
    ctx->pc = 0x131DA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131DA8u;
        // 0x131dac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131DA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131DB0u;
}
