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

// Function: FUN_001bbce0
// Address: 0x1bbce0 - 0x1bbd30
void FUN_001bbce0_0x1bbce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001bbce0_0x1bbce0");
#endif

    switch (ctx->pc) {
        case 0x1bbcf4u: goto label_1bbcf4;
        case 0x1bbd14u: goto label_1bbd14;
        case 0x1bbd1cu: goto label_1bbd1c;
        default: break;
    }

    ctx->pc = 0x1bbce0u;

    // 0x1bbce0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bbce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bbce4: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x1bbce4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1bbce8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bbce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bbcec: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1BBCECu;
    SET_GPR_U32(ctx, 31, 0x1BBCF4u);
    ctx->pc = 0x1BBCF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBCECu;
    // 0x1bbcf0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1BBCECu, 0x1BBCF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBCF4u;
label_1bbcf4:
    // 0x1bbcf4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1bbcf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbcf8: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BBCF8u;
    {
        const bool branch_taken_0x1bbcf8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BBCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBCF8u;
        // 0x1bbcfc: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbcf8) {
            ctx->pc = 0x1BBD1Cu;
            goto label_1bbd1c;
        }
    }
    ctx->pc = 0x1BBD00u;
    // 0x1bbd00: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1bbd00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1bbd04: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x1bbd04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x1bbd08: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1bbd08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1bbd0c: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x1BBD0Cu;
    SET_GPR_U32(ctx, 31, 0x1BBD14u);
    ctx->pc = 0x1BBD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBD0Cu;
    // 0x1bbd10: 0x24a510f0  addiu       $a1, $a1, 0x10F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x1BBD0Cu, 0x1BBD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBD14u;
label_1bbd14:
    // 0x1bbd14: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x1BBD14u;
    SET_GPR_U32(ctx, 31, 0x1BBD1Cu);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x1BBD14u, 0x1BBD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBD1Cu;
label_1bbd1c:
    // 0x1bbd1c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1bbd1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbd20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bbd20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bbd24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bbd24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bbd28: 0x3e00008  jr          $ra
    ctx->pc = 0x1BBD28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BBD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBD28u;
        // 0x1bbd2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BBD28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BBD30u;
}
