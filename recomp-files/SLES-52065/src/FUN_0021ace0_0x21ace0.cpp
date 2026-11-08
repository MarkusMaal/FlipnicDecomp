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

// Function: FUN_0021ace0
// Address: 0x21ace0 - 0x21ada0
void FUN_0021ace0_0x21ace0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0021ace0_0x21ace0");
#endif

    switch (ctx->pc) {
        case 0x21ad08u: goto label_21ad08;
        default: break;
    }

    ctx->pc = 0x21ace0u;

    // 0x21ace0: 0x3c06bc00  lui         $a2, 0xBC00
    ctx->pc = 0x21ace0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48128 << 16));
    // 0x21ace4: 0x8cc603c0  lw          $a2, 0x3C0($a2)
    ctx->pc = 0x21ace4u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0xBC0003C0u));
    // 0x21ace8: 0x10c00011  beqz        $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x21ACE8u;
    {
        const bool branch_taken_0x21ace8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x21ACECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ACE8u;
        // 0x21acec: 0x3c088007  lui         $t0, 0x8007 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32775 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ace8) {
            ctx->pc = 0x21AD30u;
            goto label_21ad30;
        }
    }
    ctx->pc = 0x21ACF0u;
    // 0x21acf0: 0x3c02bc00  lui         $v0, 0xBC00
    ctx->pc = 0x21acf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48128 << 16));
    // 0x21acf4: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x21acf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x21acf8: 0x25074700  addiu       $a3, $t0, 0x4700
    ctx->pc = 0x21acf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 18176));
    // 0x21acfc: 0x24c6000f  addiu       $a2, $a2, 0xF
    ctx->pc = 0x21acfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
    // 0x21ad00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21ad00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ad04: 0x0  nop
    ctx->pc = 0x21ad04u;
    // NOP
label_21ad08:
    // 0x21ad08: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x21ad08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x21ad0c: 0xe52021  addu        $a0, $a3, $a1
    ctx->pc = 0x21ad0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x21ad10: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x21ad10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21ad14: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x21ad14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x21ad18: 0x28a20026  slti        $v0, $a1, 0x26
    ctx->pc = 0x21ad18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)38) ? 1 : 0);
    // 0x21ad1c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x21ad1cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x21ad20: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x21AD20u;
    {
        const bool branch_taken_0x21ad20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21ad20) {
            ctx->pc = 0x21AD08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21ad08;
        }
    }
    ctx->pc = 0x21AD28u;
    // 0x21ad28: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x21AD28u;
    {
        const bool branch_taken_0x21ad28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AD28u;
        // 0x21ad2c: 0xdd034700  ld          $v1, 0x4700($t0) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 8), 18176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ad28) {
            ctx->pc = 0x21AD34u;
            goto label_21ad34;
        }
    }
    ctx->pc = 0x21AD30u;
label_21ad30:
    // 0x21ad30: 0xdd034700  ld          $v1, 0x4700($t0)
    ctx->pc = 0x21ad30u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 8), 18176)));
label_21ad34:
    // 0x21ad34: 0x316b8  dsll        $v0, $v1, 26
    ctx->pc = 0x21ad34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 26);
    // 0x21ad38: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x21ad38u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x21ad3c: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x21ad3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x21ad40: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x21AD40u;
    {
        const bool branch_taken_0x21ad40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21ad40) {
            ctx->pc = 0x21AD98u;
            goto label_21ad98;
        }
    }
    ctx->pc = 0x21AD48u;
    // 0x21ad48: 0x2402feff  addiu       $v0, $zero, -0x101
    ctx->pc = 0x21ad48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    // 0x21ad4c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x21ad4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x21ad50: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21ad50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21ad54: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x21ad54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x21ad58: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21ad58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21ad5c: 0x2404f3ff  addiu       $a0, $zero, -0xC01
    ctx->pc = 0x21ad5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294964223));
    // 0x21ad60: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x21ad60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x21ad64: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x21ad64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x21ad68: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x21ad68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x21ad6c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x21ad6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x21ad70: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x21ad70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x21ad74: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x21ad74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x21ad78: 0x34630fff  ori         $v1, $v1, 0xFFF
    ctx->pc = 0x21ad78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4095);
    // 0x21ad7c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x21ad7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x21ad80: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x21ad80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x21ad84: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x21ad84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x21ad88: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x21ad88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x21ad8c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x21ad8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x21ad90: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x21ad90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x21ad94: 0xfd024700  sd          $v0, 0x4700($t0)
    ctx->pc = 0x21ad94u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 18176), GPR_U64(ctx, 2));
label_21ad98:
    // 0x21ad98: 0x3e00008  jr          $ra
    ctx->pc = 0x21AD98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21AD98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21ADA0u;
}
