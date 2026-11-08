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

// Function: FUN_001f85f0
// Address: 0x1f85f0 - 0x1f8624
void FUN_001f85f0_0x1f85f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f85f0_0x1f85f0");
#endif

    switch (ctx->pc) {
        case 0x1f8600u: goto label_1f8600;
        default: break;
    }

    ctx->pc = 0x1f85f0u;

    // 0x1f85f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f85f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f85f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f85f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f85f8: 0xc07e132  jal         func_1F84C8
    ctx->pc = 0x1F85F8u;
    SET_GPR_U32(ctx, 31, 0x1F8600u);
    ctx->pc = 0x1F85FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F85F8u;
    // 0x1f85fc: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F84C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F84C8u, 0x1F85F8u, 0x1F8600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8600u;
label_1f8600:
    // 0x1f8600: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f8600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8604: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8604u;
    {
        const bool branch_taken_0x1f8604 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8604u;
        // 0x1f8608: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8604) {
            ctx->pc = 0x1F8618u;
            goto label_1f8618;
        }
    }
    ctx->pc = 0x1F860Cu;
    // 0x1f860c: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1f860cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1f8610: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x1f8610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1f8614: 0xac62d6b8  sw          $v0, -0x2948($v1)
    ctx->pc = 0x1f8614u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x21D6B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21D6B8u, _value); } while (0);
label_1f8618:
    // 0x1f8618: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1f8618u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f861c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F861Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F861Cu;
        // 0x1f8620: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F861Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F8624u;
}
