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

// Function: default
// Address: 0x1d8a90 - 0x1d8ab8
void ps2_default_0x1d8a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x1d8a90");
#endif

    ctx->pc = 0x1d8a90u;

    // 0x1d8a90: 0xdfb300d8  ld          $s3, 0xD8($sp)
    ctx->pc = 0x1d8a90u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1d8a94: 0xdfb400e0  ld          $s4, 0xE0($sp)
    ctx->pc = 0x1d8a94u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1d8a98: 0xdfb500e8  ld          $s5, 0xE8($sp)
    ctx->pc = 0x1d8a98u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1d8a9c: 0xdfb600f0  ld          $s6, 0xF0($sp)
    ctx->pc = 0x1d8a9cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d8aa0: 0xdfb700f8  ld          $s7, 0xF8($sp)
    ctx->pc = 0x1d8aa0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1d8aa4: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x1d8aa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1d8aa8: 0xc7b50110  lwc1        $f21, 0x110($sp)
    ctx->pc = 0x1d8aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1d8aac: 0xc7b40108  lwc1        $f20, 0x108($sp)
    ctx->pc = 0x1d8aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d8ab0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8AB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8AB0u;
        // 0x1d8ab4: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8AB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8AB8u;
}
