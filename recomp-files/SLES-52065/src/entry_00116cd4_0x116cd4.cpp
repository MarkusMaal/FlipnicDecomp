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

// Function: entry_00116cd4
// Address: 0x116cd4 - 0x116cf8
void entry_00116cd4_0x116cd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116cd4_0x116cd4");
#endif

    ctx->pc = 0x116cd4u;

    // 0x116cd4: 0x3c024b00  lui         $v0, 0x4B00
    ctx->pc = 0x116cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19200 << 16));
    // 0x116cd8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x116cd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x116cdc: 0x0  nop
    ctx->pc = 0x116cdcu;
    // NOP
    // 0x116ce0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x116ce0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x116ce4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x116ce4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x116ce8: 0x0  nop
    ctx->pc = 0x116ce8u;
    // NOP
    // 0x116cec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x116cecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x116cf0: 0x3e00008  jr          $ra
    ctx->pc = 0x116CF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116CF0u;
        // 0x116cf4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116CF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116CF8u;
}
