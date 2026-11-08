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

// Function: entry_00188c00
// Address: 0x188c00 - 0x188c98
void entry_00188c00_0x188c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188c00_0x188c00");
#endif

    switch (ctx->pc) {
        case 0x188c10u: goto label_188c10;
        default: break;
    }

    ctx->pc = 0x188c00u;

    // 0x188c00: 0x8ea60060  lw          $a2, 0x60($s5)
    ctx->pc = 0x188c00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x188c04: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x188c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x188c08: 0xc04b7dc  jal         func_12DF70
    ctx->pc = 0x188C08u;
    SET_GPR_U32(ctx, 31, 0x188C10u);
    ctx->pc = 0x188C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188C08u;
    // 0x188c0c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DF70u, 0x188C08u, 0x188C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188C10u;
label_188c10:
    // 0x188c10: 0x27a300f0  addiu       $v1, $sp, 0xF0
    ctx->pc = 0x188c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x188c14: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x188c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x188c18: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x188c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x188c1c: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x188c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x188c20: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x188c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188c24: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x188c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188c28: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x188c28u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x188c2c: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x188c2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x188c30: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x188c30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x188c34: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x188c34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x188c38: 0xc4630010  lwc1        $f3, 0x10($v1)
    ctx->pc = 0x188c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x188c3c: 0xc4620014  lwc1        $f2, 0x14($v1)
    ctx->pc = 0x188c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x188c40: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x188c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188c44: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x188c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188c48: 0xe4430010  swc1        $f3, 0x10($v0)
    ctx->pc = 0x188c48u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x188c4c: 0xe4420014  swc1        $f2, 0x14($v0)
    ctx->pc = 0x188c4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x188c50: 0xe4410018  swc1        $f1, 0x18($v0)
    ctx->pc = 0x188c50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x188c54: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x188c54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x188c58: 0xc6a10010  lwc1        $f1, 0x10($s5)
    ctx->pc = 0x188c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188c5c: 0x8ea40054  lw          $a0, 0x54($s5)
    ctx->pc = 0x188c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
    // 0x188c60: 0xc6a00014  lwc1        $f0, 0x14($s5)
    ctx->pc = 0x188c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188c64: 0x4601a5c0  add.s       $f23, $f20, $f1
    ctx->pc = 0x188c64u;
    ctx->f[23] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x188c68: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x188C68u;
    {
        const bool branch_taken_0x188c68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x188C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188C68u;
        // 0x188c6c: 0x4600ae00  add.s       $f24, $f21, $f0 (Delay Slot)
        ctx->f[24] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x188c68) {
            ctx->pc = 0x188CB4u;
            return;
        }
    }
    ctx->pc = 0x188C70u;
    // 0x188c70: 0x3c02424f  lui         $v0, 0x424F
    ctx->pc = 0x188c70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16975 << 16));
    // 0x188c74: 0x3445544f  ori         $a1, $v0, 0x544F
    ctx->pc = 0x188c74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21583);
    // 0x188c78: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x188c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x188c7c: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x188c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x188c80: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x188c80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x188c84: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x188C84u;
    {
        const bool branch_taken_0x188c84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x188C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188C84u;
        // 0x188c88: 0x8ea30058  lw          $v1, 0x58($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188c84) {
            ctx->pc = 0x188C98u;
            return;
        }
    }
    ctx->pc = 0x188C8Cu;
    // 0x188c8c: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x188c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x188c90: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x188c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x188c94: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x188c94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x188c98u;
}
