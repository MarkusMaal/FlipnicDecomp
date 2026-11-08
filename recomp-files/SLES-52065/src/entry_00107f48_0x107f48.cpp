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

// Function: entry_00107f48
// Address: 0x107f48 - 0x107fb4
void entry_00107f48_0x107f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107f48_0x107f48");
#endif

    switch (ctx->pc) {
        case 0x107f88u: goto label_107f88;
        case 0x107f98u: goto label_107f98;
        case 0x107fa8u: goto label_107fa8;
        default: break;
    }

    ctx->pc = 0x107f48u;

label_107f48:
    // 0x107f48: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x107f48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x107f4c: 0x24a5ffd0  addiu       $a1, $a1, -0x30
    ctx->pc = 0x107f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967248));
    // 0x107f50: 0xb08821  addu        $s1, $a1, $s0
    ctx->pc = 0x107f50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x107f54: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x107f54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x107f58: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x107f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x107f5c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x107f5cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x107f60: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x107F60u;
    {
        const bool branch_taken_0x107f60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x107F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107F60u;
        // 0x107f64: 0x26430001  addiu       $v1, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107f60) {
            ctx->pc = 0x107FB4u;
            return;
        }
    }
    ctx->pc = 0x107F68u;
    // 0x107f68: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x107f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x107f6c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x107f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x107f70: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x107f70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x107f74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x107f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x107f78: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x107f78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x107f7c: 0xa29821  addu        $s3, $a1, $v0
    ctx->pc = 0x107f7cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x107f80: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x107F80u;
    SET_GPR_U32(ctx, 31, 0x107F88u);
    ctx->pc = 0x107F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107F80u;
    // 0x107f84: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x107F80u, 0x107F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107F88u;
label_107f88:
    // 0x107f88: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x107f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107f8c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x107f8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107f90: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x107F90u;
    SET_GPR_U32(ctx, 31, 0x107F98u);
    ctx->pc = 0x107F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107F90u;
    // 0x107f94: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x107F90u, 0x107F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107F98u;
label_107f98:
    // 0x107f98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x107f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107f9c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x107f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x107fa0: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x107FA0u;
    SET_GPR_U32(ctx, 31, 0x107FA8u);
    ctx->pc = 0x107FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107FA0u;
    // 0x107fa4: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x107FA0u, 0x107FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107FA8u;
label_107fa8:
    // 0x107fa8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x107fa8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x107fac: 0x641ffe6  bgez        $s2, . + 4 + (-0x1A << 2)
    ctx->pc = 0x107FACu;
    {
        const bool branch_taken_0x107fac = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x107FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107FACu;
        // 0x107fb0: 0x2610ffe8  addiu       $s0, $s0, -0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107fac) {
            ctx->pc = 0x107F48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_107f48;
        }
    }
    ctx->pc = 0x107FB4u;
}
