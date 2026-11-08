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

// Function: entry_00178e8c
// Address: 0x178e8c - 0x178f28
void entry_00178e8c_0x178e8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178e8c_0x178e8c");
#endif

    switch (ctx->pc) {
        case 0x178e94u: goto label_178e94;
        case 0x178ec0u: goto label_178ec0;
        case 0x178eecu: goto label_178eec;
        default: break;
    }

    ctx->pc = 0x178e8cu;

    // 0x178e8c: 0xc045b20  jal         func_116C80
    ctx->pc = 0x178E8Cu;
    SET_GPR_U32(ctx, 31, 0x178E94u);
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x178E8Cu, 0x178E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178E94u;
label_178e94:
    // 0x178e94: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x178e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x178e98: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x178e98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x178e9c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x178e9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x178ea0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x178ea0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x178ea4: 0x0  nop
    ctx->pc = 0x178ea4u;
    // NOP
    // 0x178ea8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x178ea8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x178eac: 0x101140  sll         $v0, $s0, 5
    ctx->pc = 0x178eacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x178eb0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x178eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x178eb4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x178eb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x178eb8: 0xc045b20  jal         func_116C80
    ctx->pc = 0x178EB8u;
    SET_GPR_U32(ctx, 31, 0x178EC0u);
    ctx->pc = 0x178EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178EB8u;
    // 0x178ebc: 0xe4400020  swc1        $f0, 0x20($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x178EB8u, 0x178EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178EC0u;
label_178ec0:
    // 0x178ec0: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x178ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x178ec4: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x178ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x178ec8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x178ec8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x178ecc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x178eccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x178ed0: 0x0  nop
    ctx->pc = 0x178ed0u;
    // NOP
    // 0x178ed4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x178ed4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x178ed8: 0x101140  sll         $v0, $s0, 5
    ctx->pc = 0x178ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x178edc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x178edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x178ee0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x178ee0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x178ee4: 0xc045b20  jal         func_116C80
    ctx->pc = 0x178EE4u;
    SET_GPR_U32(ctx, 31, 0x178EECu);
    ctx->pc = 0x178EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178EE4u;
    // 0x178ee8: 0xe4400024  swc1        $f0, 0x24($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x116C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116C80u, 0x178EE4u, 0x178EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178EECu;
label_178eec:
    // 0x178eec: 0x3c033e80  lui         $v1, 0x3E80
    ctx->pc = 0x178eecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16000 << 16));
    // 0x178ef0: 0x3c0441a0  lui         $a0, 0x41A0
    ctx->pc = 0x178ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16800 << 16));
    // 0x178ef4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x178ef4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x178ef8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x178ef8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x178efc: 0x0  nop
    ctx->pc = 0x178efcu;
    // NOP
    // 0x178f00: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x178f00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x178f04: 0x101940  sll         $v1, $s0, 5
    ctx->pc = 0x178f04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x178f08: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x178f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x178f0c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x178f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x178f10: 0x24850030  addiu       $a1, $a0, 0x30
    ctx->pc = 0x178f10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x178f14: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x178f14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x178f18: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x178f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x178f1c: 0xac83002c  sw          $v1, 0x2C($a0)
    ctx->pc = 0x178f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
    // 0x178f20: 0xf8a00000  sqc2        $vf0, 0x0($a1)
    ctx->pc = 0x178f20u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x178f24: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x178f24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x178f28u;
}
