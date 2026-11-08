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

// Function: entry_0015c8b0
// Address: 0x15c8b0 - 0x15c940
void entry_0015c8b0_0x15c8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015c8b0_0x15c8b0");
#endif

    switch (ctx->pc) {
        case 0x15c8ecu: goto label_15c8ec;
        default: break;
    }

    ctx->pc = 0x15c8b0u;

    // 0x15c8b0: 0x2b19021  addu        $s2, $s5, $s1
    ctx->pc = 0x15c8b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x15c8b4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x15c8b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15c8b8: 0x86420228  lh          $v0, 0x228($s2)
    ctx->pc = 0x15c8b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 552)));
    // 0x15c8bc: 0x1046003b  beq         $v0, $a2, . + 4 + (0x3B << 2)
    ctx->pc = 0x15C8BCu;
    {
        const bool branch_taken_0x15c8bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x15c8bc) {
            ctx->pc = 0x15C9ACu;
            return;
        }
    }
    ctx->pc = 0x15C8C4u;
    // 0x15c8c4: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x15C8C4u;
    {
        const bool branch_taken_0x15c8c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15c8c4) {
            ctx->pc = 0x15C9ACu;
            return;
        }
    }
    ctx->pc = 0x15C8CCu;
    // 0x15c8cc: 0x8642022a  lh          $v0, 0x22A($s2)
    ctx->pc = 0x15c8ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 554)));
    // 0x15c8d0: 0x2841ffff  slti        $at, $v0, -0x1
    ctx->pc = 0x15c8d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x15c8d4: 0x14200035  bnez        $at, . + 4 + (0x35 << 2)
    ctx->pc = 0x15C8D4u;
    {
        const bool branch_taken_0x15c8d4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C8D4u;
        // 0x15c8d8: 0x26530040  addiu       $s3, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c8d4) {
            ctx->pc = 0x15C9ACu;
            return;
        }
    }
    ctx->pc = 0x15C8DCu;
    // 0x15c8dc: 0x26a42c00  addiu       $a0, $s5, 0x2C00
    ctx->pc = 0x15c8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 11264));
    // 0x15c8e0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x15c8e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c8e4: 0xc058138  jal         func_1604E0
    ctx->pc = 0x15C8E4u;
    SET_GPR_U32(ctx, 31, 0x15C8ECu);
    ctx->pc = 0x15C8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C8E4u;
    // 0x15c8e8: 0x26470310  addiu       $a3, $s2, 0x310 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1604E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1604E0u, 0x15C8E4u, 0x15C8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C8ECu;
label_15c8ec:
    // 0x15c8ec: 0x8e420310  lw          $v0, 0x310($s2)
    ctx->pc = 0x15c8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 784)));
    // 0x15c8f0: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x15C8F0u;
    {
        const bool branch_taken_0x15c8f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c8f0) {
            ctx->pc = 0x15C9ACu;
            return;
        }
    }
    ctx->pc = 0x15C8F8u;
    // 0x15c8f8: 0x8e430318  lw          $v1, 0x318($s2)
    ctx->pc = 0x15c8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 792)));
    // 0x15c8fc: 0x8e450320  lw          $a1, 0x320($s2)
    ctx->pc = 0x15c8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 800)));
    // 0x15c900: 0x8ea62c1c  lw          $a2, 0x2C1C($s5)
    ctx->pc = 0x15c900u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11292)));
    // 0x15c904: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x15c904u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15c908: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x15c908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15c90c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x15c90cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x15c910: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15c910u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x15c914: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x15c914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x15c918: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x15c918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x15c91c: 0x29100  sll         $s2, $v0, 4
    ctx->pc = 0x15c91cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x15c920: 0xd21021  addu        $v0, $a2, $s2
    ctx->pc = 0x15c920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x15c924: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x15c924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15c928: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x15c928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15c92c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x15c92cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15c930: 0x0  nop
    ctx->pc = 0x15c930u;
    // NOP
    // 0x15c934: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x15C934u;
    {
        const bool branch_taken_0x15c934 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x15C938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C934u;
        // 0x15c938: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c934) {
            ctx->pc = 0x15C940u;
            return;
        }
    }
    ctx->pc = 0x15C93Cu;
    // 0x15c93c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x15c93cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15c940u;
}
