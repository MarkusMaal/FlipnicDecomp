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

// Function: entry_0014d160
// Address: 0x14d160 - 0x14d190
void entry_0014d160_0x14d160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d160_0x14d160");
#endif

    ctx->pc = 0x14d160u;

    // 0x14d160: 0x2511821  addu        $v1, $s2, $s1
    ctx->pc = 0x14d160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x14d164: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x14d164u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x14d168: 0x8c6300e8  lw          $v1, 0xE8($v1)
    ctx->pc = 0x14d168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 232)));
    // 0x14d16c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14d16cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14d170: 0xe4740000  swc1        $f20, 0x0($v1)
    ctx->pc = 0x14d170u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x14d174: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x14d174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14d178: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x14d178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x14d17c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x14d17cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14d180: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x14d180u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14d184: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14d184u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14d188: 0x3e00008  jr          $ra
    ctx->pc = 0x14D188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D188u;
        // 0x14d18c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D190u;
}
