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

// Function: FUN_0018f940
// Address: 0x18f940 - 0x18f9bc
void FUN_0018f940_0x18f940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018f940_0x18f940");
#endif

    switch (ctx->pc) {
        case 0x18f940u: goto label_18f940;
        case 0x18f944u: goto label_18f944;
        case 0x18f948u: goto label_18f948;
        case 0x18f94cu: goto label_18f94c;
        case 0x18f950u: goto label_18f950;
        case 0x18f954u: goto label_18f954;
        case 0x18f958u: goto label_18f958;
        case 0x18f95cu: goto label_18f95c;
        case 0x18f960u: goto label_18f960;
        case 0x18f964u: goto label_18f964;
        case 0x18f968u: goto label_18f968;
        case 0x18f96cu: goto label_18f96c;
        case 0x18f970u: goto label_18f970;
        case 0x18f974u: goto label_18f974;
        case 0x18f978u: goto label_18f978;
        case 0x18f97cu: goto label_18f97c;
        case 0x18f980u: goto label_18f980;
        case 0x18f984u: goto label_18f984;
        case 0x18f988u: goto label_18f988;
        case 0x18f98cu: goto label_18f98c;
        case 0x18f990u: goto label_18f990;
        case 0x18f994u: goto label_18f994;
        case 0x18f998u: goto label_18f998;
        case 0x18f99cu: goto label_18f99c;
        case 0x18f9a0u: goto label_18f9a0;
        case 0x18f9a4u: goto label_18f9a4;
        case 0x18f9a8u: goto label_18f9a8;
        case 0x18f9acu: goto label_18f9ac;
        case 0x18f9b0u: goto label_18f9b0;
        case 0x18f9b4u: goto label_18f9b4;
        case 0x18f9b8u: goto label_18f9b8;
        default: break;
    }

    ctx->pc = 0x18f940u;

label_18f940:
    // 0x18f940: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18f940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_18f944:
    // 0x18f944: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x18f944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_18f948:
    // 0x18f948: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18f948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_18f94c:
    // 0x18f94c: 0x8c870030  lw          $a3, 0x30($a0)
    ctx->pc = 0x18f94cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_18f950:
    // 0x18f950: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x18f950u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_18f954:
    // 0x18f954: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x18f954u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_18f958:
    // 0x18f958: 0x8cc60254  lw          $a2, 0x254($a2)
    ctx->pc = 0x18f958u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 596)));
label_18f95c:
    // 0x18f95c: 0x10c30014  beq         $a2, $v1, . + 4 + (0x14 << 2)
label_18f960:
    if (ctx->pc == 0x18F960u) {
        ctx->pc = 0x18F960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F95Cu;
        // 0x18f960: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F964u;
        goto label_18f964;
    }
    ctx->pc = 0x18F95Cu;
    {
        const bool branch_taken_0x18f95c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x18F960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F95Cu;
        // 0x18f960: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f95c) {
            ctx->pc = 0x18F9B0u;
            goto label_18f9b0;
        }
    }
    ctx->pc = 0x18F964u;
label_18f964:
    // 0x18f964: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x18f964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18f968:
    // 0x18f968: 0x10c3000c  beq         $a2, $v1, . + 4 + (0xC << 2)
label_18f96c:
    if (ctx->pc == 0x18F96Cu) {
        ctx->pc = 0x18F970u;
        goto label_18f970;
    }
    ctx->pc = 0x18F968u;
    {
        const bool branch_taken_0x18f968 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x18f968) {
            ctx->pc = 0x18F99Cu;
            goto label_18f99c;
        }
    }
    ctx->pc = 0x18F970u;
label_18f970:
    // 0x18f970: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_18f974:
    if (ctx->pc == 0x18F974u) {
        ctx->pc = 0x18F978u;
        goto label_18f978;
    }
    ctx->pc = 0x18F970u;
    {
        const bool branch_taken_0x18f970 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f970) {
            ctx->pc = 0x18F980u;
            goto label_18f980;
        }
    }
    ctx->pc = 0x18F978u;
label_18f978:
    // 0x18f978: 0x1000000e  b           . + 4 + (0xE << 2)
label_18f97c:
    if (ctx->pc == 0x18F97Cu) {
        ctx->pc = 0x18F97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F978u;
        // 0x18f97c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F980u;
        goto label_18f980;
    }
    ctx->pc = 0x18F978u;
    {
        const bool branch_taken_0x18f978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F978u;
        // 0x18f97c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f978) {
            ctx->pc = 0x18F9B4u;
            goto label_18f9b4;
        }
    }
    ctx->pc = 0x18F980u;
label_18f980:
    // 0x18f980: 0x71100  sll         $v0, $a3, 4
    ctx->pc = 0x18f980u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_18f984:
    // 0x18f984: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x18f984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_18f988:
    // 0x18f988: 0x8c420274  lw          $v0, 0x274($v0)
    ctx->pc = 0x18f988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 628)));
label_18f98c:
    // 0x18f98c: 0x40f809  jalr        $v0
label_18f990:
    if (ctx->pc == 0x18F990u) {
        ctx->pc = 0x18F994u;
        goto label_18f994;
    }
    ctx->pc = 0x18F98Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18F994u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F98Cu, 0x18F994u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18F994u;
label_18f994:
    // 0x18f994: 0x10000006  b           . + 4 + (0x6 << 2)
label_18f998:
    if (ctx->pc == 0x18F998u) {
        ctx->pc = 0x18F99Cu;
        goto label_18f99c;
    }
    ctx->pc = 0x18F994u;
    {
        const bool branch_taken_0x18f994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f994) {
            ctx->pc = 0x18F9B0u;
            goto label_18f9b0;
        }
    }
    ctx->pc = 0x18F99Cu;
label_18f99c:
    // 0x18f99c: 0x71100  sll         $v0, $a3, 4
    ctx->pc = 0x18f99cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_18f9a0:
    // 0x18f9a0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x18f9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_18f9a4:
    // 0x18f9a4: 0x8c440280  lw          $a0, 0x280($v0)
    ctx->pc = 0x18f9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 640)));
label_18f9a8:
    // 0x18f9a8: 0xc07a564  jal         func_1E9590
label_18f9ac:
    if (ctx->pc == 0x18F9ACu) {
        ctx->pc = 0x18F9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F9A8u;
        // 0x18f9ac: 0x24590274  addiu       $t9, $v0, 0x274 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 2), 628));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F9B0u;
        goto label_18f9b0;
    }
    ctx->pc = 0x18F9A8u;
    SET_GPR_U32(ctx, 31, 0x18F9B0u);
    ctx->pc = 0x18F9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F9A8u;
    // 0x18f9ac: 0x24590274  addiu       $t9, $v0, 0x274 (Delay Slot)
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 2), 628));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9590u, 0x18F9A8u, 0x18F9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F9B0u;
label_18f9b0:
    // 0x18f9b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18f9b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18f9b4:
    // 0x18f9b4: 0x3e00008  jr          $ra
label_18f9b8:
    if (ctx->pc == 0x18F9B8u) {
        ctx->pc = 0x18F9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F9B4u;
        // 0x18f9b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F9BCu;
        goto label_fallthrough_0x18f9b4;
    }
    ctx->pc = 0x18F9B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F9B4u;
        // 0x18f9b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F9B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x18f9b4:
    ctx->pc = 0x18F9BCu;
}
