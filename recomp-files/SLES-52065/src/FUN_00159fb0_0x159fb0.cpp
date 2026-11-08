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

// Function: FUN_00159fb0
// Address: 0x159fb0 - 0x15a07c
void FUN_00159fb0_0x159fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00159fb0_0x159fb0");
#endif

    switch (ctx->pc) {
        case 0x15a004u: goto label_15a004;
        case 0x15a04cu: goto label_15a04c;
        default: break;
    }

    ctx->pc = 0x159fb0u;

    // 0x159fb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x159fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x159fb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x159fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x159fb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x159fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x159fbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x159fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x159fc0: 0x8482022c  lh          $v0, 0x22C($a0)
    ctx->pc = 0x159fc0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 556)));
    // 0x159fc4: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x159FC4u;
    {
        const bool branch_taken_0x159fc4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x159FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159FC4u;
        // 0x159fc8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159fc4) {
            ctx->pc = 0x159FE0u;
            goto label_159fe0;
        }
    }
    ctx->pc = 0x159FCCu;
    // 0x159fcc: 0x8622022a  lh          $v0, 0x22A($s1)
    ctx->pc = 0x159fccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 554)));
    // 0x159fd0: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x159FD0u;
    {
        const bool branch_taken_0x159fd0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x159FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159FD0u;
        // 0x159fd4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159fd0) {
            ctx->pc = 0x159FE0u;
            goto label_159fe0;
        }
    }
    ctx->pc = 0x159FD8u;
    // 0x159fd8: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x159FD8u;
    {
        const bool branch_taken_0x159fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159FD8u;
        // 0x159fdc: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159fd8) {
            ctx->pc = 0x15A06Cu;
            goto label_15a06c;
        }
    }
    ctx->pc = 0x159FE0u;
label_159fe0:
    // 0x159fe0: 0xc6210224  lwc1        $f1, 0x224($s1)
    ctx->pc = 0x159fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x159fe4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x159fe4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159fe8: 0x0  nop
    ctx->pc = 0x159fe8u;
    // NOP
    // 0x159fec: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x159fecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x159ff0: 0x0  nop
    ctx->pc = 0x159ff0u;
    // NOP
    // 0x159ff4: 0x4501001c  bc1t        . + 4 + (0x1C << 2)
    ctx->pc = 0x159FF4u;
    {
        const bool branch_taken_0x159ff4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x159FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159FF4u;
        // 0x159ff8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159ff4) {
            ctx->pc = 0x15A068u;
            goto label_15a068;
        }
    }
    ctx->pc = 0x159FFCu;
    // 0x159ffc: 0xc056d24  jal         func_15B490
    ctx->pc = 0x159FFCu;
    SET_GPR_U32(ctx, 31, 0x15A004u);
    ctx->pc = 0x15A000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159FFCu;
    // 0x15a000: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B490u, 0x159FFCu, 0x15A004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A004u;
label_15a004:
    // 0x15a004: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15a004u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a008: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15a008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15a00c: 0x16030015  bne         $s0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x15A00Cu;
    {
        const bool branch_taken_0x15a00c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x15a00c) {
            ctx->pc = 0x15A064u;
            goto label_15a064;
        }
    }
    ctx->pc = 0x15A014u;
    // 0x15a014: 0x86220232  lh          $v0, 0x232($s1)
    ctx->pc = 0x15a014u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 562)));
    // 0x15a018: 0xa622022e  sh          $v0, 0x22E($s1)
    ctx->pc = 0x15a018u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 558), (uint16_t)GPR_U32(ctx, 2));
    // 0x15a01c: 0x86220238  lh          $v0, 0x238($s1)
    ctx->pc = 0x15a01cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 568)));
    // 0x15a020: 0xa622022a  sh          $v0, 0x22A($s1)
    ctx->pc = 0x15a020u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 554), (uint16_t)GPR_U32(ctx, 2));
    // 0x15a024: 0xa623022c  sh          $v1, 0x22C($s1)
    ctx->pc = 0x15a024u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 556), (uint16_t)GPR_U32(ctx, 3));
    // 0x15a028: 0x86230228  lh          $v1, 0x228($s1)
    ctx->pc = 0x15a028u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 552)));
    // 0x15a02c: 0x86220230  lh          $v0, 0x230($s1)
    ctx->pc = 0x15a02cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 560)));
    // 0x15a030: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x15a030u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x15a034: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x15A034u;
    {
        const bool branch_taken_0x15a034 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A034u;
        // 0x15a038: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a034) {
            ctx->pc = 0x15A04Cu;
            goto label_15a04c;
        }
    }
    ctx->pc = 0x15A03Cu;
    // 0x15a03c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15a03cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a040: 0xa6220228  sh          $v0, 0x228($s1)
    ctx->pc = 0x15a040u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 552), (uint16_t)GPR_U32(ctx, 2));
    // 0x15a044: 0xc042118  jal         func_108460
    ctx->pc = 0x15A044u;
    SET_GPR_U32(ctx, 31, 0x15A04Cu);
    ctx->pc = 0x15A048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A044u;
    // 0x15a048: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x15A044u, 0x15A04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A04Cu;
label_15a04c:
    // 0x15a04c: 0x86230228  lh          $v1, 0x228($s1)
    ctx->pc = 0x15a04cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 552)));
    // 0x15a050: 0x86220230  lh          $v0, 0x230($s1)
    ctx->pc = 0x15a050u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 560)));
    // 0x15a054: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15A054u;
    {
        const bool branch_taken_0x15a054 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x15A058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A054u;
        // 0x15a058: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a054) {
            ctx->pc = 0x15A068u;
            goto label_15a068;
        }
    }
    ctx->pc = 0x15A05Cu;
    // 0x15a05c: 0x86220234  lh          $v0, 0x234($s1)
    ctx->pc = 0x15a05cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 564)));
    // 0x15a060: 0xa622022e  sh          $v0, 0x22E($s1)
    ctx->pc = 0x15a060u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 558), (uint16_t)GPR_U32(ctx, 2));
label_15a064:
    // 0x15a064: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x15a064u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15a068:
    // 0x15a068: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15a068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_15a06c:
    // 0x15a06c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15a06cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15a070: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15a070u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15a074: 0x3e00008  jr          $ra
    ctx->pc = 0x15A074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A074u;
        // 0x15a078: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A074u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A07Cu;
}
