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

// Function: FUN_00116ed0
// Address: 0x116ed0 - 0x116f24
void FUN_00116ed0_0x116ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00116ed0_0x116ed0");
#endif

    switch (ctx->pc) {
        case 0x116ee4u: goto label_116ee4;
        default: break;
    }

    ctx->pc = 0x116ed0u;

    // 0x116ed0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x116ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x116ed4: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x116ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x116ed8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x116ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x116edc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x116EDCu;
    {
        const bool branch_taken_0x116edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116EDCu;
        // 0x116ee0: 0x24a50370  addiu       $a1, $a1, 0x370 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 880));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116edc) {
            ctx->pc = 0x116F0Cu;
            goto label_116f0c;
        }
    }
    ctx->pc = 0x116EE4u;
label_116ee4:
    // 0x116ee4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x116ee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x116ee8: 0xc31826  xor         $v1, $a2, $v1
    ctx->pc = 0x116ee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 3));
    // 0x116eec: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x116eecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x116ef0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x116ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x116ef4: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x116ef4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x116ef8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x116ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x116efc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x116efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x116f00: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x116f00u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x116f04: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x116f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x116f08: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x116f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_116f0c:
    // 0x116f0c: 0x0  nop
    ctx->pc = 0x116f0cu;
    // NOP
    // 0x116f10: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x116f10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x116f14: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x116F14u;
    {
        const bool branch_taken_0x116f14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x116F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116F14u;
        // 0x116f18: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x116f14) {
            ctx->pc = 0x116EE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_116ee4;
        }
    }
    ctx->pc = 0x116F1Cu;
    // 0x116f1c: 0x3e00008  jr          $ra
    ctx->pc = 0x116F1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116F1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116F24u;
}
