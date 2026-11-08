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

// Function: entry_001f5b48
// Address: 0x1f5b48 - 0x1f5bb4
void entry_001f5b48_0x1f5b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f5b48_0x1f5b48");
#endif

    switch (ctx->pc) {
        case 0x1f5ba8u: goto label_1f5ba8;
        default: break;
    }

    ctx->pc = 0x1f5b48u;

label_1f5b48:
    // 0x1f5b48: 0xac40ff8c  sw          $zero, -0x74($v0)
    ctx->pc = 0x1f5b48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967180), GPR_U32(ctx, 0));
    // 0x1f5b4c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1f5b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1f5b50: 0xac40ff94  sw          $zero, -0x6C($v0)
    ctx->pc = 0x1f5b50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967188), GPR_U32(ctx, 0));
    // 0x1f5b54: 0xac40ff90  sw          $zero, -0x70($v0)
    ctx->pc = 0x1f5b54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967184), GPR_U32(ctx, 0));
    // 0x1f5b58: 0xac40fffc  sw          $zero, -0x4($v0)
    ctx->pc = 0x1f5b58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), GPR_U32(ctx, 0));
    // 0x1f5b5c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1f5b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1f5b60: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1f5b60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1f5b64: 0x461fff8  bgez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1F5B64u;
    {
        const bool branch_taken_0x1f5b64 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1F5B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5B64u;
        // 0x1f5b68: 0x2442001c  addiu       $v0, $v0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5b64) {
            ctx->pc = 0x1F5B48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f5b48;
        }
    }
    ctx->pc = 0x1F5B6Cu;
    // 0x1f5b6c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1f5b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1f5b70: 0x249012c0  addiu       $s0, $a0, 0x12C0
    ctx->pc = 0x1f5b70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4800));
    // 0x1f5b74: 0xac8212c0  sw          $v0, 0x12C0($a0)
    ctx->pc = 0x1f5b74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4800), GPR_U32(ctx, 2));
    // 0x1f5b78: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f5b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5b7c: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1f5b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1f5b80: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1f5b80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1f5b84: 0x24841080  addiu       $a0, $a0, 0x1080
    ctx->pc = 0x1f5b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4224));
    // 0x1f5b88: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f5b88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f5b8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f5b8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5b90: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1f5b90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5b94: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x1f5b94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f5b98: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1f5b98u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5b9c: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x1f5b9cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f5ba0: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F5BA0u;
    SET_GPR_U32(ctx, 31, 0x1F5BA8u);
    ctx->pc = 0x1F5BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5BA0u;
    // 0x1f5ba4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F5BA0u, 0x1F5BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5BA8u;
label_1f5ba8:
    // 0x1f5ba8: 0x4430002  bgezl       $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F5BA8u;
    {
        const bool branch_taken_0x1f5ba8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1f5ba8) {
            ctx->pc = 0x1F5BACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F5BA8u;
            // 0x1f5bac: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F5BB4u;
            return;
        }
    }
    ctx->pc = 0x1F5BB0u;
    // 0x1f5bb0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f5bb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1f5bb4u;
}
