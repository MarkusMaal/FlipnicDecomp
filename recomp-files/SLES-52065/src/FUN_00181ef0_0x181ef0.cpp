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

// Function: FUN_00181ef0
// Address: 0x181ef0 - 0x181fcc
void FUN_00181ef0_0x181ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00181ef0_0x181ef0");
#endif

    switch (ctx->pc) {
        case 0x181f54u: goto label_181f54;
        case 0x181f74u: goto label_181f74;
        case 0x181f80u: goto label_181f80;
        default: break;
    }

    ctx->pc = 0x181ef0u;

    // 0x181ef0: 0x1071823  subu        $v1, $t0, $a3
    ctx->pc = 0x181ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x181ef4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x181ef4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x181ef8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x181ef8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x181efc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x181efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x181f00: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x181f00u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x181f04: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x181f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x181f08: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x181f08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x181f0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x181f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181f10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x181f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x181f14: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x181f14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181f18: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x181f18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x181f1c: 0x46000bc3  div.s       $f15, $f1, $f0
    ctx->pc = 0x181f1cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[15] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x181f20: 0x0  nop
    ctx->pc = 0x181f20u;
    // NOP
    // 0x181f24: 0x0  nop
    ctx->pc = 0x181f24u;
    // NOP
    // 0x181f28: 0x10c2000c  beq         $a2, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x181F28u;
    {
        const bool branch_taken_0x181f28 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x181f28) {
            ctx->pc = 0x181F5Cu;
            goto label_181f5c;
        }
    }
    ctx->pc = 0x181F30u;
    // 0x181f30: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x181F30u;
    {
        const bool branch_taken_0x181f30 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x181f30) {
            ctx->pc = 0x181F40u;
            goto label_181f40;
        }
    }
    ctx->pc = 0x181F38u;
    // 0x181f38: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x181F38u;
    {
        const bool branch_taken_0x181f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x181f38) {
            ctx->pc = 0x181F78u;
            goto label_181f78;
        }
    }
    ctx->pc = 0x181F40u;
label_181f40:
    // 0x181f40: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x181f40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x181f44: 0x0  nop
    ctx->pc = 0x181f44u;
    // NOP
    // 0x181f48: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x181f48u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x181f4c: 0xc0608ac  jal         func_1822B0
    ctx->pc = 0x181F4Cu;
    SET_GPR_U32(ctx, 31, 0x181F54u);
    ctx->pc = 0x181F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181F4Cu;
    // 0x181f50: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1822B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1822B0u, 0x181F4Cu, 0x181F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181F54u;
label_181f54:
    // 0x181f54: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x181F54u;
    {
        const bool branch_taken_0x181f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181F54u;
        // 0x181f58: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181f54) {
            ctx->pc = 0x181F78u;
            goto label_181f78;
        }
    }
    ctx->pc = 0x181F5Cu;
label_181f5c:
    // 0x181f5c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x181f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x181f60: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x181f60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x181f64: 0x0  nop
    ctx->pc = 0x181f64u;
    // NOP
    // 0x181f68: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x181f68u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x181f6c: 0xc0608ac  jal         func_1822B0
    ctx->pc = 0x181F6Cu;
    SET_GPR_U32(ctx, 31, 0x181F74u);
    ctx->pc = 0x181F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181F6Cu;
    // 0x181f70: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1822B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1822B0u, 0x181F6Cu, 0x181F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181F74u;
label_181f74:
    // 0x181f74: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x181f74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_181f78:
    // 0x181f78: 0xc060908  jal         func_182420
    ctx->pc = 0x181F78u;
    SET_GPR_U32(ctx, 31, 0x181F80u);
    ctx->pc = 0x182420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182420u, 0x181F78u, 0x181F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181F80u;
label_181f80:
    // 0x181f80: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x181f80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x181f84: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x181f84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x181f88: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x181f88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x181f8c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x181f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x181f90: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x181f90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x181f94: 0xa0c50003  sb          $a1, 0x3($a2)
    ctx->pc = 0x181f94u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x181f98: 0xa0c00002  sb          $zero, 0x2($a2)
    ctx->pc = 0x181f98u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x181f9c: 0xacd00004  sw          $s0, 0x4($a2)
    ctx->pc = 0x181f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 16));
    // 0x181fa0: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x181fa0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x181fa4: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x181fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
    // 0x181fa8: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x181fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x181fac: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x181facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x181fb0: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x181fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x181fb4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x181fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x181fb8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x181fb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x181fbc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x181fbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181fc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x181fc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181fc4: 0x3e00008  jr          $ra
    ctx->pc = 0x181FC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181FC4u;
        // 0x181fc8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181FC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x181FCCu;
}
