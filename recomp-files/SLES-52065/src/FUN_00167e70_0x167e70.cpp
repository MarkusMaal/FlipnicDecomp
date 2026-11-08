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

// Function: FUN_00167e70
// Address: 0x167e70 - 0x167ebc
void FUN_00167e70_0x167e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00167e70_0x167e70");
#endif

    switch (ctx->pc) {
        case 0x167e70u: goto label_167e70;
        case 0x167e74u: goto label_167e74;
        case 0x167e78u: goto label_167e78;
        case 0x167e7cu: goto label_167e7c;
        case 0x167e80u: goto label_167e80;
        case 0x167e84u: goto label_167e84;
        case 0x167e88u: goto label_167e88;
        case 0x167e8cu: goto label_167e8c;
        case 0x167e90u: goto label_167e90;
        case 0x167e94u: goto label_167e94;
        case 0x167e98u: goto label_167e98;
        case 0x167e9cu: goto label_167e9c;
        case 0x167ea0u: goto label_167ea0;
        case 0x167ea4u: goto label_167ea4;
        case 0x167ea8u: goto label_167ea8;
        case 0x167eacu: goto label_167eac;
        case 0x167eb0u: goto label_167eb0;
        case 0x167eb4u: goto label_167eb4;
        case 0x167eb8u: goto label_167eb8;
        default: break;
    }

    ctx->pc = 0x167e70u;

label_167e70:
    // 0x167e70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x167e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_167e74:
    // 0x167e74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x167e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_167e78:
    // 0x167e78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x167e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_167e7c:
    // 0x167e7c: 0xc0563cc  jal         func_158F30
label_167e80:
    if (ctx->pc == 0x167E80u) {
        ctx->pc = 0x167E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167E7Cu;
        // 0x167e80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167E84u;
        goto label_167e84;
    }
    ctx->pc = 0x167E7Cu;
    SET_GPR_U32(ctx, 31, 0x167E84u);
    ctx->pc = 0x167E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167E7Cu;
    // 0x167e80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158F30u, 0x167E7Cu, 0x167E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167E84u;
label_167e84:
    // 0x167e84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x167e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_167e88:
    // 0x167e88: 0xc042570  jal         func_1095C0
label_167e8c:
    if (ctx->pc == 0x167E8Cu) {
        ctx->pc = 0x167E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167E88u;
        // 0x167e8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167E90u;
        goto label_167e90;
    }
    ctx->pc = 0x167E88u;
    SET_GPR_U32(ctx, 31, 0x167E90u);
    ctx->pc = 0x167E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167E88u;
    // 0x167e8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x167E88u, 0x167E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167E90u;
label_167e90:
    // 0x167e90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x167e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_167e94:
    // 0x167e94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x167e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_167e98:
    // 0x167e98: 0xa20201d3  sb          $v0, 0x1D3($s0)
    ctx->pc = 0x167e98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 467), (uint8_t)GPR_U32(ctx, 2));
label_167e9c:
    // 0x167e9c: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x167e9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_167ea0:
    // 0x167ea0: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x167ea0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_167ea4:
    // 0x167ea4: 0x320f809  jalr        $t9
label_167ea8:
    if (ctx->pc == 0x167EA8u) {
        ctx->pc = 0x167EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167EA4u;
        // 0x167ea8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167EACu;
        goto label_167eac;
    }
    ctx->pc = 0x167EA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x167EACu);
        ctx->pc = 0x167EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167EA4u;
        // 0x167ea8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167EA4u, 0x167EACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x167EACu;
label_167eac:
    // 0x167eac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x167eacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_167eb0:
    // 0x167eb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x167eb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_167eb4:
    // 0x167eb4: 0x3e00008  jr          $ra
label_167eb8:
    if (ctx->pc == 0x167EB8u) {
        ctx->pc = 0x167EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167EB4u;
        // 0x167eb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167EBCu;
        goto label_fallthrough_0x167eb4;
    }
    ctx->pc = 0x167EB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167EB4u;
        // 0x167eb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167EB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x167eb4:
    ctx->pc = 0x167EBCu;
}
