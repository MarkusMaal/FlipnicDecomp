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

// Function: entry_001afd44
// Address: 0x1afd44 - 0x1afdd0
void entry_001afd44_0x1afd44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001afd44_0x1afd44");
#endif

    switch (ctx->pc) {
        case 0x1afd58u: goto label_1afd58;
        default: break;
    }

    ctx->pc = 0x1afd44u;

    // 0x1afd44: 0x0  nop
    ctx->pc = 0x1afd44u;
    // NOP
    // 0x1afd48: 0x8fa500cc  lw          $a1, 0xCC($sp)
    ctx->pc = 0x1afd48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x1afd4c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1afd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1afd50: 0xc04b7dc  jal         func_12DF70
    ctx->pc = 0x1AFD50u;
    SET_GPR_U32(ctx, 31, 0x1AFD58u);
    ctx->pc = 0x1AFD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFD50u;
    // 0x1afd54: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DF70u, 0x1AFD50u, 0x1AFD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFD58u;
label_1afd58:
    // 0x1afd58: 0x27a300f0  addiu       $v1, $sp, 0xF0
    ctx->pc = 0x1afd58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1afd5c: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x1afd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1afd60: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x1afd60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1afd64: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x1afd64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1afd68: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x1afd68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1afd6c: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x1afd6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1afd70: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x1afd70u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1afd74: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x1afd74u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1afd78: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x1afd78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1afd7c: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1afd7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1afd80: 0xc4630010  lwc1        $f3, 0x10($v1)
    ctx->pc = 0x1afd80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1afd84: 0xc4620014  lwc1        $f2, 0x14($v1)
    ctx->pc = 0x1afd84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1afd88: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1afd88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1afd8c: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x1afd8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1afd90: 0xe4430010  swc1        $f3, 0x10($v0)
    ctx->pc = 0x1afd90u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x1afd94: 0xe4420014  swc1        $f2, 0x14($v0)
    ctx->pc = 0x1afd94u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x1afd98: 0xe4410018  swc1        $f1, 0x18($v0)
    ctx->pc = 0x1afd98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x1afd9c: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x1afd9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x1afda0: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x1afda0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1afda4: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1AFDA4u;
    {
        const bool branch_taken_0x1afda4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFDA4u;
        // 0x1afda8: 0x3c02424f  lui         $v0, 0x424F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16975 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afda4) {
            ctx->pc = 0x1AFDF4u;
            return;
        }
    }
    ctx->pc = 0x1AFDACu;
    // 0x1afdac: 0x3445544f  ori         $a1, $v0, 0x544F
    ctx->pc = 0x1afdacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21583);
    // 0x1afdb0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1afdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1afdb4: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x1afdb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x1afdb8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1afdb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1afdbc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AFDBCu;
    {
        const bool branch_taken_0x1afdbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFDBCu;
        // 0x1afdc0: 0x8e830004  lw          $v1, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afdbc) {
            ctx->pc = 0x1AFDD0u;
            return;
        }
    }
    ctx->pc = 0x1AFDC4u;
    // 0x1afdc4: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x1afdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x1afdc8: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x1afdc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x1afdcc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1afdccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x1afdd0u;
}
