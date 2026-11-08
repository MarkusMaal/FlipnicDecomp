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

// Function: entry_001d6560
// Address: 0x1d6560 - 0x1d6588
void entry_001d6560_0x1d6560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d6560_0x1d6560");
#endif

    ctx->pc = 0x1d6560u;

    // 0x1d6560: 0xdfb00090  ld          $s0, 0x90($sp)
    ctx->pc = 0x1d6560u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d6564: 0xdfb10098  ld          $s1, 0x98($sp)
    ctx->pc = 0x1d6564u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1d6568: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x1d6568u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1d656c: 0xdfb300a8  ld          $s3, 0xA8($sp)
    ctx->pc = 0x1d656cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1d6570: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x1d6570u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1d6574: 0xdfb500b8  ld          $s5, 0xB8($sp)
    ctx->pc = 0x1d6574u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1d6578: 0xdfb600c0  ld          $s6, 0xC0($sp)
    ctx->pc = 0x1d6578u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d657c: 0xdfbf00c8  ld          $ra, 0xC8($sp)
    ctx->pc = 0x1d657cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1d6580: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6580u;
        // 0x1d6584: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6588u;
}
