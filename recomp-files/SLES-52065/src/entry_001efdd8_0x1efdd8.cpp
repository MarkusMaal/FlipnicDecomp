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

// Function: entry_001efdd8
// Address: 0x1efdd8 - 0x1efe00
void entry_001efdd8_0x1efdd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001efdd8_0x1efdd8");
#endif

    ctx->pc = 0x1efdd8u;

    // 0x1efdd8: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1efdd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1efddc: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x1efddcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1efde0: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x1efde0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1efde4: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1efde4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1efde8: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1efde8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1efdec: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1efdecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1efdf0: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1efdf0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1efdf4: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1efdf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1efdf8: 0x3e00008  jr          $ra
    ctx->pc = 0x1EFDF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EFDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFDF8u;
        // 0x1efdfc: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EFDF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EFE00u;
}
