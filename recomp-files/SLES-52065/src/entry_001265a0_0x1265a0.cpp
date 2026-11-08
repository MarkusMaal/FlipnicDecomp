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

// Function: entry_001265a0
// Address: 0x1265a0 - 0x1265d0
void entry_001265a0_0x1265a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001265a0_0x1265a0");
#endif

    switch (ctx->pc) {
        case 0x1265b8u: goto label_1265b8;
        default: break;
    }

    ctx->pc = 0x1265a0u;

    // 0x1265a0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1265a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1265a4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1265a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1265a8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1265a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1265ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1265acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1265b0: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x1265B0u;
    SET_GPR_U32(ctx, 31, 0x1265B8u);
    ctx->pc = 0x1265B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1265B0u;
    // 0x1265b4: 0x24450080  addiu       $a1, $v0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x1265B0u, 0x1265B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1265B8u;
label_1265b8:
    // 0x1265b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1265b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1265bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1265bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1265c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1265C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1265C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1265C0u;
        // 0x1265c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1265C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1265C8u;
    // 0x1265c8: 0x0  nop
    ctx->pc = 0x1265c8u;
    // NOP
    // 0x1265cc: 0x0  nop
    ctx->pc = 0x1265ccu;
    // NOP
    ctx->pc = 0x1265d0u;
}
