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

// Function: entry_001f0bc0
// Address: 0x1f0bc0 - 0x1f0bec
void entry_001f0bc0_0x1f0bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f0bc0_0x1f0bc0");
#endif

    ctx->pc = 0x1f0bc0u;

    // 0x1f0bc0: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x1f0bc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1f0bc4: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x1f0bc4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1f0bc8: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x1f0bc8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f0bcc: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x1f0bccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1f0bd0: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1f0bd0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f0bd4: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1f0bd4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f0bd8: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1f0bd8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f0bdc: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1f0bdcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f0be0: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1f0be0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f0be4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F0BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0BE4u;
        // 0x1f0be8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0BE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F0BECu;
}
