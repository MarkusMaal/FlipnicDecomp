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

// Function: entry_001b4eb0
// Address: 0x1b4eb0 - 0x1b4f2c
void entry_001b4eb0_0x1b4eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b4eb0_0x1b4eb0");
#endif

    switch (ctx->pc) {
        case 0x1b4eb8u: goto label_1b4eb8;
        case 0x1b4ec0u: goto label_1b4ec0;
        case 0x1b4ec8u: goto label_1b4ec8;
        case 0x1b4ee4u: goto label_1b4ee4;
        case 0x1b4f00u: goto label_1b4f00;
        case 0x1b4f1cu: goto label_1b4f1c;
        default: break;
    }

    ctx->pc = 0x1b4eb0u;

    // 0x1b4eb0: 0xc06d3dc  jal         func_1B4F70
    ctx->pc = 0x1B4EB0u;
    SET_GPR_U32(ctx, 31, 0x1B4EB8u);
    ctx->pc = 0x1B4F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4F70u, 0x1B4EB0u, 0x1B4EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4EB8u;
label_1b4eb8:
    // 0x1b4eb8: 0xc06d49c  jal         func_1B5270
    ctx->pc = 0x1B4EB8u;
    SET_GPR_U32(ctx, 31, 0x1B4EC0u);
    ctx->pc = 0x1B5270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5270u, 0x1B4EB8u, 0x1B4EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4EC0u;
label_1b4ec0:
    // 0x1b4ec0: 0xc046b74  jal         func_11ADD0
    ctx->pc = 0x1B4EC0u;
    SET_GPR_U32(ctx, 31, 0x1B4EC8u);
    ctx->pc = 0x1B4EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4EC0u;
    // 0x1b4ec4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ADD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ADD0u, 0x1B4EC0u, 0x1B4EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4EC8u;
label_1b4ec8:
    // 0x1b4ec8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b4ec8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b4ecc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1b4eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1b4ed0: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x1b4ed0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1b4ed4: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1b4ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1b4ed8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1b4ed8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1b4edc: 0xc053c2c  jal         func_14F0B0
    ctx->pc = 0x1B4EDCu;
    SET_GPR_U32(ctx, 31, 0x1B4EE4u);
    ctx->pc = 0x1B4EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4EDCu;
    // 0x1b4ee0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F0B0u, 0x1B4EDCu, 0x1B4EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4EE4u;
label_1b4ee4:
    // 0x1b4ee4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b4ee4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b4ee8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b4ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1b4eec: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x1b4eecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1b4ef0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b4ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4ef4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1b4ef4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1b4ef8: 0xc053c2c  jal         func_14F0B0
    ctx->pc = 0x1B4EF8u;
    SET_GPR_U32(ctx, 31, 0x1B4F00u);
    ctx->pc = 0x1B4EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4EF8u;
    // 0x1b4efc: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F0B0u, 0x1B4EF8u, 0x1B4F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4F00u;
label_1b4f00:
    // 0x1b4f00: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b4f00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b4f04: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b4f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4f08: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1b4f08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1b4f0c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1b4f0cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1b4f10: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x1b4f10u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x1b4f14: 0xc053c00  jal         func_14F000
    ctx->pc = 0x1B4F14u;
    SET_GPR_U32(ctx, 31, 0x1B4F1Cu);
    ctx->pc = 0x1B4F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4F14u;
    // 0x1b4f18: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F000u, 0x1B4F14u, 0x1B4F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4F1Cu;
label_1b4f1c:
    // 0x1b4f1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b4f1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b4f20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b4f20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4f24: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4F24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4F24u;
        // 0x1b4f28: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4F24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4F2Cu;
}
