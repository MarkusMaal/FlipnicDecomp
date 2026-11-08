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

// Function: FUN_00131bd0
// Address: 0x131bd0 - 0x131c6c
void FUN_00131bd0_0x131bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00131bd0_0x131bd0");
#endif

    switch (ctx->pc) {
        case 0x131c08u: goto label_131c08;
        case 0x131c18u: goto label_131c18;
        case 0x131c28u: goto label_131c28;
        case 0x131c38u: goto label_131c38;
        case 0x131c48u: goto label_131c48;
        case 0x131c54u: goto label_131c54;
        default: break;
    }

    ctx->pc = 0x131bd0u;

    // 0x131bd0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x131bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x131bd4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x131bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x131bd8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x131bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x131bdc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x131bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x131be0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x131be0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131be4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x131be4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x131be8: 0x8c900064  lw          $s0, 0x64($a0)
    ctx->pc = 0x131be8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x131bec: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x131BECu;
    {
        const bool branch_taken_0x131bec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x131BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131BECu;
        // 0x131bf0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131bec) {
            ctx->pc = 0x131C30u;
            goto label_131c30;
        }
    }
    ctx->pc = 0x131BF4u;
    // 0x131bf4: 0x8e040064  lw          $a0, 0x64($s0)
    ctx->pc = 0x131bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x131bf8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x131BF8u;
    {
        const bool branch_taken_0x131bf8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x131BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131BF8u;
        // 0x131bfc: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131bf8) {
            ctx->pc = 0x131C10u;
            goto label_131c10;
        }
    }
    ctx->pc = 0x131C00u;
    // 0x131c00: 0xc04c674  jal         func_1319D0
    ctx->pc = 0x131C00u;
    SET_GPR_U32(ctx, 31, 0x131C08u);
    ctx->pc = 0x1319D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1319D0u, 0x131C00u, 0x131C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131C08u;
label_131c08:
    // 0x131c08: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x131C08u;
    {
        const bool branch_taken_0x131c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131C08u;
        // 0x131c0c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131c08) {
            ctx->pc = 0x131C1Cu;
            goto label_131c1c;
        }
    }
    ctx->pc = 0x131C10u;
label_131c10:
    // 0x131c10: 0xc07d3ac  jal         func_1F4EB0
    ctx->pc = 0x131C10u;
    SET_GPR_U32(ctx, 31, 0x131C18u);
    ctx->pc = 0x131C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131C10u;
    // 0x131c14: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x131C10u, 0x131C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131C18u;
label_131c18:
    // 0x131c18: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x131c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_131c1c:
    // 0x131c1c: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x131c1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x131c20: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x131C20u;
    SET_GPR_U32(ctx, 31, 0x131C28u);
    ctx->pc = 0x131C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131C20u;
    // 0x131c24: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4BB8u, 0x131C20u, 0x131C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131C28u;
label_131c28:
    // 0x131c28: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x131C28u;
    {
        const bool branch_taken_0x131c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131C28u;
        // 0x131c2c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131c28) {
            ctx->pc = 0x131C3Cu;
            goto label_131c3c;
        }
    }
    ctx->pc = 0x131C30u;
label_131c30:
    // 0x131c30: 0xc07d3ac  jal         func_1F4EB0
    ctx->pc = 0x131C30u;
    SET_GPR_U32(ctx, 31, 0x131C38u);
    ctx->pc = 0x131C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131C30u;
    // 0x131c34: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x131C30u, 0x131C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131C38u;
label_131c38:
    // 0x131c38: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x131c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_131c3c:
    // 0x131c3c: 0x26460010  addiu       $a2, $s2, 0x10
    ctx->pc = 0x131c3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x131c40: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x131C40u;
    SET_GPR_U32(ctx, 31, 0x131C48u);
    ctx->pc = 0x131C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131C40u;
    // 0x131c44: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4BB8u, 0x131C40u, 0x131C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131C48u;
label_131c48:
    // 0x131c48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x131c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131c4c: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x131C4Cu;
    SET_GPR_U32(ctx, 31, 0x131C54u);
    ctx->pc = 0x131C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131C4Cu;
    // 0x131c50: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x131C4Cu, 0x131C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131C54u;
label_131c54:
    // 0x131c54: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x131c54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x131c58: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x131c58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x131c5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x131c5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131c60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x131c60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x131c64: 0x3e00008  jr          $ra
    ctx->pc = 0x131C64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131C64u;
        // 0x131c68: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131C64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131C6Cu;
}
