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

// Function: FUN_00186ad0
// Address: 0x186ad0 - 0x186b38
void FUN_00186ad0_0x186ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00186ad0_0x186ad0");
#endif

    switch (ctx->pc) {
        case 0x186b00u: goto label_186b00;
        case 0x186b10u: goto label_186b10;
        case 0x186b20u: goto label_186b20;
        default: break;
    }

    ctx->pc = 0x186ad0u;

    // 0x186ad0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x186ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x186ad4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x186ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x186ad8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x186ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x186adc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x186adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x186ae0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x186ae0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186ae4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x186ae4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186ae8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x186ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x186aec: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x186aecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x186af0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x186af0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186af4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x186af4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x186af8: 0xc07d370  jal         func_1F4DC0
    ctx->pc = 0x186AF8u;
    SET_GPR_U32(ctx, 31, 0x186B00u);
    ctx->pc = 0x186AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186AF8u;
    // 0x186afc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DC0u, 0x186AF8u, 0x186B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186B00u;
label_186b00:
    // 0x186b00: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x186b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x186b04: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x186b04u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x186b08: 0xc07d37c  jal         func_1F4DF0
    ctx->pc = 0x186B08u;
    SET_GPR_U32(ctx, 31, 0x186B10u);
    ctx->pc = 0x186B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186B08u;
    // 0x186b0c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DF0u, 0x186B08u, 0x186B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186B10u;
label_186b10:
    // 0x186b10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x186b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186b14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x186b14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186b18: 0xc07d36a  jal         func_1F4DA8
    ctx->pc = 0x186B18u;
    SET_GPR_U32(ctx, 31, 0x186B20u);
    ctx->pc = 0x186B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186B18u;
    // 0x186b1c: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DA8u, 0x186B18u, 0x186B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186B20u;
label_186b20:
    // 0x186b20: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x186b20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x186b24: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x186b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x186b28: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x186b28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x186b2c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x186b2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x186b30: 0x3e00008  jr          $ra
    ctx->pc = 0x186B30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186B30u;
        // 0x186b34: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186B30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x186B38u;
}
