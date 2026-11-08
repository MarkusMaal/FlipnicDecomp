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

// Function: FUN_0013dbc0
// Address: 0x13dbc0 - 0x13dc3c
void FUN_0013dbc0_0x13dbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013dbc0_0x13dbc0");
#endif

    switch (ctx->pc) {
        case 0x13dbc0u: goto label_13dbc0;
        case 0x13dbc4u: goto label_13dbc4;
        case 0x13dbc8u: goto label_13dbc8;
        case 0x13dbccu: goto label_13dbcc;
        case 0x13dbd0u: goto label_13dbd0;
        case 0x13dbd4u: goto label_13dbd4;
        case 0x13dbd8u: goto label_13dbd8;
        case 0x13dbdcu: goto label_13dbdc;
        case 0x13dbe0u: goto label_13dbe0;
        case 0x13dbe4u: goto label_13dbe4;
        case 0x13dbe8u: goto label_13dbe8;
        case 0x13dbecu: goto label_13dbec;
        case 0x13dbf0u: goto label_13dbf0;
        case 0x13dbf4u: goto label_13dbf4;
        case 0x13dbf8u: goto label_13dbf8;
        case 0x13dbfcu: goto label_13dbfc;
        case 0x13dc00u: goto label_13dc00;
        case 0x13dc04u: goto label_13dc04;
        case 0x13dc08u: goto label_13dc08;
        case 0x13dc0cu: goto label_13dc0c;
        case 0x13dc10u: goto label_13dc10;
        case 0x13dc14u: goto label_13dc14;
        case 0x13dc18u: goto label_13dc18;
        case 0x13dc1cu: goto label_13dc1c;
        case 0x13dc20u: goto label_13dc20;
        case 0x13dc24u: goto label_13dc24;
        case 0x13dc28u: goto label_13dc28;
        case 0x13dc2cu: goto label_13dc2c;
        case 0x13dc30u: goto label_13dc30;
        case 0x13dc34u: goto label_13dc34;
        case 0x13dc38u: goto label_13dc38;
        default: break;
    }

    ctx->pc = 0x13dbc0u;

label_13dbc0:
    // 0x13dbc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13dbc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_13dbc4:
    // 0x13dbc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13dbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13dbc8:
    // 0x13dbc8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13dbc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_13dbcc:
    // 0x13dbcc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13dbccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_13dbd0:
    // 0x13dbd0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x13dbd0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_13dbd4:
    // 0x13dbd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13dbd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13dbd8:
    // 0x13dbd8: 0x9083018a  lbu         $v1, 0x18A($a0)
    ctx->pc = 0x13dbd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 394)));
label_13dbdc:
    // 0x13dbdc: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
label_13dbe0:
    if (ctx->pc == 0x13DBE0u) {
        ctx->pc = 0x13DBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DBDCu;
        // 0x13dbe0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DBE4u;
        goto label_13dbe4;
    }
    ctx->pc = 0x13DBDCu;
    {
        const bool branch_taken_0x13dbdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x13DBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DBDCu;
        // 0x13dbe0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dbdc) {
            ctx->pc = 0x13DC10u;
            goto label_13dc10;
        }
    }
    ctx->pc = 0x13DBE4u;
label_13dbe4:
    // 0x13dbe4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x13dbe4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13dbe8:
    // 0x13dbe8: 0x8f3900d8  lw          $t9, 0xD8($t9)
    ctx->pc = 0x13dbe8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 216)));
label_13dbec:
    // 0x13dbec: 0x320f809  jalr        $t9
label_13dbf0:
    if (ctx->pc == 0x13DBF0u) {
        ctx->pc = 0x13DBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DBECu;
        // 0x13dbf0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DBF4u;
        goto label_13dbf4;
    }
    ctx->pc = 0x13DBECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13DBF4u);
        ctx->pc = 0x13DBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DBECu;
        // 0x13dbf0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DBECu, 0x13DBF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13DBF4u;
label_13dbf4:
    // 0x13dbf4: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x13dbf4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13dbf8:
    // 0x13dbf8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x13dbf8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_13dbfc:
    // 0x13dbfc: 0x8f3900a4  lw          $t9, 0xA4($t9)
    ctx->pc = 0x13dbfcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 164)));
label_13dc00:
    // 0x13dc00: 0x320f809  jalr        $t9
label_13dc04:
    if (ctx->pc == 0x13DC04u) {
        ctx->pc = 0x13DC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DC00u;
        // 0x13dc04: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DC08u;
        goto label_13dc08;
    }
    ctx->pc = 0x13DC00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13DC08u);
        ctx->pc = 0x13DC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DC00u;
        // 0x13dc04: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DC00u, 0x13DC08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13DC08u;
label_13dc08:
    // 0x13dc08: 0x10000008  b           . + 4 + (0x8 << 2)
label_13dc0c:
    if (ctx->pc == 0x13DC0Cu) {
        ctx->pc = 0x13DC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DC08u;
        // 0x13dc0c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DC10u;
        goto label_13dc10;
    }
    ctx->pc = 0x13DC08u;
    {
        const bool branch_taken_0x13dc08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DC08u;
        // 0x13dc0c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dc08) {
            ctx->pc = 0x13DC2Cu;
            goto label_13dc2c;
        }
    }
    ctx->pc = 0x13DC10u;
label_13dc10:
    // 0x13dc10: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x13dc10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13dc14:
    // 0x13dc14: 0x8f390094  lw          $t9, 0x94($t9)
    ctx->pc = 0x13dc14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 148)));
label_13dc18:
    // 0x13dc18: 0x320f809  jalr        $t9
label_13dc1c:
    if (ctx->pc == 0x13DC1Cu) {
        ctx->pc = 0x13DC20u;
        goto label_13dc20;
    }
    ctx->pc = 0x13DC18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13DC20u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DC18u, 0x13DC20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13DC20u;
label_13dc20:
    // 0x13dc20: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x13dc20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_13dc24:
    // 0x13dc24: 0xe60000bc  swc1        $f0, 0xBC($s0)
    ctx->pc = 0x13dc24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 188), bits); }
label_13dc28:
    // 0x13dc28: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13dc28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_13dc2c:
    // 0x13dc2c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x13dc2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_13dc30:
    // 0x13dc30: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13dc30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13dc34:
    // 0x13dc34: 0x3e00008  jr          $ra
label_13dc38:
    if (ctx->pc == 0x13DC38u) {
        ctx->pc = 0x13DC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DC34u;
        // 0x13dc38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DC3Cu;
        goto label_fallthrough_0x13dc34;
    }
    ctx->pc = 0x13DC34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13DC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DC34u;
        // 0x13dc38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DC34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13dc34:
    ctx->pc = 0x13DC3Cu;
}
