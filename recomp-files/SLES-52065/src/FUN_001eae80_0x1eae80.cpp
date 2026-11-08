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

// Function: FUN_001eae80
// Address: 0x1eae80 - 0x1eaf30
void FUN_001eae80_0x1eae80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001eae80_0x1eae80");
#endif

    switch (ctx->pc) {
        case 0x1eaeccu: goto label_1eaecc;
        case 0x1eaed8u: goto label_1eaed8;
        case 0x1eaf10u: goto label_1eaf10;
        default: break;
    }

    ctx->pc = 0x1eae80u;

    // 0x1eae80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1eae80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1eae84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1eae84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1eae88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1eae88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1eae8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1eae8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1eae90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1eae90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eae94: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1eae94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1eae98: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x1eae98u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1eae9c: 0x26250220  addiu       $a1, $s1, 0x220
    ctx->pc = 0x1eae9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
    // 0x1eaea0: 0x30500040  andi        $s0, $v0, 0x40
    ctx->pc = 0x1eaea0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1eaea4: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x1eaea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x1eaea8: 0xac820230  sw          $v0, 0x230($a0)
    ctx->pc = 0x1eaea8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 560), GPR_U32(ctx, 2));
    // 0x1eaeac: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x1eaeacu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1eaeb0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1eaeb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1eaeb4: 0xac82022c  sw          $v0, 0x22C($a0)
    ctx->pc = 0x1eaeb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 556), GPR_U32(ctx, 2));
    // 0x1eaeb8: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x1eaeb8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1eaebc: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x1eaebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1eaec0: 0xac820228  sw          $v0, 0x228($a0)
    ctx->pc = 0x1eaec0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 552), GPR_U32(ctx, 2));
    // 0x1eaec4: 0xc07a574  jal         func_1E95D0
    ctx->pc = 0x1EAEC4u;
    SET_GPR_U32(ctx, 31, 0x1EAECCu);
    ctx->pc = 0x1EAEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAEC4u;
    // 0x1eaec8: 0x24640001  addiu       $a0, $v1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E95D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E95D0u, 0x1EAEC4u, 0x1EAECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAECCu;
label_1eaecc:
    // 0x1eaecc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1eaeccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eaed0: 0xc07a574  jal         func_1E95D0
    ctx->pc = 0x1EAED0u;
    SET_GPR_U32(ctx, 31, 0x1EAED8u);
    ctx->pc = 0x1EAED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAED0u;
    // 0x1eaed4: 0x26250224  addiu       $a1, $s1, 0x224 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 548));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E95D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E95D0u, 0x1EAED0u, 0x1EAED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAED8u;
label_1eaed8:
    // 0x1eaed8: 0x8e230230  lw          $v1, 0x230($s1)
    ctx->pc = 0x1eaed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 560)));
    // 0x1eaedc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EAEDCu;
    {
        const bool branch_taken_0x1eaedc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAEDCu;
        // 0x1eaee0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaedc) {
            ctx->pc = 0x1EAEF8u;
            goto label_1eaef8;
        }
    }
    ctx->pc = 0x1EAEE4u;
    // 0x1eaee4: 0x7a230200  lq          $v1, 0x200($s1)
    ctx->pc = 0x1eaee4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 512)));
    // 0x1eaee8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1eaee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1eaeec: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1eaeecu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1eaef0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1EAEF0u;
    {
        const bool branch_taken_0x1eaef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAEF0u;
        // 0x1eaef4: 0xae230018  sw          $v1, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaef0) {
            ctx->pc = 0x1EAF00u;
            goto label_1eaf00;
        }
    }
    ctx->pc = 0x1EAEF8u;
label_1eaef8:
    // 0x1eaef8: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1eaef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1eaefc: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x1eaefcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
label_1eaf00:
    // 0x1eaf00: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EAF00u;
    {
        const bool branch_taken_0x1eaf00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAF00u;
        // 0x1eaf04: 0x26250234  addiu       $a1, $s1, 0x234 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 564));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaf00) {
            ctx->pc = 0x1EAF18u;
            goto label_1eaf18;
        }
    }
    ctx->pc = 0x1EAF08u;
    // 0x1eaf08: 0xc07a574  jal         func_1E95D0
    ctx->pc = 0x1EAF08u;
    SET_GPR_U32(ctx, 31, 0x1EAF10u);
    ctx->pc = 0x1E95D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E95D0u, 0x1EAF08u, 0x1EAF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAF10u;
label_1eaf10:
    // 0x1eaf10: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1EAF10u;
    {
        const bool branch_taken_0x1eaf10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAF10u;
        // 0x1eaf14: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaf10) {
            ctx->pc = 0x1EAF20u;
            goto label_1eaf20;
        }
    }
    ctx->pc = 0x1EAF18u;
label_1eaf18:
    // 0x1eaf18: 0xae200234  sw          $zero, 0x234($s1)
    ctx->pc = 0x1eaf18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 564), GPR_U32(ctx, 0));
    // 0x1eaf1c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1eaf1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1eaf20:
    // 0x1eaf20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1eaf20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eaf24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1eaf24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eaf28: 0x3e00008  jr          $ra
    ctx->pc = 0x1EAF28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EAF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAF28u;
        // 0x1eaf2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EAF28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EAF30u;
}
