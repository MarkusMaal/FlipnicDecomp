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

// Function: FUN_00126cc0
// Address: 0x126cc0 - 0x126d64
void FUN_00126cc0_0x126cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00126cc0_0x126cc0");
#endif

    switch (ctx->pc) {
        case 0x126ce8u: goto label_126ce8;
        case 0x126d50u: goto label_126d50;
        default: break;
    }

    ctx->pc = 0x126cc0u;

    // 0x126cc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x126cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x126cc4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x126cc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x126cc8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x126cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x126ccc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x126cccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126cd0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x126cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x126cd4: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x126cd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126cd8: 0x8ca700f4  lw          $a3, 0xF4($a1)
    ctx->pc = 0x126cd8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 244)));
    // 0x126cdc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x126cdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126ce0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x126CE0u;
    {
        const bool branch_taken_0x126ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126CE0u;
        // 0x126ce4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126ce0) {
            ctx->pc = 0x126D00u;
            goto label_126d00;
        }
    }
    ctx->pc = 0x126CE8u;
label_126ce8:
    // 0x126ce8: 0x8ca300f0  lw          $v1, 0xF0($a1)
    ctx->pc = 0x126ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 240)));
    // 0x126cec: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x126cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x126cf0: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x126cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x126cf4: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x126cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x126cf8: 0x2508000c  addiu       $t0, $t0, 0xC
    ctx->pc = 0x126cf8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
    // 0x126cfc: 0x2466ffff  addiu       $a2, $v1, -0x1
    ctx->pc = 0x126cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_126d00:
    // 0x126d00: 0x87082a  slt         $at, $a0, $a3
    ctx->pc = 0x126d00u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x126d04: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x126D04u;
    {
        const bool branch_taken_0x126d04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x126d04) {
            ctx->pc = 0x126D14u;
            goto label_126d14;
        }
    }
    ctx->pc = 0x126D0Cu;
    // 0x126d0c: 0x10c2fff6  beq         $a2, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x126D0Cu;
    {
        const bool branch_taken_0x126d0c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x126d0c) {
            ctx->pc = 0x126CE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_126ce8;
        }
    }
    ctx->pc = 0x126D14u;
label_126d14:
    // 0x126d14: 0x0  nop
    ctx->pc = 0x126d14u;
    // NOP
    // 0x126d18: 0x4c00004  bltz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x126D18u;
    {
        const bool branch_taken_0x126d18 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x126D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126D18u;
        // 0x126d1c: 0x61842  srl         $v1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126d18) {
            ctx->pc = 0x126D2Cu;
            goto label_126d2c;
        }
    }
    ctx->pc = 0x126D20u;
    // 0x126d20: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x126d20u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x126d24: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x126D24u;
    {
        const bool branch_taken_0x126d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126D24u;
        // 0x126d28: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x126d24) {
            ctx->pc = 0x126D44u;
            goto label_126d44;
        }
    }
    ctx->pc = 0x126D2Cu;
label_126d2c:
    // 0x126d2c: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x126d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x126d30: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x126d30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x126d34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x126d34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x126d38: 0x0  nop
    ctx->pc = 0x126d38u;
    // NOP
    // 0x126d3c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x126d3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x126d40: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x126d40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_126d44:
    // 0x126d44: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x126d44u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x126d48: 0xc049b5c  jal         func_126D70
    ctx->pc = 0x126D48u;
    SET_GPR_U32(ctx, 31, 0x126D50u);
    ctx->pc = 0x126D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126D48u;
    // 0x126d4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126D70u, 0x126D48u, 0x126D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126D50u;
label_126d50:
    // 0x126d50: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x126d50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126d54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x126d54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x126d58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x126d58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x126d5c: 0x3e00008  jr          $ra
    ctx->pc = 0x126D5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126D5Cu;
        // 0x126d60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126D5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126D64u;
}
