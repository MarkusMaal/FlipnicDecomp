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

// Function: entry_001b2dc4
// Address: 0x1b2dc4 - 0x1b2e50
void entry_001b2dc4_0x1b2dc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2dc4_0x1b2dc4");
#endif

    switch (ctx->pc) {
        case 0x1b2de8u: goto label_1b2de8;
        case 0x1b2e04u: goto label_1b2e04;
        case 0x1b2e14u: goto label_1b2e14;
        case 0x1b2e20u: goto label_1b2e20;
        case 0x1b2e28u: goto label_1b2e28;
        case 0x1b2e3cu: goto label_1b2e3c;
        default: break;
    }

    ctx->pc = 0x1b2dc4u;

    // 0x1b2dc4: 0x3c023f40  lui         $v0, 0x3F40
    ctx->pc = 0x1b2dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16192 << 16));
    // 0x1b2dc8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b2dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1b2dcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b2dccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2dd0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1b2dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b2dd4: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1b2dd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1b2dd8: 0x460103c2  mul.s       $f15, $f0, $f1
    ctx->pc = 0x1b2dd8u;
    ctx->f[15] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b2ddc: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1b2ddcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b2de0: 0xc062860  jal         func_18A180
    ctx->pc = 0x1B2DE0u;
    SET_GPR_U32(ctx, 31, 0x1B2DE8u);
    ctx->pc = 0x1B2DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2DE0u;
    // 0x1b2de4: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A180u, 0x1B2DE0u, 0x1B2DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2DE8u;
label_1b2de8:
    // 0x1b2de8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1b2de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b2dec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b2decu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b2df0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1b2df0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1b2df4: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x1b2df4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1b2df8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1b2df8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1b2dfc: 0xc06286c  jal         func_18A1B0
    ctx->pc = 0x1B2DFCu;
    SET_GPR_U32(ctx, 31, 0x1B2E04u);
    ctx->pc = 0x1B2E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2DFCu;
    // 0x1b2e00: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A1B0u, 0x1B2DFCu, 0x1B2E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2E04u;
label_1b2e04:
    // 0x1b2e04: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b2e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1b2e08: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b2e08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b2e0c: 0xc062858  jal         func_18A160
    ctx->pc = 0x1B2E0Cu;
    SET_GPR_U32(ctx, 31, 0x1B2E14u);
    ctx->pc = 0x1B2E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2E0Cu;
    // 0x1b2e10: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A160u, 0x1B2E0Cu, 0x1B2E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2E14u;
label_1b2e14:
    // 0x1b2e14: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1b2e14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b2e18: 0xc062200  jal         func_188800
    ctx->pc = 0x1B2E18u;
    SET_GPR_U32(ctx, 31, 0x1B2E20u);
    ctx->pc = 0x1B2E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2E18u;
    // 0x1b2e1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188800u, 0x1B2E18u, 0x1B2E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2E20u;
label_1b2e20:
    // 0x1b2e20: 0xc062114  jal         func_188450
    ctx->pc = 0x1B2E20u;
    SET_GPR_U32(ctx, 31, 0x1B2E28u);
    ctx->pc = 0x1B2E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2E20u;
    // 0x1b2e24: 0x24040033  addiu       $a0, $zero, 0x33 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188450u, 0x1B2E20u, 0x1B2E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2E28u;
label_1b2e28:
    // 0x1b2e28: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1b2e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b2e2c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1b2e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1b2e30: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1b2e30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2e34: 0xc0627bc  jal         func_189EF0
    ctx->pc = 0x1B2E34u;
    SET_GPR_U32(ctx, 31, 0x1B2E3Cu);
    ctx->pc = 0x1B2E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2E34u;
    // 0x1b2e38: 0x24a50c90  addiu       $a1, $a1, 0xC90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EF0u, 0x1B2E34u, 0x1B2E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2E3Cu;
label_1b2e3c:
    // 0x1b2e3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b2e3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b2e40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b2e40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2e44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b2e44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2e48: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2E48u;
        // 0x1b2e4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2E48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B2E50u;
}
