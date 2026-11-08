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

// Function: entry_0015a4ac
// Address: 0x15a4ac - 0x15a4e0
void entry_0015a4ac_0x15a4ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015a4ac_0x15a4ac");
#endif

    ctx->pc = 0x15a4acu;

    // 0x15a4ac: 0x0  nop
    ctx->pc = 0x15a4acu;
    // NOP
    // 0x15a4b0: 0x2a220005  slti        $v0, $s1, 0x5
    ctx->pc = 0x15a4b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x15a4b4: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x15A4B4u;
    {
        const bool branch_taken_0x15a4b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15A4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A4B4u;
        // 0x15a4b8: 0x111100  sll         $v0, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a4b4) {
            ctx->pc = 0x15A3D8u;
            return;
        }
    }
    ctx->pc = 0x15A4BCu;
    // 0x15a4bc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x15a4bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a4c0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x15a4c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15a4c4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x15a4c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15a4c8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x15a4c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x15a4cc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x15a4ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15a4d0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x15a4d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15a4d4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x15a4d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15a4d8: 0x3e00008  jr          $ra
    ctx->pc = 0x15A4D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A4D8u;
        // 0x15a4dc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A4D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A4E0u;
}
