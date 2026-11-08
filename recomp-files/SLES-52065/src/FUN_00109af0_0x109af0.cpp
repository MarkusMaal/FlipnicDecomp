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

// Function: FUN_00109af0
// Address: 0x109af0 - 0x109b7c
void FUN_00109af0_0x109af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00109af0_0x109af0");
#endif

    switch (ctx->pc) {
        case 0x109b20u: goto label_109b20;
        case 0x109b44u: goto label_109b44;
        case 0x109b50u: goto label_109b50;
        default: break;
    }

    ctx->pc = 0x109af0u;

    // 0x109af0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x109af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x109af4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x109af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x109af8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x109af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x109afc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x109afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x109b00: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x109b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x109b04: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x109b04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109b08: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x109b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
    // 0x109b0c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x109b0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109b10: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x109b10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x109b14: 0x24a5e1f8  addiu       $a1, $a1, -0x1E08
    ctx->pc = 0x109b14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959608));
    // 0x109b18: 0xc06cf0c  jal         func_1B3C30
    ctx->pc = 0x109B18u;
    SET_GPR_U32(ctx, 31, 0x109B20u);
    ctx->pc = 0x109B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109B18u;
    // 0x109b1c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x109B18u, 0x109B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109B20u;
label_109b20:
    // 0x109b20: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x109b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x109b24: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x109b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x109b28: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x109b28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x109b2c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x109b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x109b30: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x109b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x109b34: 0x8442000a  lh          $v0, 0xA($v0)
    ctx->pc = 0x109b34u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x109b38: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x109b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x109b3c: 0x501018  mult        $v0, $v0, $s0
    ctx->pc = 0x109b3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x109b40: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x109b40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_109b44:
    // 0x109b44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x109b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109b48: 0xc0426e0  jal         func_109B80
    ctx->pc = 0x109B48u;
    SET_GPR_U32(ctx, 31, 0x109B50u);
    ctx->pc = 0x109B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109B48u;
    // 0x109b4c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109B80u, 0x109B48u, 0x109B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109B50u;
label_109b50:
    // 0x109b50: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x109B50u;
    {
        const bool branch_taken_0x109b50 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x109b50) {
            ctx->pc = 0x109B60u;
            goto label_109b60;
        }
    }
    ctx->pc = 0x109B58u;
    // 0x109b58: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x109B58u;
    {
        const bool branch_taken_0x109b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109B58u;
        // 0x109b5c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109b58) {
            ctx->pc = 0x109B44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109b44;
        }
    }
    ctx->pc = 0x109B60u;
label_109b60:
    // 0x109b60: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x109b60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x109b64: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x109b64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x109b68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x109b68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109b6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x109b6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x109b70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x109b70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x109b74: 0x3e00008  jr          $ra
    ctx->pc = 0x109B74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x109B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109B74u;
        // 0x109b78: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109B74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x109B7Cu;
}
