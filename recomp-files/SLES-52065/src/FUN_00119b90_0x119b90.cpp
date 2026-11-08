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

// Function: FUN_00119b90
// Address: 0x119b90 - 0x119c0c
void FUN_00119b90_0x119b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00119b90_0x119b90");
#endif

    switch (ctx->pc) {
        case 0x119b90u: goto label_119b90;
        case 0x119b94u: goto label_119b94;
        case 0x119b98u: goto label_119b98;
        case 0x119b9cu: goto label_119b9c;
        case 0x119ba0u: goto label_119ba0;
        case 0x119ba4u: goto label_119ba4;
        case 0x119ba8u: goto label_119ba8;
        case 0x119bacu: goto label_119bac;
        case 0x119bb0u: goto label_119bb0;
        case 0x119bb4u: goto label_119bb4;
        case 0x119bb8u: goto label_119bb8;
        case 0x119bbcu: goto label_119bbc;
        case 0x119bc0u: goto label_119bc0;
        case 0x119bc4u: goto label_119bc4;
        case 0x119bc8u: goto label_119bc8;
        case 0x119bccu: goto label_119bcc;
        case 0x119bd0u: goto label_119bd0;
        case 0x119bd4u: goto label_119bd4;
        case 0x119bd8u: goto label_119bd8;
        case 0x119bdcu: goto label_119bdc;
        case 0x119be0u: goto label_119be0;
        case 0x119be4u: goto label_119be4;
        case 0x119be8u: goto label_119be8;
        case 0x119becu: goto label_119bec;
        case 0x119bf0u: goto label_119bf0;
        case 0x119bf4u: goto label_119bf4;
        case 0x119bf8u: goto label_119bf8;
        case 0x119bfcu: goto label_119bfc;
        case 0x119c00u: goto label_119c00;
        case 0x119c04u: goto label_119c04;
        case 0x119c08u: goto label_119c08;
        default: break;
    }

    ctx->pc = 0x119b90u;

label_119b90:
    // 0x119b90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x119b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_119b94:
    // 0x119b94: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x119b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_119b98:
    // 0x119b98: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x119b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_119b9c:
    // 0x119b9c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x119b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_119ba0:
    // 0x119ba0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x119ba0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_119ba4:
    // 0x119ba4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x119ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_119ba8:
    // 0x119ba8: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x119ba8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_119bac:
    // 0x119bac: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x119bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_119bb0:
    // 0x119bb0: 0x58080  sll         $s0, $a1, 2
    ctx->pc = 0x119bb0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_119bb4:
    // 0x119bb4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x119bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_119bb8:
    // 0x119bb8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x119bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_119bbc:
    // 0x119bbc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x119bbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_119bc0:
    // 0x119bc0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x119bc0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_119bc4:
    // 0x119bc4: 0x320f809  jalr        $t9
label_119bc8:
    if (ctx->pc == 0x119BC8u) {
        ctx->pc = 0x119BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119BC4u;
        // 0x119bc8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119BCCu;
        goto label_119bcc;
    }
    ctx->pc = 0x119BC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x119BCCu);
        ctx->pc = 0x119BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119BC4u;
        // 0x119bc8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119BC4u, 0x119BCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x119BCCu;
label_119bcc:
    // 0x119bcc: 0x6200009  bltz        $s1, . + 4 + (0x9 << 2)
label_119bd0:
    if (ctx->pc == 0x119BD0u) {
        ctx->pc = 0x119BD4u;
        goto label_119bd4;
    }
    ctx->pc = 0x119BCCu;
    {
        const bool branch_taken_0x119bcc = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x119bcc) {
            ctx->pc = 0x119BF4u;
            goto label_119bf4;
        }
    }
    ctx->pc = 0x119BD4u;
label_119bd4:
    // 0x119bd4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x119bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_119bd8:
    // 0x119bd8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x119bd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_119bdc:
    // 0x119bdc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x119bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_119be0:
    // 0x119be0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x119be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_119be4:
    // 0x119be4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x119be4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_119be8:
    // 0x119be8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x119be8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_119bec:
    // 0x119bec: 0x320f809  jalr        $t9
label_119bf0:
    if (ctx->pc == 0x119BF0u) {
        ctx->pc = 0x119BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119BECu;
        // 0x119bf0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119BF4u;
        goto label_119bf4;
    }
    ctx->pc = 0x119BECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x119BF4u);
        ctx->pc = 0x119BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119BECu;
        // 0x119bf0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119BECu, 0x119BF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x119BF4u;
label_119bf4:
    // 0x119bf4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x119bf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_119bf8:
    // 0x119bf8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x119bf8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_119bfc:
    // 0x119bfc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x119bfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_119c00:
    // 0x119c00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x119c00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_119c04:
    // 0x119c04: 0x3e00008  jr          $ra
label_119c08:
    if (ctx->pc == 0x119C08u) {
        ctx->pc = 0x119C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119C04u;
        // 0x119c08: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119C0Cu;
        goto label_fallthrough_0x119c04;
    }
    ctx->pc = 0x119C04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119C04u;
        // 0x119c08: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119C04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x119c04:
    ctx->pc = 0x119C0Cu;
}
