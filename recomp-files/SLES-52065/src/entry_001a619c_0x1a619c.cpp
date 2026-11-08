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

// Function: entry_001a619c
// Address: 0x1a619c - 0x1a61d0
void entry_001a619c_0x1a619c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a619c_0x1a619c");
#endif

    ctx->pc = 0x1a619cu;

    // 0x1a619c: 0x0  nop
    ctx->pc = 0x1a619cu;
    // NOP
    // 0x1a61a0: 0x8e8200ec  lw          $v0, 0xEC($s4)
    ctx->pc = 0x1a61a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 236)));
    // 0x1a61a4: 0x1c400026  bgtz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1A61A4u;
    {
        const bool branch_taken_0x1a61a4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1A61A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A61A4u;
        // 0x1a61a8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a61a4) {
            ctx->pc = 0x1A6240u;
            return;
        }
    }
    ctx->pc = 0x1A61ACu;
    // 0x1a61ac: 0xae8000ec  sw          $zero, 0xEC($s4)
    ctx->pc = 0x1a61acu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 236), GPR_U32(ctx, 0));
    // 0x1a61b0: 0x8e8200f4  lw          $v0, 0xF4($s4)
    ctx->pc = 0x1a61b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 244)));
    // 0x1a61b4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A61B4u;
    {
        const bool branch_taken_0x1a61b4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1a61b4) {
            ctx->pc = 0x1A61D0u;
            return;
        }
    }
    ctx->pc = 0x1A61BCu;
    // 0x1a61bc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a61bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a61c0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1a61c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a61c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a61c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a61c8: 0xc069994  jal         func_1A6650
    ctx->pc = 0x1A61C8u;
    SET_GPR_U32(ctx, 31, 0x1A61D0u);
    ctx->pc = 0x1A61CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A61C8u;
    // 0x1a61cc: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6650u, 0x1A61C8u, 0x1A61D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A61D0u;
}
