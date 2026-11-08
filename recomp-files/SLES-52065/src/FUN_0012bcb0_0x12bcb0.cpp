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

// Function: FUN_0012bcb0
// Address: 0x12bcb0 - 0x12bd2c
void FUN_0012bcb0_0x12bcb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012bcb0_0x12bcb0");
#endif

    switch (ctx->pc) {
        case 0x12bce8u: goto label_12bce8;
        case 0x12bcfcu: goto label_12bcfc;
        case 0x12bd08u: goto label_12bd08;
        case 0x12bd1cu: goto label_12bd1c;
        default: break;
    }

    ctx->pc = 0x12bcb0u;

    // 0x12bcb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12bcb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12bcb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12bcb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12bcb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12bcb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12bcbc: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x12BCBCu;
    {
        const bool branch_taken_0x12bcbc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BCBCu;
        // 0x12bcc0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bcbc) {
            ctx->pc = 0x12BCD4u;
            goto label_12bcd4;
        }
    }
    ctx->pc = 0x12BCC4u;
    // 0x12bcc4: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x12bcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x12bcc8: 0x24420e30  addiu       $v0, $v0, 0xE30
    ctx->pc = 0x12bcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3632));
    // 0x12bccc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12BCCCu;
    {
        const bool branch_taken_0x12bccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BCCCu;
        // 0x12bcd0: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bccc) {
            ctx->pc = 0x12BCD8u;
            goto label_12bcd8;
        }
    }
    ctx->pc = 0x12BCD4u;
label_12bcd4:
    // 0x12bcd4: 0xae070014  sw          $a3, 0x14($s0)
    ctx->pc = 0x12bcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 7));
label_12bcd8:
    // 0x12bcd8: 0xae06000c  sw          $a2, 0xC($s0)
    ctx->pc = 0x12bcd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 6));
    // 0x12bcdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12bcdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bce0: 0xc04aed0  jal         func_12BB40
    ctx->pc = 0x12BCE0u;
    SET_GPR_U32(ctx, 31, 0x12BCE8u);
    ctx->pc = 0x12BCE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BCE0u;
    // 0x12bce4: 0xae050004  sw          $a1, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BB40u, 0x12BCE0u, 0x12BCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BCE8u;
label_12bce8:
    // 0x12bce8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x12bce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x12bcec: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12BCECu;
    {
        const bool branch_taken_0x12bcec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12bcec) {
            ctx->pc = 0x12BCFCu;
            goto label_12bcfc;
        }
    }
    ctx->pc = 0x12BCF4u;
    // 0x12bcf4: 0xc04018c  jal         func_100630
    ctx->pc = 0x12BCF4u;
    SET_GPR_U32(ctx, 31, 0x12BCFCu);
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x12BCF4u, 0x12BCFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BCFCu;
label_12bcfc:
    // 0x12bcfc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x12bcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x12bd00: 0xc040168  jal         func_1005A0
    ctx->pc = 0x12BD00u;
    SET_GPR_U32(ctx, 31, 0x12BD08u);
    ctx->pc = 0x12BD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BD00u;
    // 0x12bd04: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x12BD00u, 0x12BD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BD08u;
label_12bd08:
    // 0x12bd08: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x12bd08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x12bd0c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x12bd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x12bd10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12bd10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bd14: 0xc04af4c  jal         func_12BD30
    ctx->pc = 0x12BD14u;
    SET_GPR_U32(ctx, 31, 0x12BD1Cu);
    ctx->pc = 0x12BD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BD14u;
    // 0x12bd18: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BD30u, 0x12BD14u, 0x12BD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BD1Cu;
label_12bd1c:
    // 0x12bd1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12bd1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12bd20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12bd20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12bd24: 0x3e00008  jr          $ra
    ctx->pc = 0x12BD24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BD24u;
        // 0x12bd28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12BD24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12BD2Cu;
}
