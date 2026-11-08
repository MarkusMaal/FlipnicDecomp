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

// Function: FUN_001b8a00
// Address: 0x1b8a00 - 0x1b8a74
void FUN_001b8a00_0x1b8a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b8a00_0x1b8a00");
#endif

    switch (ctx->pc) {
        case 0x1b8a5cu: goto label_1b8a5c;
        default: break;
    }

    ctx->pc = 0x1b8a00u;

    // 0x1b8a00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b8a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b8a04: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b8a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1b8a08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b8a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b8a0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b8a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b8a10: 0xac820040  sw          $v0, 0x40($a0)
    ctx->pc = 0x1b8a10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
    // 0x1b8a14: 0xac820044  sw          $v0, 0x44($a0)
    ctx->pc = 0x1b8a14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 2));
    // 0x1b8a18: 0xac820048  sw          $v0, 0x48($a0)
    ctx->pc = 0x1b8a18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 2));
    // 0x1b8a1c: 0xac82004c  sw          $v0, 0x4C($a0)
    ctx->pc = 0x1b8a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 2));
    // 0x1b8a20: 0xac8200b0  sw          $v0, 0xB0($a0)
    ctx->pc = 0x1b8a20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 2));
    // 0x1b8a24: 0xac8200b4  sw          $v0, 0xB4($a0)
    ctx->pc = 0x1b8a24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 180), GPR_U32(ctx, 2));
    // 0x1b8a28: 0xac8200b8  sw          $v0, 0xB8($a0)
    ctx->pc = 0x1b8a28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 184), GPR_U32(ctx, 2));
    // 0x1b8a2c: 0xac8200bc  sw          $v0, 0xBC($a0)
    ctx->pc = 0x1b8a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 188), GPR_U32(ctx, 2));
    // 0x1b8a30: 0xac820090  sw          $v0, 0x90($a0)
    ctx->pc = 0x1b8a30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 2));
    // 0x1b8a34: 0xac820094  sw          $v0, 0x94($a0)
    ctx->pc = 0x1b8a34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 2));
    // 0x1b8a38: 0xac820098  sw          $v0, 0x98($a0)
    ctx->pc = 0x1b8a38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 152), GPR_U32(ctx, 2));
    // 0x1b8a3c: 0xac82009c  sw          $v0, 0x9C($a0)
    ctx->pc = 0x1b8a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 156), GPR_U32(ctx, 2));
    // 0x1b8a40: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1b8a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1b8a44: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B8A44u;
    {
        const bool branch_taken_0x1b8a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8A44u;
        // 0x1b8a48: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8a44) {
            ctx->pc = 0x1B8A54u;
            goto label_1b8a54;
        }
    }
    ctx->pc = 0x1B8A4Cu;
    // 0x1b8a4c: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x1b8a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x1b8a50: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1b8a50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1b8a54:
    // 0x1b8a54: 0xc06eb30  jal         func_1BACC0
    ctx->pc = 0x1B8A54u;
    SET_GPR_U32(ctx, 31, 0x1B8A5Cu);
    ctx->pc = 0x1B8A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8A54u;
    // 0x1b8a58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BACC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BACC0u, 0x1B8A54u, 0x1B8A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8A5Cu;
label_1b8a5c:
    // 0x1b8a5c: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1b8a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1b8a60: 0xae0000f4  sw          $zero, 0xF4($s0)
    ctx->pc = 0x1b8a60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 0));
    // 0x1b8a64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b8a64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b8a68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b8a68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b8a6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8A6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8A6Cu;
        // 0x1b8a70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8A6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B8A74u;
}
