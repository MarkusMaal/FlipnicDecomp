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

// Function: entry_001fafbc
// Address: 0x1fafbc - 0x1fafec
void entry_001fafbc_0x1fafbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fafbc_0x1fafbc");
#endif

    ctx->pc = 0x1fafbcu;

    // 0x1fafbc: 0xdfbe01e0  ld          $fp, 0x1E0($sp)
    ctx->pc = 0x1fafbcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1fafc0: 0xdfb701d0  ld          $s7, 0x1D0($sp)
    ctx->pc = 0x1fafc0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1fafc4: 0xdfb601c0  ld          $s6, 0x1C0($sp)
    ctx->pc = 0x1fafc4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1fafc8: 0xdfb501b0  ld          $s5, 0x1B0($sp)
    ctx->pc = 0x1fafc8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1fafcc: 0xdfb401a0  ld          $s4, 0x1A0($sp)
    ctx->pc = 0x1fafccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1fafd0: 0xdfb30190  ld          $s3, 0x190($sp)
    ctx->pc = 0x1fafd0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1fafd4: 0xdfb20180  ld          $s2, 0x180($sp)
    ctx->pc = 0x1fafd4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1fafd8: 0xdfb10170  ld          $s1, 0x170($sp)
    ctx->pc = 0x1fafd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1fafdc: 0xdfb00160  ld          $s0, 0x160($sp)
    ctx->pc = 0x1fafdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1fafe0: 0xc7b40200  lwc1        $f20, 0x200($sp)
    ctx->pc = 0x1fafe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1fafe4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FAFE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FAFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAFE4u;
        // 0x1fafe8: 0x27bd0210  addiu       $sp, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAFE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FAFECu;
}
