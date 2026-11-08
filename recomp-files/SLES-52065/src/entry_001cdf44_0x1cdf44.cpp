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

// Function: entry_001cdf44
// Address: 0x1cdf44 - 0x1cdfc4
void entry_001cdf44_0x1cdf44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cdf44_0x1cdf44");
#endif

    switch (ctx->pc) {
        case 0x1cdf74u: goto label_1cdf74;
        case 0x1cdf8cu: goto label_1cdf8c;
        default: break;
    }

    ctx->pc = 0x1cdf44u;

    // 0x1cdf44: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1cdf44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x1cdf48: 0x24a58fe0  addiu       $a1, $a1, -0x7020
    ctx->pc = 0x1cdf48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938592));
    // 0x1cdf4c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1cdf4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1cdf50: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x1cdf50u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1cdf54: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x1cdf54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cdf58: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cdf58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cdf5c: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1cdf5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1cdf60: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x1cdf60u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x1cdf64: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x1cdf64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x1cdf68: 0x8ea40060  lw          $a0, 0x60($s5)
    ctx->pc = 0x1cdf68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x1cdf6c: 0xc06282c  jal         func_18A0B0
    ctx->pc = 0x1CDF6Cu;
    SET_GPR_U32(ctx, 31, 0x1CDF74u);
    ctx->pc = 0x1CDF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDF6Cu;
    // 0x1cdf70: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0B0u, 0x1CDF6Cu, 0x1CDF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDF74u;
label_1cdf74:
    // 0x1cdf74: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cdf74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cdf78: 0xc42cfa38  lwc1        $f12, -0x5C8($at)
    ctx->pc = 0x1cdf78u;
    { uint32_t bits = FAST_READ32(0x36FA38u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cdf7c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cdf7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cdf80: 0xc42dfa48  lwc1        $f13, -0x5B8($at)
    ctx->pc = 0x1cdf80u;
    { uint32_t bits = FAST_READ32(0x36FA48u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1cdf84: 0xc06285c  jal         func_18A170
    ctx->pc = 0x1CDF84u;
    SET_GPR_U32(ctx, 31, 0x1CDF8Cu);
    ctx->pc = 0x1CDF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDF84u;
    // 0x1cdf88: 0x8ea40060  lw          $a0, 0x60($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A170u, 0x1CDF84u, 0x1CDF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDF8Cu;
label_1cdf8c:
    // 0x1cdf8c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cdf8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cdf90: 0x8c23fa88  lw          $v1, -0x578($at)
    ctx->pc = 0x1cdf90u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36FA88u));
    // 0x1cdf94: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cdf94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cdf98: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1cdf98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1cdf9c: 0x8022fa98  lb          $v0, -0x568($at)
    ctx->pc = 0x1cdf9cu;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36FA98u));
    // 0x1cdfa0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cdfa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cdfa4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CDFA4u;
    {
        const bool branch_taken_0x1cdfa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CDFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDFA4u;
        // 0x1cdfa8: 0xac23fa88  sw          $v1, -0x578($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294965896), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdfa4) {
            ctx->pc = 0x1CDFC4u;
            return;
        }
    }
    ctx->pc = 0x1CDFACu;
    // 0x1cdfac: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1cdfacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cdfb0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cdfb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cdfb4: 0xac23fa90  sw          $v1, -0x570($at)
    ctx->pc = 0x1cdfb4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36FA90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36FA90u, _value); } while (0);
    // 0x1cdfb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cdfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdfbc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cdfbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cdfc0: 0xa022fa98  sb          $v0, -0x568($at)
    ctx->pc = 0x1cdfc0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36FA98u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36FA98u, _value); } while (0);
    ctx->pc = 0x1cdfc4u;
}
