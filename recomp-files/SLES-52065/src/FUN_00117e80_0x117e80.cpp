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

// Function: FUN_00117e80
// Address: 0x117e80 - 0x117ecc
void FUN_00117e80_0x117e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00117e80_0x117e80");
#endif

    switch (ctx->pc) {
        case 0x117e94u: goto label_117e94;
        case 0x117ea4u: goto label_117ea4;
        case 0x117ebcu: goto label_117ebc;
        default: break;
    }

    ctx->pc = 0x117e80u;

    // 0x117e80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x117e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x117e84: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x117e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x117e88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x117e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x117e8c: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x117E8Cu;
    SET_GPR_U32(ctx, 31, 0x117E94u);
    ctx->pc = 0x117E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117E8Cu;
    // 0x117e90: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x117E8Cu, 0x117E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117E94u;
label_117e94:
    // 0x117e94: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x117E94u;
    {
        const bool branch_taken_0x117e94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117E94u;
        // 0x117e98: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117e94) {
            ctx->pc = 0x117EB0u;
            goto label_117eb0;
        }
    }
    ctx->pc = 0x117E9Cu;
    // 0x117e9c: 0xc045c98  jal         func_117260
    ctx->pc = 0x117E9Cu;
    SET_GPR_U32(ctx, 31, 0x117EA4u);
    ctx->pc = 0x117EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117E9Cu;
    // 0x117ea0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117260u, 0x117E9Cu, 0x117EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117EA4u;
label_117ea4:
    // 0x117ea4: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x117ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x117ea8: 0x24428650  addiu       $v0, $v0, -0x79B0
    ctx->pc = 0x117ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936144));
    // 0x117eac: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x117eacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_117eb0:
    // 0x117eb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x117eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117eb4: 0xc045fcc  jal         func_117F30
    ctx->pc = 0x117EB4u;
    SET_GPR_U32(ctx, 31, 0x117EBCu);
    ctx->pc = 0x117EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117EB4u;
    // 0x117eb8: 0xaf90839c  sw          $s0, -0x7C64($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935452), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117F30u, 0x117EB4u, 0x117EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117EBCu;
label_117ebc:
    // 0x117ebc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x117ebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117ec0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x117ec0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117ec4: 0x3e00008  jr          $ra
    ctx->pc = 0x117EC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117EC4u;
        // 0x117ec8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117EC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117ECCu;
}
