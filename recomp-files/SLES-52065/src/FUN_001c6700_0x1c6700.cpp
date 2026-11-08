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

// Function: FUN_001c6700
// Address: 0x1c6700 - 0x1c6734
void FUN_001c6700_0x1c6700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c6700_0x1c6700");
#endif

    switch (ctx->pc) {
        case 0x1c6714u: goto label_1c6714;
        default: break;
    }

    ctx->pc = 0x1c6700u;

    // 0x1c6700: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c6700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c6704: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c6704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c6708: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c6708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c670c: 0xc06dbf8  jal         func_1B6FE0
    ctx->pc = 0x1C670Cu;
    SET_GPR_U32(ctx, 31, 0x1C6714u);
    ctx->pc = 0x1C6710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C670Cu;
    // 0x1c6710: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FE0u, 0x1C670Cu, 0x1C6714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6714u;
label_1c6714:
    // 0x1c6714: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1c6714u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1c6718: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c6718u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c671c: 0x2463bc20  addiu       $v1, $v1, -0x43E0
    ctx->pc = 0x1c671cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949920));
    // 0x1c6720: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1c6720u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1c6724: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c6724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6728: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c6728u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c672c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C672Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C672Cu;
        // 0x1c6730: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C672Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6734u;
}
