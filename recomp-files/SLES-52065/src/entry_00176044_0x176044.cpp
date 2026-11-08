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

// Function: entry_00176044
// Address: 0x176044 - 0x176074
void entry_00176044_0x176044(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176044_0x176044");
#endif

    ctx->pc = 0x176044u;

    // 0x176044: 0x0  nop
    ctx->pc = 0x176044u;
    // NOP
    // 0x176048: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x176048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x17604c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x17604cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x176050: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x176050u;
    {
        const bool branch_taken_0x176050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x176054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176050u;
        // 0x176054: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176050) {
            ctx->pc = 0x175FB4u;
            return;
        }
    }
    ctx->pc = 0x176058u;
    // 0x176058: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x176058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17605c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x17605cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x176060: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x176060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x176064: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x176064u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x176068: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x176068u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17606c: 0x3e00008  jr          $ra
    ctx->pc = 0x17606Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17606Cu;
        // 0x176070: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17606Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x176074u;
}
