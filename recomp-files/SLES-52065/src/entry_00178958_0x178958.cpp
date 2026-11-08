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

// Function: entry_00178958
// Address: 0x178958 - 0x178a20
void entry_00178958_0x178958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178958_0x178958");
#endif

    switch (ctx->pc) {
        case 0x178970u: goto label_178970;
        case 0x178978u: goto label_178978;
        case 0x178980u: goto label_178980;
        case 0x178998u: goto label_178998;
        case 0x1789a4u: goto label_1789a4;
        case 0x1789acu: goto label_1789ac;
        case 0x1789b4u: goto label_1789b4;
        case 0x1789ccu: goto label_1789cc;
        default: break;
    }

    ctx->pc = 0x178958u;

    // 0x178958: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x178958u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x17895c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x17895Cu;
    {
        const bool branch_taken_0x17895c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x178960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17895Cu;
        // 0x178960: 0x41100  sll         $v0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17895c) {
            ctx->pc = 0x178948u;
            return;
        }
    }
    ctx->pc = 0x178964u;
    // 0x178964: 0x26220420  addiu       $v0, $s1, 0x420
    ctx->pc = 0x178964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1056));
    // 0x178968: 0xc045b20  jal         func_116C80
    ctx->pc = 0x178968u;
    SET_GPR_U32(ctx, 31, 0x178970u);
    ctx->pc = 0x17896Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178968u;
    // 0x17896c: 0xf8400000  sqc2        $vf0, 0x0($v0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x178968u, 0x178970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178970u;
label_178970:
    // 0x178970: 0xc045b20  jal         func_116C80
    ctx->pc = 0x178970u;
    SET_GPR_U32(ctx, 31, 0x178978u);
    ctx->pc = 0x178974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178970u;
    // 0x178974: 0xe6200430  swc1        $f0, 0x430($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1072), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x178970u, 0x178978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178978u;
label_178978:
    // 0x178978: 0xc045b20  jal         func_116C80
    ctx->pc = 0x178978u;
    SET_GPR_U32(ctx, 31, 0x178980u);
    ctx->pc = 0x17897Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178978u;
    // 0x17897c: 0xe6200434  swc1        $f0, 0x434($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1076), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x178978u, 0x178980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178980u;
label_178980:
    // 0x178980: 0x26240430  addiu       $a0, $s1, 0x430
    ctx->pc = 0x178980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1072));
    // 0x178984: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x178984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x178988: 0xe6200438  swc1        $f0, 0x438($s1)
    ctx->pc = 0x178988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1080), bits); }
    // 0x17898c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x17898cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178990: 0xc07d312  jal         func_1F4C48
    ctx->pc = 0x178990u;
    SET_GPR_U32(ctx, 31, 0x178998u);
    ctx->pc = 0x178994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178990u;
    // 0x178994: 0xae22043c  sw          $v0, 0x43C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1084), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x178990u, 0x178998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178998u;
label_178998:
    // 0x178998: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x178998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17899c: 0xc045b20  jal         func_116C80
    ctx->pc = 0x17899Cu;
    SET_GPR_U32(ctx, 31, 0x1789A4u);
    ctx->pc = 0x1789A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17899Cu;
    // 0x1789a0: 0xae22043c  sw          $v0, 0x43C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1084), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x17899Cu, 0x1789A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1789A4u;
label_1789a4:
    // 0x1789a4: 0xc045b20  jal         func_116C80
    ctx->pc = 0x1789A4u;
    SET_GPR_U32(ctx, 31, 0x1789ACu);
    ctx->pc = 0x1789A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1789A4u;
    // 0x1789a8: 0xe6200440  swc1        $f0, 0x440($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1088), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x1789A4u, 0x1789ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1789ACu;
label_1789ac:
    // 0x1789ac: 0xc045b20  jal         func_116C80
    ctx->pc = 0x1789ACu;
    SET_GPR_U32(ctx, 31, 0x1789B4u);
    ctx->pc = 0x1789B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1789ACu;
    // 0x1789b0: 0xe6200444  swc1        $f0, 0x444($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1092), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x1789ACu, 0x1789B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1789B4u;
label_1789b4:
    // 0x1789b4: 0x26240440  addiu       $a0, $s1, 0x440
    ctx->pc = 0x1789b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1088));
    // 0x1789b8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1789b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1789bc: 0xe6200448  swc1        $f0, 0x448($s1)
    ctx->pc = 0x1789bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1096), bits); }
    // 0x1789c0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1789c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1789c4: 0xc07d312  jal         func_1F4C48
    ctx->pc = 0x1789C4u;
    SET_GPR_U32(ctx, 31, 0x1789CCu);
    ctx->pc = 0x1789C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1789C4u;
    // 0x1789c8: 0xae22044c  sw          $v0, 0x44C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1100), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C48u, 0x1789C4u, 0x1789CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1789CCu;
label_1789cc:
    // 0x1789cc: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1789ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1789d0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1789d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1789d4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1789d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1789d8: 0x3c0341c9  lui         $v1, 0x41C9
    ctx->pc = 0x1789d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16841 << 16));
    // 0x1789dc: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1789dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1789e0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1789e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1789e4: 0x0  nop
    ctx->pc = 0x1789e4u;
    // NOP
    // 0x1789e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1789e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1789ec: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1789ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1789f0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1789f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1789f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1789f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1789f8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1789f8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1789fc: 0xe620044c  swc1        $f0, 0x44C($s1)
    ctx->pc = 0x1789fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1100), bits); }
    // 0x178a00: 0xae200450  sw          $zero, 0x450($s1)
    ctx->pc = 0x178a00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1104), GPR_U32(ctx, 0));
    // 0x178a04: 0xae200454  sw          $zero, 0x454($s1)
    ctx->pc = 0x178a04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1108), GPR_U32(ctx, 0));
    // 0x178a08: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x178a08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x178a0c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x178a0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x178a10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x178a10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178a14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x178a14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178a18: 0x3e00008  jr          $ra
    ctx->pc = 0x178A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178A18u;
        // 0x178a1c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178A18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178A20u;
}
