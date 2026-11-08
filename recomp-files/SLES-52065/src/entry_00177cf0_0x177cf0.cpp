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

// Function: entry_00177cf0
// Address: 0x177cf0 - 0x177d48
void entry_00177cf0_0x177cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177cf0_0x177cf0");
#endif

    switch (ctx->pc) {
        case 0x177d14u: goto label_177d14;
        case 0x177d2cu: goto label_177d2c;
        default: break;
    }

    ctx->pc = 0x177cf0u;

    // 0x177cf0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x177cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x177cf4: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x177cf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x177cf8: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x177CF8u;
    {
        const bool branch_taken_0x177cf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x177CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177CF8u;
        // 0x177cfc: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177cf8) {
            ctx->pc = 0x177CB0u;
            return;
        }
    }
    ctx->pc = 0x177D00u;
    // 0x177d00: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x177d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x177d04: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x177d04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x177d08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x177d08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177d0c: 0xc05dfe8  jal         func_177FA0
    ctx->pc = 0x177D0Cu;
    SET_GPR_U32(ctx, 31, 0x177D14u);
    ctx->pc = 0x177D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177D0Cu;
    // 0x177d10: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177FA0u, 0x177D0Cu, 0x177D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177D14u;
label_177d14:
    // 0x177d14: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x177d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x177d18: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x177d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x177d1c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x177d1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x177d20: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x177d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x177d24: 0xc05dfe8  jal         func_177FA0
    ctx->pc = 0x177D24u;
    SET_GPR_U32(ctx, 31, 0x177D2Cu);
    ctx->pc = 0x177D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177D24u;
    // 0x177d28: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177FA0u, 0x177D24u, 0x177D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177D2Cu;
label_177d2c:
    // 0x177d2c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x177d2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x177d30: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x177d30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x177d34: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x177d34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x177d38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x177d38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177d3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x177d3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177d40: 0x3e00008  jr          $ra
    ctx->pc = 0x177D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177D40u;
        // 0x177d44: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177D40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177D48u;
}
