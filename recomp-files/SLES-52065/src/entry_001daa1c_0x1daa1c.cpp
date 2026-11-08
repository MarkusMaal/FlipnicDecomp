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

// Function: entry_001daa1c
// Address: 0x1daa1c - 0x1daa4c
void entry_001daa1c_0x1daa1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001daa1c_0x1daa1c");
#endif

    ctx->pc = 0x1daa1cu;

    // 0x1daa1c: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x1daa1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1daa20: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x1daa20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1daa24: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x1daa24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1daa28: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x1daa28u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1daa2c: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x1daa2cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1daa30: 0xdfb500a8  ld          $s5, 0xA8($sp)
    ctx->pc = 0x1daa30u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1daa34: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x1daa34u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1daa38: 0xdfb700b8  ld          $s7, 0xB8($sp)
    ctx->pc = 0x1daa38u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1daa3c: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x1daa3cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1daa40: 0xdfbf00c8  ld          $ra, 0xC8($sp)
    ctx->pc = 0x1daa40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1daa44: 0x3e00008  jr          $ra
    ctx->pc = 0x1DAA44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DAA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAA44u;
        // 0x1daa48: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DAA44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DAA4Cu;
}
