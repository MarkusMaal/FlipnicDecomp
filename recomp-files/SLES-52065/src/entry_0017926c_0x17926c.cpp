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

// Function: entry_0017926c
// Address: 0x17926c - 0x17929c
void entry_0017926c_0x17926c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017926c_0x17926c");
#endif

    ctx->pc = 0x17926cu;

    // 0x17926c: 0x0  nop
    ctx->pc = 0x17926cu;
    // NOP
    // 0x179270: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x179270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x179274: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x179274u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x179278: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x179278u;
    {
        const bool branch_taken_0x179278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17927Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179278u;
        // 0x17927c: 0x41100  sll         $v0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179278) {
            ctx->pc = 0x179240u;
            return;
        }
    }
    ctx->pc = 0x179280u;
    // 0x179280: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x179280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x179284: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x179284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x179288: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x179288u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17928c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x17928cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x179290: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x179290u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179294: 0x3e00008  jr          $ra
    ctx->pc = 0x179294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179294u;
        // 0x179298: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179294u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17929Cu;
}
