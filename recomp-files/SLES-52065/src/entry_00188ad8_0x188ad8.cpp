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

// Function: entry_00188ad8
// Address: 0x188ad8 - 0x188b30
void entry_00188ad8_0x188ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188ad8_0x188ad8");
#endif

    switch (ctx->pc) {
        case 0x188af8u: goto label_188af8;
        case 0x188b0cu: goto label_188b0c;
        case 0x188b24u: goto label_188b24;
        default: break;
    }

    ctx->pc = 0x188ad8u;

    // 0x188ad8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x188ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188adc: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x188adcu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x188ae0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x188ae0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188ae4: 0x0  nop
    ctx->pc = 0x188ae4u;
    // NOP
    // 0x188ae8: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x188ae8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x188aec: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x188aecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x188af0: 0xc06282c  jal         func_18A0B0
    ctx->pc = 0x188AF0u;
    SET_GPR_U32(ctx, 31, 0x188AF8u);
    ctx->pc = 0x188AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188AF0u;
    // 0x188af4: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0B0u, 0x188AF0u, 0x188AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188AF8u;
label_188af8:
    // 0x188af8: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x188af8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x188afc: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x188afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x188b00: 0x27a500cc  addiu       $a1, $sp, 0xCC
    ctx->pc = 0x188b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    // 0x188b04: 0xc062214  jal         func_188850
    ctx->pc = 0x188B04u;
    SET_GPR_U32(ctx, 31, 0x188B0Cu);
    ctx->pc = 0x188B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188B04u;
    // 0x188b08: 0x3446ffff  ori         $a2, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x188850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188850u, 0x188B04u, 0x188B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188B0Cu;
label_188b0c:
    // 0x188b0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x188b0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188b10: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x188b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188b14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x188b14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188b18: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x188b18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x188b1c: 0xc04b678  jal         func_12D9E0
    ctx->pc = 0x188B1Cu;
    SET_GPR_U32(ctx, 31, 0x188B24u);
    ctx->pc = 0x188B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188B1Cu;
    // 0x188b20: 0xe6a0006c  swc1        $f0, 0x6C($s5) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 108), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D9E0u, 0x188B1Cu, 0x188B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188B24u;
label_188b24:
    // 0x188b24: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x188b24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x188b28: 0x100000da  b           . + 4 + (0xDA << 2)
    ctx->pc = 0x188B28u;
    {
        const bool branch_taken_0x188b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x188b28) {
            ctx->pc = 0x188E94u;
            return;
        }
    }
    ctx->pc = 0x188B30u;
}
