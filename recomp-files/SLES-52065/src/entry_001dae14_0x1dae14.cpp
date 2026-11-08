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

// Function: entry_001dae14
// Address: 0x1dae14 - 0x1dae44
void entry_001dae14_0x1dae14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dae14_0x1dae14");
#endif

    ctx->pc = 0x1dae14u;

    // 0x1dae14: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x1dae14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1dae18: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x1dae18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1dae1c: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x1dae1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1dae20: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x1dae20u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1dae24: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x1dae24u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1dae28: 0xdfb500a8  ld          $s5, 0xA8($sp)
    ctx->pc = 0x1dae28u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1dae2c: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x1dae2cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dae30: 0xdfb700b8  ld          $s7, 0xB8($sp)
    ctx->pc = 0x1dae30u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1dae34: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x1dae34u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1dae38: 0xdfbf00c8  ld          $ra, 0xC8($sp)
    ctx->pc = 0x1dae38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1dae3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DAE3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DAE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAE3Cu;
        // 0x1dae40: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DAE3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DAE44u;
}
