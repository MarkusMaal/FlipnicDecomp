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

// Function: FUN_0016bcf0
// Address: 0x16bcf0 - 0x16bd3c
void FUN_0016bcf0_0x16bcf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016bcf0_0x16bcf0");
#endif

    switch (ctx->pc) {
        case 0x16bcf0u: goto label_16bcf0;
        case 0x16bcf4u: goto label_16bcf4;
        case 0x16bcf8u: goto label_16bcf8;
        case 0x16bcfcu: goto label_16bcfc;
        case 0x16bd00u: goto label_16bd00;
        case 0x16bd04u: goto label_16bd04;
        case 0x16bd08u: goto label_16bd08;
        case 0x16bd0cu: goto label_16bd0c;
        case 0x16bd10u: goto label_16bd10;
        case 0x16bd14u: goto label_16bd14;
        case 0x16bd18u: goto label_16bd18;
        case 0x16bd1cu: goto label_16bd1c;
        case 0x16bd20u: goto label_16bd20;
        case 0x16bd24u: goto label_16bd24;
        case 0x16bd28u: goto label_16bd28;
        case 0x16bd2cu: goto label_16bd2c;
        case 0x16bd30u: goto label_16bd30;
        case 0x16bd34u: goto label_16bd34;
        case 0x16bd38u: goto label_16bd38;
        default: break;
    }

    ctx->pc = 0x16bcf0u;

label_16bcf0:
    // 0x16bcf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16bcf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_16bcf4:
    // 0x16bcf4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16bcf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_16bcf8:
    // 0x16bcf8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16bcf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16bcfc:
    // 0x16bcfc: 0xc0563cc  jal         func_158F30
label_16bd00:
    if (ctx->pc == 0x16BD00u) {
        ctx->pc = 0x16BD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BCFCu;
        // 0x16bd00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16BD04u;
        goto label_16bd04;
    }
    ctx->pc = 0x16BCFCu;
    SET_GPR_U32(ctx, 31, 0x16BD04u);
    ctx->pc = 0x16BD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BCFCu;
    // 0x16bd00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158F30u, 0x16BCFCu, 0x16BD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BD04u;
label_16bd04:
    // 0x16bd04: 0xa20001d0  sb          $zero, 0x1D0($s0)
    ctx->pc = 0x16bd04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 464), (uint8_t)GPR_U32(ctx, 0));
label_16bd08:
    // 0x16bd08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16bd08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16bd0c:
    // 0x16bd0c: 0xa6000220  sh          $zero, 0x220($s0)
    ctx->pc = 0x16bd0cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 544), (uint16_t)GPR_U32(ctx, 0));
label_16bd10:
    // 0x16bd10: 0xae000230  sw          $zero, 0x230($s0)
    ctx->pc = 0x16bd10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 560), GPR_U32(ctx, 0));
label_16bd14:
    // 0x16bd14: 0xae000224  sw          $zero, 0x224($s0)
    ctx->pc = 0x16bd14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 548), GPR_U32(ctx, 0));
label_16bd18:
    // 0x16bd18: 0xae00022c  sw          $zero, 0x22C($s0)
    ctx->pc = 0x16bd18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 556), GPR_U32(ctx, 0));
label_16bd1c:
    // 0x16bd1c: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x16bd1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_16bd20:
    // 0x16bd20: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x16bd20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_16bd24:
    // 0x16bd24: 0x320f809  jalr        $t9
label_16bd28:
    if (ctx->pc == 0x16BD28u) {
        ctx->pc = 0x16BD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BD24u;
        // 0x16bd28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16BD2Cu;
        goto label_16bd2c;
    }
    ctx->pc = 0x16BD24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16BD2Cu);
        ctx->pc = 0x16BD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BD24u;
        // 0x16bd28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16BD24u, 0x16BD2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16BD2Cu;
label_16bd2c:
    // 0x16bd2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16bd2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16bd30:
    // 0x16bd30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16bd30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_16bd34:
    // 0x16bd34: 0x3e00008  jr          $ra
label_16bd38:
    if (ctx->pc == 0x16BD38u) {
        ctx->pc = 0x16BD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BD34u;
        // 0x16bd38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16BD3Cu;
        goto label_fallthrough_0x16bd34;
    }
    ctx->pc = 0x16BD34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16BD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BD34u;
        // 0x16bd38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16BD34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x16bd34:
    ctx->pc = 0x16BD3Cu;
}
