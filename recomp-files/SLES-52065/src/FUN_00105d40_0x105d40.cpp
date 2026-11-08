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

// Function: FUN_00105d40
// Address: 0x105d40 - 0x105db0
void FUN_00105d40_0x105d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00105d40_0x105d40");
#endif

    switch (ctx->pc) {
        case 0x105d9cu: goto label_105d9c;
        default: break;
    }

    ctx->pc = 0x105d40u;

    // 0x105d40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x105d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x105d44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x105d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x105d48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x105d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x105d4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x105d4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105d50: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x105D50u;
    {
        const bool branch_taken_0x105d50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x105D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105D50u;
        // 0x105d54: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105d50) {
            ctx->pc = 0x105DA0u;
            goto label_105da0;
        }
    }
    ctx->pc = 0x105D58u;
    // 0x105d58: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x105d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x105d5c: 0x2442a250  addiu       $v0, $v0, -0x5DB0
    ctx->pc = 0x105d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943312));
    // 0x105d60: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x105D60u;
    {
        const bool branch_taken_0x105d60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x105D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105D60u;
        // 0x105d64: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105d60) {
            ctx->pc = 0x105D84u;
            goto label_105d84;
        }
    }
    ctx->pc = 0x105D68u;
    // 0x105d68: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x105d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x105d6c: 0x24429f50  addiu       $v0, $v0, -0x60B0
    ctx->pc = 0x105d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942544));
    // 0x105d70: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x105D70u;
    {
        const bool branch_taken_0x105d70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x105D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105D70u;
        // 0x105d74: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105d70) {
            ctx->pc = 0x105D84u;
            goto label_105d84;
        }
    }
    ctx->pc = 0x105D78u;
    // 0x105d78: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x105d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x105d7c: 0x24429a10  addiu       $v0, $v0, -0x65F0
    ctx->pc = 0x105d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941200));
    // 0x105d80: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x105d80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_105d84:
    // 0x105d84: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x105d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x105d88: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x105d88u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x105d8c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x105D8Cu;
    {
        const bool branch_taken_0x105d8c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x105D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105D8Cu;
        // 0x105d90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105d8c) {
            ctx->pc = 0x105D9Cu;
            goto label_105d9c;
        }
    }
    ctx->pc = 0x105D94u;
    // 0x105d94: 0xc0401a4  jal         func_100690
    ctx->pc = 0x105D94u;
    SET_GPR_U32(ctx, 31, 0x105D9Cu);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x105D94u, 0x105D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105D9Cu;
label_105d9c:
    // 0x105d9c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x105d9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_105da0:
    // 0x105da0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x105da0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x105da4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x105da4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105da8: 0x3e00008  jr          $ra
    ctx->pc = 0x105DA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105DA8u;
        // 0x105dac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105DA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105DB0u;
}
