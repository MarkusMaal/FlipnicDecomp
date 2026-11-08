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

// Function: entry_001b5e38
// Address: 0x1b5e38 - 0x1b5e7c
void entry_001b5e38_0x1b5e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b5e38_0x1b5e38");
#endif

    switch (ctx->pc) {
        case 0x1b5e4cu: goto label_1b5e4c;
        default: break;
    }

    ctx->pc = 0x1b5e38u;

    // 0x1b5e38: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1b5e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1b5e3c: 0x27a5004c  addiu       $a1, $sp, 0x4C
    ctx->pc = 0x1b5e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1b5e40: 0x27a60048  addiu       $a2, $sp, 0x48
    ctx->pc = 0x1b5e40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1b5e44: 0xc06dba0  jal         func_1B6E80
    ctx->pc = 0x1B5E44u;
    SET_GPR_U32(ctx, 31, 0x1B5E4Cu);
    ctx->pc = 0x1B5E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5E44u;
    // 0x1b5e48: 0x2444001c  addiu       $a0, $v0, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6E80u, 0x1B5E44u, 0x1B5E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5E4Cu;
label_1b5e4c:
    // 0x1b5e4c: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1b5e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1b5e50: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b5e50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b5e54: 0xac22f268  sw          $v0, -0xD98($at)
    ctx->pc = 0x1b5e54u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F268u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F268u, _value); } while (0);
    // 0x1b5e58: 0xa0400034  sb          $zero, 0x34($v0)
    ctx->pc = 0x1b5e58u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 52), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b5e5c: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1b5e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1b5e60: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x1b5e60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x1b5e64: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1b5e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1b5e68: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x1b5e68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x1b5e6c: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1b5e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1b5e70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b5e70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b5e74: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5E74u;
        // 0x1b5e78: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5E74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B5E7Cu;
}
