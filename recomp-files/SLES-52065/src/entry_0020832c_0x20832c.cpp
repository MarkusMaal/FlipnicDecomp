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

// Function: entry_0020832c
// Address: 0x20832c - 0x208360
void entry_0020832c_0x20832c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020832c_0x20832c");
#endif

    switch (ctx->pc) {
        case 0x208334u: goto label_208334;
        default: break;
    }

    ctx->pc = 0x20832cu;

    // 0x20832c: 0xc081efa  jal         func_207BE8
    ctx->pc = 0x20832Cu;
    SET_GPR_U32(ctx, 31, 0x208334u);
    ctx->pc = 0x207BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207BE8u, 0x20832Cu, 0x208334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208334u;
label_208334:
    // 0x208334: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x208334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x208338: 0xdfb700e0  ld          $s7, 0xE0($sp)
    ctx->pc = 0x208338u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x20833c: 0xdfb600d0  ld          $s6, 0xD0($sp)
    ctx->pc = 0x20833cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x208340: 0xdfb500c0  ld          $s5, 0xC0($sp)
    ctx->pc = 0x208340u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x208344: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x208344u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x208348: 0xdfb300a0  ld          $s3, 0xA0($sp)
    ctx->pc = 0x208348u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x20834c: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x20834cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x208350: 0xdfb10080  ld          $s1, 0x80($sp)
    ctx->pc = 0x208350u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x208354: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x208354u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x208358: 0x3e00008  jr          $ra
    ctx->pc = 0x208358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20835Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208358u;
        // 0x20835c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208360u;
}
