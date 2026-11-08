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

// Function: entry_00173f14
// Address: 0x173f14 - 0x173f5c
void entry_00173f14_0x173f14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173f14_0x173f14");
#endif

    ctx->pc = 0x173f14u;

    // 0x173f14: 0x0  nop
    ctx->pc = 0x173f14u;
    // NOP
    // 0x173f18: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x173f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x173f1c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x173f1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x173f20: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x173F20u;
    {
        const bool branch_taken_0x173f20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x173F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173F20u;
        // 0x173f24: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173f20) {
            ctx->pc = 0x173E80u;
            return;
        }
    }
    ctx->pc = 0x173F28u;
    // 0x173f28: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x173f28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x173f2c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x173f2cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x173f30: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x173f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x173f34: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x173f34u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x173f38: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x173f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x173f3c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x173f3cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x173f40: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x173f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x173f44: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x173f44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x173f48: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x173f48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x173f4c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x173f4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x173f50: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x173f50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x173f54: 0x3e00008  jr          $ra
    ctx->pc = 0x173F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173F54u;
        // 0x173f58: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173F54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x173F5Cu;
}
