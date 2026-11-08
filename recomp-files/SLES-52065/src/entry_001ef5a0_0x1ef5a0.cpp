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

// Function: entry_001ef5a0
// Address: 0x1ef5a0 - 0x1ef5f8
void entry_001ef5a0_0x1ef5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ef5a0_0x1ef5a0");
#endif

    switch (ctx->pc) {
        case 0x1ef5b4u: goto label_1ef5b4;
        case 0x1ef5d0u: goto label_1ef5d0;
        case 0x1ef5d8u: goto label_1ef5d8;
        default: break;
    }

    ctx->pc = 0x1ef5a0u;

    // 0x1ef5a0: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1ef5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1ef5a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ef5a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef5a8: 0x34a50001  ori         $a1, $a1, 0x1
    ctx->pc = 0x1ef5a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    // 0x1ef5ac: 0xc07b96a  jal         func_1EE5A8
    ctx->pc = 0x1EF5ACu;
    SET_GPR_U32(ctx, 31, 0x1EF5B4u);
    ctx->pc = 0x1EF5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF5ACu;
    // 0x1ef5b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE5A8u, 0x1EF5ACu, 0x1EF5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF5B4u;
label_1ef5b4:
    // 0x1ef5b4: 0x4400047  bltz        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x1EF5B4u;
    {
        const bool branch_taken_0x1ef5b4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1EF5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF5B4u;
        // 0x1ef5b8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef5b4) {
            ctx->pc = 0x1EF6D4u;
            return;
        }
    }
    ctx->pc = 0x1EF5BCu;
    // 0x1ef5bc: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1ef5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1ef5c0: 0x1040ffed  beqz        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1EF5C0u;
    {
        const bool branch_taken_0x1ef5c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF5C0u;
        // 0x1ef5c4: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef5c0) {
            ctx->pc = 0x1EF578u;
            return;
        }
    }
    ctx->pc = 0x1EF5C8u;
    // 0x1ef5c8: 0xc07bba6  jal         func_1EEE98
    ctx->pc = 0x1EF5C8u;
    SET_GPR_U32(ctx, 31, 0x1EF5D0u);
    ctx->pc = 0x1EF5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF5C8u;
    // 0x1ef5cc: 0x3c140022  lui         $s4, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)34 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EEE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EEE98u, 0x1EF5C8u, 0x1EF5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF5D0u;
label_1ef5d0:
    // 0x1ef5d0: 0xc07ad98  jal         func_1EB660
    ctx->pc = 0x1EF5D0u;
    SET_GPR_U32(ctx, 31, 0x1EF5D8u);
    ctx->pc = 0x1EF5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF5D0u;
    // 0x1ef5d4: 0x8e84a468  lw          $a0, -0x5B98($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294943848)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB660u, 0x1EF5D0u, 0x1EF5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF5D8u;
label_1ef5d8:
    // 0x1ef5d8: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1ef5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1ef5dc: 0x2463f700  addiu       $v1, $v1, -0x900
    ctx->pc = 0x1ef5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964992));
    // 0x1ef5e0: 0x24640200  addiu       $a0, $v1, 0x200
    ctx->pc = 0x1ef5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 512));
    // 0x1ef5e4: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x1ef5e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1ef5e8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1EF5E8u;
    {
        const bool branch_taken_0x1ef5e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF5E8u;
        // 0x1ef5ec: 0x3c120039  lui         $s2, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef5e8) {
            ctx->pc = 0x1EF61Cu;
            return;
        }
    }
    ctx->pc = 0x1EF5F0u;
    // 0x1ef5f0: 0x3c110039  lui         $s1, 0x39
    ctx->pc = 0x1ef5f0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)57 << 16));
    // 0x1ef5f4: 0x3c100039  lui         $s0, 0x39
    ctx->pc = 0x1ef5f4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)57 << 16));
    ctx->pc = 0x1ef5f8u;
}
