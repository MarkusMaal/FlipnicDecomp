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

// Function: FUN_0010f360
// Address: 0x10f360 - 0x10f3b0
void FUN_0010f360_0x10f360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010f360_0x10f360");
#endif

    switch (ctx->pc) {
        case 0x10f37cu: goto label_10f37c;
        case 0x10f39cu: goto label_10f39c;
        default: break;
    }

    ctx->pc = 0x10f360u;

    // 0x10f360: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10f360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10f364: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10f364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10f368: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10f368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10f36c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10f36cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10f370: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10f370u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f374: 0xc059720  jal         func_165C80
    ctx->pc = 0x10F374u;
    SET_GPR_U32(ctx, 31, 0x10F37Cu);
    ctx->pc = 0x10F378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F374u;
    // 0x10f378: 0xa0820220  sb          $v0, 0x220($a0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 4), 544), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165C80u, 0x10F374u, 0x10F37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F37Cu;
label_10f37c:
    // 0x10f37c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x10f37cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10f380: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x10f380u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10f384: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10f384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10f388: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10f388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f38c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10f38cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f390: 0xa066002b  sb          $a2, 0x2B($v1)
    ctx->pc = 0x10f390u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 43), (uint8_t)GPR_U32(ctx, 6));
    // 0x10f394: 0xc043cec  jal         func_10F3B0
    ctx->pc = 0x10F394u;
    SET_GPR_U32(ctx, 31, 0x10F39Cu);
    ctx->pc = 0x10F398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F394u;
    // 0x10f398: 0xa202007a  sb          $v0, 0x7A($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 122), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3B0u, 0x10F394u, 0x10F39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F39Cu;
label_10f39c:
    // 0x10f39c: 0xae000230  sw          $zero, 0x230($s0)
    ctx->pc = 0x10f39cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 560), GPR_U32(ctx, 0));
    // 0x10f3a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10f3a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10f3a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10f3a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10f3a8: 0x3e00008  jr          $ra
    ctx->pc = 0x10F3A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F3A8u;
        // 0x10f3ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F3A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F3B0u;
}
