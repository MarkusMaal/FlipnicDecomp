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

// Function: entry_0010fa24
// Address: 0x10fa24 - 0x10fa84
void entry_0010fa24_0x10fa24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fa24_0x10fa24");
#endif

    ctx->pc = 0x10fa24u;

    // 0x10fa24: 0x0  nop
    ctx->pc = 0x10fa24u;
    // NOP
    // 0x10fa28: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x10fa28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x10fa2c: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x10fa2cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x10fa30: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x10FA30u;
    {
        const bool branch_taken_0x10fa30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10fa30) {
            ctx->pc = 0x10F9F0u;
            return;
        }
    }
    ctx->pc = 0x10FA38u;
    // 0x10fa38: 0x8e450024  lw          $a1, 0x24($s2)
    ctx->pc = 0x10fa38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x10fa3c: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x10fa3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
    // 0x10fa40: 0x24840270  addiu       $a0, $a0, 0x270
    ctx->pc = 0x10fa40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 624));
    // 0x10fa44: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x10fa44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10fa48: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x10fa48u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x10fa4c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x10fa4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x10fa50: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x10fa50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10fa54: 0xae440018  sw          $a0, 0x18($s2)
    ctx->pc = 0x10fa54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 4));
    // 0x10fa58: 0xae43002c  sw          $v1, 0x2C($s2)
    ctx->pc = 0x10fa58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 3));
    // 0x10fa5c: 0xae400030  sw          $zero, 0x30($s2)
    ctx->pc = 0x10fa5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 0));
    // 0x10fa60: 0xae400034  sw          $zero, 0x34($s2)
    ctx->pc = 0x10fa60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 0));
    // 0x10fa64: 0xa2400041  sb          $zero, 0x41($s2)
    ctx->pc = 0x10fa64u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 65), (uint8_t)GPR_U32(ctx, 0));
    // 0x10fa68: 0xa2400042  sb          $zero, 0x42($s2)
    ctx->pc = 0x10fa68u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 66), (uint8_t)GPR_U32(ctx, 0));
    // 0x10fa6c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x10fa6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10fa70: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x10fa70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10fa74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10fa74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10fa78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10fa78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10fa7c: 0x3e00008  jr          $ra
    ctx->pc = 0x10FA7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10FA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FA7Cu;
        // 0x10fa80: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10FA7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10FA84u;
}
