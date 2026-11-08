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

// Function: FUN_00168c00
// Address: 0x168c00 - 0x168c80
void FUN_00168c00_0x168c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00168c00_0x168c00");
#endif

    switch (ctx->pc) {
        case 0x168c6cu: goto label_168c6c;
        default: break;
    }

    ctx->pc = 0x168c00u;

    // 0x168c00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x168c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x168c04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x168c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x168c08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x168c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x168c0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x168c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x168c10: 0xa0830079  sb          $v1, 0x79($a0)
    ctx->pc = 0x168c10u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 121), (uint8_t)GPR_U32(ctx, 3));
    // 0x168c14: 0x8c8301d4  lw          $v1, 0x1D4($a0)
    ctx->pc = 0x168c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 468)));
    // 0x168c18: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x168C18u;
    {
        const bool branch_taken_0x168c18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x168C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168C18u;
        // 0x168c1c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168c18) {
            ctx->pc = 0x168C70u;
            goto label_168c70;
        }
    }
    ctx->pc = 0x168C20u;
    // 0x168c20: 0xc7818020  lwc1        $f1, -0x7FE0($gp)
    ctx->pc = 0x168c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x168c24: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x168c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x168c28: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x168c28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x168c2c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x168c2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x168c30: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x168c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x168c34: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x168c34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x168c38: 0xc6000234  lwc1        $f0, 0x234($s0)
    ctx->pc = 0x168c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x168c3c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x168c3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x168c40: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x168c40u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[3]); }
    // 0x168c44: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x168c44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x168c48: 0xe6000234  swc1        $f0, 0x234($s0)
    ctx->pc = 0x168c48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 564), bits); }
    // 0x168c4c: 0xc7808020  lwc1        $f0, -0x7FE0($gp)
    ctx->pc = 0x168c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x168c50: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x168c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x168c54: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x168c54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x168c58: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x168c58u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
    // 0x168c5c: 0x0  nop
    ctx->pc = 0x168c5cu;
    // NOP
    // 0x168c60: 0x0  nop
    ctx->pc = 0x168c60u;
    // NOP
    // 0x168c64: 0xc0548a8  jal         func_1522A0
    ctx->pc = 0x168C64u;
    SET_GPR_U32(ctx, 31, 0x168C6Cu);
    ctx->pc = 0x168C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168C64u;
    // 0x168c68: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1522A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1522A0u, 0x168C64u, 0x168C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168C6Cu;
label_168c6c:
    // 0x168c6c: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x168c6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
label_168c70:
    // 0x168c70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x168c70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168c74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x168c74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168c78: 0x3e00008  jr          $ra
    ctx->pc = 0x168C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168C78u;
        // 0x168c7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168C78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168C80u;
}
