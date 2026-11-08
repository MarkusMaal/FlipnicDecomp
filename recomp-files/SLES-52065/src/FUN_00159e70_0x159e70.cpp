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

// Function: FUN_00159e70
// Address: 0x159e70 - 0x159fa4
void FUN_00159e70_0x159e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00159e70_0x159e70");
#endif

    switch (ctx->pc) {
        case 0x159f08u: goto label_159f08;
        default: break;
    }

    ctx->pc = 0x159e70u;

    // 0x159e70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x159e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x159e74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x159e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x159e78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x159e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x159e7c: 0x8483022c  lh          $v1, 0x22C($a0)
    ctx->pc = 0x159e7cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 556)));
    // 0x159e80: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x159E80u;
    {
        const bool branch_taken_0x159e80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x159E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159E80u;
        // 0x159e84: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159e80) {
            ctx->pc = 0x159EA8u;
            goto label_159ea8;
        }
    }
    ctx->pc = 0x159E88u;
    // 0x159e88: 0x8603022a  lh          $v1, 0x22A($s0)
    ctx->pc = 0x159e88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 554)));
    // 0x159e8c: 0x18600004  blez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x159E8Cu;
    {
        const bool branch_taken_0x159e8c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x159e8c) {
            ctx->pc = 0x159EA0u;
            goto label_159ea0;
        }
    }
    ctx->pc = 0x159E94u;
    // 0x159e94: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x159e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x159e98: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x159E98u;
    {
        const bool branch_taken_0x159e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159E98u;
        // 0x159e9c: 0xa603022a  sh          $v1, 0x22A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 554), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159e98) {
            ctx->pc = 0x159F08u;
            goto label_159f08;
        }
    }
    ctx->pc = 0x159EA0u;
label_159ea0:
    // 0x159ea0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x159EA0u;
    {
        const bool branch_taken_0x159ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159EA0u;
        // 0x159ea4: 0xa600022c  sh          $zero, 0x22C($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 556), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159ea0) {
            ctx->pc = 0x159F08u;
            goto label_159f08;
        }
    }
    ctx->pc = 0x159EA8u;
label_159ea8:
    // 0x159ea8: 0x8603022e  lh          $v1, 0x22E($s0)
    ctx->pc = 0x159ea8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 558)));
    // 0x159eac: 0x4600016  bltz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x159EACu;
    {
        const bool branch_taken_0x159eac = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x159eac) {
            ctx->pc = 0x159F08u;
            goto label_159f08;
        }
    }
    ctx->pc = 0x159EB4u;
    // 0x159eb4: 0x18600004  blez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x159EB4u;
    {
        const bool branch_taken_0x159eb4 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x159eb4) {
            ctx->pc = 0x159EC8u;
            goto label_159ec8;
        }
    }
    ctx->pc = 0x159EBCu;
    // 0x159ebc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x159ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x159ec0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x159EC0u;
    {
        const bool branch_taken_0x159ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159EC0u;
        // 0x159ec4: 0xa603022e  sh          $v1, 0x22E($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 558), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159ec0) {
            ctx->pc = 0x159F08u;
            goto label_159f08;
        }
    }
    ctx->pc = 0x159EC8u;
label_159ec8:
    // 0x159ec8: 0x86030234  lh          $v1, 0x234($s0)
    ctx->pc = 0x159ec8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 564)));
    // 0x159ecc: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x159ECCu;
    {
        const bool branch_taken_0x159ecc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x159ecc) {
            ctx->pc = 0x159F08u;
            goto label_159f08;
        }
    }
    ctx->pc = 0x159ED4u;
    // 0x159ed4: 0x86030232  lh          $v1, 0x232($s0)
    ctx->pc = 0x159ed4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 562)));
    // 0x159ed8: 0xa603022e  sh          $v1, 0x22E($s0)
    ctx->pc = 0x159ed8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 558), (uint16_t)GPR_U32(ctx, 3));
    // 0x159edc: 0x86030228  lh          $v1, 0x228($s0)
    ctx->pc = 0x159edcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 552)));
    // 0x159ee0: 0x18600009  blez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x159EE0u;
    {
        const bool branch_taken_0x159ee0 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x159ee0) {
            ctx->pc = 0x159F08u;
            goto label_159f08;
        }
    }
    ctx->pc = 0x159EE8u;
    // 0x159ee8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x159ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x159eec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x159eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x159ef0: 0xa6030228  sh          $v1, 0x228($s0)
    ctx->pc = 0x159ef0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 552), (uint16_t)GPR_U32(ctx, 3));
    // 0x159ef4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x159ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x159ef8: 0x86030236  lh          $v1, 0x236($s0)
    ctx->pc = 0x159ef8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 566)));
    // 0x159efc: 0xa603022a  sh          $v1, 0x22A($s0)
    ctx->pc = 0x159efcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 554), (uint16_t)GPR_U32(ctx, 3));
    // 0x159f00: 0xc042118  jal         func_108460
    ctx->pc = 0x159F00u;
    SET_GPR_U32(ctx, 31, 0x159F08u);
    ctx->pc = 0x159F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159F00u;
    // 0x159f04: 0xa602022c  sh          $v0, 0x22C($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 556), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x159F00u, 0x159F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159F08u;
