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

// Function: FUN_00117b30
// Address: 0x117b30 - 0x117bfc
void FUN_00117b30_0x117b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00117b30_0x117b30");
#endif

    switch (ctx->pc) {
        case 0x117b50u: goto label_117b50;
        case 0x117b58u: goto label_117b58;
        case 0x117b60u: goto label_117b60;
        case 0x117ba4u: goto label_117ba4;
        case 0x117bb4u: goto label_117bb4;
        case 0x117bd4u: goto label_117bd4;
        default: break;
    }

    ctx->pc = 0x117b30u;

    // 0x117b30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x117b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x117b34: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x117b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x117b38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x117b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x117b3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x117b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x117b40: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x117b40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117b44: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x117b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x117b48: 0xc060ec8  jal         func_183B20
    ctx->pc = 0x117B48u;
    SET_GPR_U32(ctx, 31, 0x117B50u);
    ctx->pc = 0x117B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117B48u;
    // 0x117b4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183B20u, 0x117B48u, 0x117B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117B50u;
label_117b50:
    // 0x117b50: 0xc0610d0  jal         func_184340
    ctx->pc = 0x117B50u;
    SET_GPR_U32(ctx, 31, 0x117B58u);
    ctx->pc = 0x117B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117B50u;
    // 0x117b54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184340u, 0x117B50u, 0x117B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117B58u;
label_117b58:
    // 0x117b58: 0xc06112c  jal         func_1844B0
    ctx->pc = 0x117B58u;
    SET_GPR_U32(ctx, 31, 0x117B60u);
    ctx->pc = 0x117B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117B58u;
    // 0x117b5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1844B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1844B0u, 0x117B58u, 0x117B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117B60u;
label_117b60:
    // 0x117b60: 0x8f828344  lw          $v0, -0x7CBC($gp)
    ctx->pc = 0x117b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935364)));
    // 0x117b64: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x117B64u;
    {
        const bool branch_taken_0x117b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117B64u;
        // 0x117b68: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x117b64) {
            ctx->pc = 0x117B70u;
            goto label_117b70;
        }
    }
    ctx->pc = 0x117B6Cu;
    // 0x117b6c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x117b6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_117b70:
    // 0x117b70: 0x83828374  lb          $v0, -0x7C8C($gp)
    ctx->pc = 0x117b70u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935412)));
    // 0x117b74: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x117B74u;
    {
        const bool branch_taken_0x117b74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x117B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117B74u;
        // 0x117b78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117b74) {
            ctx->pc = 0x117B84u;
            goto label_117b84;
        }
    }
    ctx->pc = 0x117B7Cu;
    // 0x117b7c: 0xaf808370  sw          $zero, -0x7C90($gp)
    ctx->pc = 0x117b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935408), GPR_U32(ctx, 0));
    // 0x117b80: 0xa3828374  sb          $v0, -0x7C8C($gp)
    ctx->pc = 0x117b80u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935412), (uint8_t)GPR_U32(ctx, 2));
label_117b84:
    // 0x117b84: 0x8382837c  lb          $v0, -0x7C84($gp)
    ctx->pc = 0x117b84u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935420)));
    // 0x117b88: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x117B88u;
    {
        const bool branch_taken_0x117b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x117B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117B88u;
        // 0x117b8c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117b88) {
            ctx->pc = 0x117BA0u;
            goto label_117ba0;
        }
    }
    ctx->pc = 0x117B90u;
    // 0x117b90: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x117b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x117b94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x117b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x117b98: 0xaf838378  sw          $v1, -0x7C88($gp)
    ctx->pc = 0x117b98u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935416), GPR_U32(ctx, 3));
    // 0x117b9c: 0xa382837c  sb          $v0, -0x7C84($gp)
    ctx->pc = 0x117b9cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935420), (uint8_t)GPR_U32(ctx, 2));
label_117ba0:
    // 0x117ba0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x117ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_117ba4:
    // 0x117ba4: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x117ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x117ba8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x117ba8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117bac: 0xc061734  jal         func_185CD0
    ctx->pc = 0x117BACu;
    SET_GPR_U32(ctx, 31, 0x117BB4u);
    ctx->pc = 0x117BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117BACu;
    // 0x117bb0: 0x240700ff  addiu       $a3, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185CD0u, 0x117BACu, 0x117BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117BB4u;
label_117bb4:
    // 0x117bb4: 0x8f858340  lw          $a1, -0x7CC0($gp)
    ctx->pc = 0x117bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935360)));
    // 0x117bb8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x117bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x117bbc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x117bbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x117bc0: 0x320800ff  andi        $t0, $s0, 0xFF
    ctx->pc = 0x117bc0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x117bc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x117bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117bc8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x117bc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117bcc: 0xc061438  jal         func_1850E0
    ctx->pc = 0x117BCCu;
    SET_GPR_U32(ctx, 31, 0x117BD4u);
    ctx->pc = 0x117BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117BCCu;
    // 0x117bd0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1850E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1850E0u, 0x117BCCu, 0x117BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117BD4u;
label_117bd4:
    // 0x117bd4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x117bd4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x117bd8: 0x2a430014  slti        $v1, $s2, 0x14
    ctx->pc = 0x117bd8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x117bdc: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x117BDCu;
    {
        const bool branch_taken_0x117bdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x117BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117BDCu;
        // 0x117be0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117bdc) {
            ctx->pc = 0x117BA4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_117ba4;
        }
    }
    ctx->pc = 0x117BE4u;
    // 0x117be4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x117be4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x117be8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x117be8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x117bec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x117becu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117bf0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x117bf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117bf4: 0x3e00008  jr          $ra
    ctx->pc = 0x117BF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117BF4u;
        // 0x117bf8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117BF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117BFCu;
}
