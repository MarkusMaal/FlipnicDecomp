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

// Function: FUN_001ed6c0
// Address: 0x1ed6c0 - 0x1ed720
void FUN_001ed6c0_0x1ed6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ed6c0_0x1ed6c0");
#endif

    switch (ctx->pc) {
        case 0x1ed708u: goto label_1ed708;
        default: break;
    }

    ctx->pc = 0x1ed6c0u;

    // 0x1ed6c0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1ed6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1ed6c4: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1ed6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1ed6c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ed6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ed6cc: 0x2442cdb8  addiu       $v0, $v0, -0x3248
    ctx->pc = 0x1ed6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954424));
    // 0x1ed6d0: 0x3c100022  lui         $s0, 0x22
    ctx->pc = 0x1ed6d0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)34 << 16));
    // 0x1ed6d4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1ed6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1ed6d8: 0x8e11a3c4  lw          $s1, -0x5C3C($s0)
    ctx->pc = 0x1ed6d8u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x21A3C4u));
    // 0x1ed6dc: 0xffa50078  sd          $a1, 0x78($sp)
    ctx->pc = 0x1ed6dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 5));
    // 0x1ed6e0: 0xae02a3c4  sw          $v0, -0x5C3C($s0)
    ctx->pc = 0x1ed6e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x21A3C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21A3C4u, _value); } while (0);
    // 0x1ed6e4: 0x27a50078  addiu       $a1, $sp, 0x78
    ctx->pc = 0x1ed6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x1ed6e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ed6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ed6ec: 0xffa60080  sd          $a2, 0x80($sp)
    ctx->pc = 0x1ed6ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 6));
    // 0x1ed6f0: 0xffa70088  sd          $a3, 0x88($sp)
    ctx->pc = 0x1ed6f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 7));
    // 0x1ed6f4: 0xffa80090  sd          $t0, 0x90($sp)
    ctx->pc = 0x1ed6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 8));
    // 0x1ed6f8: 0xffa90098  sd          $t1, 0x98($sp)
    ctx->pc = 0x1ed6f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 9));
    // 0x1ed6fc: 0xffaa00a0  sd          $t2, 0xA0($sp)
    ctx->pc = 0x1ed6fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 10));
    // 0x1ed700: 0xc07b426  jal         func_1ED098
    ctx->pc = 0x1ED700u;
    SET_GPR_U32(ctx, 31, 0x1ED708u);
    ctx->pc = 0x1ED704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED700u;
    // 0x1ed704: 0xffab00a8  sd          $t3, 0xA8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED098u, 0x1ED700u, 0x1ED708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED708u;
label_1ed708:
    // 0x1ed708: 0xae11a3c4  sw          $s1, -0x5C3C($s0)
    ctx->pc = 0x1ed708u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294943684), GPR_U32(ctx, 17));
    // 0x1ed70c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ed70cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ed710: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1ed710u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ed714: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ed714u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ed718: 0x3e00008  jr          $ra
    ctx->pc = 0x1ED718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED718u;
        // 0x1ed71c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED718u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ED720u;
}
