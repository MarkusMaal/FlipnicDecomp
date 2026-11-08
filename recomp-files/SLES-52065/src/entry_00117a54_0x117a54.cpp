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

// Function: entry_00117a54
// Address: 0x117a54 - 0x117aac
void entry_00117a54_0x117a54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117a54_0x117a54");
#endif

    switch (ctx->pc) {
        case 0x117a64u: goto label_117a64;
        case 0x117a84u: goto label_117a84;
        default: break;
    }

    ctx->pc = 0x117a54u;

label_117a54:
    // 0x117a54: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x117a54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x117a58: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x117a58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117a5c: 0xc061734  jal         func_185CD0
    ctx->pc = 0x117A5Cu;
    SET_GPR_U32(ctx, 31, 0x117A64u);
    ctx->pc = 0x117A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117A5Cu;
    // 0x117a60: 0x240700ff  addiu       $a3, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185CD0u, 0x117A5Cu, 0x117A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117A64u;
label_117a64:
    // 0x117a64: 0x8f858340  lw          $a1, -0x7CC0($gp)
    ctx->pc = 0x117a64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935360)));
    // 0x117a68: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x117a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x117a6c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x117a6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x117a70: 0x320800ff  andi        $t0, $s0, 0xFF
    ctx->pc = 0x117a70u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x117a74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x117a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117a78: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x117a78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117a7c: 0xc061240  jal         func_184900
    ctx->pc = 0x117A7Cu;
    SET_GPR_U32(ctx, 31, 0x117A84u);
    ctx->pc = 0x117A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117A7Cu;
    // 0x117a80: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184900u, 0x117A7Cu, 0x117A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117A84u;
label_117a84:
    // 0x117a84: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x117a84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x117a88: 0x2a430014  slti        $v1, $s2, 0x14
    ctx->pc = 0x117a88u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x117a8c: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x117A8Cu;
    {
        const bool branch_taken_0x117a8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x117A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117A8Cu;
        // 0x117a90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117a8c) {
            ctx->pc = 0x117A54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_117a54;
        }
    }
    ctx->pc = 0x117A94u;
    // 0x117a94: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x117a94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x117a98: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x117a98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x117a9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x117a9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117aa0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x117aa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117aa4: 0x3e00008  jr          $ra
    ctx->pc = 0x117AA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117AA4u;
        // 0x117aa8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117AA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117AACu;
}
