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

// Function: FUN_0015ba60
// Address: 0x15ba60 - 0x15bacc
void FUN_0015ba60_0x15ba60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015ba60_0x15ba60");
#endif

    switch (ctx->pc) {
        case 0x15ba8cu: goto label_15ba8c;
        case 0x15ba98u: goto label_15ba98;
        case 0x15baa8u: goto label_15baa8;
        default: break;
    }

    ctx->pc = 0x15ba60u;

    // 0x15ba60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15ba60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15ba64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15ba64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15ba68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x15ba68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15ba6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15ba6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15ba70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15ba70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ba74: 0x84840218  lh          $a0, 0x218($a0)
    ctx->pc = 0x15ba74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 536)));
    // 0x15ba78: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x15BA78u;
    {
        const bool branch_taken_0x15ba78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x15ba78) {
            ctx->pc = 0x15BAB0u;
            goto label_15bab0;
        }
    }
    ctx->pc = 0x15BA80u;
    // 0x15ba80: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x15ba80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x15ba84: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x15BA84u;
    SET_GPR_U32(ctx, 31, 0x15BA8Cu);
    ctx->pc = 0x15BA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BA84u;
    // 0x15ba88: 0xa6020218  sh          $v0, 0x218($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 536), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x15BA84u, 0x15BA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BA8Cu;
label_15ba8c:
    // 0x15ba8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15ba8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ba90: 0xc042118  jal         func_108460
    ctx->pc = 0x15BA90u;
    SET_GPR_U32(ctx, 31, 0x15BA98u);
    ctx->pc = 0x15BA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BA90u;
    // 0x15ba94: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x15BA90u, 0x15BA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BA98u;
label_15ba98:
    // 0x15ba98: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x15ba98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x15ba9c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15ba9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15baa0: 0xc05bc2c  jal         func_16F0B0
    ctx->pc = 0x15BAA0u;
    SET_GPR_U32(ctx, 31, 0x15BAA8u);
    ctx->pc = 0x15BAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BAA0u;
    // 0x15baa4: 0x24847520  addiu       $a0, $a0, 0x7520 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F0B0u, 0x15BAA0u, 0x15BAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BAA8u;
label_15baa8:
    // 0x15baa8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x15BAA8u;
    {
        const bool branch_taken_0x15baa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BAA8u;
        // 0x15baac: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15baa8) {
            ctx->pc = 0x15BAC0u;
            goto label_15bac0;
        }
    }
    ctx->pc = 0x15BAB0u;
label_15bab0:
    // 0x15bab0: 0x18800002  blez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x15BAB0u;
    {
        const bool branch_taken_0x15bab0 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x15BAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BAB0u;
        // 0x15bab4: 0x2483ffff  addiu       $v1, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bab0) {
            ctx->pc = 0x15BABCu;
            goto label_15babc;
        }
    }
    ctx->pc = 0x15BAB8u;
    // 0x15bab8: 0xa6030218  sh          $v1, 0x218($s0)
    ctx->pc = 0x15bab8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 536), (uint16_t)GPR_U32(ctx, 3));
label_15babc:
    // 0x15babc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15babcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_15bac0:
    // 0x15bac0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15bac0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15bac4: 0x3e00008  jr          $ra
    ctx->pc = 0x15BAC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15BAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BAC4u;
        // 0x15bac8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BAC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15BACCu;
}
