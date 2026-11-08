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

// Function: FUN_00190be0
// Address: 0x190be0 - 0x190c84
void FUN_00190be0_0x190be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00190be0_0x190be0");
#endif

    switch (ctx->pc) {
        case 0x190bf4u: goto label_190bf4;
        case 0x190c08u: goto label_190c08;
        case 0x190c30u: goto label_190c30;
        default: break;
    }

    ctx->pc = 0x190be0u;

    // 0x190be0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x190be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x190be4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x190be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x190be8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x190be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x190bec: 0xc063d34  jal         func_18F4D0
    ctx->pc = 0x190BECu;
    SET_GPR_U32(ctx, 31, 0x190BF4u);
    ctx->pc = 0x190BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190BECu;
    // 0x190bf0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F4D0u, 0x190BECu, 0x190BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190BF4u;
label_190bf4:
    // 0x190bf4: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x190bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x190bf8: 0x26040350  addiu       $a0, $s0, 0x350
    ctx->pc = 0x190bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 848));
    // 0x190bfc: 0x2442b200  addiu       $v0, $v0, -0x4E00
    ctx->pc = 0x190bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947328));
    // 0x190c00: 0xae02031c  sw          $v0, 0x31C($s0)
    ctx->pc = 0x190c00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 796), GPR_U32(ctx, 2));
    // 0x190c04: 0x26030450  addiu       $v1, $s0, 0x450
    ctx->pc = 0x190c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1104));
label_190c08:
    // 0x190c08: 0x7c800000  sq          $zero, 0x0($a0)
    ctx->pc = 0x190c08u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 0));
    // 0x190c0c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x190c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x190c10: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x190c10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x190c14: 0x0  nop
    ctx->pc = 0x190c14u;
    // NOP
    // 0x190c18: 0x0  nop
    ctx->pc = 0x190c18u;
    // NOP
    // 0x190c1c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x190C1Cu;
    {
        const bool branch_taken_0x190c1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x190c1c) {
            ctx->pc = 0x190C08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_190c08;
        }
    }
    ctx->pc = 0x190C24u;
    // 0x190c24: 0x7e000550  sq          $zero, 0x550($s0)
    ctx->pc = 0x190c24u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1360), GPR_VEC(ctx, 0));
    // 0x190c28: 0x26040560  addiu       $a0, $s0, 0x560
    ctx->pc = 0x190c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
    // 0x190c2c: 0x26030660  addiu       $v1, $s0, 0x660
    ctx->pc = 0x190c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1632));
label_190c30:
    // 0x190c30: 0x7c800000  sq          $zero, 0x0($a0)
    ctx->pc = 0x190c30u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 0));
    // 0x190c34: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x190c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x190c38: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x190c38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x190c3c: 0x0  nop
    ctx->pc = 0x190c3cu;
    // NOP
    // 0x190c40: 0x0  nop
    ctx->pc = 0x190c40u;
    // NOP
    // 0x190c44: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x190C44u;
    {
        const bool branch_taken_0x190c44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x190c44) {
            ctx->pc = 0x190C30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_190c30;
        }
    }
    ctx->pc = 0x190C4Cu;
    // 0x190c4c: 0xae000660  sw          $zero, 0x660($s0)
    ctx->pc = 0x190c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1632), GPR_U32(ctx, 0));
    // 0x190c50: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x190c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x190c54: 0xae020320  sw          $v0, 0x320($s0)
    ctx->pc = 0x190c54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 800), GPR_U32(ctx, 2));
    // 0x190c58: 0xae000328  sw          $zero, 0x328($s0)
    ctx->pc = 0x190c58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 808), GPR_U32(ctx, 0));
    // 0x190c5c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x190c5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190c60: 0xae00032c  sw          $zero, 0x32C($s0)
    ctx->pc = 0x190c60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 812), GPR_U32(ctx, 0));
    // 0x190c64: 0xae000330  sw          $zero, 0x330($s0)
    ctx->pc = 0x190c64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 816), GPR_U32(ctx, 0));
    // 0x190c68: 0xae000334  sw          $zero, 0x334($s0)
    ctx->pc = 0x190c68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 820), GPR_U32(ctx, 0));
    // 0x190c6c: 0xae000338  sw          $zero, 0x338($s0)
    ctx->pc = 0x190c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 824), GPR_U32(ctx, 0));
    // 0x190c70: 0xae00033c  sw          $zero, 0x33C($s0)
    ctx->pc = 0x190c70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 828), GPR_U32(ctx, 0));
    // 0x190c74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x190c74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190c78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x190c78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190c7c: 0x3e00008  jr          $ra
    ctx->pc = 0x190C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190C7Cu;
        // 0x190c80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190C7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190C84u;
}
