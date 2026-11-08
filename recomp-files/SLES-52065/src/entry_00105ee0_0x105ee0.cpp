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

// Function: entry_00105ee0
// Address: 0x105ee0 - 0x105f20
void entry_00105ee0_0x105ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105ee0_0x105ee0");
#endif

    ctx->pc = 0x105ee0u;

    // 0x105ee0: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x105EE0u;
    {
        const bool branch_taken_0x105ee0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x105EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105EE0u;
        // 0x105ee4: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105ee0) {
            ctx->pc = 0x105F24u;
            return;
        }
    }
    ctx->pc = 0x105EE8u;
    // 0x105ee8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x105ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x105eec: 0x244296b0  addiu       $v0, $v0, -0x6950
    ctx->pc = 0x105eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940336));
    // 0x105ef0: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x105EF0u;
    {
        const bool branch_taken_0x105ef0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x105EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105EF0u;
        // 0x105ef4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105ef0) {
            ctx->pc = 0x105F20u;
            return;
        }
    }
    ctx->pc = 0x105EF8u;
    // 0x105ef8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x105ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x105efc: 0x24429770  addiu       $v0, $v0, -0x6890
    ctx->pc = 0x105efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940528));
    // 0x105f00: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x105F00u;
    {
        const bool branch_taken_0x105f00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x105F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105F00u;
        // 0x105f04: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105f00) {
            ctx->pc = 0x105F20u;
            return;
        }
    }
    ctx->pc = 0x105F08u;
    // 0x105f08: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x105f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x105f0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x105f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105f10: 0x24427f90  addiu       $v0, $v0, 0x7F90
    ctx->pc = 0x105f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32656));
    // 0x105f14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x105f14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105f18: 0xc0418c0  jal         func_106300
    ctx->pc = 0x105F18u;
    SET_GPR_U32(ctx, 31, 0x105F20u);
    ctx->pc = 0x105F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105F18u;
    // 0x105f1c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106300u, 0x105F18u, 0x105F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105F20u;
}
