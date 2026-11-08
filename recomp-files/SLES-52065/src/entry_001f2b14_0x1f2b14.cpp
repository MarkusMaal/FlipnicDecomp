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

// Function: entry_001f2b14
// Address: 0x1f2b14 - 0x1f2b5c
void entry_001f2b14_0x1f2b14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f2b14_0x1f2b14");
#endif

    switch (ctx->pc) {
        case 0x1f2b48u: goto label_1f2b48;
        default: break;
    }

    ctx->pc = 0x1f2b14u;

    // 0x1f2b14: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1F2B14u;
    {
        const bool branch_taken_0x1f2b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2B14u;
        // 0x1f2b18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2b14) {
            ctx->pc = 0x1F2B7Cu;
            return;
        }
    }
    ctx->pc = 0x1F2B1Cu;
    // 0x1f2b1c: 0x3c110039  lui         $s1, 0x39
    ctx->pc = 0x1f2b1cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)57 << 16));
    // 0x1f2b20: 0xae40a480  sw          $zero, -0x5B80($s2)
    ctx->pc = 0x1f2b20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294943872), GPR_U32(ctx, 0));
    // 0x1f2b24: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f2b24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f2b28: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x1f2b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1f2b2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f2b2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2b30: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f2b30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2b34: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f2b34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2b38: 0x2629fb80  addiu       $t1, $s1, -0x480
    ctx->pc = 0x1f2b38u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 4294966144));
    // 0x1f2b3c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f2b3cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f2b40: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F2B40u;
    SET_GPR_U32(ctx, 31, 0x1F2B48u);
    ctx->pc = 0x1F2B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2B40u;
    // 0x1f2b44: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F2B40u, 0x1F2B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2B48u;
label_1f2b48:
    // 0x1f2b48: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F2B48u;
    {
        const bool branch_taken_0x1f2b48 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F2B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2B48u;
        // 0x1f2b4c: 0x3c030039  lui         $v1, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2b48) {
            ctx->pc = 0x1F2B5Cu;
            return;
        }
    }
    ctx->pc = 0x1F2B50u;
    // 0x1f2b50: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1f2b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1f2b54: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1F2B54u;
    {
        const bool branch_taken_0x1f2b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2B54u;
        // 0x1f2b58: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2b54) {
            ctx->pc = 0x1F2BB0u;
            return;
        }
    }
    ctx->pc = 0x1F2B5Cu;
}
