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

// Function: entry_00188e9c
// Address: 0x188e9c - 0x188eec
void entry_00188e9c_0x188e9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188e9c_0x188e9c");
#endif

    ctx->pc = 0x188e9cu;

    // 0x188e9c: 0x0  nop
    ctx->pc = 0x188e9cu;
    // NOP
    // 0x188ea0: 0x8fa300cc  lw          $v1, 0xCC($sp)
    ctx->pc = 0x188ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x188ea4: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x188ea4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x188ea8: 0x1460feb2  bnez        $v1, . + 4 + (-0x14E << 2)
    ctx->pc = 0x188EA8u;
    {
        const bool branch_taken_0x188ea8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x188ea8) {
            ctx->pc = 0x188974u;
            return;
        }
    }
    ctx->pc = 0x188EB0u;
    // 0x188eb0: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x188eb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x188eb4: 0xc7b80030  lwc1        $f24, 0x30($sp)
    ctx->pc = 0x188eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x188eb8: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x188eb8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x188ebc: 0xc7b7002c  lwc1        $f23, 0x2C($sp)
    ctx->pc = 0x188ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x188ec0: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x188ec0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x188ec4: 0xc7b60028  lwc1        $f22, 0x28($sp)
    ctx->pc = 0x188ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x188ec8: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x188ec8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x188ecc: 0xc7b50024  lwc1        $f21, 0x24($sp)
    ctx->pc = 0x188eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x188ed0: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x188ed0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x188ed4: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x188ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x188ed8: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x188ed8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x188edc: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x188edcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x188ee0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x188ee0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x188ee4: 0x3e00008  jr          $ra
    ctx->pc = 0x188EE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188EE4u;
        // 0x188ee8: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188EE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x188EECu;
}
