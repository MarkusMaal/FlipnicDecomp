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

// Function: FUN_001b4cd0
// Address: 0x1b4cd0 - 0x1b4d50
void FUN_001b4cd0_0x1b4cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b4cd0_0x1b4cd0");
#endif

    switch (ctx->pc) {
        case 0x1b4ce0u: goto label_1b4ce0;
        case 0x1b4ce8u: goto label_1b4ce8;
        case 0x1b4cf0u: goto label_1b4cf0;
        case 0x1b4d0cu: goto label_1b4d0c;
        case 0x1b4d28u: goto label_1b4d28;
        case 0x1b4d44u: goto label_1b4d44;
        default: break;
    }

    ctx->pc = 0x1b4cd0u;

    // 0x1b4cd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b4cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b4cd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b4cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b4cd8: 0xc06d3cc  jal         func_1B4F30
    ctx->pc = 0x1B4CD8u;
    SET_GPR_U32(ctx, 31, 0x1B4CE0u);
    ctx->pc = 0x1B4F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4F30u, 0x1B4CD8u, 0x1B4CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4CE0u;
label_1b4ce0:
    // 0x1b4ce0: 0xc06d458  jal         func_1B5160
    ctx->pc = 0x1B4CE0u;
    SET_GPR_U32(ctx, 31, 0x1B4CE8u);
    ctx->pc = 0x1B5160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5160u, 0x1B4CE0u, 0x1B4CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4CE8u;
label_1b4ce8:
    // 0x1b4ce8: 0xc046b74  jal         func_11ADD0
    ctx->pc = 0x1B4CE8u;
    SET_GPR_U32(ctx, 31, 0x1B4CF0u);
    ctx->pc = 0x1B4CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4CE8u;
    // 0x1b4cec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ADD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ADD0u, 0x1B4CE8u, 0x1B4CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4CF0u;
label_1b4cf0:
    // 0x1b4cf0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b4cf0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b4cf4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1b4cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1b4cf8: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x1b4cf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1b4cfc: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1b4cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1b4d00: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1b4d00u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1b4d04: 0xc053c2c  jal         func_14F0B0
    ctx->pc = 0x1B4D04u;
    SET_GPR_U32(ctx, 31, 0x1B4D0Cu);
    ctx->pc = 0x1B4D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4D04u;
    // 0x1b4d08: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F0B0u, 0x1B4D04u, 0x1B4D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4D0Cu;
label_1b4d0c:
    // 0x1b4d0c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b4d0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b4d10: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b4d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1b4d14: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x1b4d14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1b4d18: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b4d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4d1c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1b4d1cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1b4d20: 0xc053c2c  jal         func_14F0B0
    ctx->pc = 0x1B4D20u;
    SET_GPR_U32(ctx, 31, 0x1B4D28u);
    ctx->pc = 0x1B4D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4D20u;
    // 0x1b4d24: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F0B0u, 0x1B4D20u, 0x1B4D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4D28u;
label_1b4d28:
    // 0x1b4d28: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b4d28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b4d2c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b4d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4d30: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1b4d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1b4d34: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1b4d34u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1b4d38: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x1b4d38u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x1b4d3c: 0xc053c00  jal         func_14F000
    ctx->pc = 0x1B4D3Cu;
    SET_GPR_U32(ctx, 31, 0x1B4D44u);
    ctx->pc = 0x1B4D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4D3Cu;
    // 0x1b4d40: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F000u, 0x1B4D3Cu, 0x1B4D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4D44u;
label_1b4d44:
    // 0x1b4d44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b4d44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4d48: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4D48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4D48u;
        // 0x1b4d4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4D48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4D50u;
}
