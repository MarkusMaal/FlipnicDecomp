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

// Function: entry_001d4994
// Address: 0x1d4994 - 0x1d49c0
void entry_001d4994_0x1d4994(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4994_0x1d4994");
#endif

    ctx->pc = 0x1d4994u;

    // 0x1d4994: 0x5280ffa6  beql        $s4, $zero, . + 4 + (-0x5A << 2)
    ctx->pc = 0x1D4994u;
    {
        const bool branch_taken_0x1d4994 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4994) {
            ctx->pc = 0x1D4998u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4994u;
            // 0x1d4998: 0x8e230228  lw          $v1, 0x228($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 552)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4830u;
            return;
        }
    }
    ctx->pc = 0x1D499Cu;
    // 0x1d499c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d499cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d49a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d49a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d49a4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d49a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d49a8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d49a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d49ac: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1d49acu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d49b0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1d49b0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d49b4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1d49b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d49b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D49B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D49BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D49B8u;
        // 0x1d49bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D49B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D49C0u;
}
