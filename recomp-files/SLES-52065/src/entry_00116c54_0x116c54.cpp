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

// Function: entry_00116c54
// Address: 0x116c54 - 0x116c74
void entry_00116c54_0x116c54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116c54_0x116c54");
#endif

    ctx->pc = 0x116c54u;

    // 0x116c54: 0x3c024b80  lui         $v0, 0x4B80
    ctx->pc = 0x116c54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19328 << 16));
    // 0x116c58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x116c58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x116c5c: 0x0  nop
    ctx->pc = 0x116c5cu;
    // NOP
    // 0x116c60: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x116c60u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x116c64: 0x0  nop
    ctx->pc = 0x116c64u;
    // NOP
    // 0x116c68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x116c68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x116c6c: 0x3e00008  jr          $ra
    ctx->pc = 0x116C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116C6Cu;
        // 0x116c70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116C6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116C74u;
}