label_159f08:
    // 0x159f08: 0x8606022c  lh          $a2, 0x22C($s0)
    ctx->pc = 0x159f08u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 556)));
    // 0x159f0c: 0x18c00005  blez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x159F0Cu;
    {
        const bool branch_taken_0x159f0c = (GPR_S32(ctx, 6) <= 0);
        if (branch_taken_0x159f0c) {
            ctx->pc = 0x159F24u;
            goto label_159f24;
        }
    }
    ctx->pc = 0x159F14u;
    // 0x159f14: 0x86030238  lh          $v1, 0x238($s0)
    ctx->pc = 0x159f14u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 568)));
    // 0x159f18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x159f18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159f1c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x159F1Cu;
    {
        const bool branch_taken_0x159f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159F1Cu;
        // 0x159f20: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x159f1c) {
            ctx->pc = 0x159F34u;
            goto label_159f34;
        }
    }
    ctx->pc = 0x159F24u;
label_159f24:
    // 0x159f24: 0x86030236  lh          $v1, 0x236($s0)
    ctx->pc = 0x159f24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 566)));
    // 0x159f28: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x159f28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159f2c: 0x0  nop
    ctx->pc = 0x159f2cu;
    // NOP
    // 0x159f30: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x159f30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_159f34:
    // 0x159f34: 0x8604022a  lh          $a0, 0x22A($s0)
    ctx->pc = 0x159f34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 554)));
    // 0x159f38: 0xc6040220  lwc1        $f4, 0x220($s0)
    ctx->pc = 0x159f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x159f3c: 0x86050230  lh          $a1, 0x230($s0)
    ctx->pc = 0x159f3cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 560)));
    // 0x159f40: 0x86030228  lh          $v1, 0x228($s0)
    ctx->pc = 0x159f40u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 552)));
    // 0x159f44: 0xc42018  mult        $a0, $a2, $a0
    ctx->pc = 0x159f44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x159f48: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x159f48u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159f4c: 0x31823  negu        $v1, $v1
    ctx->pc = 0x159f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x159f50: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x159f50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x159f54: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x159f54u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x159f58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x159f58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159f5c: 0x0  nop
    ctx->pc = 0x159f5cu;
    // NOP
    // 0x159f60: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x159f60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x159f64: 0x460308c3  div.s       $f3, $f1, $f3
    ctx->pc = 0x159f64u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[1], ctx->f[3]); }
    // 0x159f68: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x159f68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x159f6c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x159f6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x159f70: 0x46022043  div.s       $f1, $f4, $f2
    ctx->pc = 0x159f70u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[4], ctx->f[2]); }
    // 0x159f74: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x159f74u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x159f78: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x159f78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x159f7c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x159f7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x159f80: 0xe60001c4  swc1        $f0, 0x1C4($s0)
    ctx->pc = 0x159f80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 452), bits); }
    // 0x159f84: 0xc6010220  lwc1        $f1, 0x220($s0)
    ctx->pc = 0x159f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x159f88: 0xc60001c4  lwc1        $f0, 0x1C4($s0)
    ctx->pc = 0x159f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159f8c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x159f8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x159f90: 0xe6000224  swc1        $f0, 0x224($s0)
    ctx->pc = 0x159f90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 548), bits); }
    // 0x159f94: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x159f94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x159f98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x159f98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x159f9c: 0x3e00008  jr          $ra
    ctx->pc = 0x159F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159F9Cu;
        // 0x159fa0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159F9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x159FA4u;
}
