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

// Function: FUN_00199e40
// Address: 0x199e40 - 0x199eb0
void FUN_00199e40_0x199e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00199e40_0x199e40");
#endif

    switch (ctx->pc) {
        case 0x199e80u: goto label_199e80;
        case 0x199e98u: goto label_199e98;
        default: break;
    }

    ctx->pc = 0x199e40u;

    // 0x199e40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x199e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x199e44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x199e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x199e48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x199e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x199e4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x199e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x199e50: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x199e50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199e54: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x199E54u;
    {
        const bool branch_taken_0x199e54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x199E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199E54u;
        // 0x199e58: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199e54) {
            ctx->pc = 0x199E98u;
            goto label_199e98;
        }
    }
    ctx->pc = 0x199E5Cu;
    // 0x199e5c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x199e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x199e60: 0x2442b4f0  addiu       $v0, $v0, -0x4B10
    ctx->pc = 0x199e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948080));
    // 0x199e64: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x199E64u;
    {
        const bool branch_taken_0x199e64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x199E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199E64u;
        // 0x199e68: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199e64) {
            ctx->pc = 0x199E80u;
            goto label_199e80;
        }
    }
    ctx->pc = 0x199E6Cu;
    // 0x199e6c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x199e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x199e70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x199e70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199e74: 0x24428650  addiu       $v0, $v0, -0x79B0
    ctx->pc = 0x199e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936144));
    // 0x199e78: 0xc045cb8  jal         func_1172E0
    ctx->pc = 0x199E78u;
    SET_GPR_U32(ctx, 31, 0x199E80u);
    ctx->pc = 0x199E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199E78u;
    // 0x199e7c: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1172E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1172E0u, 0x199E78u, 0x199E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199E80u;
label_199e80:
    // 0x199e80: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x199e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x199e84: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x199e84u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x199e88: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x199E88u;
    {
        const bool branch_taken_0x199e88 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x199E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199E88u;
        // 0x199e8c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199e88) {
            ctx->pc = 0x199E9Cu;
            goto label_199e9c;
        }
    }
    ctx->pc = 0x199E90u;
    // 0x199e90: 0xc0401a4  jal         func_100690
    ctx->pc = 0x199E90u;
    SET_GPR_U32(ctx, 31, 0x199E98u);
    ctx->pc = 0x199E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199E90u;
    // 0x199e94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x199E90u, 0x199E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199E98u;
label_199e98:
    // 0x199e98: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x199e98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_199e9c:
    // 0x199e9c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x199e9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x199ea0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x199ea0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x199ea4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x199ea4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199ea8: 0x3e00008  jr          $ra
    ctx->pc = 0x199EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199EA8u;
        // 0x199eac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199EA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x199EB0u;
}
