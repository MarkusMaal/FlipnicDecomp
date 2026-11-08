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

// Function: entry_001d616c
// Address: 0x1d616c - 0x1d6194
void entry_001d616c_0x1d616c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d616c_0x1d616c");
#endif

    ctx->pc = 0x1d616cu;

    // 0x1d616c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d616cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6170: 0xdfb100d8  ld          $s1, 0xD8($sp)
    ctx->pc = 0x1d6170u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1d6174: 0xdfb200e0  ld          $s2, 0xE0($sp)
    ctx->pc = 0x1d6174u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1d6178: 0xdfb300e8  ld          $s3, 0xE8($sp)
    ctx->pc = 0x1d6178u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1d617c: 0xdfb400f0  ld          $s4, 0xF0($sp)
    ctx->pc = 0x1d617cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d6180: 0xdfb500f8  ld          $s5, 0xF8($sp)
    ctx->pc = 0x1d6180u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1d6184: 0xdfb60100  ld          $s6, 0x100($sp)
    ctx->pc = 0x1d6184u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1d6188: 0xdfbf0108  ld          $ra, 0x108($sp)
    ctx->pc = 0x1d6188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1d618c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D618Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D618Cu;
        // 0x1d6190: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D618Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6194u;
}
