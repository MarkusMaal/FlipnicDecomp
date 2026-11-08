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

// Function: FUN_001df298
// Address: 0x1df298 - 0x1df2f0
void FUN_001df298_0x1df298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001df298_0x1df298");
#endif

    switch (ctx->pc) {
        case 0x1df2d0u: goto label_1df2d0;
        case 0x1df2d8u: goto label_1df2d8;
        default: break;
    }

    ctx->pc = 0x1df298u;

    // 0x1df298: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1df298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1df29c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1df29cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df2a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1df2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1df2a4: 0x219c0  sll         $v1, $v0, 7
    ctx->pc = 0x1df2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x1df2a8: 0x440000c  bltz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1DF2A8u;
    {
        const bool branch_taken_0x1df2a8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1DF2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF2A8u;
        // 0x1df2ac: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df2a8) {
            ctx->pc = 0x1DF2DCu;
            goto label_1df2dc;
        }
    }
    ctx->pc = 0x1DF2B0u;
    // 0x1df2b0: 0x3c100039  lui         $s0, 0x39
    ctx->pc = 0x1df2b0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)57 << 16));
    // 0x1df2b4: 0x26109f00  addiu       $s0, $s0, -0x6100
    ctx->pc = 0x1df2b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294942464));
    // 0x1df2b8: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x1df2b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1df2bc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1df2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1df2c0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DF2C0u;
    {
        const bool branch_taken_0x1df2c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df2c0) {
            ctx->pc = 0x1DF2D0u;
            goto label_1df2d0;
        }
    }
    ctx->pc = 0x1DF2C8u;
    // 0x1df2c8: 0xc077d70  jal         func_1DF5C0
    ctx->pc = 0x1DF2C8u;
    SET_GPR_U32(ctx, 31, 0x1DF2D0u);
    ctx->pc = 0x1DF5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF5C0u, 0x1DF2C8u, 0x1DF2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF2D0u;
label_1df2d0:
    // 0x1df2d0: 0xc07566a  jal         func_1D59A8
    ctx->pc = 0x1DF2D0u;
    SET_GPR_U32(ctx, 31, 0x1DF2D8u);
    ctx->pc = 0x1DF2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF2D0u;
    // 0x1df2d4: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D59A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D59A8u, 0x1DF2D0u, 0x1DF2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF2D8u;
label_1df2d8:
    // 0x1df2d8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1df2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1df2dc:
    // 0x1df2dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1df2dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df2e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1df2e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df2e4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1df2e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1df2e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF2E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF2E8u;
        // 0x1df2ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF2E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF2F0u;
}
