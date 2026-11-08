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

// Function: entry_00129b00
// Address: 0x129b00 - 0x129b80
void entry_00129b00_0x129b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00129b00_0x129b00");
#endif

    switch (ctx->pc) {
        case 0x129b08u: goto label_129b08;
        case 0x129b44u: goto label_129b44;
        default: break;
    }

    ctx->pc = 0x129b00u;

    // 0x129b00: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x129B00u;
    SET_GPR_U32(ctx, 31, 0x129B08u);
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x129B00u, 0x129B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129B08u;
label_129b08:
    // 0x129b08: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x129b08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x129b0c: 0x0  nop
    ctx->pc = 0x129b0cu;
    // NOP
    // 0x129b10: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x129b10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x129b14: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x129b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x129b18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x129b18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x129b1c: 0x0  nop
    ctx->pc = 0x129b1cu;
    // NOP
    // 0x129b20: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x129b20u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x129b24: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x129b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x129b28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x129b28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x129b2c: 0x0  nop
    ctx->pc = 0x129b2cu;
    // NOP
    // 0x129b30: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x129b30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x129b34: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x129b34u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x129b38: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x129b38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x129b3c: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x129B3Cu;
    SET_GPR_U32(ctx, 31, 0x129B44u);
    ctx->pc = 0x129B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129B3Cu;
    // 0x129b40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129F70u, 0x129B3Cu, 0x129B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129B44u;
label_129b44:
    // 0x129b44: 0x26230080  addiu       $v1, $s1, 0x80
    ctx->pc = 0x129b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x129b48: 0x3c044380  lui         $a0, 0x4380
    ctx->pc = 0x129b48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17280 << 16));
    // 0x129b4c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x129b4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x129b50: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x129b50u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x129b54: 0x0  nop
    ctx->pc = 0x129b54u;
    // NOP
    // 0x129b58: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x129b58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x129b5c: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x129b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x129b60: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x129b60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x129b64: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x129b64u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x129b68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x129b68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x129b6c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x129b6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x129b70: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x129b70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x129b74: 0x46801060  cvt.s.w     $f1, $f2
    ctx->pc = 0x129b74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x129b78: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x129b78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x129b7c: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x129b7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    ctx->pc = 0x129b80u;
}
