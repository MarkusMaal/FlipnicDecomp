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

// Function: entry_001fe19c
// Address: 0x1fe19c - 0x1fe1c4
void entry_001fe19c_0x1fe19c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fe19c_0x1fe19c");
#endif

    ctx->pc = 0x1fe19cu;

    // 0x1fe19c: 0xdfb700e0  ld          $s7, 0xE0($sp)
    ctx->pc = 0x1fe19cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1fe1a0: 0xdfb600d0  ld          $s6, 0xD0($sp)
    ctx->pc = 0x1fe1a0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1fe1a4: 0xdfb500c0  ld          $s5, 0xC0($sp)
    ctx->pc = 0x1fe1a4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1fe1a8: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x1fe1a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1fe1ac: 0xdfb300a0  ld          $s3, 0xA0($sp)
    ctx->pc = 0x1fe1acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1fe1b0: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x1fe1b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1fe1b4: 0xdfb10080  ld          $s1, 0x80($sp)
    ctx->pc = 0x1fe1b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1fe1b8: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x1fe1b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1fe1bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE1BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE1BCu;
        // 0x1fe1c0: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE1BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE1C4u;
}
