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

// Function: entry_001b0bac
// Address: 0x1b0bac - 0x1b0bfc
void entry_001b0bac_0x1b0bac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0bac_0x1b0bac");
#endif

    switch (ctx->pc) {
        case 0x1b0bb8u: goto label_1b0bb8;
        case 0x1b0bf4u: goto label_1b0bf4;
        default: break;
    }

    ctx->pc = 0x1b0bacu;

    // 0x1b0bac: 0x0  nop
    ctx->pc = 0x1b0bacu;
    // NOP
    // 0x1b0bb0: 0xc06d14c  jal         func_1B4530
    ctx->pc = 0x1B0BB0u;
    SET_GPR_U32(ctx, 31, 0x1B0BB8u);
    ctx->pc = 0x1B0BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0BB0u;
    // 0x1b0bb4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4530u, 0x1B0BB0u, 0x1B0BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0BB8u;
label_1b0bb8:
    // 0x1b0bb8: 0x24090180  addiu       $t1, $zero, 0x180
    ctx->pc = 0x1b0bb8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x1b0bbc: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x1b0bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1b0bc0: 0xffa90000  sd          $t1, 0x0($sp)
    ctx->pc = 0x1b0bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 9));
    // 0x1b0bc4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1b0bc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0bc8: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1b0bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x1b0bcc: 0x27848334  addiu       $a0, $gp, -0x7CCC
    ctx->pc = 0x1b0bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935348));
    // 0x1b0bd0: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1b0bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1b0bd4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1b0bd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0bd8: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x1b0bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x1b0bdc: 0x240774c0  addiu       $a3, $zero, 0x74C0
    ctx->pc = 0x1b0bdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29888));
    // 0x1b0be0: 0x240800c0  addiu       $t0, $zero, 0xC0
    ctx->pc = 0x1b0be0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x1b0be4: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x1b0be4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b0be8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1b0be8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0bec: 0xc06be8c  jal         func_1AFA30
    ctx->pc = 0x1B0BECu;
    SET_GPR_U32(ctx, 31, 0x1B0BF4u);
    ctx->pc = 0x1B0BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0BECu;
    // 0x1b0bf0: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFA30u, 0x1B0BECu, 0x1B0BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0BF4u;
label_1b0bf4:
    // 0x1b0bf4: 0x263100c0  addiu       $s1, $s1, 0xC0
    ctx->pc = 0x1b0bf4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x1b0bf8: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x1b0bf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    ctx->pc = 0x1b0bfcu;
}
