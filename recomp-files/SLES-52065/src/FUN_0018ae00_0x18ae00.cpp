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

// Function: FUN_0018ae00
// Address: 0x18ae00 - 0x18ae68
void FUN_0018ae00_0x18ae00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018ae00_0x18ae00");
#endif

    switch (ctx->pc) {
        case 0x18ae20u: goto label_18ae20;
        case 0x18ae3cu: goto label_18ae3c;
        default: break;
    }

    ctx->pc = 0x18ae00u;

    // 0x18ae00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x18ae00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x18ae04: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x18ae04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x18ae08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18ae08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18ae0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18ae0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18ae10: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x18ae10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ae14: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18ae14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18ae18: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x18ae18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ae1c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x18ae1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18ae20:
    // 0x18ae20: 0x2512021  addu        $a0, $s2, $s1
    ctx->pc = 0x18ae20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x18ae24: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x18ae24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18ae28: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x18ae28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18ae2c: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18AE2Cu;
    {
        const bool branch_taken_0x18ae2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x18ae2c) {
            ctx->pc = 0x18AE3Cu;
            goto label_18ae3c;
        }
    }
    ctx->pc = 0x18AE34u;
    // 0x18ae34: 0xc07657c  jal         func_1D95F0
    ctx->pc = 0x18AE34u;
    SET_GPR_U32(ctx, 31, 0x18AE3Cu);
    ctx->pc = 0x1D95F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D95F0u, 0x18AE34u, 0x18AE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AE3Cu;
label_18ae3c:
    // 0x18ae3c: 0x0  nop
    ctx->pc = 0x18ae3cu;
    // NOP
    // 0x18ae40: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18ae40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18ae44: 0x2a030010  slti        $v1, $s0, 0x10
    ctx->pc = 0x18ae44u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x18ae48: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x18AE48u;
    {
        const bool branch_taken_0x18ae48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18AE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AE48u;
        // 0x18ae4c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ae48) {
            ctx->pc = 0x18AE20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18ae20;
        }
    }
    ctx->pc = 0x18AE50u;
    // 0x18ae50: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x18ae50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18ae54: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18ae54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18ae58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18ae58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18ae5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18ae5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18ae60: 0x3e00008  jr          $ra
    ctx->pc = 0x18AE60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18AE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AE60u;
        // 0x18ae64: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18AE60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18AE68u;
}
